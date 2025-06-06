#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsha256_tb.h"

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create instance of the testbench
    Vsha256_tb* tb = new Vsha256_tb;
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("sha256_core_test.vcd");
    
    // Run simulation
    // The testbench handles everything internally
    int time = 0;
    while (!Verilated::gotFinish()) {
        tb->eval();
        tfp->dump(time);
        time++;
    }
    
    // Cleanup
    tfp->close();
    delete tb;
    delete tfp;
    
    return 0;
} 