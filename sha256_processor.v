`timescale 1ns/1ps

module sha256_processor (
    input             clk,
    input             rst,
    input             start,
    input      [31:0] data_in,      // 32-bit data input word
    input             data_valid,    // Signal indicating input data is valid
    input             last_data,     // Signal indicating this is the last 32-bit word
    output reg [31:0] size_bytes,   // Current byte count processed
    output reg [255:0] final_hash,  // The final SHA-256 hash result
    output reg        busy,         // Processor is busy processing data
    output reg        done          // Processing is complete
);

    // Constants
    parameter MAX_BYTES = 32'h40000000; // 1GB = 1,073,741,824 bytes
    
    // State definition
    parameter IDLE      = 3'd0;
    parameter LOAD_BLOCK = 3'd1;
    parameter PROCESS   = 3'd2;
    parameter PAD_BLOCK = 3'd3;
    parameter FINALIZE  = 3'd4;
    parameter COMPLETE  = 3'd5;
    
    reg [2:0] state;
    
    // Message block being prepared (512 bits)
    reg [511:0] block;
    reg [5:0] word_count;       // Counter for words in the current block (0-15)
    
    // Length tracking for SHA-256 padding
    reg [63:0] total_bits;      // Total bits processed (for final padding)
    
    // SHA-256 core signals
    reg         core_start;
    wire        core_ready;
    wire [255:0] core_hash_out;
    reg  [511:0] core_block_in;
    
    // Working variables
    reg need_padding;
    reg last_block_processed;
    reg first_block;            // Flag to track if this is the first block
    reg padding_block_needed;   // Flag to indicate if an extra padding block is needed
    reg [255:0] current_hash;   // Keep track of the current hash value for multi-block processing
    
    // Instantiate the SHA-256 core
    sha256_core sha256_core_inst (
        .clk(clk),
        .rst(rst),
        .start(core_start),
        .block_in(core_block_in),
        .hash_out(core_hash_out),
        .ready(core_ready)
    );
    
    // Main state machine
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            busy <= 0;
            done <= 0;
            word_count <= 0;
            block <= 0;
            total_bits <= 0;
            size_bytes <= 0;
            core_start <= 0;
            core_block_in <= 0;
            need_padding <= 0;
            last_block_processed <= 0;
            first_block <= 1;
            padding_block_needed <= 0;
            current_hash <= 0;
            final_hash <= 0;
        end else begin
            case (state)
                IDLE: begin
                    if (start) begin
                        $display("SHA256 Processor: Starting");
                        state <= LOAD_BLOCK;
                        busy <= 1;
                        done <= 0;
                        word_count <= 0;
                        block <= 0;
                        total_bits <= 0;
                        size_bytes <= 0;
                        need_padding <= 0;
                        last_block_processed <= 0;
                        first_block <= 1;
                        padding_block_needed <= 0;
                    end
                end
                
                LOAD_BLOCK: begin
                    // Reset core_start when beginning to load a new block
                    core_start <= 0;
                    
                    if (data_valid) begin
                        // Place input 32-bit word in the correct position in the block
                        // Note: SHA-256 uses big-endian, so we maintain big-endian order
                        block[511 - (word_count * 32) -: 32] <= data_in;
                        word_count <= word_count + 1;
                        total_bits <= total_bits + 32;
                        size_bytes <= size_bytes + 4;
                        
                        // Check if this is the last data word
                        if (last_data) begin
                            need_padding <= 1;
                            
                            // If the block is not full yet, transition to PAD_BLOCK
                            if (word_count < 15) begin
                                state <= PAD_BLOCK;
                            end
                            // If this word fills the block and it's the last data, 
                            // we'll need another block for padding
                            else if (word_count == 15) begin
                                padding_block_needed <= 1;
                                state <= PROCESS;
                            end
                        end
                        // Check if block is full
                        else if (word_count == 15) begin
                            state <= PROCESS;
                        end
                    end
                end
                
                PROCESS: begin
                    if (!core_start && !core_ready) begin
                        // Send the block to SHA-256 core
                        core_block_in <= block;
                        core_start <= 1;
                        $display("SHA256 Processor: Processing block at %d bytes", size_bytes - (word_count * 4));
                    end else if (core_start && !core_ready) begin
                        // Wait for core to process
                        core_start <= 0;
                    end else if (core_ready) begin
                        // Block processed
                        if (last_block_processed) begin
                            // Final block processed
                            final_hash <= core_hash_out;
                            state <= COMPLETE;
                        end else if (need_padding && !padding_block_needed) begin
                            // This is the last data block and we need to add padding
                            // Save current hash and create padding block
                            current_hash <= core_hash_out;
                            block <= 0;  // Clear block for padding
                            word_count <= 0;
                            state <= PAD_BLOCK;
                        end else if (padding_block_needed) begin
                            // We processed the last data block and need to create a separate padding block
                            current_hash <= core_hash_out;
                            block <= 0;  // Clear block for padding
                            word_count <= 0;
                            padding_block_needed <= 0;
                            state <= PAD_BLOCK;
                        end else begin
                            // Continue processing data - update hash for next block
                            if (first_block) begin
                                current_hash <= core_hash_out;
                                first_block <= 0;
                            end else begin
                                // Update the running hash
                                current_hash <= core_hash_out;
                            end
                            block <= 0;  // Clear block for next data
                            word_count <= 0;
                            state <= LOAD_BLOCK;
                        end
                    end
                end
                
                PAD_BLOCK: begin
                    // Apply SHA-256 padding
                    // First, add the '1' bit followed by zeros
                    // The position depends on how many bits we've already written in this block
                    if (word_count == 0) begin
                        if (padding_block_needed) begin
                            // Special case: we're starting a new block just for padding
                            block[511] <= 1'b1; // Add '1' bit at the start
                        end else begin
                            // Normal case: add '1' after the last data bit
                            // The last bit position is (total_bits % 512) - 1
                            // But since we add 32 bits at a time, we need to calculate its position
                            block[511 - (total_bits % 512)] <= 1'b1;
                        end
                        
                        // Add the length in bits as a 64-bit big-endian integer at the end of the block
                        block[63:0] <= total_bits;
                        
                        // Check if we can fit the length field in this block
                        if (((total_bits % 512) > 447) && !padding_block_needed) begin
                            // Not enough space for length in this block
                            // We'll need another block after this
                            last_block_processed <= 0;
                            padding_block_needed <= 1;
                        end else begin
                            // This will be the last block
                            last_block_processed <= 1;
                            padding_block_needed <= 0;
                        end
                        
                        // Move to process state
                        state <= PROCESS;
                    end
                end
                
                COMPLETE: begin
                    busy <= 0;
                    done <= 1;
                    $display("SHA256 Processor: Processing complete. Total bytes: %d", size_bytes);
                    $display("Final hash: %h", final_hash);
                    
                    // Stay in COMPLETE state until reset or new start
                    if (!start) begin
                        state <= IDLE;
                    end
                end
                
                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule 