/**
 * STONE-SIM Verilator C++ Testbench
 * 
 * High-performance simulation testbench for StoneSoC with
 * VCD waveform generation and performance monitoring.
 */
#include <iostream>
#include <iomanip>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VSimTop.h"

// Simulation parameters
const uint64_t MAX_CYCLES = 100000;  // Maximum simulation cycles
const uint64_t VCD_START = 0;        // Start VCD tracing from cycle 0
const uint64_t VCD_END = MAX_CYCLES; // End VCD tracing

int main(int argc, char** argv) {
    std::cout << "STONE-SIM: SynThetic On-chip Network SIMulator" << std::endl;
    std::cout << "Verilator High-Performance Simulation" << std::endl;
    std::cout << "=======================================" << std::endl;
    
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    // Create top module instance
    VSimTop* top = new VSimTop;
    
    // Initialize VCD tracing
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // Trace 99 levels of hierarchy
    tfp->open("waves.vcd");
    
    // Initialize signals
    top->clock = 0;
    top->reset = 1;
    
    uint64_t cycle = 0;
    auto start_time = std::chrono::high_resolution_clock::now();
    
    std::cout << "Starting simulation..." << std::endl;
    
    // Main simulation loop
    while (cycle < MAX_CYCLES && !Verilated::gotFinish()) {
        // Toggle clock
        top->clock = !top->clock;
        
        // Release reset after a few cycles
        if (cycle > 10) {
            top->reset = 0;
        }
        
        // Evaluate model
        top->eval();
        
        // Dump VCD trace
        if (cycle >= VCD_START && cycle < VCD_END) {
            tfp->dump(cycle);
        }
        
        // Check for simulation completion
        if (top->io_finished && top->clock == 1) {
            std::cout << "Simulation finished naturally at cycle " << cycle << std::endl;
            if (top->io_success) {
                std::cout << "✓ Simulation PASSED" << std::endl;
            } else {
                std::cout << "✗ Simulation FAILED" << std::endl;
            }
            break;
        }
        
        // Progress reporting
        if (cycle % 10000 == 0 && cycle > 0) {
            auto current_time = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
                current_time - start_time).count();
            double speed = cycle / (duration + 1) * 1000.0;  // cycles/sec
            
            std::cout << "Cycle " << std::setw(6) << cycle 
                     << " | Speed: " << std::setw(8) << std::fixed << std::setprecision(0) 
                     << speed << " cycles/sec" << std::endl;
        }
        
        cycle++;
    }
    
    // Final statistics
    auto end_time = std::chrono::high_resolution_clock::now();
    auto total_duration = std::chrono::duration_cast<std::chrono::milliseconds>(
        end_time - start_time).count();
    
    std::cout << "\n=== Simulation Statistics ===" << std::endl;
    std::cout << "Total cycles:     " << cycle << std::endl;
    std::cout << "Simulation time:  " << total_duration << " ms" << std::endl;
    std::cout << "Average speed:    " << std::fixed << std::setprecision(0) 
             << (cycle / (total_duration + 1) * 1000.0) << " cycles/sec" << std::endl;
    
    // Cleanup
    tfp->close();
    delete tfp;
    delete top;
    
    std::cout << "VCD waveform saved as waves.vcd" << std::endl;
    std::cout << "Use 'make waves' to open in GTKWave" << std::endl;
    
    return 0;
}

