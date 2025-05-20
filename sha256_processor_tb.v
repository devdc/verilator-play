`timescale 1ns/1ps

module sha256_processor_tb;

    // Test bench signals
    reg clk;
    reg rst;
    reg start;
    reg [31:0] data_in;
    reg data_valid;
    reg last_data;
    wire [31:0] size_bytes;
    wire [255:0] final_hash;
    wire busy;
    wire done;
    
    // Test data
    reg [7:0] test_data [0:1023]; // Buffer for test data (up to 1KB)
    integer test_data_size;      // Size of test data in bytes
    integer data_index;          // Current byte index
    integer word_index;          // Current word index
    integer i;                   // Loop counter
    
    // Test cases
    parameter TEST_CASE_ABC = 0;
    parameter TEST_CASE_LONG = 1;
    parameter TEST_CASE_BLOCK_BOUNDARY = 2;
    
    integer current_test;
    
    // Known test vectors for SHA-256
    parameter [255:0] HASH_ABC = 256'hba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad;
    parameter [255:0] HASH_LONG = 256'hcf5b16a778af8380036ce59e7b0492370b249b11e8f07a51afac45037afee9d1;
    parameter [255:0] HASH_BLOCK_BOUNDARY = 256'hf08a78cbbaee082b052ae0708f32fa1e50c5c421aa772ba5dbb406a2ea6be342;
    
    // Instantiate the SHA256 processor
    sha256_processor uut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .data_in(data_in),
        .data_valid(data_valid),
        .last_data(last_data),
        .size_bytes(size_bytes),
        .final_hash(final_hash),
        .busy(busy),
        .done(done)
    );
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end
    
    // Helper task to initialize test data
    task initialize_test_data;
        input integer test_case;
        begin
            // Reset test data and counters
            for (i = 0; i < 1024; i = i + 1) begin
                test_data[i] = 8'h00;
            end
            data_index = 0;
            word_index = 0;
            
            case (test_case)
                TEST_CASE_ABC: begin
                    // Test case "abc" (3 bytes)
                    test_data[0] = "a";
                    test_data[1] = "b";
                    test_data[2] = "c";
                    test_data_size = 3;
                    $display("Test Case: 'abc' (3 bytes)");
                end
                
                TEST_CASE_LONG: begin
                    // Longer test case (64 bytes)
                    for (i = 0; i < 64; i = i + 1) begin
                        test_data[i] = i + 1; // Values 1 to 64
                    end
                    test_data_size = 64;
                    $display("Test Case: Long data (64 bytes)");
                end
                
                TEST_CASE_BLOCK_BOUNDARY: begin
                    // Test case at block boundary (56 bytes) - will test padding algorithm
                    for (i = 0; i < 56; i = i + 1) begin
                        test_data[i] = 8'hAA; // Pattern of alternating 1s and 0s
                    end
                    test_data_size = 56;
                    $display("Test Case: Block boundary (56 bytes)");
                end
                
                default: begin
                    test_data_size = 0;
                end
            endcase
        end
    endtask
    
    // Helper task to feed data
    task feed_data;
        begin
            data_valid = 0;
            last_data = 0;
            
            while (data_index < test_data_size) begin
                // Construct a 32-bit word from 4 bytes (big-endian)
                if (data_index + 3 < test_data_size) begin
                    // Full 4 bytes available
                    data_in = {test_data[data_index], test_data[data_index+1], 
                               test_data[data_index+2], test_data[data_index+3]};
                    data_index = data_index + 4;
                end else if (data_index + 2 < test_data_size) begin
                    // 3 bytes available
                    data_in = {test_data[data_index], test_data[data_index+1], 
                               test_data[data_index+2], 8'h00};
                    data_index = data_index + 3;
                end else if (data_index + 1 < test_data_size) begin
                    // 2 bytes available
                    data_in = {test_data[data_index], test_data[data_index+1], 16'h0000};
                    data_index = data_index + 2;
                end else begin
                    // 1 byte available
                    data_in = {test_data[data_index], 24'h000000};
                    data_index = data_index + 1;
                end
                
                // Set control signals
                data_valid = 1;
                last_data = (data_index >= test_data_size);
                
                // Wait for clock edge
                @(posedge clk);
                
                // Wait a cycle to simulate processing time
                data_valid = 0;
                @(posedge clk);
            end
        end
    endtask
    
    // Helper task to run a test
    task run_test;
        input integer test_case;
        input [255:0] expected_hash;
        begin
            current_test = test_case;
            initialize_test_data(test_case);
            
            // Reset the processor
            rst = 1;
            start = 0;
            data_valid = 0;
            #20 rst = 0;
            
            // Start processing
            @(posedge clk);
            start = 1;
            @(posedge clk);
            start = 0;
            
            // Feed data
            feed_data();
            
            // Wait for completion
            wait (done == 1);
            
            // Verify the result against expected hash
            if (final_hash == expected_hash)
                $display("✅ Test PASSED");
            else begin
                $display("❌ Test FAILED");
                $display("Expected: %h", expected_hash);
                $display("Got:      %h", final_hash);
            end
            
            // Add some delay before next test
            #50;
        end
    endtask
    
    // Main test sequence
    initial begin
        $display("Starting SHA-256 Processor Testbench...");
        rst = 1;
        start = 0;
        data_valid = 0;
        last_data = 0;
        data_in = 0;
        
        #20 rst = 0;
        
        // Run test case with "abc"
        run_test(TEST_CASE_ABC, HASH_ABC);
        
        // Run test case with longer data
        run_test(TEST_CASE_LONG, HASH_LONG);
        
        // Run test case at block boundary
        run_test(TEST_CASE_BLOCK_BOUNDARY, HASH_BLOCK_BOUNDARY);
        
        $display("All tests completed");
        $finish;
    end

endmodule 