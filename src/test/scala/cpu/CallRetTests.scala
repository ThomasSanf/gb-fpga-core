package cpu

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class CallRetTests extends AnyFlatSpec with ChiselScalatestTester {

  def run(dut: LR35902_Core,
          mem: scala.collection.mutable.Map[Int, Int],
          cycles: Int = 200): Unit = {

    for (_ <- 0 until cycles) {
      val addr = dut.io.memAddr.peek().litValue.toInt
      val rd   = dut.io.memRead.peek().litToBoolean
      val wr   = dut.io.memWrite.peek().litToBoolean

      if (rd) {
        dut.io.memReadData.poke(mem.getOrElse(addr, 0xFF).U)
      }

      if (wr) {
        val data = dut.io.memWriteData.peek().litValue.toInt
        mem(addr) = data
      }

      dut.clock.step(1)
    }
  }


  // ============================================================
  // TEST 1: CALL → RET simple
  // ============================================================
  "CALL/RET" should "push return address and jump, then return correctly" in {
    test(new LR35902_Core()) { dut =>

      // Memory layout:
      //
      // 0100: CD 05 01    CALL 0105
      // 0103: 00          (should never run until RET)
      // 0104: 00
      // 0105: C9          RET
      // After RET → PC = 0103

      val mem = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0xCD,  // CALL
        0x0101 -> 0x05,
        0x0102 -> 0x01,
        0x0103 -> 0x00,  // NOP (return destination)
        0x0105 -> 0xC9   // RET
      )

      // Reset
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      // Run some cycles
      run(dut, mem, 300)

      val sp = dut.io.dbg_sp.peek().litValue.toInt
      val pc = dut.io.dbg_pc.peek().litValue.toInt

      // EXPECTATIONS:
      //
      // CALL pushes return address = 0103 (opcode was at 0100, so PC+3)
      // Stack:
      //  [SP-1] = high byte = 0x01
      //  [SP-2] = low byte  = 0x03
      //
      // RET pops these and sets PC = 0103

      assert(pc == 0x0103, f"RET should return to 0x0103, got PC=0x$pc%04X")

      val low  = mem.getOrElse(sp, -1)
      val high = mem.getOrElse(sp+1, -1)

      println(f"Stack top low=$low%02X high=$high%02X sp=0x$sp%04X")

      // No strict SP check here → SP logic varies by core design
      // But we check the return PC only
    }
    // ============================================================
    // TEST 2: PUSH + POP
    // ============================================================
    "Push and Pop BC" should "store and restore registers correctly" in {
      test(new LR35902_Core()) { dut =>

        // Program:
        // 0100: 01 34 12   LD BC, 1234
        // 0103: C5         PUSH BC
        // 0104: 01 00 00   LD BC, 0000
        // 0107: C1         POP BC
        // After POP: B=12, C=34

        val mem = scala.collection.mutable.Map[Int, Int](
          0x0100 -> 0x01, 0x0101 -> 0x34, 0x0102 -> 0x12, // LD BC,1234
          0x0103 -> 0xC5,                                // PUSH BC
          0x0104 -> 0x01, 0x0105 -> 0x00, 0x0106 -> 0x00, // LD BC,0
          0x0107 -> 0xC1                                 // POP BC
        )

        // Reset
        dut.reset.poke(true.B)
        dut.clock.step(5)
        dut.reset.poke(false.B)

        run(dut, mem, 400)

        val b = dut.io.dbg_b.peek().litValue.toInt
        val c = dut.io.dbg_c.peek().litValue.toInt

        assert(b == 0x12, f"B should be 0x12, got 0x$b%02X")
        assert(c == 0x34, f"C should be 0x34, got 0x$c%02X")
      }
    }

    // ============================================================
    // TEST 3: Nested CALLs
    // ============================================================
    "Nested CALL/RET" should "unwind stack correctly" in {
      test(new LR35902_Core()) { dut =>

        // Program:
        //
        // 0100: CD 05 01    CALL 0105
        // 0103: 00          NOP  (final return point)
        //
        // 0105: CD 08 01    CALL 0108
        // 0108: C9          RET
        // 0109: C9          RET (return to 0103)

        val mem = scala.collection.mutable.Map[Int, Int](
          0x0100 -> 0xCD, 0x0101 -> 0x05, 0x0102 -> 0x01,
          0x0103 -> 0x00,
          0x0105 -> 0xCD, 0x0106 -> 0x08, 0x0107 -> 0x01,
          0x0108 -> 0xC9,
          0x0109 -> 0xC9
        )

        dut.reset.poke(true.B)
        dut.clock.step(5)
        dut.reset.poke(false.B)

        run(dut, mem, 600)

        val pc = dut.io.dbg_pc.peek().litValue.toInt
        assert(pc == 0x0103, f"Expected PC to return to 0x0103, got 0x$pc%04X")
      }
    }
  }
}
