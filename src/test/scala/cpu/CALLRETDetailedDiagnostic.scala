import chisel3._
import chiseltest._
import cpu.LR35902_Core
import org.scalatest.flatspec.AnyFlatSpec

class CALLRETDetailedDiagnostic extends AnyFlatSpec with ChiselScalatestTester {

  "CALL/RET Detailed" should "show execution trace" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        // Main program
        0x0100 -> 0x3E, 0x0101 -> 0x10,                  // LD A, 0x10
        0x0102 -> 0xCD, 0x0103 -> 0x50, 0x0104 -> 0x01,  // CALL 0x0150
        0x0105 -> 0x3C,                                  // INC A (A should be 0x21 after subroutine)
        0x0106 -> 0x00,                                  // NOP (end marker)

        // Subroutine at 0x0150
        0x0150 -> 0x87,                                  // ADD A, A (A = 0x20)
        0x0151 -> 0xC9                                   // RET
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      println("\n=== CALL/RET Detailed Execution Trace ===\n")

      for (cycle <- 0 until 150) {
        val memAddr = dut.io.memAddr.peek().litValue.toInt
        val memRead = dut.io.memRead.peek().litToBoolean
        val memWrite = dut.io.memWrite.peek().litToBoolean

        if (memRead) {
          val data = memory.getOrElse(memAddr, 0xFF)
          dut.io.memReadData.poke(data.U)
        }

        if (memWrite) {
          val data = dut.io.memWriteData.peek().litValue.toInt
          memory(memAddr) = data
        }

        val pc = dut.io.dbg_pc.peek().litValue.toInt
        val state = dut.io.dbg_state.peek().litValue.toInt
        val mcycle = dut.io.dbg_mcycle.peek().litValue.toInt
        val tcycle = dut.io.dbg_tcycle.peek().litValue.toInt
        val ir = dut.io.dbg_IR.peek().litValue.toInt
        val a = dut.io.dbg_a.peek().litValue.toInt
        val sp = dut.io.dbg_sp.peek().litValue.toInt

        val stateNames = Seq("sFetch", "sFetchImm8", "sFetchImm16Lo", "sFetchImm16Hi", "sExec", "sHalt")
        val stateName = if (state < stateNames.length) stateNames(state) else s"Unknown($state)"

        println(f"$cycle%3d: PC=$pc%04X $stateName%-14s M=$mcycle T=$tcycle IR=$ir%02X A=$a%02X SP=$sp%04X")

        dut.clock.step(1)

        // Check if we reached the target after step
        if (pc == 0x0106 && state == 0) {
          println(f"\n✓ Reached target PC=0x0106 in sFetch after $cycle cycles")
          println(f"  Final A = 0x$a%02X (expected 0x21)")
          println(f"  Final SP = 0x$sp%04X (expected 0xFFFE)")
          assert(a == 0x21, f"Expected A=0x21, got 0x$a%02X")
          // Exit the loop early by checking in the loop condition
        }
      }

      // Check final state if we didn't reach target
      val finalPC = dut.io.dbg_pc.peek().litValue.toInt
      val finalState = dut.io.dbg_state.peek().litValue.toInt
      val finalA = dut.io.dbg_a.peek().litValue.toInt

      if (finalPC != 0x0106 || finalState != 0) {
        println(f"\n✗ Did not reach target after 150 cycles")
        println(f"  Final PC = 0x$finalPC%04X (expected 0x0106)")
        println(f"  Final State = $finalState (expected 0=sFetch)")
        println(f"  Final A = 0x$finalA%02X (expected 0x21)")
        assert(false, "Test timed out - did not reach target PC")
      }
    }
  }
}