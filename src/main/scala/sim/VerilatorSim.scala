/**
 * STONE-SIM Verilator Simulation Application
 * 
 * High-performance simulation using Verilator with VCD waveform generation
 * for detailed analysis and debugging of the StoneSoC design.
 */
package sim

import chisel3._
import soc._
import soc.base._
import java.io.{File, PrintWriter}

/**
 * Verilator Simulation Generator
 * 
 * Generates Verilog RTL and creates a Verilator-compatible simulation
 * environment with performance monitoring and waveform capture.
 */
object VerilatorSimulation extends App {
  println("STONE-SIM: SynThetic On-chip Network SIMulator")
  println("Generating Verilator simulation...")
  
  // Configuration for simulation
  val config = SoCConfig(
    xlen = 32,
    addrWidth = 32,
    dataWidth = 32,
    memorySize = 64 * 1024,  // 64KB
    enablePerfCounters = true,
    enableTrace = true,
    clockFreq = 100000000    // 100MHz
  )
  
  // Generate Verilog for Verilator
  val targetDir = "verilator_sim"
  new File(targetDir).mkdirs()
  
  println(s"Generating Verilog RTL to $targetDir/...")
  
  // Generate StoneSoC RTL
  emitVerilog(new StoneSoC(config), Array("--target-dir", targetDir))
  
  // Generate SimTop RTL for testbench  
  emitVerilog(new SimTop(), Array("--target-dir", targetDir))
  
  println("Verilog generation completed.")
  
  // Generate Verilator makefile
  generateVerilatorMakefile(targetDir, config)
  
  // Generate C++ testbench
  generateCppTestbench(targetDir, config)
  
  println(s"\nVerilator simulation files generated in $targetDir/")
  println("To build and run:")
  println(s"  cd $targetDir")
  println("  make")
  println("  ./obj_dir/VSimTop")
  println("\nWaveform will be saved as waves.vcd (view with GTKWave)")
  
  /**
   * Generate Verilator Makefile for building the simulation
   */
  def generateVerilatorMakefile(targetDir: String, config: SoCConfig): Unit = {
  val makefile = new PrintWriter(new File(s"$targetDir/Makefile"))
  
  makefile.println(
    s"""# STONE-SIM Verilator Makefile
       |# Generated automatically for StoneSoC simulation
       |
       |# Verilator configuration
       |VERILATOR = verilator
       |VERILATOR_FLAGS = -Wall -Wno-fatal -cc --exe --build
       |VERILATOR_FLAGS += --trace --trace-structs --trace-params
       |VERILATOR_FLAGS += --trace-max-array 1024 --trace-max-width 256
       |VERILATOR_FLAGS += -O3 --x-assign fast --x-initial fast --noassert
       |
       |# Source files
       |TOP_MODULE = SimTop
       |VERILOG_SOURCES = SimTop.sv StoneSoC.sv
       |CPP_SOURCES = sim_main.cpp
       |
       |# Build target
       |EXECUTABLE = obj_dir/V$$(TOP_MODULE)
       |
       |.PHONY: all clean run waves
       |
       |all: $$(EXECUTABLE)
       |
       |$$(EXECUTABLE): $$(VERILOG_SOURCES) $$(CPP_SOURCES)
       |	$$(VERILATOR) $$(VERILATOR_FLAGS) --top-module $$(TOP_MODULE) \\
       |		$$(VERILOG_SOURCES) $$(CPP_SOURCES)
       |
       |run: $$(EXECUTABLE)
       |	@echo "Running STONE-SIM Verilator simulation..."
       |	./$$<
       |	@echo "Simulation completed. Waveform saved as waves.vcd"
       |
       |waves: waves.vcd
       |	@if command -v gtkwave >/dev/null 2>&1; then \\
       |		echo "Opening waveform in GTKWave..."; \\
       |		gtkwave waves.vcd; \\
       |	else \\
       |		echo "GTKWave not found. Install with: sudo apt install gtkwave"; \\
       |	fi
       |
       |waves.vcd: run
       |
       |clean:
       |	rm -rf obj_dir waves.vcd
       |
       |help:
       |	@echo "STONE-SIM Verilator Simulation"
       |	@echo "Available targets:"
       |	@echo "  all    - Build simulation executable"
       |	@echo "  run    - Run simulation and generate waveform"
       |	@echo "  waves  - Open waveform in GTKWave"
       |	@echo "  clean  - Clean build artifacts"
       |	@echo "  help   - Show this help message"
       |""".stripMargin)
  
  makefile.close()
  println(s"Generated Makefile in $targetDir/")
  }

