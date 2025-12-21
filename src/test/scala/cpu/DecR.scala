package cpu

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class DecR extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "DEC r"

  it should "decrement register and set flags correctly" in {
    test(new LR35902_Core).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      // -------------------------------
      // Simple instruction ROM
      // -------------------------------
      val program = Map(
        0x0000 -> 0x06, // LD B,0x02
        0x0001 -> 0x02,
        0x0002 -> 0x05, // DEC B
        0x0003 -> 0x05, // DEC B
        0x0004 -> 0x00  // NOP
      )

      // Drive memory read data correctly
      dut.io.memReadData.poke(0.U)

      def driveMem(): Unit = {
        if (dut.io.memRead.peek().litToBoolean) {
          val addr = dut.io.memAddr.peek().litValue.toInt
          val data = program.getOrElse(addr, 0x00)
          dut.io.memReadData.poke(data.U)
        }
      }

      // Step one cycle with memory hooked up
      def step(): Unit = {
        driveMem()
        dut.clock.step()
      }

      // Step enough cycles for an instruction
      def stepInstr(): Unit = {
        (0 until 8).foreach(_ => step())
      }

      // -------------------------------
      // Execute program
      // -------------------------------
      stepInstr() // LD B,2
      dut.io.dbg_b.expect(2.U)

      stepInstr() // DEC B -> 1
      dut.io.dbg_b.expect(1.U)
      dut.io.dbg_f.expect("b01000000".U) // N=1

      stepInstr() // DEC B -> 0
      dut.io.dbg_b.expect(0.U)
      dut.io.dbg_f.expect("b11000000".U) // Z=1, N=1
    }
  }
}
