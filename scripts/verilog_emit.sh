#!/bin/bash

# STONE-SIM Verilog RTL Generation Script
# Generates Verilog RTL from Chisel HDL for synthesis and external simulation

set -e  # Exit on any error

echo "=================================================="
echo "STONE-SIM: SynThetic On-chip Network SIMulator"
echo "Verilog RTL Generation"
echo "=================================================="

# Configuration
OUTPUT_DIR="generated_rtl"
PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

print_step() {
    echo -e "${BLUE}[STEP]${NC} $1"
}

print_success() {
    echo -e "${GREEN}[SUCCESS]${NC} $1"
}

print_warning() {
    echo -e "${YELLOW}[WARNING]${NC} $1"
}

print_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

# Check prerequisites
check_prerequisites() {
    print_step "Checking prerequisites..."
    
    # Check for Verilator
    if ! command -v verilator &> /dev/null; then
        print_error "Verilator not found. Please install Verilator:"
        echo "  Ubuntu/Debian: sudo apt install verilator"
        echo "  macOS: brew install verilator"
        echo "  Or build from source: https://verilator.org/guide/latest/install.html"
        exit 1
    fi
    
    # Check for make
    if ! command -v make &> /dev/null; then
        print_error "Make not found. Please install build-essential:"
        echo "  Ubuntu/Debian: sudo apt install build-essential"
        exit 1
    fi
    
    # Check for SBT
    if ! command -v sbt &> /dev/null; then
        print_error "SBT not found. Please install SBT first."
        exit 1
    fi
    
    print_success "All prerequisites found"
    
    # Print versions
    echo "  Verilator: $(verilator --version | head -n1)"
    echo "  Make: $(make --version | head -n1)"
    echo "  SBT: $(sbt --version | tail -n1)"
}

# Generate Verilog RTL files
generate_rtl() {
    print_step "Generating Verilog RTL files..."
    
    cd "$PROJECT_ROOT"
    
    # Clean previous output directory
    if [ -d "$OUTPUT_DIR" ]; then
        rm -rf "$OUTPUT_DIR"
    fi
    
    # Generate Verilog RTL
    sbt "runMain sim.VerilatorSimulation"
    
    if [ ! -d "$OUTPUT_DIR" ]; then
        print_error "Failed to generate RTL files"
        exit 1
    fi
    
    print_success "Verilog RTL generated in $OUTPUT_DIR/"
}

# List generated RTL files
list_rtl_files() {
    print_step "Listing generated RTL files..."
    
    cd "$PROJECT_ROOT/$OUTPUT_DIR"
    
    if [ -f "*.v" ] || [ -f "*.sv" ]; then
        echo "Generated Verilog files:"
        ls -la *.v *.sv 2>/dev/null || true
        print_success "RTL files listed above"
    else
        print_warning "No Verilog files found in $OUTPUT_DIR/"
    fi
}

# Show RTL file information
show_rtl_info() {
    print_step "Analyzing generated RTL..."
    
    cd "$PROJECT_ROOT/$OUTPUT_DIR"
    
    if [ -f "*.v" ] || [ -f "*.sv" ]; then
        echo "RTL Statistics:"
        for file in *.v *.sv 2>/dev/null; do
            if [ -f "$file" ]; then
                lines=$(wc -l < "$file" 2>/dev/null || echo "0")
                size=$(du -h "$file" 2>/dev/null | cut -f1 || echo "0B")
                echo "  $file: $lines lines, $size"
            fi
        done
        print_success "RTL analysis completed"
    else
        print_warning "No RTL files found to analyze"
    fi
}

# Clean RTL files
clean_rtl() {
    print_step "Cleaning RTL files..."
    
    cd "$PROJECT_ROOT"
    
    if [ -d "$OUTPUT_DIR" ]; then
        rm -rf "$OUTPUT_DIR"
        print_success "RTL files cleaned"
    else
        print_warning "No RTL files to clean"
    fi
}

# Show help
show_help() {
    echo "STONE-SIM Verilog RTL Generation Script"
    echo
    echo "Usage: $0 [OPTION]"
    echo
    echo "Options:"
    echo "  generate  Generate Verilog RTL from Chisel HDL"
    echo "  list      List generated RTL files"
    echo "  info      Show RTL file information and statistics"
    echo "  clean     Clean generated RTL files"
    echo "  help      Show this help message"
    echo
    echo "Examples:"
    echo "  $0 generate     # Generate Verilog RTL"
    echo "  $0 list         # List generated files"
    echo "  $0 info         # Show file statistics"
    echo "  $0 clean        # Clean RTL files"
    echo
    echo "Generated RTL can be used for synthesis, external simulation, or FPGA deployment."
    echo "For testing and simulation with VCD output, use ./test_runner.sh instead."
}

# Main script logic
main() {
    case "${1:-generate}" in
        "generate")
            check_prerequisites
            generate_rtl
            list_rtl_files
            print_success "RTL generation completed. Files available in $OUTPUT_DIR/"
            ;;
        "list")
            list_rtl_files
            ;;
        "info")
            show_rtl_info
            ;;
        "clean")
            clean_rtl
            ;;
        "help"|"-h"|"--help")
            show_help
            ;;
        *)
            print_error "Unknown option: $1"
            show_help
            exit 1
            ;;
    esac
}

# Run main function with all arguments
main "$@"