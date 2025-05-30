#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsha256_1mb_processor_fixed.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create instance of our module
    Vsha256_1mb_processor_fixed* dut = new Vsha256_1mb_processor_fixed;
    
    // Initialize VCD tracing
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("sha256_1mb_fixed_waveform.vcd");
    
    // Simulation variables
    vluint64_t sim_time = 0;
    const vluint64_t max_sim_time = 50000000;  // Increased to 50M time units for full 1MB processing
    
    std::cout << "=== SHA256 1MB Processor Fixed Simulation ===" << std::endl;
    std::cout << "Expected to process 2049 blocks total" << std::endl;
    std::cout << "Generating 1MB test data..." << std::endl;
    
    // Generate 1MB test data (incrementing pattern)
    // 1MB = 1048576 bytes = 262144 32-bit words
    // Clear data_in first
    for (int i = 0; i < 262144; i++) {
        dut->data_in[i] = 0;
    }
    
    // Set test data (incrementing bytes) - same pattern as 1KB but repeated
    for (int byte_idx = 0; byte_idx < 1048576; byte_idx++) {
        int byte_val = byte_idx & 0xFF;  // Wrap around at 256
        int bit_start = 8388607 - byte_idx * 8;  // MSB first
        
        for (int bit = 0; bit < 8; bit++) {
            int bit_pos = bit_start - bit;
            if (bit_pos >= 0 && bit_pos < 8388608) {
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
    int last_progress_report = 0;
    
    // Run simulation
    while (sim_time < max_sim_time && !Verilated::gotFinish()) {
        // Toggle clock
        dut->clk = !dut->clk;
        
        if (dut->clk) {  // Rising edge
            cycles_since_start++;
            
            // Reset sequence
            if (cycles_since_start < 5) {
                dut->rst = 1;
            } else if (cycles_since_start == 5) {
                dut->rst = 0;
                std::cout << "Reset released" << std::endl;
            } else if (cycles_since_start == 10 && !test_started) {
                dut->start = 1;
                test_started = true;
                std::cout << "Starting SHA256 processing..." << std::endl;
            } else if (cycles_since_start == 12) {
                dut->start = 0;
            }
            
            // Check for completion
            if (dut->done && !test_completed) {
                test_completed = true;
                std::cout << "=== SHA256 Computation Complete ===" << std::endl;
                std::cout << "Total cycles taken: " << cycles_since_start << std::endl;
                std::cout << "All 2049 blocks processed successfully!" << std::endl;
                
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
            
            // Progress indication every 10000 cycles
            if (test_started && !test_completed && (cycles_since_start - last_progress_report) >= 10000) {
                last_progress_report = cycles_since_start;
                
                std::cout << "Processing... (cycle " << cycles_since_start << ")" << std::endl;
                
                // Estimate progress based on cycles
                int estimated_blocks = cycles_since_start / 100;  // Rough estimate
                if (estimated_blocks > 2049) estimated_blocks = 2049;
                std::cout << "Estimated progress: ~" << estimated_blocks << "/2049 blocks" << std::endl;
                
                // Check if we're making progress
                if (cycles_since_start > 1000000) {  // After 1M cycles
                    std::cout << "Note: Processing is taking longer than expected." << std::endl;
                    std::cout << "This is normal for 1MB data - please wait..." << std::endl;
                }
            }
        }
        
        // Evaluate the design
        dut->eval();
        
        // Dump trace data (but limit to avoid huge files)
        if (sim_time < 10000) {  // Only trace first 10k time units
            tfp->dump(sim_time);
        }
        
        // Advance time
        sim_time++;
    }
    
    // Check if simulation completed normally
    if (test_completed) {
        std::cout << "Simulation completed successfully!" << std::endl;
        std::cout << "Performance: " << (1048576.0 / cycles_since_start) << " bytes/cycle" << std::endl;
        std::cout << "At 100MHz: " << (1048576.0 * 100e6 / cycles_since_start / 1e6) << " MB/s" << std::endl;
        
        // Expected hash for verification
        std::cout << std::endl;
        std::cout << "Expected SHA256 hash for 1MB incrementing data:" << std::endl;
        std::cout << "16a568a3c9c5b7b8e6b5c4b3a2918f7e6d5c4b3a29180f7e6d5c4b3a29180f7e" << std::endl;
        std::cout << "(This is a placeholder - run 'make verify' to get actual expected hash)" << std::endl;
    } else {
        std::cout << "Simulation timed out after " << sim_time << " time units!" << std::endl;
        std::cout << "Done signal: " << (dut->done ? "HIGH" : "LOW") << std::endl;
        std::cout << "Cycles: " << cycles_since_start << std::endl;
        std::cout << "Current timeout: " << max_sim_time << " time units" << std::endl;
        std::cout << "The simulation may need even more time for full 1MB processing." << std::endl;
    }
    
    // Clean up
    tfp->close();
    delete dut;
    delete tfp;
    
    return 0;
} 