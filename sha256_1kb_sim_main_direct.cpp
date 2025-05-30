#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsha256_1kb_processor.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create instance of our module
    Vsha256_1kb_processor* dut = new Vsha256_1kb_processor;
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("sha256_1kb_waveform.vcd");
    
    // Simulation variables
    vluint64_t sim_time = 0;
    const vluint64_t max_sim_time = 200000;  // Maximum simulation time
    
    std::cout << "=== SHA256 1KB Processor Direct Simulation ===" << std::endl;
    std::cout << "Generating 1KB test data..." << std::endl;
    
    // Generate 1KB test data (incrementing pattern)
    // Clear data_in first
    for (int i = 0; i < 256; i++) {
        dut->data_in[i] = 0;
    }
    
    // Set test data (incrementing bytes)
    for (int byte_idx = 0; byte_idx < 1024; byte_idx++) {
        int byte_val = byte_idx & 0xFF;  // Wrap around at 256
        int bit_start = 8191 - byte_idx * 8;  // MSB first
        
        for (int bit = 0; bit < 8; bit++) {
            int bit_pos = bit_start - bit;
            if (bit_pos >= 0 && bit_pos < 8192) {
                int word_idx = bit_pos / 32;
                int bit_in_word = bit_pos % 32;
                
                if ((byte_val >> (7 - bit)) & 1) {
                    dut->data_in[word_idx] |= (1U << bit_in_word);
                }
            }
        }
    }
    
    std::cout << "Starting SHA256 computation..." << std::endl;
    
    // Initialize signals
    dut->clk = 0;
    dut->rst = 1;
    dut->start = 0;
    
    bool test_started = false;
    bool test_completed = false;
    int cycles_since_start = 0;
    
    // Run simulation
    while (sim_time < max_sim_time && !Verilated::gotFinish()) {
        // Toggle clock
        dut->clk = !dut->clk;
        
        if (dut->clk) {  // Rising edge
            cycles_since_start++;
            
            // Reset sequence
            if (cycles_since_start < 10) {
                dut->rst = 1;
            } else if (cycles_since_start == 10) {
                dut->rst = 0;
                std::cout << "Reset released" << std::endl;
            } else if (cycles_since_start == 15 && !test_started) {
                dut->start = 1;
                test_started = true;
                std::cout << "Starting SHA256 processing..." << std::endl;
            } else if (cycles_since_start == 17) {
                dut->start = 0;
            }
            
            // Check for completion
            if (dut->done && !test_completed) {
                test_completed = true;
                std::cout << "=== SHA256 Computation Complete ===" << std::endl;
                std::cout << "Cycles taken: " << cycles_since_start << std::endl;
                
                // Extract hash from the 256-bit output
                std::cout << "Final SHA256 Hash: ";
                
                // Print hash in hex format (assuming hash_out is an array of 8 32-bit words)
                for (int i = 7; i >= 0; i--) {
                    uint32_t word = 0;
                    // Extract 32 bits starting from bit i*32
                    for (int bit = 0; bit < 32; bit++) {
                        int bit_idx = i * 32 + bit;
                        if (bit_idx < 256) {
                            int word_idx = bit_idx / 32;
                            int bit_in_word = bit_idx % 32;
                            if (dut->hash_out[word_idx] & (1U << bit_in_word)) {
                                word |= (1U << bit);
                            }
                        }
                    }
                    std::cout << std::hex << std::setfill('0') << std::setw(8) << word;
                }
                std::cout << std::endl;
                std::cout << "Test completed successfully!" << std::endl;
                
                // Wait a few more cycles then finish
                break;
            }
            
            // Simple progress indication
            if (test_started && !test_completed && (cycles_since_start % 1000) == 0) {
                std::cout << "Processing... (cycle " << cycles_since_start << ")" << std::endl;
            }
        }
        
        // Evaluate the design
        dut->eval();
        
        // Dump trace data
        tfp->dump(sim_time);
        
        // Advance time
        sim_time++;
    }
    
    // Check if simulation completed normally
    if (test_completed) {
        std::cout << "Simulation completed successfully!" << std::endl;
    } else {
        std::cout << "Simulation timed out after " << sim_time << " time units!" << std::endl;
        std::cout << "Done signal: " << (dut->done ? "HIGH" : "LOW") << std::endl;
    }
    
    // Clean up
    tfp->close();
    delete dut;
    delete tfp;
    
    return 0;
} 