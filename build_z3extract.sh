#!/bin/bash
# Build script for z3extract backend in P4C
# This script initializes, builds, and runs the z3extract backend

set -e  # Exit on any error

echo "=== P4C z3extract Backend Build Script ==="

# Step 1: Initialize build directory and configure with CMake
echo "Step 1: Configuring build with CMake..."
cd p4c
mkdir -p build
cd build
cmake .. -DENABLE_DESUGAR=ON -DENABLE_TEST_TOOLS=ON
#  -DENABLE_CONTROL_PLANE=ON

# Step 2: Build the z3extract target
echo "Step 2: Building z3extract..."
make z3extract -j$(nproc)

# Step 3: Test the executable
echo "Step 3: Testing z3extract executable..."
./backends/z3extract/z3extract ../../minimal.p4

echo "=== Build and test completed successfully! ==="
echo "z3extract executable location: $(pwd)/backends/z3extract/z3extract"