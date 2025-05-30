#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsha256_1kb_processor_tb.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create instance of our module
    Vsha256_1kb_processor_tb* tb = new Vsha256_1kb_processor_tb;
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("sha256_1kb_waveform.vcd");
    
    // Simulation variables
    vluint64_t sim_time = 0;
    const vluint64_t max_sim_time = 1000000;  // 1ms max simulation time
    
    std::cout << "=== SHA256 1KB Processor Simulation ===" << std::endl;
    std::cout << "Starting Verilator simulation..." << std::endl;
    
    // Run simulation
    while (sim_time < max_sim_time && !Verilated::gotFinish()) {
        // Evaluate the design
        tb->eval();
        
        // Dump trace data
        tfp->dump(sim_time);
        
        // Advance time
        sim_time++;
    }
    
    // Check if simulation completed normally
    if (Verilated::gotFinish()) {
        std::cout << "Simulation completed successfully!" << std::endl;
    } else {
        std::cout << "Simulation timed out!" << std::endl;
    }
    
    // Clean up
    tfp->close();
    delete tb;
    delete tfp;
    
    return 0;
} 