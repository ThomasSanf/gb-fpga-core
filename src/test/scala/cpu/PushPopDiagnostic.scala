import chisel3._
import chiseltest._
import cpu.LR35902_Core
import org.scalatest.flatspec.AnyFlatSpec

class PushPopDiagnostic extends AnyFlatSpec with ChiselScalatestTester {

  def runUntilPC(dut: LR35902_Core, memory: scala.collection.mutable.Map[Int, Int],
                 targetPC: Int, maxCycles: Int = 400, debug: Boolean = true): Int = {
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
        if (debug && cycles < 100) {
          println(f"  WRITE: mem[$memAddr%04X] = $data%02X")
        }
      }

      if (debug && cycles < 100) {
        val pc = dut.io.dbg_pc.peek().litValue.toInt
        val state = dut.io.dbg_state.peek().litValue.toInt
        val mcycle = dut.io.dbg_mcycle.peek().litValue.toInt
        val tcycle = dut.io.dbg_tcycle.peek().litValue.toInt
        val ir = dut.io.dbg_IR.peek().litValue.toInt
        val a = dut.io.dbg_a.peek().litValue.toInt
        val b = dut.io.dbg_b.peek().litValue.toInt
        val c = dut.io.dbg_c.peek().litValue.toInt
        val sp = dut.io.dbg_sp.peek().litValue.toInt
        println(f"$cycles%3d: PC=$pc%04X S=$state M=$mcycle T=$tcycle IR=$ir%02X A=$a%02X B=$b%02X C=$c%02X SP=$sp%04X")
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

  "PUSH/POP BC" should "save and restore correctly" in {
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

      println("\n=== Running PUSH/POP test ===")
      runUntilPC(dut, memory, 0x0108, maxCycles = 400, debug = true)

      val b = dut.io.dbg_b.peek().litValue.toInt
      val c = dut.io.dbg_c.peek().litValue.toInt
      val sp = dut.io.dbg_sp.peek().litValue.toInt

      println(f"\nFinal state:")
      println(f"  B = 0x$b%02X (expected 0x12)")
      println(f"  C = 0x$c%02X (expected 0x34)")
      println(f"  SP = 0x$sp%04X (expected 0xFFFE)")

      println(f"\nStack contents:")
      println(f"  mem[0xFFFD] = 0x${memory.getOrElse(0xFFFD, -1)}%02X (should be 0x12 = B)")
      println(f"  mem[0xFFFC] = 0x${memory.getOrElse(0xFFFC, -1)}%02X (should be 0x34 = C)")

      assert(b == 0x12, f"Expected B=0x12, got 0x$b%02X")
      assert(c == 0x34, f"Expected C=0x34, got 0x$c%02X")
    }
  }
}