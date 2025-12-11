import chisel3._
import chiseltest._
import cpu.LR35902_Core
import org.scalatest.flatspec.AnyFlatSpec

class InstructionTests extends AnyFlatSpec with ChiselScalatestTester {

  def runUntilPC(dut: LR35902_Core, memory: scala.collection.mutable.Map[Int, Int],
                 targetPC: Int, maxCycles: Int = 200, debug: Boolean = true): Int = {
    var cycles = 0

    while (cycles < maxCycles) {
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

      if (debug && cycles < 50) {
        val pc = dut.io.dbg_pc.peek().litValue.toInt
        val state = dut.io.dbg_state.peek().litValue.toInt
        val mcycle = dut.io.dbg_mcycle.peek().litValue.toInt
        val tcycle = dut.io.dbg_tcycle.peek().litValue.toInt
        val ir = dut.io.dbg_IR.peek().litValue.toInt
        val a = dut.io.dbg_a.peek().litValue.toInt
        println(f"$cycles%3d: PC=$pc%04X S=$state M=$mcycle T=$tcycle IR=$ir%02X A=$a%02X")
      }

      val pc = dut.io.dbg_pc.peek().litValue.toInt
      val state = dut.io.dbg_state.peek().litValue.toInt

      if (pc == targetPC && state == 0) {
        if (debug) println(f"Reached PC 0x$targetPC%04X after $cycles cycles")
        return cycles
      }

      dut.clock.step(1)
      cycles += 1
    }

    if (debug) {
      val pc = dut.io.dbg_pc.peek().litValue.toInt
      println(f"TIMEOUT: PC=0x$pc%04X after $maxCycles cycles")
    }
    cycles
  }

  "LD A,n" should "load immediate into A" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0x42,  // LD A, 0x42
        0x0102 -> 0x00                   // NOP (marker)
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      val cycles = runUntilPC(dut, memory, 0x0102)
      assert(cycles < 200, "Timed out")

      val a = dut.io.dbg_a.peek().litValue.toInt
      assert(a == 0x42, f"Expected A=0x42, got 0x$a%02X")
    }
  }

  "LD r,r" should "copy between registers" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0xAB,  // LD A, 0xAB
        0x0102 -> 0x47,                  // LD B, A
        0x0103 -> 0x00
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0103)

      val a = dut.io.dbg_a.peek().litValue.toInt
      val b = dut.io.dbg_b.peek().litValue.toInt
      assert(a == 0xAB, f"Expected A=0xAB, got 0x$a%02X")
      assert(b == 0xAB, f"Expected B=0xAB, got 0x$b%02X")
    }
  }

  "INC A" should "increment A correctly" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0x10,  // LD A, 0x10
        0x0102 -> 0x3C,                  // INC A
        0x0103 -> 0x00
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0103)

      val a = dut.io.dbg_a.peek().litValue.toInt
      assert(a == 0x11, f"Expected A=0x11, got 0x$a%02X")
    }
  }

  "DEC A" should "decrement A correctly" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0x10,  // LD A, 0x10
        0x0102 -> 0x3D,                  // DEC A
        0x0103 -> 0x00
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0103)

      val a = dut.io.dbg_a.peek().litValue.toInt
      assert(a == 0x0F, f"Expected A=0x0F, got 0x$a%02X")
    }
  }

  "ADD A,B" should "add registers" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0x10,  // LD A, 0x10
        0x0102 -> 0x06, 0x0103 -> 0x05,  // LD B, 0x05
        0x0104 -> 0x80,                  // ADD A, B
        0x0105 -> 0x00
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0105, debug = false)

      val a = dut.io.dbg_a.peek().litValue.toInt
      assert(a == 0x15, f"Expected A=0x15, got 0x$a%02X")
    }
  }

  "XOR A,A" should "clear A" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0xFF,  // LD A, 0xFF
        0x0102 -> 0xAF,                  // XOR A, A
        0x0103 -> 0x00
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0103, debug = false)

      val a = dut.io.dbg_a.peek().litValue.toInt
      val f = dut.io.dbg_f.peek().litValue.toInt
      assert(a == 0x00, f"Expected A=0x00, got 0x$a%02X")
      // Z flag should be set (bit 7)
      assert((f & 0x80) != 0, "Z flag should be set")
    }
  }

  "JP nn" should "jump to absolute address" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0xC3, 0x0101 -> 0x50, 0x0102 -> 0x01,  // JP 0x0150
        0x0103 -> 0x3E, 0x0104 -> 0xBD,                  // LD A, 0xBD (skip)
        0x0150 -> 0x3E, 0x0151 -> 0x42,                  // LD A, 0x42
        0x0152 -> 0x00
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0152, debug = false)

      val a = dut.io.dbg_a.peek().litValue.toInt
      val pc = dut.io.dbg_pc.peek().litValue.toInt
      assert(a == 0x42, f"Expected A=0x42, got 0x$a%02X (should skip 0xBD)")
      assert(pc == 0x0152, f"Expected PC=0x0152, got 0x$pc%04X")
    }
  }

  "JR e" should "jump relative" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x18, 0x0101 -> 0x02,  // JR +2 (skip next 2 bytes)
        0x0102 -> 0x3E, 0x0103 -> 0xBD,  // LD A, 0xBD (skip)
        0x0104 -> 0x3E, 0x0105 -> 0x99,  // LD A, 0x99
        0x0106 -> 0x00
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0106, debug = false)

      val a = dut.io.dbg_a.peek().litValue.toInt
      assert(a == 0x99, f"Expected A=0x99, got 0x$a%02X")
    }
  }

  "LD (HL),A" should "store A to memory" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x21, 0x0101 -> 0x00, 0x0102 -> 0xC0,  // LD HL, 0xC000
        0x0103 -> 0x3E, 0x0104 -> 0x88,                  // LD A, 0x88
        0x0105 -> 0x77,                                  // LD (HL), A
        0x0106 -> 0x00
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0106, maxCycles = 300, debug = false)

      val stored = memory.getOrElse(0xC000, -1)
      assert(stored == 0x88, f"Expected memory[0xC000]=0x88, got 0x$stored%02X")
    }
  }

  "LD A,(HL)" should "load from memory" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x21, 0x0101 -> 0x00, 0x0102 -> 0xC0,  // LD HL, 0xC000
        0x0103 -> 0x7E,                                  // LD A, (HL)
        0x0104 -> 0x00,
        0xC000 -> 0x99                                   // Data
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0104, maxCycles = 300, debug = false)

      val a = dut.io.dbg_a.peek().litValue.toInt
      assert(a == 0x99, f"Expected A=0x99, got 0x$a%02X")
    }
  }

  "PUSH/POP BC" should "save and restore" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x01, 0x0101 -> 0x34, 0x0102 -> 0x12,  // LD BC, 0x1234
        0x0103 -> 0xC5,                                  // PUSH BC
        0x0104 -> 0x01, 0x0105 -> 0x00, 0x0106 -> 0x00,  // LD BC, 0x0000
        0x0107 -> 0xC1,                                  // POP BC
        0x0108 -> 0x00
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0108, maxCycles = 400, debug = false)

      val b = dut.io.dbg_b.peek().litValue.toInt
      val c = dut.io.dbg_c.peek().litValue.toInt
      assert(b == 0x12, f"Expected B=0x12, got 0x$b%02X")
      assert(c == 0x34, f"Expected C=0x34, got 0x$c%02X")
    }
  }
}