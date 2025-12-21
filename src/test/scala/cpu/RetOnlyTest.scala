package cpu

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class RetOnlyTest extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "RET instruction (pure IO)"

  it should "pop PC from stack correctly" in {
    test(new LR35902_Core).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      // -------------------------
      // Disable interrupts
      // -------------------------
      dut.io.ieReg.poke(0.U)
      dut.io.ifReg.poke(0.U)

      // -------------------------
      // Reset
      // -------------------------
      dut.reset.poke(true.B)
      dut.clock.step(1)
      dut.reset.poke(false.B)

      // -------------------------
      // Simple memory model
      // -------------------------
      def mem(addr: Int): Int = addr match {
        // Program
        case 0x0000 => 0x31 // LD SP, imm16
        case 0x0001 => 0xFC
        case 0x0002 => 0xFF
        case 0x0003 => 0xC9 // RET

        // Stack
        case 0xFFFC => 0x03 // low byte
        case 0xFFFD => 0x01 // high byte

        case _ => 0x00
      }

      // Drive memory
      fork {
        while (true) {
          if (dut.io.memRead.peek().litToBoolean) {
            val a = dut.io.memAddr.peek().litValue.toInt
            dut.io.memReadData.poke(mem(a).U)
          }
          dut.clock.step(1)
        }
      }

      // -------------------------
      // Run enough cycles
      // -------------------------
      dut.clock.step(30)

      // -------------------------
      // Check result
      // -------------------------
      dut.io.dbg_pc.expect("h0103".U)
      dut.io.dbg_sp.expect("hFFFE".U)
    }
  }
}
