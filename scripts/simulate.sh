#!/bin/bash

# Stone SoC Simulation Script

set -e

echo "Running Stone SoC Simulation..."

# Check if RTL exists
if [ ! -d "rtl" ]; then
    echo "RTL not found. Running build first..."
    ./scripts/build.sh
fi

# Run Chisel simulation
echo "Running Chisel simulation..."
sbt "testOnly *SimulationTest"

# If verilator is available, run RTL simulation
if command -v verilator &> /dev/null; then
    echo "Running Verilator simulation..."
    cd rtl
    
    # Create simple testbench
    cat > tb_top.cpp << 'EOF'
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VStoneSoC.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    VStoneSoC* top = new VStoneSoC;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("simulation.vcd");
    
    // Reset
    top->reset = 1;
    for (int i = 0; i < 10; i++) {
        top->clock = 0; top->eval(); tfp->dump(2*i);
        top->clock = 1; top->eval(); tfp->dump(2*i+1);
    }
    top->reset = 0;
    
    // Run simulation
    for (int cycle = 0; cycle < 1000; cycle++) {
        top->clock = 0; top->eval(); tfp->dump(2*cycle+20);
        top->clock = 1; top->eval(); tfp->dump(2*cycle+21);
        
        if (cycle % 100 == 0) {
            printf("Cycle %d\n", cycle);
        }
    }
    
    tfp->close();
    delete top;
    printf("Simulation completed. Waveform saved to simulation.vcd\n");
    return 0;
}
EOF
    
    # Compile and run
    verilator -Wall --cc --exe --build --trace StoneSoC.v tb_top.cpp
    ./obj_dir/VStoneSoC
    
    cd ..
else
    echo "Verilator not found. Skipping RTL simulation."
fi

echo "Simulation completed!"