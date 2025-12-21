package cpu

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import scala.language.reflectiveCalls

class LdDecTest extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "LD and DEC instructions"

  def toHex(value: BigInt, width: Int = 2): String = {
    val hexStr = value.toInt.toHexString.toUpperCase
    hexStr.reverse.padTo(width, '0').reverse
  }

  it should "execute LD B,imm8 correctly" in {
    test(new LR35902_Core).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      println("\n" + "="*60)
      println("LD B, 0x03 Test")
      println("="*60)

      val program = Map(
        0x0000 -> 0x06, // LD B, 0x03
        0x0001 -> 0x03,
        0x0002 -> 0x00  // NOP
      )

      dut.io.ieReg.poke(0.U)
      dut.io.ifReg.poke(0.U)
      dut.io.memReadData.poke(0.U)

      def step(): Unit = {
        val addr = dut.io.memAddr.peek().litValue.toInt
        val data = program.getOrElse(addr, 0x00)
        dut.io.memReadData.poke(data.U)
        dut.clock.step()
      }

      // Run for 20 cycles and watch what happens
      var success = false
      for (i <- 0 until 20) {
        val pc = dut.io.memAddr.peek().litValue
        val ir = dut.io.dbg_IR.peek().litValue
        val b = dut.io.dbg_b.peek().litValue
        val state = dut.io.dbg_state.peek().litValue
        val tcycle = dut.io.dbg_tcycle.peek().litValue
        val mcycle = dut.io.dbg_mcycle.peek().litValue

        println(f"Cycle $i%2d: PC=0x${toHex(pc, 4)} IR=0x${toHex(ir)} B=0x${toHex(b)} state=$state t=$tcycle m=$mcycle")

        step()

        // Check if B got loaded
        if (i > 10 && dut.io.dbg_b.peek().litValue == 0x03) {
          println(s"\n✓ SUCCESS: B loaded with 0x03 after $i cycles")
          success = true
        }
      }

      if (!success) {
        println("\n✗ FAILED: B never got loaded!")
      }

      assert(success, "LD B, imm8 failed to execute")
    }
  }
}