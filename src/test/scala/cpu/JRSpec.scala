package cpu

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class JRSpec extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "JR and JR cc"

  it should "update PC correctly for JR and conditional JR" in {
    test(new LR35902_Core).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      // -------------------------------
      // Helper: feed memory
      // -------------------------------
      def memRead(value: Int): Unit = {
        dut.io.memReadData.poke(value.U)
      }

      // Reset-ish state
      dut.clock.step(1)

      // ============================================
      // JR +2   (0x18, imm = 0x02)
      // ============================================

      // Fetch opcode
      memRead(0x18)
      dut.clock.step(4)

      // Fetch imm8
      memRead(0x02)
      dut.clock.step(4)

      // Execute
      dut.clock.step(4)

      dut.io.dbg_pc.expect(0x0002.U)
      println("[OK] JR +2")

      // ============================================
      // JR NZ,+2 (0x20) when Z = 0 → TAKEN
      // ============================================

      // Force Z=0 by executing XOR A,A then INC A
      memRead(0xAF) // XOR A,A
      dut.clock.step(4)

      memRead(0x3C) // INC A
      dut.clock.step(4)

      // JR NZ,+2
      memRead(0x20)
      dut.clock.step(4)

      memRead(0x02)
      dut.clock.step(4)

      dut.clock.step(4)
      dut.io.dbg_pc.expect(0x0004.U)
      println("[OK] JR NZ taken")

      // ============================================
      // JR Z,+2 (0x28) when Z = 0 → NOT taken
      // ============================================

      memRead(0x28)
      dut.clock.step(4)

      memRead(0x02)
      dut.clock.step(4)

      dut.clock.step(4)
      dut.io.dbg_pc.expect(0x0006.U)
      println("[OK] JR Z not taken")
    }
  }
}
