# STONE-SIM Verilator Makefile
# Generated automatically for StoneSoC simulation

# Verilator configuration
VERILATOR = verilator
VERILATOR_FLAGS = -Wall -Wno-fatal -cc --exe --build
VERILATOR_FLAGS += --trace --trace-structs --trace-params
VERILATOR_FLAGS += --trace-max-array 1024 --trace-max-width 256
VERILATOR_FLAGS += -O3 --x-assign fast --x-initial fast --noassert

# Source files
TOP_MODULE = SimTop
VERILOG_SOURCES = SimTop.sv StoneSoC.sv
CPP_SOURCES = sim_main.cpp

# Build target
EXECUTABLE = obj_dir/V$(TOP_MODULE)

.PHONY: all clean run waves

all: $(EXECUTABLE)

$(EXECUTABLE): $(VERILOG_SOURCES) $(CPP_SOURCES)
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module $(TOP_MODULE) \
		$(VERILOG_SOURCES) $(CPP_SOURCES)

run: $(EXECUTABLE)
	@echo "Running STONE-SIM Verilator simulation..."
	./$<
	@echo "Simulation completed. Waveform saved as waves.vcd"

waves: waves.vcd
	@if command -v gtkwave >/dev/null 2>&1; then \
		echo "Opening waveform in GTKWave..."; \
		gtkwave waves.vcd; \
	else \
		echo "GTKWave not found. Install with: sudo apt install gtkwave"; \
	fi

waves.vcd: run

clean:
	rm -rf obj_dir waves.vcd

help:
	@echo "STONE-SIM Verilator Simulation"
	@echo "Available targets:"
	@echo "  all    - Build simulation executable"
	@echo "  run    - Run simulation and generate waveform"
	@echo "  waves  - Open waveform in GTKWave"
	@echo "  clean  - Clean build artifacts"
	@echo "  help   - Show this help message"

