# CLAUDE.md - STONE-SIM Development Guide

**STONE-SIM: SynThetic On-chip Network SIMulator**  
A Chisel-based SoC simulator for performance measurement and RTL generation.

## Project Overview

STONE-SIM is a comprehensive hardware simulation platform that combines:
- **SynThetic**: Synthesizable RTL generation using Chisel HDL
- **On-chip**: Complete SoC system simulation with CPU, memory, and peripherals  
- **Network**: Interconnect-focused design with AXI4 and NoC support
- **SIMulator**: Performance monitoring and analysis capabilities

## Key Technologies

### Simulation Backends
**All simulations use Verilator by default for high performance:**
- **Verilator**: 100-1000x faster than interpreted simulation
- **VCD Generation**: Automatic waveform capture for debugging
- **C++ Testbench**: High-performance simulation environment
- **Performance Monitoring**: Real-time cycle counting and metrics

### Architecture Components
- **RISC-V CPU**: 5-stage pipeline (Fetch, Decode, Execute, Memory, Writeback)
- **Memory Hierarchy**: Instruction/data caches with configurable sizes
- **Interconnect**: AXI4 crossbar and Network-on-Chip router
- **Peripherals**: UART, Timer, GPIO with MMIO interfaces
- **Performance Monitoring**: Built-in counters and trace generation

## Development Workflow

### Building and Testing

#### Using Test Runner Script (Recommended)
```bash
# List available test suites
./scripts/test_runner.sh list

# Run individual test suites
./scripts/test_runner.sh basic      # Basic SoC functionality
./scripts/test_runner.sh cpu        # CPU component tests
./scripts/test_runner.sh memory     # Memory system tests
./scripts/test_runner.sh simtop     # Top-level simulation
./scripts/test_runner.sh performance # Performance benchmarks

# Run test collections
./scripts/test_runner.sh quick      # Essential tests (basic + cpu + memory)
./scripts/test_runner.sh stress     # Performance and stress tests
./scripts/test_runner.sh all        # All test suites

# Generate test report
./scripts/test_runner.sh report
```

#### Using SBT Directly
```bash
# Compile the project
sbt compile

# Run all tests with Verilator (default)
sbt test

# Run specific test files
sbt "testOnly BasicSoCTest"
sbt "testOnly CPUOnlyTest" 
sbt "testOnly MemoryOnlyTest"
sbt "testOnly SimTopTest"
sbt "testOnly PerformanceTest"

# Generate RTL for synthesis
sbt "runMain sim.GenerateRTL"
```

### Verilator High-Performance Simulation
```bash
# Generate Verilator simulation environment
sbt "runMain sim.VerilatorSimulation"

# Build and run Verilator simulation
cd verilator_sim
make run

# View waveforms (requires GTKWave)
make waves
gtkwave waves.vcd
```

### Performance Testing
The test suite includes several performance-focused tests:

- **Basic SoC Test**: 10,000 cycles with performance monitoring
- **Extended SoC Test**: 50,000 cycles with trace analysis  
- **CPU Test**: 5,000 cycles with IPC measurement
- **Memory Test**: Multiple read/write operations
- **SimTop Test**: Up to 100,000 cycles until natural completion

Expected Verilator performance: **10,000+ cycles/second**

## Configuration

### SoC Configuration Parameters
```scala
case class SoCConfig(
  xlen: Int = 32,                    // Architecture width
  addrWidth: Int = 32,               // Address width  
  dataWidth: Int = 32,               // Data width
  memorySize: Int = 64 * 1024,       // Memory size (64KB default)
  enablePerfCounters: Boolean = true, // Performance monitoring
  enableTrace: Boolean = true,       // Instruction trace
  clockFreq: Int = 100000000         // 100MHz clock
)
```

### Test Configuration
All tests automatically use:
- **VerilatorBackendAnnotation**: High-performance simulation
- **WriteVcdAnnotation**: Automatic VCD waveform generation
- **Extended cycles**: Long-running tests (5K-100K cycles)
- **Progress monitoring**: Regular status updates during simulation

## File Structure

```
stone-sim/
├── src/main/scala/
│   ├── soc/                    # SoC implementation
│   │   ├── base/              # Base library (Bundles, Parameters, etc.)
│   │   ├── cpu/               # RISC-V CPU implementation
│   │   ├── memory/            # Memory controllers and caches
│   │   ├── interconnect/      # AXI4 and NoC interconnect
│   │   └── SoC.scala         # Top-level SoC module
│   └── sim/                   # Simulation infrastructure
│       ├── SimTop.scala       # Simulation top module
│       ├── PerfMonitor.scala  # Performance monitoring
│       └── VerilatorSim.scala # Verilator integration
├── src/test/scala/
│   ├── BasicSoCTest.scala    # Basic SoC functionality tests
│   ├── CPUOnlyTest.scala     # CPU component tests
│   ├── MemoryOnlyTest.scala  # Memory system tests
│   ├── SimTopTest.scala      # Top-level simulation tests
│   └── PerformanceTest.scala # Performance benchmarking tests
├── verilator_sim/            # Generated Verilator files
│   ├── Makefile             # Verilator build system
│   ├── sim_main.cpp         # C++ testbench
│   ├── *.sv                 # Generated Verilog files
│   └── waves.vcd           # VCD waveform output
└── scripts/
    ├── test_runner.sh      # Main test management script
    └── verilator_sim.sh    # Advanced RTL generation and C++ simulation
```

