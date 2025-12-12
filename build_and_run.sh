#!/bin/bash
# build_and_run.sh - Build Verilator simulation for GameBoySoC

set -e

echo "╔═══════════════════════════════════════════════════╗"
echo "║   Game Boy FPGA Build Script                      ║"
echo "║   Chisel → Verilog → Verilator → C++ → SDL        ║"
echo "╚═══════════════════════════════════════════════════╝"
echo ""

# Check for dependencies
echo "[*] Checking dependencies..."
if ! command -v verilator &> /dev/null; then
    echo "ERROR: verilator not found. Install with: sudo apt-get install verilator"
    exit 1
fi

if ! pkg-config --exists sdl2; then
    echo "ERROR: SDL2 not found. Install with: sudo apt-get install libsdl2-dev"
    exit 1
fi

echo "[✓] Dependencies OK"
echo ""

# Step 1: Generate Verilog from Chisel
echo "[1/4] Generating Verilog from Chisel..."
echo "      Running: sbt 'runMain top.GameBoySoCMain'"
sbt "runMain top.GameBoySoCMain" 2>&1 | grep -v "^\[" | grep -v "^$" || true

if [ ! -f "generated/GameBoySoC.v" ]; then
    echo "ERROR: Verilog generation failed. Check that GameBoySoCMain exists."
    exit 1
fi

echo "[✓] Verilog generated: generated/GameBoySoC.v"
echo ""

# Step 2: Run Verilator
echo "[2/4] Running Verilator..."
echo "      This may take a minute..."

verilator --cc --exe --build \
    -O3 \
    --x-assign fast \
    --x-initial fast \
    --noassert \
    -Wno-fatal \
    -Wno-WIDTH \
    -Wno-CASEINCOMPLETE \
    -Wno-BLKANDNBLK \
    --top-module GameBoySoC \
    generated/GameBoySoC.v \
    gameboy_sim.cpp \
    -CFLAGS "-std=c++11 $(pkg-config --cflags sdl2) -I. -Wno-unused-parameter" \
    -LDFLAGS "$(pkg-config --libs sdl2)" \
    2>&1 | grep -E "(Warning|Error|%)" || echo "[✓] Verilator compilation complete"

if [ ! -f "obj_dir/VGameBoySoC" ]; then
    echo "ERROR: Verilator build failed"
    exit 1
fi

echo "[✓] Executable created: obj_dir/VGameBoySoC"
echo ""

# Step 3: Build info
echo "[3/4] Build complete!"
echo "      Executable: obj_dir/VGameBoySoC"
echo "      Size: $(du -h obj_dir/VGameBoySoC | cut -f1)"
echo ""

# Step 4: Run
if [ "$1" == "--no-run" ]; then
    echo "[4/4] Skipping execution (--no-run flag)"
    echo ""
    echo "To run manually:"
    echo "  ./obj_dir/VGameBoySoC"
else
    echo "[4/4] Running emulator..."
    echo ""
    ./obj_dir/VGameBoySoC
fi
