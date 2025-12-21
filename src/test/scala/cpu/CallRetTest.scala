package cpu

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import scala.language.reflectiveCalls

class CallRetTest extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "CALL and RET instructions"

  def toHex(value: BigInt, width: Int = 2): String = {
    val hexStr = value.toInt.toHexString.toUpperCase
    hexStr.reverse.padTo(width, '0').reverse
  }

  it should "execute CALL and RET correctly" in {
    test(new LR35902_Core).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      println("\n" + "="*60)
      println("CALL/RET Test")
      println("="*60)

      // Program: CALL 0x0010, then at 0x0010 do RET
      val program = Map(
        0x0000 -> 0xCD, // CALL 0x0010
        0x0001 -> 0x10,
        0x0002 -> 0x00,
        0x0003 -> 0x00, // NOP (return here after RET)
        0x0010 -> 0xC9, // RET
        0x0011 -> 0x00  // Should never reach
      )

      dut.io.ieReg.poke(0.U)
      dut.io.ifReg.poke(0.U)
      dut.io.memReadData.poke(0.U)

      // Initialize SP to 0xFFFE
      dut.io.memReadData.poke(0.U)
      dut.clock.step()

      var memWriteLog = List[(Int, Int, Int)]() // (cycle, addr, data)
      var ram = scala.collection.mutable.Map[Int, Int]()  // ← ADD THIS!

      def step(cycle: Int): Unit = {
        val addr = dut.io.memAddr.peek().litValue.toInt

        // Log memory writes AND save to RAM
        if (dut.io.memWrite.peek().litToBoolean) {
          val writeAddr = dut.io.memAddr.peek().litValue.toInt
          val writeData = dut.io.memWriteData.peek().litValue.toInt
          ram(writeAddr) = writeData  // ← SAVE TO RAM!
          memWriteLog = (cycle, writeAddr, writeData) :: memWriteLog
          println(s"  [WRITE] addr=0x${toHex(writeAddr, 4)} data=0x${toHex(writeData)}")
        }

        // Read from RAM first, then ROM
        val data = ram.getOrElse(addr, program.getOrElse(addr, 0x00))  // ← CHECK RAM FIRST!
        dut.io.memReadData.poke(data.U)
        dut.clock.step()
      }

      println("\n--- Executing CALL 0x0010 ---")
      var foundCall = false
      var foundRet = false
      var returnedToCorrectPC = false

      for (i <- 0 until 50) {
        val pc = dut.io.memAddr.peek().litValue
        val ir = dut.io.dbg_IR.peek().litValue
        val sp = dut.io.dbg_sp.peek().litValue
        val state = dut.io.dbg_state.peek().litValue
        val tcycle = dut.io.dbg_tcycle.peek().litValue
        val mcycle = dut.io.dbg_mcycle.peek().litValue

        println(f"Cycle $i%2d: PC=0x${toHex(pc, 4)} IR=0x${toHex(ir)} SP=0x${toHex(sp, 4)} state=$state t=$tcycle m=$mcycle")

        // Check for CALL execution (PC should jump to 0x0010)
        if (pc == 0x0010 && ir == 0xCD) {
          println("\n✓ CALL executed: PC jumped to 0x0010")
          foundCall = true
        }

        // Check for RET execution (should see IR=0xC9)
        if (ir == 0xC9 && pc >= 0x0010) {
          println(s"\n✓ RET instruction fetched at PC=0x${toHex(pc, 4)}")
          foundRet = true
        }

        // Check if we returned to 0x0003 (after CALL)
        if (foundRet && pc == 0x0003) {
          println(s"\n✓ SUCCESS: Returned to correct address 0x0003 after $i cycles")
          returnedToCorrectPC = true
        }

        step(i)
      }

      println("\n" + "="*60)
      println("Memory Write Log:")
      println("="*60)
      memWriteLog.reverse.foreach { case (cycle, addr, data) =>
        println(f"Cycle $cycle%2d: Write to 0x${toHex(addr, 4)} = 0x${toHex(data)}")
      }

      println("\n" + "="*60)
      println("Test Results:")
      println("="*60)
      println(s"CALL executed: $foundCall")
      println(s"RET found: $foundRet")
      println(s"Returned to correct PC: $returnedToCorrectPC")

      assert(foundCall, "CALL instruction did not execute")
      assert(foundRet, "RET instruction was not fetched")
      assert(returnedToCorrectPC, "Did not return to correct address after RET")

      println("\n✓ ALL TESTS PASSED")
    }
  }
}