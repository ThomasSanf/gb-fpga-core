package cpu

import chisel3._
import chiseltest._
import cpu.LR35902_Core
import org.scalatest.flatspec.AnyFlatSpec

class InstructionTests extends AnyFlatSpec with ChiselScalatestTester {

  def runUntilPC(dut: LR35902_Core, memory: scala.collection.mutable.Map[Int, Int],
                 targetPC: Int, maxCycles: Int = 500, debug: Boolean = false): Int = {
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

      if (debug && cycles < 100) {
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

  // ========== EXISTING TESTS (from your file) ==========

  "LD A,n" should "load immediate into A" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0x42,
        0x0102 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      val cycles = runUntilPC(dut, memory, 0x0102, debug = false)
      assert(cycles < 500, "Timed out")

      val a = dut.io.dbg_a.peek().litValue.toInt
      assert(a == 0x42, f"Expected A=0x42, got 0x$a%02X")
    }
  }

  "CALL/RET" should "execute subroutine and return" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0x10,
        0x0102 -> 0xCD, 0x0103 -> 0x50, 0x0104 -> 0x01,
        0x0105 -> 0x3C,
        0x0106 -> 0x00,
        0x0150 -> 0x87,
        0x0151 -> 0xC9
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0106, maxCycles = 500, debug = false)

      val a = dut.io.dbg_a.peek().litValue.toInt
      val sp = dut.io.dbg_sp.peek().litValue.toInt

      assert(a == 0x21, f"Expected A=0x21, got 0x$a%02X")
      assert(sp == 0xFFFE, f"Expected SP=0xFFFE, got 0x$sp%04X")
    }
  }

  // ========== NEW CB PREFIX TESTS ==========

  "CB RLC B" should "rotate B left circular" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x06, 0x0101 -> 0x85,  // LD B, 0x85 (10000101)
        0x0102 -> 0xCB, 0x0103 -> 0x00,  // RLC B
        0x0104 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0104, debug = false)

      val b = dut.io.dbg_b.peek().litValue.toInt
      val f = dut.io.dbg_f.peek().litValue.toInt

      assert(b == 0x0B, f"Expected B=0x0B (00001011), got 0x$b%02X")
      assert((f & 0x10) != 0, "Carry flag should be set (bit 7 was 1)")
    }
  }

  "CB RRC C" should "rotate C right circular" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x0E, 0x0101 -> 0x81,  // LD C, 0x81 (10000001)
        0x0102 -> 0xCB, 0x0103 -> 0x09,  // RRC C
        0x0104 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0104, debug = false)

      val c = dut.io.dbg_c.peek().litValue.toInt
      val f = dut.io.dbg_f.peek().litValue.toInt

      assert(c == 0xC0, f"Expected C=0xC0 (11000000), got 0x$c%02X")
      assert((f & 0x10) != 0, "Carry flag should be set (bit 0 was 1)")
    }
  }

  "CB RL A" should "rotate A left through carry" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0x80,  // LD A, 0x80
        0x0102 -> 0x37,                  // SCF (set carry flag)
        0x0103 -> 0xCB, 0x0104 -> 0x17,  // RL A
        0x0105 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0105, debug = false)

      val a = dut.io.dbg_a.peek().litValue.toInt
      val f = dut.io.dbg_f.peek().litValue.toInt

      assert(a == 0x01, f"Expected A=0x01 (carry shifted in), got 0x$a%02X")
      assert((f & 0x10) != 0, "Carry flag should be set (bit 7 was 1)")
    }
  }

  "CB RR D" should "rotate D right through carry" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x16, 0x0101 -> 0x01,  // LD D, 0x01
        0x0102 -> 0x37,                  // SCF
        0x0103 -> 0xCB, 0x0104 -> 0x1A,  // RR D
        0x0105 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0105, debug = false)

      val d = dut.io.dbg_d.peek().litValue.toInt
      assert(d == 0x80, f"Expected D=0x80 (carry shifted in), got 0x$d%02X")
    }
  }

  "CB SLA E" should "shift E left arithmetic" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x1E, 0x0101 -> 0xFF,  // LD E, 0xFF
        0x0102 -> 0xCB, 0x0103 -> 0x23,  // SLA E
        0x0104 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0104, debug = false)

      val e = dut.io.dbg_e.peek().litValue.toInt
      val f = dut.io.dbg_f.peek().litValue.toInt

      assert(e == 0xFE, f"Expected E=0xFE, got 0x$e%02X")
      assert((f & 0x10) != 0, "Carry flag should be set")
    }
  }

  "CB SRA H" should "shift H right arithmetic (preserve sign)" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x26, 0x0101 -> 0x8A,  // LD H, 0x8A (negative)
        0x0102 -> 0xCB, 0x0103 -> 0x2C,  // SRA H
        0x0104 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0104, debug = false)

      val h = dut.io.dbg_h.peek().litValue.toInt
      assert(h == 0xC5, f"Expected H=0xC5 (sign preserved), got 0x$h%02X")
    }
  }

  "CB SWAP L" should "swap high and low nibbles of L" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x2E, 0x0101 -> 0xF0,  // LD L, 0xF0
        0x0102 -> 0xCB, 0x0103 -> 0x35,  // SWAP L
        0x0104 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0104, debug = false)

      val l = dut.io.dbg_l.peek().litValue.toInt
      assert(l == 0x0F, f"Expected L=0x0F, got 0x$l%02X")
    }
  }

  "CB SRL A" should "shift A right logical" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0x8F,  // LD A, 0x8F
        0x0102 -> 0xCB, 0x0103 -> 0x3F,  // SRL A
        0x0104 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0104, debug = false)

      val a = dut.io.dbg_a.peek().litValue.toInt
      val f = dut.io.dbg_f.peek().litValue.toInt

      assert(a == 0x47, f"Expected A=0x47 (zero shifted in), got 0x$a%02X")
      assert((f & 0x10) != 0, "Carry flag should be set")
    }
  }

  "CB BIT 7,A" should "test bit 7 of A" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0x80,  // LD A, 0x80 (bit 7 = 1)
        0x0102 -> 0xCB, 0x0103 -> 0x7F,  // BIT 7,A
        0x0104 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0104, debug = false)

      val f = dut.io.dbg_f.peek().litValue.toInt
      assert((f & 0x80) == 0, "Z flag should be clear (bit 7 is set)")
      assert((f & 0x20) != 0, "H flag should be set")
    }
  }

  "CB BIT 3,B" should "test bit 3 of B (clear bit)" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x06, 0x0101 -> 0xF7,  // LD B, 0xF7 (bit 3 = 0)
        0x0102 -> 0xCB, 0x0103 -> 0x58,  // BIT 3,B
        0x0104 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0104, debug = false)

      val f = dut.io.dbg_f.peek().litValue.toInt
      assert((f & 0x80) != 0, "Z flag should be set (bit 3 is clear)")
      assert((f & 0x20) != 0, "H flag should be set")
    }
  }

  "CB RES 6,C" should "clear bit 6 of C" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x0E, 0x0101 -> 0xFF,  // LD C, 0xFF
        0x0102 -> 0xCB, 0x0103 -> 0xB1,  // RES 6,C
        0x0104 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0104, debug = false)

      val c = dut.io.dbg_c.peek().litValue.toInt
      assert(c == 0xBF, f"Expected C=0xBF (bit 6 cleared), got 0x$c%02X")
    }
  }

  "CB SET 5,D" should "set bit 5 of D" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x16, 0x0101 -> 0x00,  // LD D, 0x00
        0x0102 -> 0xCB, 0x0103 -> 0xEA,  // SET 5,D
        0x0104 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0104, debug = false)

      val d = dut.io.dbg_d.peek().litValue.toInt
      assert(d == 0x20, f"Expected D=0x20 (bit 5 set), got 0x$d%02X")
    }
  }

  "CB RLC (HL)" should "rotate memory at (HL) left circular" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x21, 0x0101 -> 0x00, 0x0102 -> 0xC0,  // LD HL, 0xC000
        0x0103 -> 0x36, 0x0104 -> 0x85,                  // LD (HL), 0x85
        0x0105 -> 0xCB, 0x0106 -> 0x06,                  // RLC (HL)
        0x0107 -> 0x00,
        0xC000 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0107, debug = false)

      val result = memory.getOrElse(0xC000, -1)
      assert(result == 0x0B, f"Expected mem[0xC000]=0x0B, got 0x$result%02X")
    }
  }

  "CB BIT 4,(HL)" should "test bit 4 of memory at (HL)" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x21, 0x0101 -> 0x00, 0x0102 -> 0xC0,  // LD HL, 0xC000
        0x0103 -> 0xCB, 0x0104 -> 0x66,                  // BIT 4,(HL)
        0x0105 -> 0x00,
        0xC000 -> 0x10  // bit 4 is set
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0105, debug = false)

      val f = dut.io.dbg_f.peek().litValue.toInt
      assert((f & 0x80) == 0, "Z flag should be clear (bit 4 is set)")
    }
  }

  "CB RES 2,(HL)" should "clear bit 2 of memory at (HL)" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x21, 0x0101 -> 0x00, 0x0102 -> 0xC0,  // LD HL, 0xC000
        0x0103 -> 0xCB, 0x0104 -> 0x96,                  // RES 2,(HL)
        0x0105 -> 0x00,
        0xC000 -> 0xFF
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0105, debug = false)

      val result = memory.getOrElse(0xC000, -1)
      assert(result == 0xFB, f"Expected mem[0xC000]=0xFB (bit 2 cleared), got 0x$result%02X")
    }
  }

  "CB SET 7,(HL)" should "set bit 7 of memory at (HL)" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x21, 0x0101 -> 0x00, 0x0102 -> 0xC0,  // LD HL, 0xC000
        0x0103 -> 0xCB, 0x0104 -> 0xFE,                  // SET 7,(HL)
        0x0105 -> 0x00,
        0xC000 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0105, debug = false)

      val result = memory.getOrElse(0xC000, -1)
      assert(result == 0x80, f"Expected mem[0xC000]=0x80 (bit 7 set), got 0x$result%02X")
    }
  }

  // ========== ADDITIONAL COVERAGE TESTS ==========

  "SCF" should "set carry flag" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x37,  // SCF
        0x0101 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0101, debug = false)

      val f = dut.io.dbg_f.peek().litValue.toInt
      assert((f & 0x10) != 0, "Carry flag should be set")
      assert((f & 0x40) == 0, "N flag should be clear")
      assert((f & 0x20) == 0, "H flag should be clear")
    }
  }

  "CCF" should "complement carry flag" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x37,  // SCF (set carry)
        0x0101 -> 0x3F,  // CCF (complement carry)
        0x0102 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0102, debug = false)

      val f = dut.io.dbg_f.peek().litValue.toInt
      assert((f & 0x10) == 0, "Carry flag should be clear after CCF")
    }
  }

  "CPL" should "complement A" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0x35,  // LD A, 0x35
        0x0102 -> 0x2F,                  // CPL
        0x0103 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0103, debug = false)

      val a = dut.io.dbg_a.peek().litValue.toInt
      assert(a == 0xCA, f"Expected A=0xCA (~0x35), got 0x$a%02X")
    }
  }

  "DAA" should "adjust A for BCD" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0x09,  // LD A, 0x09
        0x0102 -> 0xC6, 0x0103 -> 0x09,  // ADD A, 0x09 (A = 0x12)
        0x0104 -> 0x27,                  // DAA (A should be 0x18 in BCD)
        0x0105 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0105, debug = false)

      val a = dut.io.dbg_a.peek().litValue.toInt
      assert(a == 0x18, f"Expected A=0x18 (BCD adjusted), got 0x$a%02X")
    }
  }
}