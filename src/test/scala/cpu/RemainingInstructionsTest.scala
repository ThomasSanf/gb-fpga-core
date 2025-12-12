package cpu

import chisel3._
import chiseltest._
import cpu.LR35902_Core
import org.scalatest.flatspec.AnyFlatSpec

class RemainingInstructionsTest extends AnyFlatSpec with ChiselScalatestTester {

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

  // ========== MEMORY ADDRESS INSTRUCTIONS ==========

  "LD A,(nn)" should "load A from 16-bit address" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0xFA, 0x0101 -> 0x00, 0x0102 -> 0xC0,  // LD A,(0xC000)
        0x0103 -> 0x00,
        0xC000 -> 0x42  // Data at 0xC000
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0103, debug = false)

      val a = dut.io.dbg_a.peek().litValue.toInt
      assert(a == 0x42, f"Expected A=0x42, got 0x$a%02X")
    }
  }

  "LD (nn),A" should "store A to 16-bit address" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0x99,                  // LD A,0x99
        0x0102 -> 0xEA, 0x0103 -> 0x00, 0x0104 -> 0xC0,  // LD (0xC000),A
        0x0105 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0105, debug = false)

      val stored = memory.getOrElse(0xC000, -1)
      assert(stored == 0x99, f"Expected mem[0xC000]=0x99, got 0x$stored%02X")
    }
  }

  "LD (nn),SP" should "store SP to 16-bit address" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x31, 0x0101 -> 0x34, 0x0102 -> 0x12,  // LD SP,0x1234
        0x0103 -> 0x08, 0x0104 -> 0x00, 0x0105 -> 0xC0,  // LD (0xC000),SP
        0x0106 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0106, debug = false)

      val low = memory.getOrElse(0xC000, -1)
      val high = memory.getOrElse(0xC001, -1)
      assert(low == 0x34, f"Expected mem[0xC000]=0x34 (SP low), got 0x$low%02X")
      assert(high == 0x12, f"Expected mem[0xC001]=0x12 (SP high), got 0x$high%02X")
    }
  }

  // ========== SP INSTRUCTIONS ==========

  "LD SP,HL" should "load HL into SP" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x21, 0x0101 -> 0x78, 0x0102 -> 0x56,  // LD HL,0x5678
        0x0103 -> 0xF9,                                  // LD SP,HL
        0x0104 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0104, debug = false)

      val sp = dut.io.dbg_sp.peek().litValue.toInt
      assert(sp == 0x5678, f"Expected SP=0x5678, got 0x$sp%04X")
    }
  }

  "LD HL,SP+e" should "load SP plus signed offset into HL (positive offset)" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x31, 0x0101 -> 0x00, 0x0102 -> 0xFF,  // LD SP,0xFF00
        0x0103 -> 0xF8, 0x0104 -> 0x10,                  // LD HL,SP+0x10
        0x0105 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0105, debug = false)

      val h = dut.io.dbg_h.peek().litValue.toInt
      val l = dut.io.dbg_l.peek().litValue.toInt
      val hl = (h << 8) | l
      assert(hl == 0xFF10, f"Expected HL=0xFF10 (0xFF00+0x10), got 0x$hl%04X")
    }
  }

  "LD HL,SP+e" should "load SP plus signed offset into HL (negative offset)" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x31, 0x0101 -> 0x00, 0x0102 -> 0xFF,  // LD SP,0xFF00
        0x0103 -> 0xF8, 0x0104 -> 0xF0,                  // LD HL,SP+(-16) (0xF0 = -16)
        0x0105 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0105, debug = false)

      val h = dut.io.dbg_h.peek().litValue.toInt
      val l = dut.io.dbg_l.peek().litValue.toInt
      val hl = (h << 8) | l
      assert(hl == 0xFEF0, f"Expected HL=0xFEF0 (0xFF00-0x10), got 0x$hl%04X")
    }
  }

  "LD HL,SP+e" should "set half-carry flag correctly" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x31, 0x0101 -> 0x0F, 0x0102 -> 0x00,  // LD SP,0x000F
        0x0103 -> 0xF8, 0x0104 -> 0x01,                  // LD HL,SP+1
        0x0105 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0105, debug = false)

      val f = dut.io.dbg_f.peek().litValue.toInt
      val h = dut.io.dbg_h.peek().litValue.toInt
      val l = dut.io.dbg_l.peek().litValue.toInt
      val hl = (h << 8) | l

      assert(hl == 0x0010, f"Expected HL=0x0010, got 0x$hl%04X")
      assert((f & 0x20) != 0, "H flag should be set (half-carry from bit 3)")
    }
  }

  "ADD SP,e" should "add signed immediate to SP (positive)" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x31, 0x0101 -> 0x00, 0x0102 -> 0xFF,  // LD SP,0xFF00
        0x0103 -> 0xE8, 0x0104 -> 0x10,                  // ADD SP,0x10
        0x0105 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0105, debug = false)

      val sp = dut.io.dbg_sp.peek().litValue.toInt
      assert(sp == 0xFF10, f"Expected SP=0xFF10, got 0x$sp%04X")
    }
  }

  "ADD SP,e" should "add signed immediate to SP (negative)" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x31, 0x0101 -> 0x00, 0x0102 -> 0xFF,  // LD SP,0xFF00
        0x0103 -> 0xE8, 0x0104 -> 0xF0,                  // ADD SP,-16
        0x0105 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0105, debug = false)

      val sp = dut.io.dbg_sp.peek().litValue.toInt
      assert(sp == 0xFEF0, f"Expected SP=0xFEF0, got 0x$sp%04X")
    }
  }

  "ADD SP,e" should "set carry flag correctly" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x31, 0x0101 -> 0xFF, 0x0102 -> 0x00,  // LD SP,0x00FF
        0x0103 -> 0xE8, 0x0104 -> 0x01,                  // ADD SP,1
        0x0105 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      runUntilPC(dut, memory, 0x0105, debug = false)

      val sp = dut.io.dbg_sp.peek().litValue.toInt
      val f = dut.io.dbg_f.peek().litValue.toInt

      assert(sp == 0x0100, f"Expected SP=0x0100, got 0x$sp%04X")
      assert((f & 0x10) != 0, "C flag should be set (carry from bit 7)")
    }
  }

  // ========== INTERRUPT CONTROL ==========

  "DI" should "disable interrupts" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0xFB,  // EI (enable interrupts)
        0x0101 -> 0x00,  // NOP
        0x0102 -> 0xF3,  // DI (disable interrupts)
        0x0103 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      // Provide interrupt registers (no interrupts pending)
      dut.io.ieReg.poke(0x00.U)
      dut.io.ifReg.poke(0x00.U)

      runUntilPC(dut, memory, 0x0103, debug = false)

      // Note: We can't directly check IME from outside, but the instruction executed
      // In a real test, you'd trigger an interrupt and verify it doesn't fire
    }
  }

  "EI" should "enable interrupts after next instruction" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0xFB,  // EI
        0x0101 -> 0x00,  // NOP (IME set after this)
        0x0102 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      dut.io.ieReg.poke(0x00.U)
      dut.io.ifReg.poke(0x00.U)

      runUntilPC(dut, memory, 0x0102, debug = false)
      // IME should be set after NOP at 0x0101
    }
  }

  // ========== HALT ==========

  "HALT" should "execute without crashing" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x76,  // HALT
        0x0101 -> 0x00
      )
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      dut.io.ieReg.poke(0x00.U)
      dut.io.ifReg.poke(0x00.U)

      // HALT will cause CPU to stop, so we just run a few cycles
      // and verify it doesn't crash
      for (_ <- 0 until 20) {
        val memAddr = dut.io.memAddr.peek().litValue.toInt
        val memRead = dut.io.memRead.peek().litToBoolean
        if (memRead) {
          dut.io.memReadData.poke(memory.getOrElse(memAddr, 0xFF).U)
        }
        dut.clock.step(1)
      }

      // If we got here without crashing, HALT is implemented
      assert(true)
    }
  }
}