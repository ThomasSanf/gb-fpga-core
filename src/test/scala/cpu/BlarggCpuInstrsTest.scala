package cpu

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class BlarggCpuInstrsTest extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "Blargg cpu_instrs test ROM"

  it should "run and print test results until PASS" in {
    test(new LR35902_Core()) { dut =>

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

      // Initialize memory with ROM
      val memory = scala.collection.mutable.Map[Int, Int]() ++ romBytes

      // Serial output buffer
      val serialOutput = new StringBuilder()

      // ============================================================
      // 2. RESET CPU
      // ============================================================
      dut.reset.poke(true.B)
      dut.clock.step(15)
      dut.reset.poke(false.B)
      println("[INFO] CPU reset complete, starting test...")

      // ============================================================
      // 3. RUN UNTIL PASS OR TIMEOUT
      // ============================================================
      val maxCycles = 10_000_000  // Blargg tests can take millions of cycles
      var cycles = 0
      var finished = false
      var lastPC = 0
      var stuckCount = 0

      while (cycles < maxCycles && !finished) {
        val addr = dut.io.memAddr.peek().litValue.toInt
        val rd = dut.io.memRead.peek().litToBoolean
        val wr = dut.io.memWrite.peek().litToBoolean
        val pc = dut.io.dbg_pc.peek().litValue.toInt

        // MEMORY READ
        if (rd) {
          val data = if (addr < 0x8000) {
            // ROM area (0x0000-0x7FFF)
            memory.getOrElse(addr, 0xFF)
          } else if (addr >= 0xC000 && addr < 0xE000) {
            // Work RAM (0xC000-0xDFFF)
            memory.getOrElse(addr, 0x00)
          } else if (addr >= 0xFF00 && addr < 0xFF80) {
            // I/O registers - return sensible defaults
            addr match {
              case 0xFF01 => memory.getOrElse(addr, 0x00) // Serial data
              case 0xFF02 => memory.getOrElse(addr, 0x00) // Serial control
              case 0xFF04 => (cycles / 256) & 0xFF         // DIV register (timer)
              case 0xFF44 => (cycles / 456) % 154          // LY (scanline)
              case _ => 0xFF
            }
          } else if (addr >= 0xFF80 && addr <= 0xFFFE) {
            // High RAM (0xFF80-0xFFFE)
            memory.getOrElse(addr, 0x00)
          } else {
            0xFF
          }
          dut.io.memReadData.poke(data.U)
        }

        // MEMORY WRITE
        if (wr) {
          val data = dut.io.memWriteData.peek().litValue.toInt

          // Ignore writes to ROM area
          if (addr < 0x8000) {
            // ROM banking would go here, but for now just ignore
          } else {
            memory(addr) = data
          }

          // BLARGG SERIAL OUTPUT
          if (addr == 0xFF01) {
            val ch = data.toChar
            serialOutput.append(ch)
            print(ch)
            System.out.flush()
          }

          // Check if serial transfer was triggered
          if (addr == 0xFF02 && (data & 0x81) == 0x81) {
            // Serial transfer requested - already handled via 0xFF01
          }
        }

        // Check for infinite loop (PC stuck)
        if (pc == lastPC) {
          stuckCount += 1
          if (stuckCount > 1000) {
            println(s"\n[ERROR] CPU appears stuck at PC=0x${pc.toHexString}")
            println(s"[ERROR] Last output: ${serialOutput.takeRight(100)}")
            assert(false, "CPU stuck in infinite loop")
          }
        } else {
          stuckCount = 0
          lastPC = pc
        }

        // Check for test completion
        val output = serialOutput.toString()
        if (output.contains("Passed") || output.contains("Failed")) {
          finished = true
          println(s"\n[INFO] Test completed after $cycles cycles")

          // Verify success
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

        // Progress indicator every million cycles
        if (cycles % 1_000_000 == 0) {
          println(s"[INFO] ${cycles / 1_000_000}M cycles... PC=0x${pc.toHexString}")
        }
      }

      // ============================================================
      // 4. FINAL ASSERTION
      // ============================================================
      if (!finished) {
        println(s"\n[TIMEOUT] After $maxCycles cycles")
        println(s"Final output:\n${serialOutput.toString()}")
        assert(false, s"Timed out after $maxCycles cycles without completion")
      }
    }
  }
}