`timescale 1ns/1ps

/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNSIGNED */

module sha256_core (
    input         clk,
    input         rst,
    input         start,
    input  [511:0] block_in,
    input  [255:0] hash_init,    // Initial hash values for chaining
    input         use_init,      // Use hash_init instead of default values
    output reg [255:0] hash_out,
    output reg    ready
);

    // SHA-256 constants (K values)
    reg [31:0] K [0:63];
    initial begin
        // SHA-256 round constants
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
    reg [6:0] t; // 7 bits to count from 0 to 63 (no longer 7 bits)
    reg [6:0] msg_idx; // Index for message schedule calculation (6 bits instead of 7)
    
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
    
    // Ch(x,y,z) = (x AND y) XOR ((NOT x) AND z)
    function [31:0] ch;
        input [31:0] x, y, z;
        begin
            ch = (x & y) ^ ((~x) & z);
        end
    endfunction
    
    // Maj(x,y,z) = (x AND y) XOR (x AND z) XOR (y AND z)
    function [31:0] maj;
        input [31:0] x, y, z;
        begin
            maj = (x & y) ^ (x & z) ^ (y & z);
        end
    endfunction
    
    // Σ0(x) = ROTR^2(x) XOR ROTR^13(x) XOR ROTR^22(x)
    function [31:0] sigma0;
        input [31:0] x;
        begin
            sigma0 = rightrotate(x, 2) ^ rightrotate(x, 13) ^ rightrotate(x, 22);
        end
    endfunction
    
    // Σ1(x) = ROTR^6(x) XOR ROTR^11(x) XOR ROTR^25(x)
    function [31:0] sigma1;
        input [31:0] x;
        begin
            sigma1 = rightrotate(x, 6) ^ rightrotate(x, 11) ^ rightrotate(x, 25);
        end
    endfunction
    
    // σ0(x) = ROTR^7(x) XOR ROTR^18(x) XOR SHR^3(x)
    function [31:0] sig0;
        input [31:0] x;
        begin
            sig0 = rightrotate(x, 7) ^ rightrotate(x, 18) ^ (x >> 3);
        end
    endfunction
    
    // σ1(x) = ROTR^17(x) XOR ROTR^19(x) XOR SHR^10(x)
    function [31:0] sig1;
        input [31:0] x;
        begin
            sig1 = rightrotate(x, 17) ^ rightrotate(x, 19) ^ (x >> 10);
        end
    endfunction
    
    // Compute T1 and T2 with current values
    assign T1 = h + sigma1(e) + ch(e, f, g) + K[t] + w[t];
    assign T2 = sigma0(a) + maj(a, b, c);
    
    integer i;
    
    // Main state machine
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            ready <= 0;
            hash_out <= 0;
            t <= 0;
            msg_idx <= 0;
            
            // Initialize Hash values
            h0 <= H0_INIT;
            h1 <= H1_INIT;
            h2 <= H2_INIT;
            h3 <= H3_INIT;
            h4 <= H4_INIT;
            h5 <= H5_INIT;
            h6 <= H6_INIT;
            h7 <= H7_INIT;
            
            // Initialize w for safety
            for (i = 0; i < 64; i = i + 1) begin
                w[i] <= 0;
            end
            
            $display("RESET: sha256_core reset");
            
        end else begin
            case (state)
                IDLE: begin
                    if (start) begin
                        $display("IDLE -> PREP: Starting SHA-256 computation");
                        ready <= 0;
                        
                        // Initialize hash values for this block
                        if (use_init) begin
                            h0 <= hash_init[255:224];
                            h1 <= hash_init[223:192];
                            h2 <= hash_init[191:160];
                            h3 <= hash_init[159:128];
                            h4 <= hash_init[127:96];
                            h5 <= hash_init[95:64];
                            h6 <= hash_init[63:32];
                            h7 <= hash_init[31:0];
                        end else begin
                            h0 <= H0_INIT;
                            h1 <= H1_INIT;
                            h2 <= H2_INIT;
                            h3 <= H3_INIT;
                            h4 <= H4_INIT;
                            h5 <= H5_INIT;
                            h6 <= H6_INIT;
                            h7 <= H7_INIT;
                        end
                        
                        // Prepare to load message schedule
                        msg_idx <= 0;
                        
                        // Move to preparation state
                        state <= PREP;
                    end
                end
                
                PREP: begin
                    if (msg_idx == 0) begin
                        $display("PREP: Preparing message schedule");
                    end
                    
                    if (msg_idx < 16) begin
                        // First 16 words come directly from the input block
                        w[msg_idx] <= block_in[511 - 32*msg_idx -: 32];
                        $display("w[%2d] = %h", msg_idx, block_in[511 - 32*msg_idx -: 32]);
                        msg_idx <= msg_idx + 1;
                    end else if (msg_idx < 64) begin
                        // Compute the extended words
                        w[msg_idx] <= sig1(w[msg_idx-2]) + w[msg_idx-7] + sig0(w[msg_idx-15]) + w[msg_idx-16];
                        $display("w[%2d] = %h (extended)", msg_idx, sig1(w[msg_idx-2]) + w[msg_idx-7] + sig0(w[msg_idx-15]) + w[msg_idx-16]);
                        msg_idx <= msg_idx + 1;
                    end else begin
                        // Message schedule is fully prepared
                        // Initialize working variables with current hash value
                        a <= h0;
                        b <= h1;
                        c <= h2;
                        d <= h3;
                        e <= h4;
                        f <= h5;
                        g <= h6;
                        h <= h7;
                        
                        $display("Working vars initialized to: a=%h b=%h c=%h d=%h e=%h f=%h g=%h h=%h", 
                                 h0, h1, h2, h3, h4, h5, h6, h7);
                        
                        // Reset t counter and move to computation state
                        t <= 0;
                        state <= COMP;
                    end
                end
                
                COMP: begin
                    if (t < 64) begin
                        $display("COMP: Round t=%2d", t);
                        $display("Round %2d: a=%h b=%h c=%h d=%h e=%h f=%h g=%h h=%h", 
                                 t, a, b, c, d, e, f, g, h);
                        $display("T1=%h T2=%h w[t]=%h", T1, T2, w[t]);
                        
                        // Update working variables
                        h <= g;
                        g <= f;
                        f <= e;
                        e <= d + T1;
                        d <= c;
                        c <= b;
                        b <= a;
                        a <= T1 + T2;
                        
                        // Move to next round
                        t <= t + 1;
                    end else begin
                        // 64 rounds completed, compute final hash values
                        $display("COMP -> DONE: All 64 rounds completed");
                        
                        // Add compressed chunk to current hash value
                        h0 <= h0 + a;
                        h1 <= h1 + b;
                        h2 <= h2 + c;
                        h3 <= h3 + d;
                        h4 <= h4 + e;
                        h5 <= h5 + f;
                        h6 <= h6 + g;
                        h7 <= h7 + h;
                        
                        $display("Final hash values: h0=%h+%h h1=%h+%h h2=%h+%h h3=%h+%h", 
                                 h0, a, h1, b, h2, c, h3, d);
                        $display("                   h4=%h+%h h5=%h+%h h6=%h+%h h7=%h+%h", 
                                 h4, e, h5, f, h6, g, h7, h);
                        
                        // Move to done state
                        state <= DONE;
                    end
                end
                
                DONE: begin
                    // Concatenate the hash values to form the final hash
                    hash_out <= {h0, h1, h2, h3, h4, h5, h6, h7};
                    
                    $display("DONE: Final hash = %h%h%h%h%h%h%h%h", 
                             h0, h1, h2, h3, h4, h5, h6, h7);
                    
                    // Set ready flag to signal completion
                    ready <= 1;
                    
                    // Return to idle state
                    if (!start) begin
                        state <= IDLE;
                    end
                end
            endcase
        end
    end

endmodule
