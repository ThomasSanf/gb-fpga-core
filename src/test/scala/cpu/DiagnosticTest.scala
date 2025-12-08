package cpu

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec
import top.GameBoySoC

class DiagnosticTest extends AnyFreeSpec with ChiselScalatestTester {

  "GameBoySoC Diagnostic - Check Basic Functionality" in {
    test(new GameBoySoC(romSize = 0x8000, romPath = "roms/test.hex"))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

        dut.clock.setTimeout(0)

        println("=" * 80)
        println("Game Boy SoC Diagnostic Test")
        println("=" * 80)
        println()

        // ============================================================
        // TEST 1: Initial State
        // ============================================================
        println("TEST 1: Checking initial register state...")

        val initPC = dut.io.dbg_pc.peek().litValue
        val initA = dut.io.dbg_a.peek().litValue
        val initF = dut.io.dbg_f.peek().litValue
        val initSP = 0xFFFE // Expected from core

        println(f"  PC  = 0x${initPC.toString(16).toUpperCase} (expected: 0x0100)")
        println(f"  A   = 0x${initA.toString(16).toUpperCase} (expected: 0x01)")
        println(f"  F   = 0x${initF.toString(16).toUpperCase} (expected: 0xB0)")

        val test1Pass = initPC == 0x0100 && initA == 0x01
        println(if (test1Pass) "  ✓ PASS" else "  ✗ FAIL")
        println()

        // ============================================================
        // TEST 2: PC Advancement
        // ============================================================
        println("TEST 2: Checking if PC advances...")

        val startPC = dut.io.dbg_pc.peek().litValue
        dut.clock.step(100)
        val endPC = dut.io.dbg_pc.peek().litValue

        println(f"  Start PC = 0x${startPC.toString(16).toUpperCase}")
        println(f"  End PC   = 0x${endPC.toString(16).toUpperCase}")

        val test2Pass = endPC != startPC
        println(if (test2Pass) "  ✓ PASS - PC is advancing" else "  ✗ FAIL - PC is stuck!")
        println()

        // ============================================================
        // TEST 3: Instruction Fetch
        // ============================================================
        println("TEST 3: Checking instruction fetch...")

        var lastIRTest3 = BigInt(0)
        var irChangeCount = 0

        for (i <- 0 until 50) {
          val ir = dut.io.dbg_IR.peek().litValue
          if (ir != lastIRTest3 && ir != 0) {
            irChangeCount += 1
            println(f"  Cycle $i%3d: IR = 0x${ir.toString(16).toUpperCase.padTo(2, '0')}")
          }
          lastIRTest3 = ir
          dut.clock.step(1)
        }

        val test3Pass = irChangeCount > 0
        println(if (test3Pass) f"  ✓ PASS - $irChangeCount instructions fetched"
        else "  ✗ FAIL - No instructions fetched")
        println()

        // ============================================================
        // TEST 4: Register Changes
        // ============================================================
        println("TEST 4: Checking if registers change...")

        val startA = dut.io.dbg_a.peek().litValue
        val startB = dut.io.dbg_b.peek().litValue
        val startC = dut.io.dbg_c.peek().litValue

        dut.clock.step(500)

        val endA = dut.io.dbg_a.peek().litValue
        val endB = dut.io.dbg_b.peek().litValue
        val endC = dut.io.dbg_c.peek().litValue

        val regChanged = (startA != endA) || (startB != endB) || (startC != endC)

        println(f"  A: 0x${startA.toString(16).toUpperCase} → 0x${endA.toString(16).toUpperCase}")
        println(f"  B: 0x${startB.toString(16).toUpperCase} → 0x${endB.toString(16).toUpperCase}")
        println(f"  C: 0x${startC.toString(16).toUpperCase} → 0x${endC.toString(16).toUpperCase}")

        println(if (regChanged) "  ✓ PASS - Registers are changing"
        else "  ⚠ WARNING - Registers unchanged (ROM may have no reg ops)")
        println()

        // ============================================================
        // TEST 5: PPU Operation
        // ============================================================
        println("TEST 5: Checking PPU scanline counter...")

        val startLY = dut.io.dbg_ly.peek().litValue
        dut.clock.step(1000)
        val endLY = dut.io.dbg_ly.peek().litValue

        println(f"  Start LY = $startLY")
        println(f"  End LY   = $endLY")

        val test5Pass = endLY != startLY && endLY <= 153
        println(if (test5Pass) "  ✓ PASS - PPU is running"
        else "  ✗ FAIL - PPU not incrementing LY")
        println()

        // ============================================================
        // TEST 6: Execution Trace
        // ============================================================
        println("TEST 6: Short execution trace...")
        println(f"${"Cycle"}%6s | ${"PC"}%6s | ${"IR"}%4s | ${"State"}%5s | ${"A"}%4s | ${"F"}%4s")
        println("-" * 50)

        for (i <- 0 until 20) {
          val pc = dut.io.dbg_pc.peek().litValue
          val ir = dut.io.dbg_IR.peek().litValue
          val state = dut.io.dbg_state.peek().litValue
          val a = dut.io.dbg_a.peek().litValue
          val f = dut.io.dbg_f.peek().litValue

          println(f"$i%6d | 0x${pc.toString(16).toUpperCase}%4s | 0x${ir.toString(16).toUpperCase.padTo(2, '0')} | $state%5d | 0x${a.toString(16).toUpperCase.padTo(2, '0')} | 0x${f.toString(16).toUpperCase.padTo(2, '0')}")

          dut.clock.step(1)
        }
        println()

        // ============================================================
        // TEST 7: Infinite Loop Detection
        // ============================================================
        println("TEST 7: Checking for infinite loops...")

        var stuck = false
        var stuckPC = BigInt(0)
        var stuckCount = 0
        var lastPCTest7 = dut.io.dbg_pc.peek().litValue

        for (i <- 0 until 1000) {
          val pc = dut.io.dbg_pc.peek().litValue

          if (pc == lastPCTest7) {
            stuckCount += 1
            if (stuckCount == 100) {
              stuck = true
              stuckPC = pc
            }
          } else {
            stuckCount = 0
          }

          lastPCTest7 = pc
          dut.clock.step(1)
        }

        if (stuck) {
          val ir = dut.io.dbg_IR.peek().litValue
          println(f"  ⚠ WARNING: PC stuck at 0x${stuckPC.toString(16).toUpperCase} for 100+ cycles")
          println(f"  Last IR = 0x${ir.toString(16).toUpperCase.padTo(2, '0')}")

          if (ir == 0x76) {
            println("  → HALT instruction (0x76) - expected behavior")
          } else if (ir == 0x18 || ir == 0x20 || ir == 0xC3) {
            println("  → Jump instruction - possible infinite loop in ROM")
          } else {
            println("  → Possible CPU hang or missing instruction implementation")
          }
        } else {
          println("  ✓ PASS - No infinite loops detected")
        }
        println()

        // ============================================================
        // Summary
        // ============================================================
        println("=" * 80)
        println("Diagnostic Summary")
        println("=" * 80)

        val allPassed = test1Pass && test2Pass && test3Pass && test5Pass

        if (allPassed) {
          println("✓ Core functionality appears to be working!")
          println("  Your emulator can likely run simple Game Boy ROMs.")
          println()
          println("Next steps:")
          println("  1. Try running a test ROM (like Blargg's cpu_instrs)")
          println("  2. Check VCD waveform for detailed timing")
          println("  3. Verify all instructions are implemented")
        } else {
          println("✗ Some tests failed - debugging needed")
          println()
          println("Common issues:")
          println("  - Missing microcode implementations")
          println("  - Memory map errors")
          println("  - Bus timing issues")
          println("  - ROM file not loaded properly")
        }

        println("=" * 80)
      }
  }
}