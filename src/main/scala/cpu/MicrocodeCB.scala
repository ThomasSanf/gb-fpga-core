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

    //--------------------------------------------------------------
    // Helper: set Z N H C exactly as DMG for CB opcodes
    //--------------------------------------------------------------
    def setFlags(Z: Bool, N: Bool, H: Bool, C: Bool): Unit = {
      out.F := Cat(Z, N, H, C, 0.U(4.W))
    }

    //--------------------------------------------------------------
    // M0 = IR2 ALREADY FETCHED IN TOP-LEVEL CORE.
    // DMG timing:
    //   CB r   → M1 exec → M2 done
    //   CB (HL)→ M1 read(HL) → M2 exec → M3 write → done
    //--------------------------------------------------------------

    //------------------------------------------------------------------
    // M1: Read (HL) if needed, otherwise compute operand immediately
    //------------------------------------------------------------------
    val operand = Wire(UInt(8.W))
    operand := rr(regIdx) // default for register ops

    when(mcycle === 1.U) {

      when(isHL) {
        // access memory only at correct T-states
        switch(tcycle) {
          is(0.U) {
            io.memAddr := HL
            io.memRead := true.B
          }
          is(1.U) { io.memRead := true.B }
          is(2.U) { operand := io.memReadData }
          is(3.U) { out.next_mcycle := 2.U }
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
    //------------------------------------------------------------------
    val result = Wire(UInt(8.W))
    result := operand
    val carryOut = Wire(Bool())
    val halfCarry = Wire(Bool())

    carryOut := false.B
    halfCarry := false.B

    when(mcycle === 2.U) {
      switch(group) {

        // ROT / SHIFT / SWAP (00xxxxxx)
        is("b00".U) {
          switch(bitIdx) {
            // RLC
            is("b000".U) {
              val c = operand(7)
              result := Cat(operand(6,0), c)
              setFlags(result === 0.U, false.B, false.B, c)
            }
            // RRC
            is("b001".U) {
              val c = operand(0)
              result := Cat(c, operand(7,1))
              setFlags(result === 0.U, false.B, false.B, c)
            }
            // RL
            is("b010".U) {
              val c = operand(7)
              result := Cat(operand(6,0), F_in(4))
              setFlags(result === 0.U, false.B, false.B, c)
            }
            // RR
            is("b011".U) {
              val c = operand(0)
              result := Cat(F_in(4), operand(7,1))
              setFlags(result === 0.U, false.B, false.B, c)
            }
            // SLA
            is("b100".U) {
              val c = operand(7)
              result := Cat(operand(6,0), 0.U)
              setFlags(result === 0.U, false.B, false.B, c)
            }
            // SRA
            is("b101".U) {
              val c = operand(0)
              result := Cat(operand(7), operand(7,1))
              setFlags(result === 0.U, false.B, false.B, c)
            }
            // SWAP
            is("b110".U) {
              result := Cat(operand(3,0), operand(7,4))
              setFlags(result === 0.U, false.B, false.B, false.B)
            }
            // SRL
            is("b111".U) {
              val c = operand(0)
              result := Cat(0.U, operand(7,1))
              setFlags(result === 0.U, false.B, false.B, c)
            }
          }
        }

        // BIT b, r
        is("b01".U) {
          val bitVal = operand(bitIdx)
          // Z = ~bit
          setFlags(!bitVal, false.B, true.B, F_in(4))
          result := operand
        }

        // RES b, r
        is("b10".U) {
          val mask = (~(1.U << bitIdx)).asUInt
          result := operand & mask
        }

        // SET b, r
        is("b11".U) {
          val mask = (1.U << bitIdx).asUInt
          result := operand | mask
        }

      }

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
    //------------------------------------------------------------------
    when(mcycle === 3.U) {

      switch(tcycle) {
        is(0.U) {
          io.memAddr      := HL
          io.memWrite     := true.B
          io.memWriteData := result
        }
        is(1.U) { io.memWrite := true.B }
        is(2.U) { }
        is(3.U) {
          out.done := true.B
        }
      }
    }

    //------------------------------------------------------------------
    // Register writeback (for register CB opcodes)
    //------------------------------------------------------------------
    when(!isHL && mcycle === 2.U && tcycle === 0.U) {
      wr(regIdx, result)
    }

    out
  }
}
