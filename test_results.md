# STONE-SIM Test Report

**Generated**: 2025-07-27 17:33:02  
**Backend**: Verilator  
**Project**: SynThetic On-chip Network SIMulator

## Available Test Suites

### simtop - SimTopTest
Top-level simulation and integration

```bash
./scripts/test_runner.sh simtop
```

### basic - BasicSoCTest
Basic SoC functionality and instantiation

```bash
./scripts/test_runner.sh basic
```

### performance - PerformanceTest
Performance benchmarking and stress tests

```bash
./scripts/test_runner.sh performance
```

### cpu - CPUOnlyTest
CPU component and instruction execution

```bash
./scripts/test_runner.sh cpu
```

### memory - MemoryOnlyTest
Memory system and cache operations

```bash
./scripts/test_runner.sh memory
```

## Quick Commands

```bash
# Run all tests
./scripts/test_runner.sh all

# Run quick validation
./scripts/test_runner.sh quick

# Run performance tests
./scripts/test_runner.sh stress

# List available tests
./scripts/test_runner.sh list
```

## Test File Structure

`-rw-r--r-- 1 stone stone 4666  7월 27 17:28 /home/stone/project/stone-sim/src/test/scala/BasicSoCTest.scala`
`-rw-r--r-- 1 stone stone 2466  7월 27 17:28 /home/stone/project/stone-sim/src/test/scala/CPUOnlyTest.scala`
`-rw-r--r-- 1 stone stone 3432  7월 27 17:29 /home/stone/project/stone-sim/src/test/scala/MemoryOnlyTest.scala`
`-rw-r--r-- 1 stone stone 4161  7월 27 17:29 /home/stone/project/stone-sim/src/test/scala/PerformanceTest.scala`
`-rw-r--r-- 1 stone stone 2791  7월 27 17:29 /home/stone/project/stone-sim/src/test/scala/SimTopTest.scala`
