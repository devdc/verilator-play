`timescale 1ns / 1ps

module mux2_tb;

    reg a, b, sel;
    wire y;

    mux2 uut(.a(a), .b(b), .sel(sel), .y(y));

    initial begin
        $display(" sel a b | y");
        $monitor("%b %b %b | %b", sel, a, b, y);

        // test cases
        a = 0; b = 0; sel = 0; #10;
        a = 0; b = 1; sel = 0; #10;
        a = 1; b = 0; sel = 0; #10;
        a = 1; b = 1; sel = 0; #10;
        a = 0; b = 0; sel = 1; #10;
        a = 0; b = 1; sel = 1; #10;
        a = 1; b = 0; sel = 1; #10;
        a = 1; b = 1; sel = 1; #10;

        $finish;
    end
endmodule
