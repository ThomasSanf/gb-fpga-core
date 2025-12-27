package cpu

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class LDHTest extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "LDH instruction"

  it should "tell whether LDH uses FF80 or (wrongly) 0080" in {
    test(new LR35902_Core).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      // -------------------------------
      // Program (put it at 0x0100)
      // 0100: 3E 33    LD A, 0x33
      // 0102: E0 80    LDH (0x80), A   ; write to FF80
      // 0104: 3E 00    LD A, 0x00
      // 0106: F0 80    LDH A, (0x80)   ; read back from FF80
      // 0108: 00       NOP
      // -------------------------------
      val program = scala.collection.mutable.Map[Int, Int](
        0x0100 -> 0x3E, 0x0101 -> 0x33,
        0x0102 -> 0xE0, 0x0103 -> 0x80,
        0x0104 -> 0x3E, 0x0105 -> 0x00,
        0x0106 -> 0xF0, 0x0107 -> 0x80,
        0x0108 -> 0x00
      )

      // 🔥 Sentinel: if LDH mistakenly uses 0x0080 instead of 0xFF80, you'll read 0x42
      program(0x0080) = 0x42

      // HRAM model
      val hram = scala.collection.mutable.Map[Int, Int]()

      // For cycle-by-cycle event capture
      var cycle = 0L
      var lastRead: Option[(Int, Int)] = None   // (addr, data)
      var lastWrite: Option[(Int, Int)] = None  // (addr, data)

      dut.io.memReadData.poke(0.U)

      def driveMem(): Unit = {
        lastRead = None
        lastWrite = None

        val rd = dut.io.memRead.peek().litToBoolean
        val wr = dut.io.memWrite.peek().litToBoolean
        val addr = dut.io.memAddr.peek().litValue.toInt

        // Writes (capture before edge)
        if (wr) {
          val data = dut.io.memWriteData.peek().litValue.toInt
          lastWrite = Some((addr, data))
          if (addr >= 0xFF80 && addr <= 0xFFFE) hram(addr) = data
        }

        // Reads (combinational return in this stub)
        if (rd) {
          val data =
            if (addr >= 0xFF80 && addr <= 0xFFFE) hram.getOrElse(addr, 0xEE) // 0xEE = "uninitialized HRAM"
            else program.getOrElse(addr, 0x00)

          dut.io.memReadData.poke(data.U)
          lastRead = Some((addr, data))
        }
      }

      def stepOne(): Unit = {
        // log before stepping (this is when addr/rd/wr are meaningful)
        val pc = dut.io.dbg_pc.peek().litValue.toInt
        val a  = dut.io.dbg_a.peek().litValue.toInt

        driveMem()

        lastRead.foreach { case (ad, d) =>
          println(f"[C$cycle%05d] PC=0x$pc%04X  RD  addr=0x$ad%04X  data=0x$d%02X  A=0x$a%02X")
        }
        lastWrite.foreach { case (ad, d) =>
          println(f"[C$cycle%05d] PC=0x$pc%04X  WR  addr=0x$ad%04X  data=0x$d%02X  A=0x$a%02X")
        }

        dut.clock.step()
        cycle += 1
      }

      def runUntil(pred: => Boolean, maxCycles: Int = 5000): Unit = {
        var i = 0
        while (!pred && i < maxCycles) { stepOne(); i += 1 }
        assert(i < maxCycles, "Timeout waiting for condition")
      }

      // Reset (if your core uses implicit reset this is still safe)
      dut.reset.poke(true.B)
      dut.clock.step(5)
      dut.reset.poke(false.B)

      println("=" * 70)
      println("LDH discriminator test (FF80 vs 0080)")
      println("=" * 70)

      // 1) Wait until CPU fetches from 0x0100 (optional, but helps confirm start)
      // If your PC doesn't start at 0x0100, you'll immediately see fetches elsewhere in the log.
      // (No assertion here; just visibility.)

      // 2) Wait for the HRAM write to happen (LDH (0x80),A should write to 0xFF80)
      runUntil(lastWrite.exists(_._1 == 0xFF80), maxCycles = 5000)
      val (wAddr, wData) = lastWrite.get
      println(f"\n✅ Saw HRAM write: addr=0x$wAddr%04X data=0x$wData%02X (expected 0x33)")
      assert(wData == 0x33, f"Expected to write 0x33 to FF80, wrote 0x$wData%02X")

      // 3) Wait for the final LDH read to occur.
      // It should read either 0xFF80 (correct) OR 0x0080 (bug)
      runUntil(lastRead.exists { case (a, _) => a == 0xFF80 || a == 0x0080 }, maxCycles = 5000)
      val (rAddr, rData) = lastRead.get

      val aFinal = dut.io.dbg_a.peek().litValue.toInt
      println(f"\n🔎 Final observed LDH read: addr=0x$rAddr%04X data=0x$rData%02X  -> A(now)=0x$aFinal%02X")

      if (rAddr == 0x0080) {
        println("\n❌ ROOT CAUSE: CPU built address 0x0080, NOT 0xFF80.")
        println("This is usually: Cat(0.U(8.W), imm8) or 0xFF00 constant got truncated to 8 bits.")
        // This will fail the test:
        assert(false, "LDH used 0x0080 instead of 0xFF80")
      } else {
        println("\n✅ Address is correct (0xFF80). Now check that the data path returns 0x33.")
        assert(rData == 0x33, f"Read from FF80 returned 0x$rData%02X, expected 0x33")
      }
    }
  }
}
