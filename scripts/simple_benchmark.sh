#!/bin/bash

# Simple STONE-SIM Performance Measurement

echo "=================================================="
echo "STONE-SIM Performance Benchmark"
echo "=================================================="
echo

# Test different cycle counts
cycles_tests=(1000 5000 10000 50000)

for cycles in "${cycles_tests[@]}"; do
    echo "Testing with $cycles cycles..."
    
    start_time=$(date +%s%3N)
    TEST_CYCLES=$cycles timeout 60 sbt -no-colors "testOnly *BasicSoCTest" > /dev/null 2>&1
    end_time=$(date +%s%3N)
    
    if [[ $? -eq 0 ]]; then
        duration=$((end_time - start_time))
        cycles_per_sec=$((cycles * 1000 / duration))
        khz=$((cycles_per_sec / 1000))
        
        echo "  ✓ $cycles cycles in ${duration}ms"
        echo "  → Performance: $cycles_per_sec cycles/sec ($khz kHz)"
    else
        echo "  ✗ Test failed or timed out"
    fi
    echo
done

echo "Testing Memory performance..."
start_time=$(date +%s%3N)
TEST_CYCLES=10000 timeout 30 sbt -no-colors "testOnly *MemoryOnlyTest" > /dev/null 2>&1
end_time=$(date +%s%3N)

if [[ $? -eq 0 ]]; then
    duration=$((end_time - start_time))
    cycles_per_sec=$((10000 * 1000 / duration))
    khz=$((cycles_per_sec / 1000))
    
    echo "  ✓ Memory: 10000 cycles in ${duration}ms"
    echo "  → Memory Performance: $cycles_per_sec cycles/sec ($khz kHz)"
else
    echo "  ✗ Memory test failed"
fi
echo

echo "Testing CPU performance..."
start_time=$(date +%s%3N)
TEST_CYCLES=5000 timeout 30 sbt -no-colors "testOnly *CPUOnlyTest" > /dev/null 2>&1
end_time=$(date +%s%3N)

if [[ $? -eq 0 ]]; then
    duration=$((end_time - start_time))
    cycles_per_sec=$((5000 * 1000 / duration))
    khz=$((cycles_per_sec / 1000))
    
    echo "  ✓ CPU: 5000 cycles in ${duration}ms"
    echo "  → CPU Performance: $cycles_per_sec cycles/sec ($khz kHz)"
else
    echo "  ✗ CPU test failed"
fi

echo
echo "Benchmark completed!"