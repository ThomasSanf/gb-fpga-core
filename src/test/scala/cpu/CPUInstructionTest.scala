package cpu

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec
import top.GameBoySoC

class CPUInstructionTest extends AnyFreeSpec with ChiselScalatestTester {

  "GameBoySoC should run Blargg's cpu_instrs test ROM" in {
    test(new GameBoySoC(romSize = 0x8000, romPath = "roms/cpu_instrs.hex"))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

        dut.clock.setTimeout(0)

        println("=" * 80)
        println("Blargg's CPU Instruction Test ROM")
        println("=" * 80)
        println()

        val maxCycles = 10000000  // 10 million cycles
        var testComplete = false

        println("Running test ROM... (this may take a while)")
        println()

        for (cycle <- 0 until maxCycles if !testComplete) {
          val pc = dut.io.dbg_pc.peek().litValue
          val b  = dut.io.dbg_b.peek().litValue

          // Print progress every 100k cycles
          if (cycle % 100000 == 0 && cycle > 0) {
            println(s"Cycle ${cycle/1000}k: PC=0x${pc.toString(16)} B=0x${b.toString(16)}")
          }

          // Check for completion
          if (pc >= 0x6000.U.litValue && pc <= 0x7FFF.U.litValue) {
            testComplete = true
          }

          dut.clock.step()
        }

        println()
        println("=" * 80)
        println("Test Results")
        println("=" * 80)

        val finalPC = dut.io.dbg_pc.peek().litValue
        val finalB = dut.io.dbg_b.peek().litValue

        println(s"Final PC = 0x${finalPC.toString(16)}")
        println(s"Final B  = 0x${finalB.toString(16)}")
        println()

        if (testComplete) {
          if (finalB == 0) {
            println("✅ TEST PASSED!")
          } else {
            println(s"❌ TEST FAILED - Error code: $finalB")
          }
        } else {
          println("⚠️  TEST TIMEOUT")
        }

        println("=" * 80)
      }
  }

  "GameBoySoC detailed instruction trace" in {
    test(new GameBoySoC(romSize = 0x8000, romPath = "roms/cpu_instrs.hex"))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

        dut.clock.setTimeout(0)

        println("=" * 80)
        println("Detailed Instruction Trace (First 50 Instructions)")
        println("=" * 80)
        println()

        var lastPC = BigInt(0)
        var instrCount = 0

        for (cycle <- 0 until 1000 if instrCount < 50) {
          val pc = dut.io.dbg_pc.peek().litValue
          val ir = dut.io.dbg_IR.peek().litValue
          val state = dut.io.dbg_state.peek().litValue

          // Only print when PC changes (new instruction)
          if (pc != lastPC) {
            println(s"Instr $instrCount: PC=0x${pc.toString(16)} IR=0x${ir.toString(16)} State=$state")
            instrCount += 1
          }

          lastPC = pc
          dut.clock.step()
        }

        println()
        println("=" * 80)
      }
  }
}