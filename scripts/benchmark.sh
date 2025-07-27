#!/bin/bash

# STONE-SIM Performance Benchmark Script
# Measures simulation performance in cycles/second

set -e

PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

# Colors
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
CYAN='\033[0;36m'
NC='\033[0m'

print_header() {
    echo -e "${BLUE}=================================================="
    echo -e "STONE-SIM Performance Benchmark"
    echo -e "SynThetic On-chip Network SIMulator"
    echo -e "==================================================${NC}"
}

benchmark_component() {
    local component="$1"
    local cycles="$2"
    local description="$3"
    
    echo -e "${CYAN}[BENCHMARK]${NC} Testing $component with $cycles cycles"
    echo -e "  Description: $description"
    
    cd "$PROJECT_ROOT"
    
    local start_time=$(date +%s%3N)  # milliseconds
    
    # Run the test with specified cycles
    TEST_CYCLES="$cycles" sbt -no-colors "testOnly *${component}*" > /tmp/benchmark_output.log 2>&1
    local exit_code=$?
    
    local end_time=$(date +%s%3N)
    local duration=$((end_time - start_time))
    
    if [[ $exit_code -eq 0 ]]; then
        local cycles_per_sec=$(echo "scale=1; $cycles * 1000 / $duration" | bc -l)
        local khz=$(echo "scale=1; $cycles_per_sec / 1000" | bc -l)
        
        echo -e "  ${GREEN}✓${NC} Duration: ${duration}ms"
        echo -e "  ${GREEN}✓${NC} Performance: ${cycles_per_sec} cycles/sec (${khz} kHz)"
        
        # Extract any additional performance info from the test
        if grep -q "cycles/sec" /tmp/benchmark_output.log; then
            local reported_perf=$(grep "cycles/sec" /tmp/benchmark_output.log | tail -1)
            echo -e "  ${YELLOW}ℹ${NC} Test reported: $reported_perf"
        fi
        
        echo "$cycles_per_sec"
    else
        echo -e "  ${RED}✗${NC} Test failed"
        echo "0"
    fi
    echo
}

main() {
    print_header
    echo
    
    # Check if bc is available for calculations
    if ! command -v bc &> /dev/null; then
        echo -e "${RED}Error: bc calculator not found. Install with: sudo apt install bc${NC}"
        exit 1
    fi
    
    echo -e "${YELLOW}Starting comprehensive performance benchmark...${NC}"
    echo
    
    # Test different components with varying cycle counts
    local results=()
    
    # Basic SoC test
    results+=($(benchmark_component "BasicSoC" "50000" "Full SoC with all components"))
    
    # CPU only test  
    results+=($(benchmark_component "CPUOnly" "30000" "CPU pipeline and instruction execution"))
    
    # Memory only test
    results+=($(benchmark_component "MemoryOnly" "20000" "Memory controller and cache"))
    
    # Performance test (stress test)
    results+=($(benchmark_component "Performance" "100000" "Extended stress testing"))
    
    # Calculate statistics
    echo -e "${BLUE}=== BENCHMARK SUMMARY ===${NC}"
    echo
    
    local total=0
    local count=0
    local max=0
    local min=999999999
    
    for result in "${results[@]}"; do
        if [[ $(echo "$result > 0" | bc -l) -eq 1 ]]; then
            total=$(echo "$total + $result" | bc -l)
            count=$((count + 1))
            
            if [[ $(echo "$result > $max" | bc -l) -eq 1 ]]; then
                max=$result
            fi
            
            if [[ $(echo "$result < $min" | bc -l) -eq 1 ]]; then
                min=$result
            fi
        fi
    done
    
    if [[ $count -gt 0 ]]; then
        local avg=$(echo "scale=1; $total / $count" | bc -l)
        local avg_khz=$(echo "scale=1; $avg / 1000" | bc -l)
        local max_khz=$(echo "scale=1; $max / 1000" | bc -l)
        local min_khz=$(echo "scale=1; $min / 1000" | bc -l)
        
        echo -e "  Average Performance: ${GREEN}${avg} cycles/sec${NC} (${avg_khz} kHz)"
        echo -e "  Peak Performance:    ${GREEN}${max} cycles/sec${NC} (${max_khz} kHz)"
        echo -e "  Minimum Performance: ${YELLOW}${min} cycles/sec${NC} (${min_khz} kHz)"
        echo
        
        # Performance rating
        if [[ $(echo "$avg > 10000" | bc -l) -eq 1 ]]; then
            echo -e "  Rating: ${GREEN}Excellent${NC} - Ready for complex SoC simulation"
        elif [[ $(echo "$avg > 5000" | bc -l) -eq 1 ]]; then
            echo -e "  Rating: ${YELLOW}Good${NC} - Suitable for moderate complexity designs"
        elif [[ $(echo "$avg > 1000" | bc -l) -eq 1 ]]; then
            echo -e "  Rating: ${YELLOW}Fair${NC} - Basic functionality testing"
        else
            echo -e "  Rating: ${RED}Needs Optimization${NC} - Consider performance tuning"
        fi
        
        echo
        echo -e "${CYAN}Benchmark completed successfully!${NC}"
    else
        echo -e "${RED}No successful test runs${NC}"
    fi
    
    # Cleanup
    rm -f /tmp/benchmark_output.log
}

# Show help
if [[ "${1:-}" == "-h" || "${1:-}" == "--help" ]]; then
    echo "STONE-SIM Performance Benchmark"
    echo
    echo "Usage: $0"
    echo
    echo "This script measures the simulation performance of different"
    echo "STONE-SIM components and provides a comprehensive report."
    echo
    echo "Requirements:"
    echo "  - bc calculator (sudo apt install bc)"
    echo "  - Compiled STONE-SIM project"
    echo
    exit 0
fi

main "$@"