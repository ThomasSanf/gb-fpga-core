package cpu

import chisel3._
import chisel3.util._

object MicrocodeCB {

  class OutBundle extends Bundle {
    val A           = UInt(8.W)
    val F           = UInt(8.W)
    val B           = UInt(8.W)
    val C           = UInt(8.W)
    val D           = UInt(8.W)
    val E           = UInt(8.W)
    val H           = UInt(8.W)
    val L           = UInt(8.W)

    val imm8        = UInt(8.W)   // carry operand / result between cycles
    val done        = Bool()
    val next_mcycle = UInt(3.W)
  }

  def apply(
             IR2: UInt,
             mcycle: UInt,
             tcycle: UInt,

             A_in: UInt, F_in: UInt,
             B_in: UInt, C_in: UInt,
             D_in: UInt, E_in: UInt,
             H_in: UInt, L_in: UInt,

             imm8_in: UInt,

             io: Bundle {
               val memAddr:      UInt
               val memRead:      Bool
               val memWrite:     Bool
               val memWriteData: UInt
               val memReadData:  UInt
             }
           ): OutBundle = {

    val out = Wire(new OutBundle)

    // ---------------- Defaults ----------------
    out.A := A_in
    out.F := F_in
    out.B := B_in
    out.C := C_in
    out.D := D_in
    out.E := E_in
    out.H := H_in
    out.L := L_in
    out.imm8 := imm8_in

    out.done := false.B
    out.next_mcycle := mcycle

    io.memAddr      := 0.U
    io.memRead      := false.B
    io.memWrite     := false.B
    io.memWriteData := 0.U

    // ---------------- Decode ----------------
    val group  = IR2(7,6)
    val bitIdx = IR2(5,3)
    val regIdx = IR2(2,0)

    val isHL = regIdx === 6.U
    val HL   = Cat(H_in, L_in)

    def rr(i: UInt): UInt = MuxLookup(i, 0.U, Seq(
      0.U -> B_in,
      1.U -> C_in,
      2.U -> D_in,
      3.U -> E_in,
      4.U -> H_in,
      5.U -> L_in,
      7.U -> A_in
    ))

    def wr(i: UInt, v: UInt): Unit = {
      switch(i) {
        is(0.U) { out.B := v }
        is(1.U) { out.C := v }
        is(2.U) { out.D := v }
        is(3.U) { out.E := v }
        is(4.U) { out.H := v }
        is(5.U) { out.L := v }
        is(7.U) { out.A := v }
      }
    }

    // ============================================================
    // M1 : Read (HL) if needed
    // ============================================================
    when(mcycle === 1.U) {
      when(isHL) {
        io.memAddr := HL
        io.memRead := true.B
        when(tcycle === 3.U) {
          out.imm8 := io.memReadData
          out.next_mcycle := 2.U
        }
      }.otherwise {
        when(tcycle === 3.U) {
          out.imm8 := rr(regIdx)
          out.next_mcycle := 2.U
        }
      }
    }

    // ============================================================
    // M2 : Execute operation
    // ============================================================
    when(mcycle === 2.U) {

      val operand = imm8_in
      val result  = Wire(UInt(8.W))

      val flagZ = Wire(Bool())
      val flagN = Wire(Bool())
      val flagH = Wire(Bool())
      val flagC = Wire(Bool())

      // defaults
      result := operand
      flagZ := F_in(7)
      flagN := F_in(6)
      flagH := F_in(5)
      flagC := F_in(4)

      switch(group) {

        // ---------- ROT / SHIFT ----------
        is("b00".U) {
          switch(bitIdx) {
            is("b000".U) { val c = operand(7); result := Cat(operand(6,0), c); flagC := c }
            is("b001".U) { val c = operand(0); result := Cat(c, operand(7,1)); flagC := c }
            is("b010".U) { val c = operand(7); result := Cat(operand(6,0), F_in(4)); flagC := c }
            is("b011".U) { val c = operand(0); result := Cat(F_in(4), operand(7,1)); flagC := c }
            is("b100".U) { val c = operand(7); result := Cat(operand(6,0), 0.U); flagC := c }
            is("b101".U) { val c = operand(0); result := Cat(operand(7), operand(7,1)); flagC := c }
            is("b110".U) { result := Cat(operand(3,0), operand(7,4)); flagC := false.B }
            is("b111".U) { val c = operand(0); result := Cat(0.U, operand(7,1)); flagC := c }
          }
          flagZ := result === 0.U
          flagN := false.B
          flagH := false.B
        }

        // ---------- BIT ----------
        is("b01".U) {
          flagZ := !operand(bitIdx)
          flagN := false.B
          flagH := true.B
        }

        // ---------- RES ----------
        is("b10".U) {
          result := operand & ~(1.U << bitIdx)
        }

        // ---------- SET ----------
        is("b11".U) {
          result := operand | (1.U << bitIdx)
        }
      }

      out.F := Cat(flagZ, flagN, flagH, flagC, 0.U(4.W))

      when(!isHL) {
        wr(regIdx, result)
        when(tcycle === 3.U) { out.done := true.B }
      }.otherwise {
        out.imm8 := result
        when(tcycle === 3.U) { out.next_mcycle := 3.U }
      }
    }

    // ============================================================
    // M3 : Write back to (HL)
    // ============================================================
    when(mcycle === 3.U) {
      io.memAddr := HL
      io.memWrite := true.B
      io.memWriteData := imm8_in
      when(tcycle === 3.U) { out.done := true.B }
    }

    out
  }
}
