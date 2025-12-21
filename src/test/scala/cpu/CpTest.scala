package cpu

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec

class CpTest extends AnyFreeSpec with ChiselScalatestTester {

  "CP A,n sets flags correctly without modifying A" in {
    test(new LR35902_Core).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      // -----------------------------
      // Simple memory model
      // -----------------------------
      val mem = scala.collection.mutable.Map[Int, Int](
        0x0000 -> 0x3E, // LD A,n
        0x0001 -> 0x12,
        0x0002 -> 0xFE, // CP n
        0x0003 -> 0x12,
        0x0004 -> 0x00  // NOP
      )

      def memRead(addr: Int): Int =
        mem.getOrElse(addr, 0x00)

      // -----------------------------
      // Run CPU for N cycles
      // -----------------------------
      def stepCPU(cycles: Int): Unit = {
        for (_ <- 0 until cycles) {
          val addr = dut.io.memAddr.peek().litValue.toInt
          dut.io.memReadData.poke(memRead(addr).U)
          dut.clock.step()
        }
      }

      // -----------------------------
      // Reset
      // -----------------------------
      dut.reset.poke(true.B)
      dut.clock.step(2)
      dut.reset.poke(false.B)

      // -----------------------------
      // Execute program
      // -----------------------------
      stepCPU(40) // Enough cycles for LD + CP + NOP

      // -----------------------------
      // Check results
      // -----------------------------
      dut.io.dbg_a.expect(0x12.U)

      val F = dut.io.dbg_f.peek().litValue.toInt

      val Z = (F >> 7) & 1
      val N = (F >> 6) & 1
      val H = (F >> 5) & 1
      val C = (F >> 4) & 1

      assert(Z == 1, "Z flag should be set")
      assert(N == 1, "N flag should be set")
      assert(H == 0, "H flag should be clear")
      assert(C == 0, "C flag should be clear")
    }
  }
}