  /**
   * Generate C++ testbench for Verilator simulation
   */
  def generateCppTestbench(targetDir: String, config: SoCConfig): Unit = {
  val cppFile = new PrintWriter(new File(s"$targetDir/sim_main.cpp"))
  
  cppFile.println(
    s"""/**
       | * STONE-SIM Verilator C++ Testbench
       | * 
       | * High-performance simulation testbench for StoneSoC with
       | * VCD waveform generation and performance monitoring.
       | */
       |#include <iostream>
       |#include <iomanip>
       |#include <verilated.h>
       |#include <verilated_vcd_c.h>
       |#include "VSimTop.h"
       |
       |// Simulation parameters
       |const uint64_t MAX_CYCLES = 100000;  // Maximum simulation cycles
       |const uint64_t VCD_START = 0;        // Start VCD tracing from cycle 0
       |const uint64_t VCD_END = MAX_CYCLES; // End VCD tracing
       |
       |int main(int argc, char** argv) {
       |    std::cout << "STONE-SIM: SynThetic On-chip Network SIMulator" << std::endl;
       |    std::cout << "Verilator High-Performance Simulation" << std::endl;
       |    std::cout << "=======================================" << std::endl;
       |    
       |    // Initialize Verilator
       |    Verilated::commandArgs(argc, argv);
       |    Verilated::traceEverOn(true);
       |    
       |    // Create top module instance
       |    VSimTop* top = new VSimTop;
       |    
       |    // Initialize VCD tracing
       |    VerilatedVcdC* tfp = new VerilatedVcdC;
       |    top->trace(tfp, 99);  // Trace 99 levels of hierarchy
       |    tfp->open("waves.vcd");
       |    
       |    // Initialize signals
       |    top->clock = 0;
       |    top->reset = 1;
       |    
       |    uint64_t cycle = 0;
       |    auto start_time = std::chrono::high_resolution_clock::now();
       |    
       |    std::cout << "Starting simulation..." << std::endl;
       |    
       |    // Main simulation loop
       |    while (cycle < MAX_CYCLES && !Verilated::gotFinish()) {
       |        // Toggle clock
       |        top->clock = !top->clock;
       |        
       |        // Release reset after a few cycles
       |        if (cycle > 10) {
       |            top->reset = 0;
       |        }
       |        
       |        // Evaluate model
       |        top->eval();
       |        
       |        // Dump VCD trace
       |        if (cycle >= VCD_START && cycle < VCD_END) {
       |            tfp->dump(cycle);
       |        }
       |        
       |        // Check for simulation completion
       |        if (top->io_finished && top->clock == 1) {
       |            std::cout << "Simulation finished naturally at cycle " << cycle << std::endl;
       |            if (top->io_success) {
       |                std::cout << "✓ Simulation PASSED" << std::endl;
       |            } else {
       |                std::cout << "✗ Simulation FAILED" << std::endl;
       |            }
       |            break;
       |        }
       |        
       |        // Progress reporting
       |        if (cycle % 10000 == 0 && cycle > 0) {
       |            auto current_time = std::chrono::high_resolution_clock::now();
       |            auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
       |                current_time - start_time).count();
       |            double speed = cycle / (duration + 1) * 1000.0;  // cycles/sec
       |            
       |            std::cout << "Cycle " << std::setw(6) << cycle 
       |                     << " | Speed: " << std::setw(8) << std::fixed << std::setprecision(0) 
       |                     << speed << " cycles/sec" << std::endl;
       |        }
       |        
       |        cycle++;
       |    }
       |    
       |    // Final statistics
       |    auto end_time = std::chrono::high_resolution_clock::now();
       |    auto total_duration = std::chrono::duration_cast<std::chrono::milliseconds>(
       |        end_time - start_time).count();
       |    
       |    std::cout << "\\n=== Simulation Statistics ===" << std::endl;
       |    std::cout << "Total cycles:     " << cycle << std::endl;
       |    std::cout << "Simulation time:  " << total_duration << " ms" << std::endl;
       |    std::cout << "Average speed:    " << std::fixed << std::setprecision(0) 
       |             << (cycle / (total_duration + 1) * 1000.0) << " cycles/sec" << std::endl;
       |    
       |    // Cleanup
       |    tfp->close();
       |    delete tfp;
       |    delete top;
       |    
       |    std::cout << "VCD waveform saved as waves.vcd" << std::endl;
       |    std::cout << "Use 'make waves' to open in GTKWave" << std::endl;
       |    
       |    return 0;
       |}
       |""".stripMargin)
  
  cppFile.close()
  println(s"Generated C++ testbench in $targetDir/sim_main.cpp")
  }
}