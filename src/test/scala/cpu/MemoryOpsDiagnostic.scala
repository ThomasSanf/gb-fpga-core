package cpu

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import scala.language.reflectiveCalls

class MemoryOpsDiagnostic extends AnyFlatSpec with ChiselScalatestTester {

  "LD (HL),A" should "show detailed execution" in {
    test(new LR35902_Core()).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x21, 0x0101 -> 0x00, 0x0102 -> 0xC0,  // LD HL, 0xC000
        0x0103 -> 0x3E, 0x0104 -> 0x88,                  // LD A, 0x88
        0x0105 -> 0x77,                                  // LD (HL), A
        0x0106 -> 0x00
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      println("\n=== Testing LD (HL),A - opcode 0x77 ===")
      println("Cycle | PC   | State | M | T | IR | MemAddr | R | W | Data | A  | H  | L  ")
      println("------|------|-------|---|---|----|---------|----|---|------|----|----|----")

      var cycles = 0
      var reachedTarget = false

      while (cycles < 100 && !reachedTarget) {
        val memAddr = dut.io.memAddr.peek().litValue.toInt
        val memRead = dut.io.memRead.peek().litToBoolean
        val memWrite = dut.io.memWrite.peek().litToBoolean
        val pc = dut.io.dbg_pc.peek().litValue.toInt
        val state = dut.io.dbg_state.peek().litValue.toInt
        val mcycle = dut.io.dbg_mcycle.peek().litValue.toInt
        val tcycle = dut.io.dbg_tcycle.peek().litValue.toInt
        val ir = dut.io.dbg_IR.peek().litValue.toInt
        val a = dut.io.dbg_a.peek().litValue.toInt
        val h = dut.io.dbg_h.peek().litValue.toInt
        val l = dut.io.dbg_l.peek().litValue.toInt

        var dataStr = "    "
        if (memRead) {
          val data = memory.getOrElse(memAddr, 0xFF)
          dut.io.memReadData.poke(data.U)
          dataStr = f"R=$data%02X"
        }
        if (memWrite) {
          val data = dut.io.memWriteData.peek().litValue.toInt
          memory(memAddr) = data
          dataStr = f"W=$data%02X"
          println(s"*** MEMORY WRITE: addr=0x${memAddr.toHexString} data=0x${data.toHexString} ***")
        }

        val r = if (memRead) "Y" else "N"
        val w = if (memWrite) "Y" else "N"

        println(f"$cycles%5d | $pc%04X | $state%5d | $mcycle | $tcycle | $ir%02X | $memAddr%7X | $r  | $w | $dataStr | $a%02X | $h%02X | $l%02X")

        dut.clock.step(1)
        cycles += 1

        if (pc == 0x0106 && state == 0) {
          reachedTarget = true
        }
      }

      println(f"\n=== Memory dump around 0xC000 ===")
      for (addr <- 0xBFF8 to 0xC008) {
        val value = memory.getOrElse(addr, -1)
        if (value != -1) {
          println(f"  0x$addr%04X: 0x$value%02X")
        }
      }

      val stored = memory.getOrElse(0xC000, -1)
      println(f"\n=== Result ===")
      println(f"memory[0xC000] = 0x$stored%02X (expected 0x88)")

      assert(stored == 0x88, f"Memory write failed: got 0x$stored%02X")
    }
  }

  "LD A,(HL)" should "show detailed execution" in {
    test(new LR35902_Core()).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x21, 0x0101 -> 0x00, 0x0102 -> 0xC0,  // LD HL, 0xC000
        0x0103 -> 0x7E,                                  // LD A, (HL)
        0x0104 -> 0x00,
        0xC000 -> 0x99                                   // Data to load
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      println("\n=== Testing LD A,(HL) - opcode 0x7E ===")
      println("Cycle | PC   | State | M | T | IR | MemAddr | R | W | Data | A  | H  | L  ")
      println("------|------|-------|---|---|----|---------|----|---|------|----|----|----")

      var cycles = 0
      var reachedTarget = false

      while (cycles < 100 && !reachedTarget) {
        val memAddr = dut.io.memAddr.peek().litValue.toInt
        val memRead = dut.io.memRead.peek().litToBoolean
        val memWrite = dut.io.memWrite.peek().litToBoolean
        val pc = dut.io.dbg_pc.peek().litValue.toInt
        val state = dut.io.dbg_state.peek().litValue.toInt
        val mcycle = dut.io.dbg_mcycle.peek().litValue.toInt
        val tcycle = dut.io.dbg_tcycle.peek().litValue.toInt
        val ir = dut.io.dbg_IR.peek().litValue.toInt
        val a = dut.io.dbg_a.peek().litValue.toInt
        val h = dut.io.dbg_h.peek().litValue.toInt
        val l = dut.io.dbg_l.peek().litValue.toInt

        var dataStr = "    "
        if (memRead) {
          val data = memory.getOrElse(memAddr, 0xFF)
          dut.io.memReadData.poke(data.U)
          dataStr = f"R=$data%02X"
          if (memAddr == 0xC000) {
            println(s"*** MEMORY READ from 0xC000: data=0x${data.toHexString} ***")
          }
        }
        if (memWrite) {
          val data = dut.io.memWriteData.peek().litValue.toInt
          memory(memAddr) = data
          dataStr = f"W=$data%02X"
        }

        val r = if (memRead) "Y" else "N"
        val w = if (memWrite) "Y" else "N"

        println(f"$cycles%5d | $pc%04X | $state%5d | $mcycle | $tcycle | $ir%02X | $memAddr%7X | $r  | $w | $dataStr | $a%02X | $h%02X | $l%02X")

        dut.clock.step(1)
        cycles += 1

        if (pc == 0x0104 && state == 0) {
          reachedTarget = true
        }
      }

      val finalA = dut.io.dbg_a.peek().litValue.toInt
      println(f"\n=== Result ===")
      println(f"A = 0x$finalA%02X (expected 0x99)")

      assert(finalA == 0x99, f"Memory read failed: got 0x$finalA%02X")
    }
  }

  "PUSH BC" should "show detailed execution" in {
    test(new LR35902_Core()).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x01, 0x0101 -> 0x34, 0x0102 -> 0x12,  // LD BC, 0x1234
        0x0103 -> 0xC5,                                  // PUSH BC
        0x0104 -> 0x00
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      println("\n=== Testing PUSH BC - opcode 0xC5 ===")
      println("Cycle | PC   | State | M | T | IR | MemAddr | R | W | Data | B  | C  | SP   ")
      println("------|------|-------|---|---|----|---------|----|---|------|----|----|------")

      var cycles = 0
      var reachedTarget = false

      while (cycles < 150 && !reachedTarget) {
        val memAddr = dut.io.memAddr.peek().litValue.toInt
        val memRead = dut.io.memRead.peek().litToBoolean
        val memWrite = dut.io.memWrite.peek().litToBoolean
        val pc = dut.io.dbg_pc.peek().litValue.toInt
        val state = dut.io.dbg_state.peek().litValue.toInt
        val mcycle = dut.io.dbg_mcycle.peek().litValue.toInt
        val tcycle = dut.io.dbg_tcycle.peek().litValue.toInt
        val ir = dut.io.dbg_IR.peek().litValue.toInt
        val b = dut.io.dbg_b.peek().litValue.toInt
        val c = dut.io.dbg_c.peek().litValue.toInt
        val sp = dut.io.dbg_sp.peek().litValue.toInt

        var dataStr = "    "
        if (memRead) {
          val data = memory.getOrElse(memAddr, 0xFF)
          dut.io.memReadData.poke(data.U)
          dataStr = f"R=$data%02X"
        }
        if (memWrite) {
          val data = dut.io.memWriteData.peek().litValue.toInt
          memory(memAddr) = data
          dataStr = f"W=$data%02X"
          println(s"*** PUSH WRITE: addr=0x${memAddr.toHexString} data=0x${data.toHexString} SP=0x${sp.toHexString} ***")
        }

        val r = if (memRead) "Y" else "N"
        val w = if (memWrite) "Y" else "N"

        println(f"$cycles%5d | $pc%04X | $state%5d | $mcycle | $tcycle | $ir%02X | $memAddr%7X | $r  | $w | $dataStr | $b%02X | $c%02X | $sp%04X")

        dut.clock.step(1)
        cycles += 1

        if (pc == 0x0104 && state == 0) {
          reachedTarget = true
        }
      }

      println(f"\n=== Stack dump ===")
      for (addr <- 0xFFF0 to 0xFFFF) {
        val value = memory.getOrElse(addr, -1)
        if (value != -1) {
          println(f"  0x$addr%04X: 0x$value%02X")
        }
      }

      val finalSP = dut.io.dbg_sp.peek().litValue.toInt
      println(f"\nFinal SP = 0x$finalSP%04X (expected 0xFFFC)")
    }
  }
}