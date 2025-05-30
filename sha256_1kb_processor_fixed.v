`timescale 1ns/1ps

/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNSIGNED */

module sha256_1kb_processor_fixed (
    input         clk,
    input         rst,
    input         start,
    input  [8191:0] data_in,  // 1KB = 8192 bits of input data
    output reg [255:0] hash_out,
    output reg    done
);

    // State machine states
    reg [2:0] state;
    localparam IDLE = 3'd0;
    localparam PROCESSING = 3'd1;
    localparam WAITING = 3'd2;
    localparam DONE_STATE = 3'd3;
    
    // Block counter
    reg [4:0] block_count;  // 0 to 16 for 17 blocks total
    
    // SHA256 core interface
    reg core_start;
    reg [511:0] core_block_in;
    wire [255:0] core_hash_out;
    wire core_ready;
    
    // Padded data storage (1KB + padding = 17 blocks total)
    reg [8703:0] padded_data;  // 17 * 512 = 8704 bits
    
    // Core start delay to ensure proper timing
    reg core_start_delayed;
    
    // Modified SHA256 core that supports chaining
    sha256_core_fast core_inst (
        .clk(clk),
        .rst(rst),
        .start(core_start_delayed),
        .block_in(core_block_in),
        .hash_out(core_hash_out),
        .ready(core_ready),
        .init_hash(block_count == 0)  // Initialize hash only for first block
    );
    
    integer i;
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            done <= 0;
            hash_out <= 0;
            block_count <= 0;
            core_start <= 0;
            core_start_delayed <= 0;
            core_block_in <= 0;
            padded_data <= 0;
            
            $display("SHA256_1KB_PROCESSOR_FIXED: Reset");
            
        end else begin
            // Delay core_start by one cycle for proper timing
            core_start_delayed <= core_start;
            
            case (state)
                IDLE: begin
                    if (start) begin
                        $display("SHA256_1KB_PROCESSOR_FIXED: Starting processing of 1KB data");
                        done <= 0;
                        block_count <= 0;
                        
                        // Prepare padded data according to SHA-256 specification
                        // 1. Original message (8192 bits)
                        padded_data[8703:512] <= data_in;
                        
                        // 2. Append single '1' bit
                        padded_data[511] <= 1'b1;
                        
                        // 3. Append zeros to make total length ≡ 448 (mod 512)
                        // We have 8192 + 1 = 8193 bits so far
                        // We need to pad to 8704 - 64 = 8640 bits (448 mod 512 for last block)
                        // So we need 8640 - 8193 = 447 zero bits
                        for (i = 0; i < 447; i = i + 1) begin
                            padded_data[510-i] <= 1'b0;
                        end
                        
                        // 4. Append original length as 64-bit big-endian integer
                        padded_data[63:0] <= 64'd8192;  // Length in bits
                        
                        $display("SHA256_1KB_PROCESSOR_FIXED: Data padded, total blocks: 17");
                        state <= PROCESSING;
                    end
                end
                
                PROCESSING: begin
                    if (core_ready && !core_start && !core_start_delayed) begin
                        if (block_count < 17) begin  // Process 17 blocks total
                            // Extract current block (512 bits) - MSB first
                            core_block_in <= padded_data[8703 - block_count*512 -: 512];
                            
                            $display("SHA256_1KB_PROCESSOR_FIXED: Processing block %d/17", block_count + 1);
                            
                            // Start core processing
                            core_start <= 1;
                            state <= WAITING;
                        end else begin
                            // All blocks processed
                            hash_out <= core_hash_out;
                            done <= 1;
                            state <= DONE_STATE;
                            
                            $display("SHA256_1KB_PROCESSOR_FIXED: All blocks processed");
                            $display("Final SHA256 hash: %064h", core_hash_out);
                        end
                    end
                end
                
                WAITING: begin
                    // Clear start signal after one cycle
                    if (core_start) begin
                        core_start <= 0;
                    end
                    
                    // Wait for core to complete
                    if (core_ready && !core_start && !core_start_delayed) begin
                        block_count <= block_count + 1;
                        
                        $display("SHA256_1KB_PROCESSOR_FIXED: Block %d completed", block_count + 1);
                        
                        state <= PROCESSING;
                    end
                end
                
                DONE_STATE: begin
                    if (!start) begin
                        state <= IDLE;
                        done <= 0;
                    end
                end
                
                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule

// Fast SHA256 core with optimized state machine
module sha256_core_fast (
    input         clk,
    input         rst,
    input         start,
    input  [511:0] block_in,
    input         init_hash,  // Whether to initialize hash values
    output reg [255:0] hash_out,
    output reg    ready
);

    // SHA-256 constants (K values)
    reg [31:0] K [0:63];
    initial begin
        K[0] = 32'h428a2f98; K[1] = 32'h71374491; K[2] = 32'hb5c0fbcf; K[3] = 32'he9b5dba5;
        K[4] = 32'h3956c25b; K[5] = 32'h59f111f1; K[6] = 32'h923f82a4; K[7] = 32'hab1c5ed5;
        K[8] = 32'hd807aa98; K[9] = 32'h12835b01; K[10] = 32'h243185be; K[11] = 32'h550c7dc3;
        K[12] = 32'h72be5d74; K[13] = 32'h80deb1fe; K[14] = 32'h9bdc06a7; K[15] = 32'hc19bf174;
        K[16] = 32'he49b69c1; K[17] = 32'hefbe4786; K[18] = 32'h0fc19dc6; K[19] = 32'h240ca1cc;
        K[20] = 32'h2de92c6f; K[21] = 32'h4a7484aa; K[22] = 32'h5cb0a9dc; K[23] = 32'h76f988da;
        K[24] = 32'h983e5152; K[25] = 32'ha831c66d; K[26] = 32'hb00327c8; K[27] = 32'hbf597fc7;
        K[28] = 32'hc6e00bf3; K[29] = 32'hd5a79147; K[30] = 32'h06ca6351; K[31] = 32'h14292967;
        K[32] = 32'h27b70a85; K[33] = 32'h2e1b2138; K[34] = 32'h4d2c6dfc; K[35] = 32'h53380d13;
        K[36] = 32'h650a7354; K[37] = 32'h766a0abb; K[38] = 32'h81c2c92e; K[39] = 32'h92722c85;
        K[40] = 32'ha2bfe8a1; K[41] = 32'ha81a664b; K[42] = 32'hc24b8b70; K[43] = 32'hc76c51a3;
        K[44] = 32'hd192e819; K[45] = 32'hd6990624; K[46] = 32'hf40e3585; K[47] = 32'h106aa070;
        K[48] = 32'h19a4c116; K[49] = 32'h1e376c08; K[50] = 32'h2748774c; K[51] = 32'h34b0bcb5;
        K[52] = 32'h391c0cb3; K[53] = 32'h4ed8aa4a; K[54] = 32'h5b9cca4f; K[55] = 32'h682e6ff3;
        K[56] = 32'h748f82ee; K[57] = 32'h78a5636f; K[58] = 32'h84c87814; K[59] = 32'h8cc70208;
        K[60] = 32'h90befffa; K[61] = 32'ha4506ceb; K[62] = 32'hbef9a3f7; K[63] = 32'hc67178f2;
    end

    // Initial hash values (SHA-256 constants)
    parameter H0_INIT = 32'h6a09e667;
    parameter H1_INIT = 32'hbb67ae85;
    parameter H2_INIT = 32'h3c6ef372;
    parameter H3_INIT = 32'ha54ff53a;
    parameter H4_INIT = 32'h510e527f;
    parameter H5_INIT = 32'h9b05688c;
    parameter H6_INIT = 32'h1f83d9ab;
    parameter H7_INIT = 32'h5be0cd19;

    // State registers for hash computation
    reg [31:0] a, b, c, d, e, f, g, h;
    reg [31:0] h0, h1, h2, h3, h4, h5, h6, h7;
    
    // Message schedule array
    reg [31:0] w [0:63];
    
    // Processing step counter
    reg [6:0] t;  // 0 to 79 (16 for prep + 64 for comp)
    
    // FSM state
    reg [1:0] state;
    localparam IDLE = 2'd0, PREP = 2'd1, COMP = 2'd2, DONE = 2'd3;
    
    // Temporary variables
    wire [31:0] T1, T2;
    
    // Helper functions for SHA-256
    function [31:0] rightrotate;
        input [31:0] x;
        input [7:0] n;
        begin
            rightrotate = (x >> n) | (x << (32-n));
        end
    endfunction
    
    function [31:0] ch;
        input [31:0] x, y, z;
        begin
            ch = (x & y) ^ ((~x) & z);
        end
    endfunction
    
    function [31:0] maj;
        input [31:0] x, y, z;
        begin
            maj = (x & y) ^ (x & z) ^ (y & z);
        end
    endfunction
    
    function [31:0] sigma0;
        input [31:0] x;
        begin
            sigma0 = rightrotate(x, 2) ^ rightrotate(x, 13) ^ rightrotate(x, 22);
        end
    endfunction
    
    function [31:0] sigma1;
        input [31:0] x;
        begin
            sigma1 = rightrotate(x, 6) ^ rightrotate(x, 11) ^ rightrotate(x, 25);
        end
    endfunction
    
    function [31:0] sig0;
        input [31:0] x;
        begin
            sig0 = rightrotate(x, 7) ^ rightrotate(x, 18) ^ (x >> 3);
        end
    endfunction
    
    function [31:0] sig1;
        input [31:0] x;
        begin
            sig1 = rightrotate(x, 17) ^ rightrotate(x, 19) ^ (x >> 10);
        end
    endfunction
    
    assign T1 = h + sigma1(e) + ch(e, f, g) + K[t-16] + w[t-16];
    assign T2 = sigma0(a) + maj(a, b, c);
    
    integer i;
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            ready <= 1;  // Ready to accept first block
            hash_out <= 0;
            t <= 0;
            
            // Initialize Hash values
            h0 <= H0_INIT;
            h1 <= H1_INIT;
            h2 <= H2_INIT;
            h3 <= H3_INIT;
            h4 <= H4_INIT;
            h5 <= H5_INIT;
            h6 <= H6_INIT;
            h7 <= H7_INIT;
            
            for (i = 0; i < 64; i = i + 1) begin
                w[i] <= 0;
            end
            
        end else begin
            case (state)
                IDLE: begin
                    ready <= 1;
                    if (start) begin
                        ready <= 0;
                        
                        // Initialize hash values for this block
                        if (init_hash) begin
                            h0 <= H0_INIT;
                            h1 <= H1_INIT;
                            h2 <= H2_INIT;
                            h3 <= H3_INIT;
                            h4 <= H4_INIT;
                            h5 <= H5_INIT;
                            h6 <= H6_INIT;
                            h7 <= H7_INIT;
                        end
                        // Otherwise keep previous hash values for chaining
                        
                        t <= 0;
                        state <= PREP;
                    end
                end
                
                PREP: begin
                    if (t < 16) begin
                        // Load message words
                        w[t] <= block_in[511 - 32*t -: 32];
                        t <= t + 1;
                    end else if (t < 64) begin
                        // Extend message schedule
                        w[t] <= sig1(w[t-2]) + w[t-7] + sig0(w[t-15]) + w[t-16];
                        t <= t + 1;
                    end else begin
                        // Initialize working variables
                        a <= h0;
                        b <= h1;
                        c <= h2;
                        d <= h3;
                        e <= h4;
                        f <= h5;
                        g <= h6;
                        h <= h7;
                        
                        t <= 16;  // Start compression from round 0 (t-16 = 0)
                        state <= COMP;
                    end
                end
                
                COMP: begin
                    if (t < 80) begin  // 64 rounds (t from 16 to 79)
                        h <= g;
                        g <= f;
                        f <= e;
                        e <= d + T1;
                        d <= c;
                        c <= b;
                        b <= a;
                        a <= T1 + T2;
                        
                        t <= t + 1;
                    end else begin
                        // Add compressed chunk to current hash value
                        h0 <= h0 + a;
                        h1 <= h1 + b;
                        h2 <= h2 + c;
                        h3 <= h3 + d;
                        h4 <= h4 + e;
                        h5 <= h5 + f;
                        h6 <= h6 + g;
                        h7 <= h7 + h;
                        
                        state <= DONE;
                    end
                end
                
                DONE: begin
                    hash_out <= {h0, h1, h2, h3, h4, h5, h6, h7};
                    ready <= 1;
                    
                    if (!start) begin
                        state <= IDLE;
                    end
                end
            endcase
        end
    end

endmodule 