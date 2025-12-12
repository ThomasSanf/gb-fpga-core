package cpu

import chisel3._
import chisel3.util._
import cpu.LR35902_ALU._

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

    val imm8        = UInt(8.W)  // Used to carry result from M2 to M3 for (HL) ops

    val done        = Bool()
    val next_mcycle = UInt(3.W)
  }

  def apply(
             IR2:   UInt,
             mcycle: UInt,
             tcycle: UInt,
             // registers
             A_in: UInt, F_in: UInt,
             B_in: UInt, C_in: UInt,
             D_in: UInt, E_in: UInt,
             H_in: UInt, L_in: UInt,
             imm8_in: UInt,  // Carries result from M2 to M3
             io: Bundle {
               val memAddr:      UInt
               val memRead:      Bool
               val memWrite:     Bool
               val memWriteData: UInt
               val memReadData:  UInt
             }
           ): OutBundle = {

    val out = Wire(new OutBundle)

    // default outputs = pass-through
    out.A := A_in
    out.F := F_in
    out.B := B_in
    out.C := C_in
    out.D := D_in
    out.E := E_in
    out.H := H_in
    out.L := L_in

    out.imm8 := imm8_in  // Pass through by default

    out.done := false.B
    out.next_mcycle := mcycle

    // DO NOT TOUCH BUS BY DEFAULT
    io.memAddr      := 0.U
    io.memRead      := false.B
    io.memWrite     := false.B
    io.memWriteData := 0.U

    //--------------------------------------------------------------
    // Decode CB instruction fields
    //--------------------------------------------------------------
    val group    = IR2(7,6)   // 00 rot/shift, 01 BIT, 10 RES, 11 SET
    val bitIdx   = IR2(5,3)
    val regIdx   = IR2(2,0)

    val isHL     = (regIdx === 6.U)
    val HL       = Cat(H_in, L_in)

    //--------------------------------------------------------------
    // Helper: read register (no "out" values to avoid loops)
    //--------------------------------------------------------------
    def rr(i: UInt): UInt = MuxLookup(i, 0.U, Seq(
      0.U -> B_in,
      1.U -> C_in,
      2.U -> D_in,
      3.U -> E_in,
      4.U -> H_in,
      5.U -> L_in,
      7.U -> A_in
    ))

    //--------------------------------------------------------------
    // Helper: write register to OUT bundle
    //--------------------------------------------------------------
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

    //------------------------------------------------------------------
    // M1: Read (HL) if needed, otherwise compute operand immediately
    //------------------------------------------------------------------
    val operand = Wire(UInt(8.W))
    operand := rr(regIdx) // default for register ops

    when(mcycle === 1.U) {

      when(isHL) {
        // access memory
        io.memAddr := HL
        io.memRead := true.B
        operand := io.memReadData
        out.imm8 := io.memReadData  // FIX: Save operand for M-cycle 2

        when(tcycle === 3.U) {
          out.next_mcycle := 2.U
        }

      }.otherwise {
        // For register ops, no bus, finish M1 immediately
        when(tcycle === 3.U) {
          out.next_mcycle := 2.U
        }
      }
    }

    //------------------------------------------------------------------
    // M2: execute CB operation (rot/shift/bit/res/set)
    // FIX: All outputs must be unconditional for T-cycle 3 writeback!
    //------------------------------------------------------------------
    val result = Wire(UInt(8.W))

    // For (HL) ops in M2, use the saved operand from M1
    when(mcycle === 2.U && isHL) {
      operand := imm8_in
    }

    result := operand

    // Flags - computed unconditionally
    val flagZ = Wire(Bool())
    val flagN = Wire(Bool())
    val flagH = Wire(Bool())
    val flagC = Wire(Bool())

    // Defaults (preserve flags for RES/SET)
    flagZ := F_in(7)
    flagN := F_in(6)
    flagH := F_in(5)
    flagC := F_in(4)

    when(mcycle === 2.U) {
      switch(group) {

        // ROT / SHIFT / SWAP (00xxxxxx)
        is("b00".U) {
          switch(bitIdx) {
            // RLC
            is("b000".U) {
              val c = operand(7)
              result := Cat(operand(6,0), c)
              flagZ := (result === 0.U)
              flagN := false.B
              flagH := false.B
              flagC := c
            }
            // RRC
            is("b001".U) {
              val c = operand(0)
              result := Cat(c, operand(7,1))
              flagZ := (result === 0.U)
              flagN := false.B
              flagH := false.B
              flagC := c
            }
            // RL
            is("b010".U) {
              val c = operand(7)
              result := Cat(operand(6,0), F_in(4))
              flagZ := (result === 0.U)
              flagN := false.B
              flagH := false.B
              flagC := c
            }
            // RR
            is("b011".U) {
              val c = operand(0)
              result := Cat(F_in(4), operand(7,1))
              flagZ := (result === 0.U)
              flagN := false.B
              flagH := false.B
              flagC := c
            }
            // SLA
            is("b100".U) {
              val c = operand(7)
              result := Cat(operand(6,0), 0.U)
              flagZ := (result === 0.U)
              flagN := false.B
              flagH := false.B
              flagC := c
            }
            // SRA
            is("b101".U) {
              val c = operand(0)
              result := Cat(operand(7), operand(7,1))
              flagZ := (result === 0.U)
              flagN := false.B
              flagH := false.B
              flagC := c
            }
            // SWAP
            is("b110".U) {
              result := Cat(operand(3,0), operand(7,4))
              flagZ := (result === 0.U)
              flagN := false.B
              flagH := false.B
              flagC := false.B
            }
            // SRL
            is("b111".U) {
              val c = operand(0)
              result := Cat(0.U, operand(7,1))
              flagZ := (result === 0.U)
              flagN := false.B
              flagH := false.B
              flagC := c
            }
          }
        }

        // BIT b, r
        is("b01".U) {
          val bitVal = operand(bitIdx)
          flagZ := !bitVal
          flagN := false.B
          flagH := true.B
          flagC := F_in(4)  // Preserve carry
          result := operand  // BIT doesn't modify operand
        }

        // RES b, r
        is("b10".U) {
          val mask = (~(1.U << bitIdx)).asUInt
          result := operand & mask
          // Flags already defaulted to preserve
        }

        // SET b, r
        is("b11".U) {
          val mask = (1.U << bitIdx).asUInt
          result := operand | mask
          // Flags already defaulted to preserve
        }

      }

      // FIX: Update flags unconditionally - stable for T-cycle 3 writeback
      out.F := Cat(flagZ, flagN, flagH, flagC, 0.U(4.W))

      // FIX: Write result to register unconditionally for non-(HL) ops
      when(!isHL) {
        wr(regIdx, result)
      }

      // FIX: Save result to imm8 for (HL) ops to use in M-cycle 3
      out.imm8 := result

      // end of M2 execution
      when(tcycle === 3.U) {
        when(isHL) {
          out.next_mcycle := 3.U
        }.otherwise {
          out.done := true.B
        }
      }
    }

    //------------------------------------------------------------------
    // M3: write back to (HL) (only for CB (HL))
    // FIX: Use imm8_in which contains the result from M2
    //------------------------------------------------------------------
    when(mcycle === 3.U) {
      io.memAddr      := HL
      io.memWrite     := true.B
      io.memWriteData := imm8_in  // FIX: Use carried result from M2

      when(tcycle === 3.U) {
        out.done := true.B
      }
    }

    out
  }
}