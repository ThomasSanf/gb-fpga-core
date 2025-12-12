package top

import chisel3._
import chisel3.stage.{ChiselStage, ChiselGeneratorAnnotation}

object GameBoySoCMain extends App {
  println("╔═════════════════════════════════════════════╗")
  println("║   Generating Game Boy SoC Verilog          ║")
  println("╚═════════════════════════════════════════════╝")
  println()

  val romSize = 1048576  // 1MB for Pokemon Red
  val romPath = "roms/pkm.hex"

  println(s"ROM Size: ${romSize} bytes (${romSize / 1024}KB)")
  println(s"ROM Path: $romPath")
  println()
  println("Generating Verilog...")

  (new ChiselStage).execute(
    Array("-X", "verilog", "-td", "generated"),
    Seq(ChiselGeneratorAnnotation(() => new GameBoySoC(romSize, "unused")))
  )

  println()
  println("✓ Verilog generated successfully!")
  println("  Output: generated/GameBoySoC.v")
  println()
}