package cpu

import chisel3._
import chisel3.util._

class LR35902_ALU extends Module {

  val io = IO(new Bundle {
    val op       = Input(UInt(4.W))      // operation selector
    val a        = Input(UInt(8.W))      // A or source
    val b        = Input(UInt(8.W))      // B or immediate
    val carryIn  = Input(Bool())         // used for ADC / SBC

    val out      = Output(UInt(8.W))
    val flagZ    = Output(Bool())
    val flagN    = Output(Bool())
    val flagH    = Output(Bool())
    val flagC    = Output(Bool())
  })

  import LR35902_ALU._

  val cin = io.carryIn.asUInt

  // ========= Defaults =========
  io.out   := io.a
  io.flagZ := false.B
  io.flagN := false.B
  io.flagH := false.B
  io.flagC := false.B

  val a9 = Cat(0.U(1.W), io.a)
  val b9 = Cat(0.U(1.W), io.b)
  val c9 = cin

  val sum9  = a9 + b9
  val sumc9 = a9 + b9 + c9

  val diff9  = a9 - b9
  val diffc9 = a9 - b9 - c9

  // Half-carry rules:
  def halfAdd(a: UInt, b: UInt, c: UInt = 0.U): Bool =
    ((a & 0xF.U) + (b & 0xF.U) + c) > 0xF.U

  def halfSub(a: UInt, b: UInt, c: UInt = 0.U): Bool = {
    val aNib = a(3, 0)
    val bNib = b(3, 0)
    aNib < (bNib +& c)   // borrow from bit 4?
  }


  // ============================
  // Decode ALU operation
  // ============================
  switch(io.op) {

    // ---------------------------------------------------------------
    // ADD A,B    (no carry)
    // ---------------------------------------------------------------
    is(OP_ADD) {
      io.out   := sum9(7,0)
      io.flagZ := sum9(7,0) === 0.U
      io.flagN := false.B
      io.flagH := halfAdd(io.a, io.b)
      io.flagC := sum9(8)
    }


    // ---------------------------------------------------------------
    // ADC A,B    (with carry)
    // ---------------------------------------------------------------
    is(OP_ADC) {
      io.out   := sumc9(7,0)
      io.flagZ := sumc9(7,0) === 0.U
      io.flagN := false.B
      io.flagH := halfAdd(io.a, io.b, cin)
      io.flagC := sumc9(8)
    }


    // ---------------------------------------------------------------
    // SUB A,B
    // ---------------------------------------------------------------
    is(OP_SUB) {
      io.out   := diff9(7,0)
      io.flagZ := diff9(7,0) === 0.U
      io.flagN := true.B
      io.flagH := halfSub(io.a, io.b)
      io.flagC := io.a < io.b
    }


    // ---------------------------------------------------------------
    // SBC A,B    (subtract carry)
    // ---------------------------------------------------------------
    is(OP_SBC) {
      io.out   := diffc9(7,0)
      io.flagZ := diffc9(7,0) === 0.U
      io.flagN := true.B
      io.flagH := halfSub(io.a, io.b, cin)
      io.flagC := io.a < (io.b + cin)
    }


    // ---------------------------------------------------------------
    // AND A,B
    // ---------------------------------------------------------------
    is(OP_AND) {
      val r = io.a & io.b
      io.out   := r
      io.flagZ := r === 0.U
      io.flagN := false.B
      io.flagH := true.B
      io.flagC := false.B
    }

    // ---------------------------------------------------------------
    // OR A,B
    // ---------------------------------------------------------------
    is(OP_OR) {
      val r = io.a | io.b
      io.out   := r
      io.flagZ := r === 0.U
      io.flagN := false.B
      io.flagH := false.B
      io.flagC := false.B
    }

    // ---------------------------------------------------------------
    // XOR A,B
    // ---------------------------------------------------------------
    is(OP_XOR) {
      val r = io.a ^ io.b
      io.out   := r
      io.flagZ := r === 0.U
      io.flagN := false.B
      io.flagH := false.B
      io.flagC := false.B
    }

    // ---------------------------------------------------------------
    // CP A,B   (like SUB but result discarded)
    // ---------------------------------------------------------------
    is(OP_CP) {
      val r = diff9(7,0)

      io.out   := io.a              // A unchanged
      io.flagZ := r === 0.U
      io.flagN := true.B
      io.flagH := halfSub(io.a, io.b)
      io.flagC := io.a < io.b       // borrow
    }


    // ---------------------------------------------------------------
    // INC r    (flags same as INC B)
    // ---------------------------------------------------------------
    is(OP_INC) {
      val r = io.a + 1.U
      io.out   := r
      io.flagZ := r === 0.U
      io.flagN := false.B
      io.flagH := (io.a & 0x0F.U) === 0x0F.U
      io.flagC := false.B   // C is unchanged in real CPU; core may handle it
    }

    // ---------------------------------------------------------------
    // DEC r
    // ---------------------------------------------------------------
    is(OP_DEC) {
      val r = io.a - 1.U
      io.out   := r
      io.flagZ := r === 0.U
      io.flagN := true.B
      io.flagH := (io.a & 0x0F.U) === 0.U
      io.flagC := false.B   // C unchanged; core may handle it
    }
  }
}

// ================================================================
// Companion object: ALU opcodes accessible from other modules
// ================================================================
object LR35902_ALU {
  val OP_ADD = 0.U(4.W)
  val OP_ADC = 1.U(4.W)
  val OP_SUB = 2.U(4.W)
  val OP_SBC = 3.U(4.W)
  val OP_AND = 4.U(4.W)
  val OP_OR  = 5.U(4.W)
  val OP_XOR = 6.U(4.W)
  val OP_CP  = 7.U(4.W)
  val OP_INC = 8.U(4.W)
  val OP_DEC = 9.U(4.W)
}
