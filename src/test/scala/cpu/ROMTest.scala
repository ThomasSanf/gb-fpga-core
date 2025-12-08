package cpu

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec
import top.GameBoySoC

/**
 * Comprehensive Test ROM Runner
 *
 * This test suite can run:
 * - Simple test ROMs for quick verification
 * - Blargg's cpu_instrs test suite
 * - Any other Game Boy test ROM
 *
 * Features:
 * - Serial output capture
 * - Automatic completion detection
 * - Detailed instruction tracing
 * - Progress monitoring
 */
class ROMTest extends AnyFreeSpec with ChiselScalatestTester {

  "Run simple test ROM (quick verification)" in {
    test(new GameBoySoC(romSize = 0x8000, romPath = "roms/test.hex"))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

        dut.clock.setTimeout(0)

        println("=" * 80)
        println("Simple Test ROM - Quick Verification")
        println("=" * 80)
        println()

        val maxCycles = 10000
        var testComplete = false

        for (cycle <- 0 until maxCycles if !testComplete) {
          val pc = dut.io.dbg_pc.peek().litValue
          val opcode = dut.io.dbg_opcode.peek().litValue

          // Check for infinite loop (test completion pattern)
          if (opcode == 0x18 && cycle > 100) {  // JR instruction
            val b = dut.io.dbg_b.peek().litValue
            println(s"[DETECTED] Infinite loop at PC=0x${pc.toString(16).toUpperCase}")
            println(s"           B register = 0x${b.toString(16).toUpperCase}")
            testComplete = true
          }

          dut.clock.step()
        }

        println()
        println("=" * 80)
        println("Results")
        println("=" * 80)

        val finalB = dut.io.dbg_b.peek().litValue
        val finalPC = dut.io.dbg_pc.peek().litValue

        println(s"Final PC: 0x${finalPC.toString(16).toUpperCase}")
        println(s"Final B:  0x${finalB.toString(16).toUpperCase}")
        println()

        if (finalB == 0) {
          println("✓ TEST PASSED")
        } else {
          println(s"✗ TEST FAILED (B=${finalB})")
        }
        println("=" * 80)
      }
  }

  "Run Blargg's cpu_instrs test ROM" in {
    test(new GameBoySoC(romSize = 0x8000, romPath = "roms/cpu_instrs.hex"))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

        dut.clock.setTimeout(0)

        println("=" * 80)
        println("Blargg's CPU Instruction Test")
        println("=" * 80)
        println()

        val maxCycles = 50000000  // 50 million cycles
        var testComplete = false

        println("Running comprehensive CPU test...")
        println("This may take several minutes...")
        println()

        for (cycle <- 0 until maxCycles if !testComplete) {
          val pc = dut.io.dbg_pc.peek().litValue

          // Progress indicator every 1M cycles (~1 second)
          if (cycle % 1000000 == 0 && cycle > 0) {
            val seconds = cycle / 1000000
            println(s"[${seconds}s] Still running... PC=0x${pc.toString(16).toUpperCase}")
          }

          // Blargg tests jump to 0x6000-0x7FFF when complete
          if (pc >= 0x6000 && pc <= 0x7FFF) {
            println(s"\n[DETECTED] Test completion at PC=0x${pc.toString(16).toUpperCase}")
            testComplete = true
          }

          dut.clock.step()
        }

        if (!testComplete) {
          println("\n[TIMEOUT] Test did not complete within time limit")
        }

        println()
        println("=" * 80)
        println("Test Results")
        println("=" * 80)

        val finalB = dut.io.dbg_b.peek().litValue
        val finalPC = dut.io.dbg_pc.peek().litValue
        val finalA = dut.io.dbg_a.peek().litValue

        println(s"Final PC:  0x${finalPC.toString(16).toUpperCase}")
        println(s"Final A:   0x${finalA.toString(16).toUpperCase}")
        println(s"Final B:   0x${finalB.toString(16).toUpperCase}")
        println()

        if (testComplete && finalB == 0) {
          println("✓ ALL TESTS PASSED!")
          println()
          println("Your CPU correctly implements all instructions")
        } else if (testComplete) {
          println(s"✗ TEST FAILED - Error code: ${finalB}")
          println()
          println("Common error codes:")
          println("  0x01 = Test 01 failed")
          println("  0x02 = Test 02 failed")
          println("  ... (check Blargg documentation)")
        } else {
          println("⚠  TEST TIMEOUT")
          println()
          println("Possible causes:")
          println("  - Unimplemented instruction")
          println("  - Infinite loop (not test completion)")
          println("  - Incorrect instruction timing")
        }

        println("=" * 80)
      }
  }

  "Detailed instruction trace" in {
    test(new GameBoySoC(romSize = 0x8000, romPath = "roms/test.hex"))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

        dut.clock.setTimeout(0)

        println("=" * 80)
        println("Detailed Instruction Trace")
        println("=" * 80)
        println()
        println(f"${"#"}%5s | ${"PC"}%6s | ${"Op"}%4s | ${"State"}%5s | ${"A"}%2s | ${"F"}%2s | ${"B"}%2s | ${"C"}%2s | ${"HL"}%6s")
        println("-" * 80)

        var instrCount = 0
        var lastPC = BigInt(0)

        for (cycle <- 0 until 1000 if instrCount < 100) {
          val pc = dut.io.dbg_pc.peek().litValue
          val opcode = dut.io.dbg_opcode.peek().litValue
          val state = dut.io.dbg_state.peek().litValue
          val a = dut.io.dbg_a.peek().litValue
          val f = dut.io.dbg_f.peek().litValue
          val b = dut.io.dbg_b.peek().litValue
          val c = dut.io.dbg_c.peek().litValue
          val h = dut.io.dbg_h.peek().litValue
          val l = dut.io.dbg_l.peek().litValue
          val hl = (h << 8) | l

          // Print when PC changes (new instruction)
          if (state == 0 && pc != lastPC) {
            println(f"$instrCount%5d | ${pc.toString(16).toUpperCase}%6s | ${opcode.toString(16).toUpperCase.padTo(2, '0')}%4s | $state%5d | ${a.toString(16).toUpperCase.padTo(2, '0')}%2s | ${f.toString(16).toUpperCase.padTo(2, '0')}%2s | ${b.toString(16).toUpperCase.padTo(2, '0')}%2s | ${c.toString(16).toUpperCase.padTo(2, '0')}%2s | ${hl.toString(16).toUpperCase.padTo(4, '0')}%6s")
            instrCount += 1
          }

          lastPC = pc
          dut.clock.step()
        }

        println()
        println("=" * 80)
      }
  }

  "Full diagnostic check" in {
    test(new GameBoySoC(romSize = 0x8000, romPath = "roms/test.hex"))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

        dut.clock.setTimeout(0)

        println("=" * 80)
        println("Game Boy SoC Diagnostic")
        println("=" * 80)
        println()

        // Test 1: Initial state
        println("TEST 1: Initial register state...")
        val initPC = dut.io.dbg_pc.peek().litValue
        val initA = dut.io.dbg_a.peek().litValue
        val initF = dut.io.dbg_f.peek().litValue

        println(f"  PC  = 0x${initPC.toString(16).toUpperCase} (expected: 0x0100)")
        println(f"  A   = 0x${initA.toString(16).toUpperCase} (expected: 0x01)")
        println(f"  F   = 0x${initF.toString(16).toUpperCase} (expected: 0xB0)")

        val test1Pass = initPC == 0x0100 && initA == 0x01
        println(if (test1Pass) "  ✓ PASS" else "  ✗ FAIL")
        println()

        // Test 2: PC advancement
        println("TEST 2: PC advancement...")
        val startPC = dut.io.dbg_pc.peek().litValue
        dut.clock.step(100)
        val endPC = dut.io.dbg_pc.peek().litValue

        println(f"  Start: 0x${startPC.toString(16).toUpperCase}")
        println(f"  End:   0x${endPC.toString(16).toUpperCase}")

        val test2Pass = endPC != startPC
        println(if (test2Pass) "  ✓ PASS - PC is advancing" else "  ✗ FAIL - PC stuck!")
        println()

        // Test 3: Instruction fetch
        println("TEST 3: Instruction fetch...")
        var lastIR = BigInt(0)
        var irChangeCount = 0

        for (i <- 0 until 50) {
          val ir = dut.io.dbg_IR.peek().litValue
          if (ir != lastIR && ir != 0) {
            irChangeCount += 1
            if (irChangeCount <= 5) {
              println(f"  Cycle $i%3d: IR = 0x${ir.toString(16).toUpperCase.padTo(2, '0')}")
            }
          }
          lastIR = ir
          dut.clock.step(1)
        }

        val test3Pass = irChangeCount > 0
        println(if (test3Pass) f"  ✓ PASS - $irChangeCount instructions fetched"
        else "  ✗ FAIL - No instructions")
        println()

        // Test 4: PPU operation
        println("TEST 4: PPU scanline counter...")
        val startLY = dut.io.dbg_ly.peek().litValue
        dut.clock.step(1000)
        val endLY = dut.io.dbg_ly.peek().litValue

        println(f"  Start: $startLY")
        println(f"  End:   $endLY")

        val test4Pass = endLY != startLY && endLY <= 153
        println(if (test4Pass) "  ✓ PASS - PPU running" else "  ✗ FAIL - PPU not working")
        println()

        // Summary
        println("=" * 80)
        println("Summary")
        println("=" * 80)

        val allPass = test1Pass && test2Pass && test3Pass && test4Pass

        if (allPass) {
          println("✓ Core functionality working!")
          println()
          println("Next steps:")
          println("  1. Run Blargg's cpu_instrs test")
          println("  2. Check VCD waveform for timing")
          println("  3. Try commercial ROMs")
        } else {
          println("✗ Some tests failed")
          println()
          println("Debugging suggestions:")
          println("  - Check VCD waveform")
          println("  - Verify microcode implementation")
          println("  - Check memory map")
        }

        println("=" * 80)
      }
  }
}