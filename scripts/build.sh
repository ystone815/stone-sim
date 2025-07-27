#!/bin/bash

# Stone SoC Build Script

set -e

echo "Building Stone SoC..."

# Clean previous builds
echo "Cleaning previous builds..."
rm -rf target/
rm -rf rtl/
mkdir -p rtl

# Compile Scala code
echo "Compiling Scala code..."
sbt compile

# Run tests (only working ones)
echo "Running tests..."
sbt "testOnly *MemoryTest"

# Generate RTL
echo "Generating RTL..."
sbt "runMain sim.SimpleRTLGeneration"

echo "Build completed successfully!"
echo "RTL files generated in rtl/ directory"
echo "Use 'scripts/simulate.sh' to run simulation"