## Performance Optimization

### Verilator Compilation Flags
The generated Makefile uses optimized flags:
- `-O3`: Maximum compiler optimization
- `--trace`: VCD waveform generation
- `--x-assign fast`: Fast X propagation
- `--x-initial fast`: Fast initialization
- `--noassert`: Disable assertions for speed

### Simulation Best Practices
1. **Use Verilator for all development**: Much faster than ChiselTest
2. **Monitor progress**: Long simulations include automatic progress reporting
3. **Analyze waveforms**: Use GTKWave for detailed signal analysis
4. **Profile performance**: Built-in cycle and IPC measurements
5. **Batch testing**: Run multiple test configurations efficiently

## Debug Interfaces

### Performance Counters
```scala
// Available when enablePerfCounters = true
io.debug_perf.get.cycles_per_second
io.debug_perf.get.instructions_per_second  
io.debug_perf.get.avg_ipc
```

### Instruction Trace
```scala
// Available when enableTrace = true
io.debug_trace.get.valid      // Trace data valid
io.debug_trace.get.pc         // Program counter
io.debug_trace.get.inst       // Instruction word
io.debug_trace.get.rd_addr    // Destination register
io.debug_trace.get.rd_data    // Register write data
io.debug_trace.get.cycle      // Cycle number
```

## Common Commands

### Quick Development Cycle
```bash
# Edit code, then run fast verification
./scripts/test_runner.sh basic

# Run essential component tests
./scripts/test_runner.sh quick

# For detailed analysis with waveforms
./scripts/test_runner.sh simtop
gtkwave test_run_dir/*/SimTopTest.vcd
```

### Performance Analysis
```bash
# Run performance benchmarks
./scripts/test_runner.sh performance

# Run stress tests
./scripts/test_runner.sh stress

# Generate comprehensive test report
./scripts/test_runner.sh report
```

### Test Management
```bash
# List all available tests
./scripts/test_runner.sh list

# Run specific combination of tests
./scripts/test_runner.sh basic cpu memory

# Run individual components
./scripts/test_runner.sh cpu        # CPU only
./scripts/test_runner.sh memory     # Memory only
```

### RTL Generation
```bash
# Generate synthesizable Verilog
sbt "runMain sim.GenerateRTL"
ls rtl/StoneSoC.v

# Generate Verilator simulation (advanced)
./scripts/verilator_sim.sh run

# Or use SBT directly
sbt "runMain sim.VerilatorSimulation"  
cd verilator_sim && make
```

## Troubleshooting

### Common Issues
1. **Verilator not found**: Install with `sudo apt install verilator`
2. **GTKWave not available**: Install with `sudo apt install gtkwave`
3. **Compilation errors**: Check Chisel version compatibility (6.5.0)
4. **Simulation timeout**: Increase cycle limits in test configuration
5. **VCD file too large**: Reduce trace duration or disable unused signals

### Performance Issues
- **Slow simulation**: Ensure Verilator backend is being used
- **Large VCD files**: Limit simulation cycles or trace scope
- **Memory usage**: Monitor system resources during long simulations

## Integration Notes

## Simplified Workflow

**All development now uses a single script:**

```bash
# Main development commands
./scripts/test_runner.sh list     # See available tests
./scripts/test_runner.sh quick    # Fast validation (replaces build.sh)
./scripts/test_runner.sh simtop   # Run simulation (replaces simulate.sh)
./scripts/test_runner.sh all      # Complete test suite

# Advanced RTL simulation
./scripts/verilator_sim.sh run    # C++ simulation with VCD
```

### For Claude AI Development
- **Unified Interface**: Single test_runner.sh script for all testing
- **Auto-Discovery**: New test files automatically detected and integrated
- **Default Backend**: All tests use Verilator automatically
- **Waveform Generation**: VCD files generated by default for debugging
- **Performance Focus**: Tests designed for long-running validation
- **Progress Monitoring**: Built-in status reporting for extended simulations
- **Modular Design**: Easy to add new components and tests

This simulation environment is optimized for rapid development and thorough validation of SoC designs with industry-standard performance and debugging capabilities.