`timescale 1ns/1ps

/* verilator lint_off STMTDLY */

module sha256_1kb_processor_tb;

    // Clock and reset
    reg clk;
    reg rst;
    
    // Processor interface
    reg start;
    reg [8191:0] data_in;  // 1KB input data
    wire [255:0] hash_out;
    wire done;
    
    // Simulation control
    reg [31:0] cycle_count;
    reg test_started;
    reg test_completed;
    
    // Instantiate the processor
    sha256_1kb_processor uut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .data_in(data_in),
        .hash_out(hash_out),
        .done(done)
    );
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 100MHz clock
    end
    
    // Test data generation and control
    integer i;
    initial begin
        // Initialize
        rst = 1;
        start = 0;
        data_in = 0;
        cycle_count = 0;
        test_started = 0;
        test_completed = 0;
        
        // Generate test data - pattern of incrementing bytes
        for (i = 0; i < 1024; i = i + 1) begin
            data_in[8191 - i*8 -: 8] = i[7:0];  // Fill with pattern 0x00, 0x01, 0x02, ...
        end
        
        $display("=== SHA256 1KB Processor Test ===");
        $display("Input data: 1024 bytes of incrementing pattern (0x00, 0x01, 0x02, ...)");
    end
    
    // Main test control
    always @(posedge clk) begin
        cycle_count <= cycle_count + 1;
        
        // Reset sequence
        if (cycle_count < 10) begin
            rst <= 1;
        end else if (cycle_count == 10) begin
            rst <= 0;
            $display("Starting SHA256 computation...");
        end else if (cycle_count == 15 && !test_started) begin
            // Start processing
            start <= 1;
            test_started <= 1;
        end else if (cycle_count == 16) begin
            start <= 0;
        end
        
        // Check for completion
        if (done && !test_completed) begin
            test_completed <= 1;
            $display("=== SHA256 Computation Complete ===");
            $display("Final SHA256 Hash: %064h", hash_out);
            $display("Hash in hex format:");
            $display("%08h%08h%08h%08h%08h%08h%08h%08h", 
                     hash_out[255:224], hash_out[223:192], hash_out[191:160], hash_out[159:128],
                     hash_out[127:96], hash_out[95:64], hash_out[63:32], hash_out[31:0]);
            $display("Test completed successfully!");
        end
        
        // Finish after completion or timeout
        if ((done && test_completed && cycle_count > 100) || cycle_count > 100000) begin
            if (cycle_count > 100000) begin
                $display("ERROR: Test timed out!");
            end
            $finish;
        end
    end
    
    // Monitor progress
    always @(posedge clk) begin
        if (uut.state == uut.PROCESSING && uut.core_ready && !uut.core_start) begin
            $display("Processing block %d/17...", uut.block_count + 1);
        end
    end

endmodule 
