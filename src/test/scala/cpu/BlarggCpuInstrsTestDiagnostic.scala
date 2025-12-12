package cpu

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class BlarggCpuInstrsTestDiagnostic extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "Blargg cpu_instrs test ROM (Diagnostic)"

  it should "show what's happening before timeout" in {
    test(new LR35902_Core()).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      // ============================================================
      // 1. LOAD HEX FILE
      // ============================================================
      val hexPath = "roms/cpu_instrs.hex"
      println(s"[INFO] Loading ROM: $hexPath")

      val lines = scala.io.Source.fromFile(hexPath).getLines().toList
      val romBytes: Map[Int, Int] = lines.zipWithIndex.map { case (line, addr) =>
        val clean = line.trim
        require(clean.matches("[0-9A-Fa-f]{2}"),
          s"Invalid hex byte '$clean' at line $addr")
        addr -> Integer.parseInt(clean, 16)
      }.toMap

      println(s"[INFO] Loaded ${romBytes.size} bytes")

      val memory = scala.collection.mutable.Map[Int, Int]() ++ romBytes
      val serialOutput = new StringBuilder()

      // ============================================================
      // 2. RESET CPU
      // ============================================================
      dut.reset.poke(true.B)
      dut.clock.step(15)
      dut.reset.poke(false.B)
      println("[INFO] CPU reset complete, starting test...")

      // ============================================================
      // 3. RUN WITH DETAILED LOGGING
      // ============================================================
      val maxCycles = 100_000  // Limit to 100k for diagnostic
      var cycles = 0
      var finished = false
      var lastPC = -1
      var stuckCount = 0
      val pcHistory = scala.collection.mutable.ArrayBuffer[Int]()

      while (cycles < maxCycles && !finished) {
        val addr = dut.io.memAddr.peek().litValue.toInt
        val rd = dut.io.memRead.peek().litToBoolean
        val wr = dut.io.memWrite.peek().litToBoolean
        val pc = dut.io.dbg_pc.peek().litValue.toInt
        val ir = dut.io.dbg_IR.peek().litValue.toInt
        val state = dut.io.dbg_state.peek().litValue.toInt

        // Log every 1000 cycles
        if (cycles % 1000 == 0) {
          println(f"[$cycles%6d] PC=0x$pc%04X IR=0x$ir%02X State=$state")
        }

        // MEMORY READ
        if (rd) {
          val data = if (addr < 0x8000) {
            memory.getOrElse(addr, 0xFF)
          } else if (addr >= 0xC000 && addr < 0xE000) {
            memory.getOrElse(addr, 0x00)
          } else if (addr >= 0xFF00 && addr < 0xFF80) {
            addr match {
              case 0xFF01 => memory.getOrElse(addr, 0x00)
              case 0xFF02 => memory.getOrElse(addr, 0x00)
              case 0xFF04 => (cycles / 256) & 0xFF
              case 0xFF44 => (cycles / 456) % 154
              case _ => 0xFF
            }
          } else if (addr >= 0xFF80 && addr <= 0xFFFE) {
            memory.getOrElse(addr, 0x00)
          } else {
            0xFF
          }
          dut.io.memReadData.poke(data.U)
        }

        // MEMORY WRITE
        if (wr) {
          val data = dut.io.memWriteData.peek().litValue.toInt

          if (addr >= 0x8000) {
            memory(addr) = data
          }

          // BLARGG SERIAL OUTPUT
          if (addr == 0xFF01) {
            val ch = data.toChar
            serialOutput.append(ch)
            print(ch)
            System.out.flush()
          }
        }

        // Track PC history
        if (pc != lastPC) {
          pcHistory.append(pc)
          if (pcHistory.length > 20) pcHistory.remove(0)
          stuckCount = 0
        } else {
          stuckCount += 1

          // Check if stuck
          if (stuckCount == 100) {
            println(s"\n[WARNING] PC stuck at 0x${pc.toHexString} for 100 cycles")
            println(f"  IR=0x$ir%02X State=$state")
            println(f"  Recent PC history: ${pcHistory.map(p => f"0x$p%04X").mkString(" -> ")}")

            // Check if it's HALT
            if (ir == 0x76) {
              println("  [INFO] CPU is HALTed - this is expected, ROM is waiting for interrupt")
              finished = true
            } else {
              println("  [ERROR] CPU appears stuck (not HALT)")
              println(s"  Serial output so far: ${serialOutput.toString()}")
              assert(false, "CPU stuck in infinite loop")
            }
          }
        }
        lastPC = pc

        // Check for completion
        val output = serialOutput.toString()
        if (output.contains("Passed") || output.contains("Failed")) {
          finished = true
          println(s"\n[INFO] Test completed after $cycles cycles")

          if (output.contains("Passed")) {
            println("[SUCCESS] ✓ Blargg test PASSED")
          } else {
            println("[FAILURE] ✗ Blargg test FAILED")
            println(s"Output:\n$output")
            assert(false, "Blargg test reported failure")
          }
        }

        dut.clock.step(1)
        cycles += 1
      }

      if (!finished) {
        println(s"\n[TIMEOUT] After $maxCycles cycles")
        println(f"Final PC = 0x$lastPC%04X")
        println(f"Final IR = 0x${dut.io.dbg_IR.peek().litValue.toInt}%02X")
        println(f"Final State = ${dut.io.dbg_state.peek().litValue.toInt}")
        println(f"Recent PC history: ${pcHistory.map(p => f"0x$p%04X").mkString(" -> ")}")
        println(s"Serial output:\n${serialOutput.toString()}")

        // Don't fail the test - just report what we found
        println("[INFO] This is a diagnostic run - check the output above")
      }
    }
  }
}