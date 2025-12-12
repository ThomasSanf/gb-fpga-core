package cpu

import chisel3._
import chiseltest._
import cpu.LR35902_Core
import org.scalatest.flatspec.AnyFlatSpec

class StackMemoryDiagnostic extends AnyFlatSpec with ChiselScalatestTester {

  "Stack Memory" should "show CALL/RET memory operations" in {
    test(new LR35902_Core()) { dut =>
      val memory = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0x10,                  // LD A, 0x10
        0x0102 -> 0xCD, 0x0103 -> 0x50, 0x0104 -> 0x01,  // CALL 0x0150
        0x0105 -> 0x3C,                                  // INC A
        0x0106 -> 0x00,
        0x0150 -> 0x87,                                  // ADD A, A
        0x0151 -> 0xC9                                   // RET
      )

      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      println("\n=== Stack Memory Diagnostic ===\n")

      for (cycle <- 0 until 80) {
        val memAddr = dut.io.memAddr.peek().litValue.toInt
        val memRead = dut.io.memRead.peek().litToBoolean
        val memWrite = dut.io.memWrite.peek().litToBoolean
        val ir = dut.io.dbg_IR.peek().litValue.toInt
        val pc = dut.io.dbg_pc.peek().litValue.toInt
        val mcycle = dut.io.dbg_mcycle.peek().litValue.toInt
        val tcycle = dut.io.dbg_tcycle.peek().litValue.toInt

        if (memRead) {
          val data = memory.getOrElse(memAddr, 0xFF)
          dut.io.memReadData.poke(data.U)

          if (ir == 0xC9 && memAddr >= 0xFFFC) {
            println(f"$cycle%3d: RET M=$mcycle T=$tcycle READ  mem[$memAddr%04X] = 0x$data%02X")
          }
        }

        if (memWrite) {
          val data = dut.io.memWriteData.peek().litValue.toInt
          memory(memAddr) = data

          // Log all writes to stack area
          if (memAddr >= 0xFFFA && memAddr <= 0xFFFE) {
            val writeData = dut.io.memWriteData.peek().litValue.toInt
            val pcVal = dut.io.dbg_pc.peek().litValue.toInt
            println(f"$cycle%3d: IR=$ir%02X M=$mcycle T=$tcycle WRITE mem[$memAddr%04X] = 0x$writeData%02X (PC=$pcVal%04X)")
          }
        }

        dut.clock.step(1)
      }

      println(f"\n=== Final Stack Contents ===")
      println(f"mem[0xFFFD] = 0x${memory.getOrElse(0xFFFD, -1)}%02X (should be 0x01)")
      println(f"mem[0xFFFC] = 0x${memory.getOrElse(0xFFFC, -1)}%02X (should be 0x05)")
      println(f"Return address should be 0x0105")
    }
  }
}