package cpu

import chisel3._
import chisel3.util._
import cpu.LR35902_ALU._

object Microcode {

  class OutBundle extends Bundle {
    val PC          = UInt(16.W)
    val SP          = UInt(16.W)
    val A           = UInt(8.W)
    val F           = UInt(8.W)
    val B           = UInt(8.W)
    val C           = UInt(8.W)
    val D           = UInt(8.W)
    val E           = UInt(8.W)
    val H           = UInt(8.W)
    val L           = UInt(8.W)

    val IME         = Bool()
    val IME_pending = Bool()

    val next_mcycle = UInt(3.W)
    val done        = Bool()
  }

  def apply(
             IR: UInt,
             mcycle: UInt,
             tcycle: UInt,
             PC_in: UInt,
             SP_in: UInt,
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
             },
             imm8_in: UInt,
             imm16_in: UInt,
             IME_in: Bool,

             IME_pending_in: Bool
           ): OutBundle = {

    val out = Wire(new OutBundle)
    // ------------------------------------------------------------
    // Microcode scratch registers (NOT instruction immediates)
    // ------------------------------------------------------------
    val tmp8  = RegInit(0.U(8.W))
    val tmp16 = RegInit(0.U(16.W))


    // ------------------------------------------------------------------
    // DEFAULTS
    // ------------------------------------------------------------------
    out.PC    := PC_in
    out.SP    := SP_in
    out.A     := A_in
    out.F     := F_in
    out.B     := B_in
    out.C     := C_in
    out.D     := D_in
    out.E     := E_in
    out.H     := H_in
    out.L     := L_in

    out.IME         := IME_in
    out.IME_pending := IME_pending_in

    out.next_mcycle := mcycle
    out.done        := false.B

    io.memAddr      := 0.U
    io.memRead      := false.B
    io.memWrite     := false.B
    io.memWriteData := 0.U

    val HL = Cat(H_in, L_in)

    def readReg(i: UInt): UInt = MuxLookup(i, 0.U, Seq(
      0.U -> B_in, 1.U -> C_in, 2.U -> D_in, 3.U -> E_in,
      4.U -> H_in, 5.U -> L_in, 7.U -> A_in
    ))

    def writeReg(i: UInt, v: UInt): Unit = {
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

    def setFlags(Z: Bool, N: Bool, H: Bool, C: Bool): Unit =
      out.F := Cat(Z, N, H, C, 0.U(4.W))

    val alu = Module(new LR35902_ALU)
    alu.io.a        := 0.U
    alu.io.b        := 0.U
    alu.io.op       := 0.U
    alu.io.carryIn  := F_in(4)

    // ==========================================================
    // DECODE
    // ==========================================================

    // ----------------------------------------------------------
    // 0x00 — NOP
    // ----------------------------------------------------------
    when(IR === "h00".U) {
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // 0x76 — HALT
      // ----------------------------------------------------------
    }.elsewhen(IR === "h76".U) {
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // LD rr,nn — 16-bit immediate load (0x01, 0x11, 0x21, 0x31)
      // PATCH FIX #1 - This was completely missing!
      // ----------------------------------------------------------
    }.elsewhen((IR & "hCF".U) === "h01".U) {
      val rr = (IR >> 4) & 3.U

      switch(rr) {
        is(0.U) {  // LD BC,nn (0x01)
          out.C := imm16_in(7, 0)
          out.B := imm16_in(15, 8)
        }
        is(1.U) {  // LD DE,nn (0x11)
          out.E := imm16_in(7, 0)
          out.D := imm16_in(15, 8)
        }
        is(2.U) {  // LD HL,nn (0x21)
          out.L := imm16_in(7, 0)
          out.H := imm16_in(15, 8)
        }
        is(3.U) {  // LD SP,nn (0x31)
          out.SP := imm16_in
        }
      }
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // INC rr — 16-bit increment (0x03, 0x13, 0x23, 0x33)
      // ----------------------------------------------------------
    }.elsewhen((IR & "hCF".U) === "h03".U) {
      val rr = (IR >> 4) & 3.U
      val result = MuxLookup(rr, 0.U(16.W), Seq(
        0.U -> (Cat(B_in, C_in) + 1.U),
        1.U -> (Cat(D_in, E_in) + 1.U),
        2.U -> (Cat(H_in, L_in) + 1.U),
        3.U -> (SP_in + 1.U)
      ))

      switch(rr) {
        is(0.U) { out.B := result(15, 8); out.C := result(7, 0) }
        is(1.U) { out.D := result(15, 8); out.E := result(7, 0) }
        is(2.U) { out.H := result(15, 8); out.L := result(7, 0) }
        is(3.U) { out.SP := result }
      }
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // DEC rr — 16-bit decrement (0x0B, 0x1B, 0x2B, 0x3B)
      // ----------------------------------------------------------
    }.elsewhen((IR & "hCF".U) === "h0B".U) {
      val rr = (IR >> 4) & 3.U
      val result = MuxLookup(rr, 0.U(16.W), Seq(
        0.U -> (Cat(B_in, C_in) - 1.U),
        1.U -> (Cat(D_in, E_in) - 1.U),
        2.U -> (Cat(H_in, L_in) - 1.U),
        3.U -> (SP_in - 1.U)
      ))

      switch(rr) {
        is(0.U) { out.B := result(15, 8); out.C := result(7, 0) }
        is(1.U) { out.D := result(15, 8); out.E := result(7, 0) }
        is(2.U) { out.H := result(15, 8); out.L := result(7, 0) }
        is(3.U) { out.SP := result }
      }
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // ADD HL,rr — 16-bit add to HL (0x09, 0x19, 0x29, 0x39)
      // ----------------------------------------------------------
    }.elsewhen((IR & "hCF".U) === "h09".U) {
      val rr = (IR >> 4) & 3.U
      val operand = MuxLookup(rr, 0.U(16.W), Seq(
        0.U -> Cat(B_in, C_in),
        1.U -> Cat(D_in, E_in),
        2.U -> Cat(H_in, L_in),
        3.U -> SP_in
      ))

      val hl = Cat(H_in, L_in)
      val result = hl + operand
      out.H := result(15, 8)
      out.L := result(7, 0)

      // Flags: - 0 H C
      val halfCarry = ((hl & "h0FFF".U) + (operand & "h0FFF".U)) > "h0FFF".U
      val carry = result > "hFFFF".U
      setFlags(F_in(7), false.B, halfCarry, carry)

      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // INC r — 1 cycle (0x04, 0x0C, 0x14, 0x1C, 0x24, 0x2C, 0x3C)
      // ----------------------------------------------------------
    }.elsewhen((IR & "hC7".U) === "h04".U && ((IR >> 3) & 7.U) =/= 6.U) {
      val dst = (IR >> 3) & 7.U
      val oldVal = readReg(dst)

      val carryIn = F_in(4)   // 🔴 snapshot carry BEFORE ALU

      alu.io.op := OP_INC
      alu.io.a  := oldVal
      alu.io.b  := 0.U

      writeReg(dst, alu.io.out)

      // Z, N, H from ALU — C preserved
      setFlags(
        alu.io.flagZ,
        false.B,              // N must be 0
        alu.io.flagH,
        carryIn               // ✅ preserved Carry
      )

      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // DEC r — 1 cycle (0x05, 0x0D, 0x15, 0x1D, 0x25, 0x2D, 0x3D)
      // ----------------------------------------------------------
    }.elsewhen((IR & "hC7".U) === "h05".U && ((IR >> 3) & 7.U) =/= 6.U) {
      val dst = (IR >> 3) & 7.U
      val oldVal = readReg(dst)

      alu.io.op := OP_DEC
      alu.io.a  := oldVal
      alu.io.b  := 0.U
      writeReg(dst, alu.io.out)
      setFlags(alu.io.flagZ, alu.io.flagN, alu.io.flagH, F_in(4))

      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // INC (HL) — 3 M-cycles (0x34)
      // ----------------------------------------------------------
    }.elsewhen(IR === "h34".U) {
      val carryIn = F_in(4) // preserve carry

      switch(mcycle) {
        // M0: read (HL)
        is(0.U) {
          io.memAddr := HL
          io.memRead := true.B
          when(tcycle === 3.U) {
            tmp8 := io.memReadData
            out.next_mcycle := 1.U
          }
        }

        // M1: inc it + set flags
        is(1.U) {
          alu.io.op := OP_INC
          alu.io.a  := tmp8
          alu.io.b  := 0.U

          setFlags(
            alu.io.flagZ,
            false.B,        // N = 0 for INC
            alu.io.flagH,
            carryIn
          )

          when(tcycle === 3.U) {
            tmp8 := alu.io.out
            out.next_mcycle := 2.U
          }
        }

        // M2: write back to (HL)
        is(2.U) {
          io.memAddr      := HL
          io.memWrite     := (tcycle === 2.U)
          io.memWriteData := tmp8
          when(tcycle === 3.U) { out.done := true.B }
        }
      }

      // ----------------------------------------------------------
      // DEC (HL) — 3 M-cycles (0x35)
      // ----------------------------------------------------------
    }.elsewhen(IR === "h35".U) {
      val carryIn = F_in(4) // preserve carry

      switch(mcycle) {
        // M0: read (HL)
        is(0.U) {
          io.memAddr := HL
          io.memRead := true.B
          when(tcycle === 3.U) {
            tmp8 := io.memReadData
            out.next_mcycle := 1.U
          }
        }

        // M1: dec it + set flags
        is(1.U) {
          alu.io.op := OP_DEC
          alu.io.a  := tmp8
          alu.io.b  := 0.U

          // flags: Z from result, N=1, H from ALU, C preserved
          setFlags(
            alu.io.flagZ,
            true.B,          // N = 1 for DEC
            alu.io.flagH,
            carryIn
          )

          when(tcycle === 3.U) {
            tmp8 := alu.io.out
            out.next_mcycle := 2.U
          }
        }

        // M2: write back to (HL)
        is(2.U) {
          io.memAddr      := HL
          io.memWrite     := (tcycle === 2.U)
          io.memWriteData := tmp8
          when(tcycle === 3.U) { out.done := true.B }
        }
      }
      // ----------------------------------------------------------
      // 0xE9
      // ----------------------------------------------------------
    }.elsewhen(IR === "hE9".U) { // JP (HL)
      out.PC := HL
      when(tcycle === 3.U) { out.done := true.B }


      // ----------------------------------------------------------
      // LD r,r' — 1 cycle
      // ----------------------------------------------------------
    }.elsewhen((IR >= "h40".U && IR <= "h7F".U) &&
      (IR =/= "h76".U) &&                      // Not HALT
      ((IR & "h07".U) =/= "h06".U) &&         // Not (HL) as source/dest
      ((IR & "hF8".U) =/= "h70".U)) {
      val dst = (IR >> 3) & 7.U
      val src = IR & 7.U
      writeReg(dst, readReg(src))
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // LD r,n — 1 M-cycle
      // ----------------------------------------------------------
    }.elsewhen((IR & "hC7".U) === "h06".U && ((IR >> 3) & 7.U) =/= 6.U) {
      val dst = (IR >> 3) & 7.U
      writeReg(dst, imm8_in)
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // LD (HL),r — Store register to (HL)
      // PATCH FIX #2 - Simplified to single M-cycle
      // Memory write should happen at T-cycle 2 (Game Boy timing)
      // ----------------------------------------------------------
    }.elsewhen((IR >= "h70".U && IR <= "h75".U) || IR === "h77".U) {
      val src = IR & 7.U

      io.memAddr      := HL
      io.memWrite     := (tcycle === 2.U)  // Write at T-cycle 2
      io.memWriteData := readReg(src)

      when(tcycle === 3.U) { out.done := true.B }

      // LD (HL),n - Load immediate to memory at (HL) (0x36)
      // Add this to Microcode.scala

    }.elsewhen(IR === "h36".U) {
      // M0: Already fetched imm8 in fetch stage
      // M1: Write imm8 to (HL)
      val HL = Cat(H_in, L_in)

      when(mcycle === 0.U) {
        io.memAddr := HL
        io.memWrite := true.B
        io.memWriteData := imm8_in

        when(tcycle === 3.U) {
          out.done := true.B
        }
      }

      // ----------------------------------------------------------
      // LD A,(DE) — 0x1A
      // ----------------------------------------------------------
    }.elsewhen(IR === "h1A".U) {
      when(tcycle === 0.U || tcycle === 1.U || tcycle === 2.U || tcycle === 3.U) {
        io.memAddr := Cat(D_in, E_in)
        io.memRead := true.B  // Keep reading throughout!
      }
      when(tcycle === 0.U) {
       // printf(p"[LD A,(DE) T0] Setting memAddr=${Hexadecimal(Cat(D_in, E_in))} memRead=true\n")
      }
      when(tcycle === 3.U) {
      //  printf(p"[LD A,(DE) T3] memAddr=${Hexadecimal(io.memAddr)} data=${Hexadecimal(io.memReadData)} DE=${Hexadecimal(Cat(D_in, E_in))}\n")
        out.A := io.memReadData
        out.done := true.B
      }

      // ----------------------------------------------------------
      // LD A,(HL+) / LDI A,(HL) — 0x2A  (2 M-cycles)
      // M0: request read at [HL], also increment HL
      // M1: write A with latched data
      // ----------------------------------------------------------
    }.elsewhen(IR === "h2A".U) {
      switch(mcycle) {
        is(0.U) {
          io.memAddr := HL
          io.memRead := true.B

          // HL increments during this instruction (hardware does it)
          val newHL = HL + 1.U
          out.H := newHL(15, 8)
          out.L := newHL(7, 0)

          when(tcycle === 3.U) {
            tmp8 := io.memReadData     // latch read data at end of M0
            out.next_mcycle := 1.U
          }
        }

        is(1.U) {
          // just commit A in M1
          out.A := tmp8
          when(tcycle === 3.U) { out.done := true.B }
        }
      }


      // ----------------------------------------------------------
      // LD A,(HL-) / LDD A,(HL) — 0x3A
      // ----------------------------------------------------------
    }.elsewhen(IR === "h3A".U) {
      switch(tcycle) {
        is(0.U) { io.memAddr := HL; io.memRead := true.B }
        is(1.U) { io.memRead := true.B }
        is(2.U) {
          out.A := io.memReadData
          val newHL = HL - 1.U
          out.H := newHL(15, 8)
          out.L := newHL(7, 0)
        }
        is(3.U) { out.done := true.B }
      }

      // ----------------------------------------------------------
      // LD (HL+),A / LDI (HL),A — 0x22
      // ----------------------------------------------------------
    }.elsewhen(IR === "h22".U) {
      val HL = Cat(H_in, L_in)
      val newHL = HL + 1.U
      out.H := newHL(15, 8)
      out.L := newHL(7, 0)

      io.memAddr      := HL
      io.memWriteData := A_in
      io.memWrite     := (tcycle === 2.U)

      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // LD (HL-),A / LDD (HL),A — 0x32
      // ----------------------------------------------------------
    }.elsewhen(IR === "h32".U) {
      val HL = Cat(H_in, L_in)
      val newHL = HL - 1.U
      out.H := newHL(15, 8)
      out.L := newHL(7, 0)

      io.memAddr      := HL
      io.memWriteData := A_in
      io.memWrite     := (tcycle === 2.U)

      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // LD A,(C) / LD A,(0xFF00+C) — 0xF2
      // ----------------------------------------------------------
    }.elsewhen(IR === "hF2".U) {
      val addr = Cat("hFF".U(8.W), C_in)

      switch(mcycle) {
        is(0.U) {
          io.memAddr := addr
          io.memRead := true.B
          when(tcycle === 3.U) {
            tmp8 := io.memReadData
            out.next_mcycle := 1.U
          }
        }
        is(1.U) {
          out.A := tmp8
          when(tcycle === 3.U) { out.done := true.B }
        }
      }

      // ----------------------------------------------------------
      // LD (C),A / LD (0xFF00+C),A — 0xE2
      // ----------------------------------------------------------
    }.elsewhen(IR === "hE2".U) {
      io.memAddr      := Cat("hFF".U(8.W), C_in)
      io.memWriteData := A_in
      io.memWrite     := (tcycle === 2.U)

      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // LDH (0xFF00+n),A — 0xE0
      // ----------------------------------------------------------
    }.elsewhen(IR === "hE0".U) {
      io.memAddr      := Cat("hFF".U(8.W), imm8_in)
      io.memWriteData := A_in
      io.memWrite     := (tcycle === 2.U)

      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // LDH A,(0xFF00+n) — 0xF0  (ROBUST: 2 m-cycles)
      // ----------------------------------------------------------
    }.elsewhen(IR === "hF0".U) {
      when(tcycle === 0.U || tcycle === 1.U || tcycle === 2.U || tcycle === 3.U) {
        io.memAddr := Cat(0xFF.U(8.W), imm8_in)
        io.memRead := true.B
      }
      when(tcycle === 3.U) {
        out.A := io.memReadData
        out.done := true.B
      }

      // ----------------------------------------------------------
      // LD r,(HL) — Load from (HL) to register
      // PATCH FIX #3 - Simplified to single M-cycle
      // ----------------------------------------------------------
    }.elsewhen(IR === "h46".U || IR === "h4E".U || IR === "h56".U ||
      IR === "h5E".U || IR === "h66".U || IR === "h6E".U || IR === "h7E".U) {
      val dst = (IR >> 3) & 7.U
      // Memory read active throughout M-cycle
      io.memAddr := HL
      io.memRead := true.B
      // Write register with memory data (output stays stable for writeback at T3)
      writeReg(dst, io.memReadData)
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // ADD A,(HL) — 0x86 (needs memory read)
      // ----------------------------------------------------------
    }.elsewhen(IR === "h86".U) {
      when(tcycle === 0.U || tcycle === 1.U || tcycle === 2.U || tcycle === 3.U) {
        io.memAddr := Cat(H_in, L_in)
        io.memRead := true.B
      }
      when(tcycle === 3.U) {
        alu.io.op := OP_ADD
        alu.io.a  := A_in
        alu.io.b  := io.memReadData
        out.A     := alu.io.out
        setFlags(alu.io.flagZ, false.B, alu.io.flagH, alu.io.flagC)
        out.done := true.B
      }

      // ----------------------------------------------------------
      // XOR A,(HL) — 0xAE
      // ----------------------------------------------------------
    }.elsewhen(IR === "hAE".U) {
      // Keep memory read asserted for whole cycle
      when(tcycle === 0.U || tcycle === 1.U || tcycle === 2.U || tcycle === 3.U) {
        io.memAddr := Cat(H_in, L_in)
        io.memRead := true.B
      }

      when(tcycle === 3.U) {
        alu.io.op := OP_XOR
        alu.io.a  := A_in
        alu.io.b  := io.memReadData

        out.A := alu.io.out
        setFlags(
          alu.io.flagZ,
          false.B,   // N = 0
          false.B,   // H = 0
          false.B    // C = 0
        )

        out.done := true.B
      }


    // ----------------------------------------------------------
      // ADD A,r (0x80-0x85, 0x87) - REGISTERS ONLY
      // ----------------------------------------------------------
    }.elsewhen((IR >= "h80".U && IR <= "h85".U) || IR === "h87".U) {
      val src = readReg(IR & 7.U)
      alu.io.op := OP_ADD
      alu.io.a  := A_in
      alu.io.b  := src
      out.A     := alu.io.out
      setFlags(
        alu.io.flagZ,
        false.B,             // ✅ N must be 0 for ADD
        alu.io.flagH,
        alu.io.flagC
      )
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // ADC A,r (0x88-0x8F)
      // ----------------------------------------------------------
    }.elsewhen(IR >= "h88".U && IR <= "h8F".U) {
      val src = readReg(IR & 7.U)
      alu.io.op := OP_ADC
      alu.io.a  := A_in
      alu.io.b  := src
      out.A     := alu.io.out
      setFlags(alu.io.flagZ, alu.io.flagN, alu.io.flagH, alu.io.flagC)
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // SUB A,r (0x90-0x97)
      // ----------------------------------------------------------
    }.elsewhen(IR >= "h90".U && IR <= "h97".U) {
      val src = readReg(IR & 7.U)
      alu.io.op := OP_SUB
      alu.io.a  := A_in
      alu.io.b  := src
      out.A     := alu.io.out
      setFlags(alu.io.flagZ, alu.io.flagN, alu.io.flagH, alu.io.flagC)
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // SBC A,r (0x98-0x9F)
      // ----------------------------------------------------------
    }.elsewhen(IR >= "h98".U && IR <= "h9F".U) {
      val src = readReg(IR & 7.U)
      alu.io.op := OP_SBC
      alu.io.a  := A_in
      alu.io.b  := src
      out.A     := alu.io.out
      setFlags(alu.io.flagZ, alu.io.flagN, alu.io.flagH, alu.io.flagC)
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // AND A,r (0xA0-0xA7)
      // ----------------------------------------------------------
    }.elsewhen(IR >= "hA0".U && IR <= "hA7".U) {
      val src = readReg(IR & 7.U)
      alu.io.op := OP_AND
      alu.io.a  := A_in
      alu.io.b  := src
      out.A     := alu.io.out
      setFlags(alu.io.flagZ, alu.io.flagN, alu.io.flagH, alu.io.flagC)
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // XOR A,r (0xA8-0xAF)
      // ----------------------------------------------------------
    }.elsewhen(IR >= "hA8".U && IR <= "hAF".U) {
      val src = readReg(IR & 7.U)
      alu.io.op := OP_XOR
      alu.io.a  := A_in
      alu.io.b  := src
      out.A     := alu.io.out
      setFlags(alu.io.flagZ, alu.io.flagN, alu.io.flagH, alu.io.flagC)
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // OR A,r (0xB0-0xB7)
      // ----------------------------------------------------------
    }.elsewhen(IR >= "hB0".U && IR <= "hB7".U) {
      val src = readReg(IR & 7.U)
      alu.io.op := OP_OR
      alu.io.a  := A_in
      alu.io.b  := src
      out.A     := alu.io.out
      setFlags(alu.io.flagZ, alu.io.flagN, alu.io.flagH, alu.io.flagC)
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // CP (HL) — 0xBE (needs memory read)
      // ----------------------------------------------------------
    }.elsewhen(IR === "hBE".U) {
      when(tcycle === 0.U || tcycle === 1.U || tcycle === 2.U || tcycle === 3.U) {
        io.memAddr := Cat(H_in, L_in)
        io.memRead := true.B
      }
      when(tcycle === 3.U) {
        alu.io.op := OP_SUB
        alu.io.a  := A_in
        alu.io.b  := io.memReadData  // Read from memory!
        alu.io.carryIn := false.B
        setFlags(alu.io.flagZ, true.B, alu.io.flagH, alu.io.flagC)
        out.done := true.B
      }

      // ----------------------------------------------------------
      // CP A,r (0xB8-0xBF)
      // ----------------------------------------------------------
    }.elsewhen((IR >= "hB8".U && IR <= "hBD".U) || IR === "hBF".U) {
      val src = readReg(IR & 7.U)
      alu.io.op := OP_SUB
      alu.io.a  := A_in
      alu.io.b  := src
      alu.io.carryIn := false.B   // CRITICAL
      setFlags(
        alu.io.flagZ,
        true.B,                  // N = 1
        alu.io.flagH,
        alu.io.flagC
      )
      when(tcycle === 3.U) { out.done := true.B }

    // ----------------------------------------------------------
      // ADD A,n (0xC6)
      // ----------------------------------------------------------
    }.elsewhen(IR === "hC6".U) {
      alu.io.op := OP_ADD
      alu.io.a  := A_in
      alu.io.b  := imm8_in
      out.A     := alu.io.out
      setFlags(alu.io.flagZ, alu.io.flagN, alu.io.flagH, alu.io.flagC)
      when(tcycle === 3.U) { out.done := true.B }
      // ----------------------------------------------------------
      // ADC A,n (0xCE)  ← MISSING INSTRUCTION
      // ----------------------------------------------------------
    }.elsewhen(IR === "hCE".U) { // ADC A,n
      alu.io.op := OP_ADC
      alu.io.a  := A_in
      alu.io.b  := imm8_in

      out.A := alu.io.out
      setFlags(
        alu.io.flagZ,
        false.B,          // N = 0
        alu.io.flagH,
        alu.io.flagC
      )

      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // SUB A,n (0xD6)
      // ----------------------------------------------------------
    }.elsewhen(IR === "hD6".U) {
      alu.io.op := OP_SUB
      alu.io.a  := A_in
      alu.io.b  := imm8_in
      out.A     := alu.io.out
      setFlags(alu.io.flagZ, alu.io.flagN, alu.io.flagH, alu.io.flagC)
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // AND A,n (0xE6)
      // ----------------------------------------------------------
    }.elsewhen(IR === "hE6".U) {
      alu.io.op := OP_AND
      alu.io.a  := A_in
      alu.io.b  := imm8_in
      out.A     := alu.io.out
      setFlags(alu.io.flagZ, alu.io.flagN, alu.io.flagH, alu.io.flagC)
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // XOR A,n (0xEE)
      // ----------------------------------------------------------
    }.elsewhen(IR === "hEE".U) {
      alu.io.op := OP_XOR
      alu.io.a  := A_in
      alu.io.b  := imm8_in
      out.A     := alu.io.out
      setFlags(alu.io.flagZ, alu.io.flagN, alu.io.flagH, alu.io.flagC)
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // OR A,n (0xF6)
      // ----------------------------------------------------------
    }.elsewhen(IR === "hF6".U) {
      alu.io.op := OP_OR
      alu.io.a  := A_in
      alu.io.b  := imm8_in
      out.A     := alu.io.out
      setFlags(alu.io.flagZ, alu.io.flagN, alu.io.flagH, alu.io.flagC)
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // CP A,n (0xFE)
      // ----------------------------------------------------------
    }.elsewhen(IR === "hFE".U) {
      alu.io.op := OP_SUB
      alu.io.a  := A_in
      alu.io.b  := imm8_in
      alu.io.carryIn := false.B   // CRITICAL
      setFlags(
        alu.io.flagZ,
        true.B,
        alu.io.flagH,
        alu.io.flagC
      )
      when(tcycle === 3.U) { out.done := true.B }

    // ----------------------------------------------------------
      // JR e (0x18)
      // ----------------------------------------------------------
    }.elsewhen(IR === "h18".U) {
      val off = imm8_in.asSInt
      when(tcycle === 3.U) {
        out.PC := (PC_in.asSInt + off).asUInt
        out.done := true.B
      }




    // ----------------------------------------------------------
      // STOP (0x10)
      // ----------------------------------------------------------
    }.elsewhen(IR === "h10".U) {
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // PUSH rr — Push to stack (0xC5, 0xD5, 0xE5, 0xF5)
      // FIX: Make SP updates unconditional for stable writeback at T3
      // ----------------------------------------------------------
    }.elsewhen((IR & "hCF".U) === "hC5".U) {
      val rr = (IR >> 4) & 3.U
      val regPair = MuxLookup(rr, 0.U(16.W), Seq(
        0.U -> Cat(B_in, C_in),
        1.U -> Cat(D_in, E_in),
        2.U -> Cat(H_in, L_in),
        3.U -> Cat(A_in, F_in)
      ))

      switch(mcycle) {
        is(0.U) {
          val sp1 = SP_in - 1.U
          io.memAddr      := sp1
          io.memWrite     := true.B
          io.memWriteData := regPair(15, 8)  // HIGH byte first
          out.SP := sp1                       // FIX: Unconditional - stable for T3 writeback
          when(tcycle === 3.U) {
            out.next_mcycle := 1.U
          }
        }
        is(1.U) {
          val sp2 = SP_in - 1.U
          io.memAddr      := sp2
          io.memWrite     := true.B
          io.memWriteData := regPair(7, 0)   // LOW byte second
          out.SP := sp2                       // FIX: Unconditional - stable for T3 writeback
          when(tcycle === 3.U) {
            out.done := true.B
          }
        }
      }

      // ----------------------------------------------------------
      // POP rr — 0xC1, 0xD1, 0xE1, 0xF1
      // M0: read LOW from [SP], SP++
      // M1: read HIGH from [SP], SP++, write rr
      // ----------------------------------------------------------
    }.elsewhen((IR & "hCF".U) === "hC1".U) {
      val rr = (IR >> 4) & 3.U

      switch(mcycle) {
        // M0: LOW byte
        is(0.U) {
          io.memAddr := SP_in
          io.memRead := true.B
          when(tcycle === 3.U) {
            tmp8 := io.memReadData          // LOW
            out.SP := SP_in + 1.U
            out.next_mcycle := 1.U
          }
        }

        // M1: HIGH byte
        is(1.U) {
          io.memAddr := SP_in
          io.memRead := true.B
          when(tcycle === 3.U) {
            val low  = tmp8
            val high = io.memReadData

            switch(rr) {
              is(0.U) { out.B := high; out.C := low }                  // BC
              is(1.U) { out.D := high; out.E := low }                  // DE
              is(2.U) { out.H := high; out.L := low }                  // HL
              is(3.U) { out.A := high; out.F := (low & "hF0".U) }      // AF (lower nibble must be 0)
            }

            out.SP := SP_in + 1.U
            out.done := true.B
          }
        }
      }


      // ----------------------------------------------------------
      // CALL nn — 0xCD
      // FIX: Make SP and PC updates unconditional
      // ----------------------------------------------------------
    }.elsewhen(IR === "hCD".U) {
      switch(mcycle) {
        is(0.U) {
          val sp1 = SP_in - 1.U
          io.memAddr      := sp1
          io.memWrite     := true.B
          io.memWriteData := PC_in(15, 8)
          out.SP := sp1  // FIX: Unconditional
          when(tcycle === 3.U) { out.next_mcycle := 1.U }
        }
        is(1.U) {
          val sp2 = SP_in - 1.U
          io.memAddr      := sp2
          io.memWrite     := true.B
          io.memWriteData := PC_in(7, 0)
          out.SP := sp2  // FIX: Unconditional
          when(tcycle === 3.U) { out.next_mcycle := 2.U }
        }
        is(2.U) {
          out.PC := imm16_in  // FIX: Unconditional
          when(tcycle === 3.U) { out.done := true.B }
        }
      }


    }.elsewhen(IR === "hC9".U) {
      switch(mcycle) {

        // M0: read LOW byte from [SP]
        is(0.U) {
          io.memAddr := SP_in
          io.memRead := true.B
          when(tcycle === 3.U) {
            tmp8 := io.memReadData      // LOW
            out.SP := SP_in + 1.U
            out.next_mcycle := 1.U
          }
        }

        // M1: read HIGH byte from [SP+1], assemble PC
        is(1.U) {
          io.memAddr := SP_in
          io.memRead := true.B
          when(tcycle === 3.U) {
            out.PC := Cat(io.memReadData, tmp8)   // ✅ use tmp8, NOT imm8_in
            out.SP := SP_in + 1.U
            out.done := true.B
          }
        }
      }


    // ----------------------------------------------------------
      // RETI — 0xD9 (Return + enable interrupts)
      // ----------------------------------------------------------
    }.elsewhen(IR === "hD9".U) {
      switch(mcycle) {

        // M0: read LOW byte
        is(0.U) {
          io.memAddr := SP_in
          io.memRead := true.B

          when(tcycle === 3.U) {
            tmp8  := io.memReadData      // LOW byte
            out.SP   := SP_in + 1.U
            out.next_mcycle := 1.U
          }
        }

        // M1: read HIGH byte, update PC, finish
        is(1.U) {
          io.memAddr := SP_in
          io.memRead := true.B

          when(tcycle === 3.U) {
            out.PC  := Cat(io.memReadData, tmp8) // HIGH : LOW
            out.SP  := SP_in + 1.U
            out.IME := true.B                       // ENABLE AFTER RETURN
            out.done := true.B
          }
        }
      }

      // ----------------------------------------------------------
      // RST n — Restart (0xC7, 0xCF, 0xD7, 0xDF, 0xE7, 0xEF, 0xF7, 0xFF)
      // FIX: Make SP updates unconditional
      // ----------------------------------------------------------
    }.elsewhen((IR & "hC7".U) === "hC7".U) {
      val vec = (IR & "h38".U)
      switch(mcycle) {
        is(0.U) {
          val sp1 = SP_in - 1.U
          io.memAddr      := sp1
          io.memWrite     := true.B
          io.memWriteData := PC_in(15, 8)
          out.SP := sp1  // FIX: Unconditional
          when(tcycle === 3.U) { out.next_mcycle := 1.U }
        }
        is(1.U) {
          val sp2 = SP_in - 1.U
          io.memAddr      := sp2
          io.memWrite     := true.B
          io.memWriteData := PC_in(7, 0)
          out.PC := vec  // Already unconditional ✓
          out.SP := sp2  // FIX: Unconditional
          when(tcycle === 3.U) { out.done := true.B }
        }
      }

      // ----------------------------------------------------------
      // EI — Enable interrupts (0xFB)
      // ----------------------------------------------------------
    }.elsewhen(IR === "hFB".U) {
      out.IME_pending := true.B
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // DI — Disable interrupts (0xF3)
      // ----------------------------------------------------------
    }.elsewhen(IR === "hF3".U) {
      out.IME := false.B
      out.IME_pending := false.B
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // Conditional JR (0x20, 0x28, 0x30, 0x38)
      // ----------------------------------------------------------
    }.elsewhen((IR & "hE7".U) === "h20".U) {
      val cc = (IR >> 3) & 3.U
      val flagZ = F_in(7)
      val flagC = F_in(4)
      val off = imm8_in.asSInt

      val condition = MuxLookup(cc, false.B, Seq(
        0.U -> !flagZ,  // NZ
        1.U -> flagZ,   // Z
        2.U -> !flagC,  // NC
        3.U -> flagC    // C
      ))

      when(condition) {
        out.PC := (PC_in.asSInt + off).asUInt
      }

      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // Conditional JP (0xC2, 0xCA, 0xD2, 0xDA)
      // ----------------------------------------------------------
    }.elsewhen((IR & "hE7".U) === "hC2".U) {
      val cc = (IR >> 3) & 3.U
      val flagZ = F_in(7)
      val flagC = F_in(4)

      val condition = MuxLookup(cc, false.B, Seq(
        0.U -> !flagZ,  // NZ
        1.U -> flagZ,   // Z
        2.U -> !flagC,  // NC
        3.U -> flagC    // C
      ))

      when(condition) {
        out.PC := imm16_in
      }
      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // Conditional CALL (0xC4, 0xCC, 0xD4, 0xDC)
      // FIX: Make SP updates unconditional
      // ----------------------------------------------------------
    }.elsewhen((IR & "hE7".U) === "hC4".U) {
      val cc = (IR >> 3) & 3.U
      val flagZ = F_in(7)
      val flagC = F_in(4)

      val condition = MuxLookup(cc, false.B, Seq(
        0.U -> !flagZ,  // NZ
        1.U -> flagZ,   // Z
        2.U -> !flagC,  // NC
        3.U -> flagC    // C
      ))

      when(condition) {
        switch(mcycle) {
          is(0.U) {
            val sp1 = SP_in - 1.U
            io.memAddr      := sp1
            io.memWrite     := true.B
            io.memWriteData := PC_in(15, 8)
            out.SP := sp1  // FIX: Unconditional
            when(tcycle === 3.U) { out.next_mcycle := 1.U }
          }
          is(1.U) {
            val sp2 = SP_in - 1.U
            io.memAddr      := sp2
            io.memWrite     := true.B
            io.memWriteData := PC_in(7, 0)
            out.PC := imm16_in  // Already unconditional ✓
            out.SP := sp2  // FIX: Unconditional
            when(tcycle === 3.U) { out.done := true.B }
          }
        }
      }.otherwise {
        when(tcycle === 3.U) { out.done := true.B }
      }

      // ----------------------------------------------------------
      // Conditional RET (0xC0, 0xC8, 0xD0, 0xD8)
      // FIX: Make PC update and imm8 capture unconditional
      // ----------------------------------------------------------
    }.elsewhen((IR & "hE7".U) === "hC0".U) {   // RET cc
      val cc = (IR >> 3) & 3.U
      val flagZ = F_in(7)
      val flagC = F_in(4)

      val condition = MuxLookup(cc, false.B, Seq(
        0.U -> !flagZ,  // NZ
        1.U ->  flagZ,  // Z
        2.U -> !flagC,  // NC
        3.U ->  flagC   // C
      ))

      when(condition) {
        switch(mcycle) {
          // M0: read LOW from [SP], SP++
          is(0.U) {
            io.memAddr := SP_in
            io.memRead := true.B
            when(tcycle === 3.U) {
              tmp8 := io.memReadData
              out.SP := SP_in + 1.U
              out.next_mcycle := 1.U
            }
          }

          // M1: read HIGH from [SP], SP++, PC := high:low
          is(1.U) {
            io.memAddr := SP_in
            io.memRead := true.B
            when(tcycle === 3.U) {
              out.PC := Cat(io.memReadData, tmp8)   // ✅ tmp8, not imm8_in
              out.SP := SP_in + 1.U
              out.done := true.B
            }
          }
        }
      }.otherwise {
        when(tcycle === 3.U) { out.done := true.B }
      }

      // ----------------------------------------------------------
      // JP nn (0xC3)
      // ----------------------------------------------------------
    }.elsewhen(IR === "hC3".U) {
      out.PC := imm16_in
      when(tcycle === 3.U) { out.done := true.B }

      // SCF - Set Carry Flag (0x37)
    }.elsewhen(IR === "h37".U) {
      out.F := Cat(F_in(7), false.B, false.B, true.B, 0.U(4.W))  // Z unchanged, N=0, H=0, C=1
      when(tcycle === 3.U) { out.done := true.B }

      // CCF - Complement Carry Flag (0x3F)
    }.elsewhen(IR === "h3F".U) {
      out.F := Cat(F_in(7), false.B, false.B, !F_in(4), 0.U(4.W))  // Z unchanged, N=0, H=0, C=!C
      when(tcycle === 3.U) { out.done := true.B }

      // CPL - Complement A (0x2F)
    }.elsewhen(IR === "h2F".U) {
      out.A := ~A_in
      out.F := Cat(F_in(7), true.B, true.B, F_in(4), 0.U(4.W))  // Z unchanged, N=1, H=1, C unchanged
      when(tcycle === 3.U) { out.done := true.B }

      // DAA - Decimal Adjust Accumulator (0x27) - CORRECTED

    }.elsewhen(IR === "h27".U) {
      val N = F_in(6)  // Subtract flag
      val H = F_in(5)  // Half-carry flag
      val C = F_in(4)  // Carry flag

      val adjusted = Wire(UInt(8.W))
      val newCarry = Wire(Bool())
      val correction = Wire(UInt(8.W))

      correction := 0.U
      adjusted := A_in
      newCarry := C

      when(!N) {
        // After addition
        val upperCorrect = Wire(UInt(8.W))
        val lowerCorrect = Wire(UInt(8.W))

        upperCorrect := 0.U
        lowerCorrect := 0.U

        // Check upper nibble
        when(C || (A_in > 0x99.U)) {
          upperCorrect := 0x60.U
          newCarry := true.B
        }

        // Check lower nibble
        when(H || ((A_in & 0x0F.U) > 0x09.U)) {
          lowerCorrect := 0x06.U
        }

        correction := upperCorrect + lowerCorrect
        adjusted := A_in + correction

      }.otherwise {
        // After subtraction
        val upperCorrect = Wire(UInt(8.W))
        val lowerCorrect = Wire(UInt(8.W))

        upperCorrect := 0.U
        lowerCorrect := 0.U

        when(C) {
          upperCorrect := 0x60.U
        }
        when(H) {
          lowerCorrect := 0x06.U
        }

        correction := upperCorrect + lowerCorrect
        adjusted := A_in - correction
        newCarry := C  // Keep carry unchanged for subtraction
      }

      out.A := adjusted
      setFlags(adjusted === 0.U, N, false.B, newCarry)
      when(tcycle === 3.U) { out.done := true.B }
      // ----------------------------------------------------------
      // RLA — 0x17  (Rotate A left through Carry)
      // Flags (non-CB): Z=0, N=0, H=0, C=old bit7
      // ----------------------------------------------------------
    }.elsewhen(IR === "h17".U) {
      when(tcycle === 3.U) {
        val oldA = A_in
        val oldC = F_in(4)        // carry flag bit
        val newC = oldA(7)

        val newA = Cat(oldA(6,0), oldC)

        out.A := newA
        out.F := Cat(false.B, false.B, false.B, newC, 0.U(4.W))  // Z=0 always for RLA
        out.done := true.B
      }
      // ----------------------------------------------------------
      // RRA — 0x1F  (Rotate A right through Carry)
      // Flags (non-CB): Z=0, N=0, H=0, C=old bit0
      // ----------------------------------------------------------
    }.elsewhen(IR === "h1F".U) {
      when(tcycle === 3.U) {
        val oldA = A_in
        val oldC = F_in(4)
        val newC = oldA(0)

        val newA = Cat(oldC, oldA(7,1))

        out.A := newA
        out.F := Cat(
          false.B, // Z = 0
          false.B, // N = 0
          false.B, // H = 0
          newC,    // C = old bit 0
          0.U(4.W)
        )

        out.done := true.B
      }

    // ---------------------------------------------------------------------
      // LD A,(nn) - Load A from 16-bit address (0xFA)
      // M0: Already fetched imm16 (low byte, high byte)
      // M1: Read from address imm16
      // ---------------------------------------------------------------------
    }.elsewhen(IR === "hFA".U) {
      when(mcycle === 0.U) {
        io.memAddr := imm16_in
        io.memRead := true.B

        when(tcycle === 3.U) {
          out.A := io.memReadData
          out.done := true.B
        }
      }

      // ---------------------------------------------------------------------
      // LD (nn),A - Store A to 16-bit address (0xEA)
      // M0: Already fetched imm16
      // M1: Write A to address imm16
      // ---------------------------------------------------------------------
    }.elsewhen(IR === "hEA".U) {
      when(mcycle === 0.U) {
        io.memAddr := imm16_in
        io.memWrite := (tcycle === 2.U)
        io.memWriteData := A_in

        when(tcycle === 3.U) {
          out.done := true.B
        }
      }

      // ---------------------------------------------------------------------
      // LD (nn),SP - Store SP to 16-bit address (0x08)
      // M0: Already fetched imm16
      // M1: Write SP low byte to (nn)
      // M2: Write SP high byte to (nn+1)
      // ---------------------------------------------------------------------
    }.elsewhen(IR === "h08".U) {
      when(mcycle === 0.U) {
        io.memAddr := imm16_in
        io.memWrite := (tcycle === 2.U)
        io.memWriteData := SP_in(7, 0)

        when(tcycle === 3.U) {
          out.next_mcycle := 1.U
        }
      }.elsewhen(mcycle === 1.U) {
        io.memAddr := imm16_in + 1.U
        io.memWrite := (tcycle === 2.U)
        io.memWriteData := SP_in(15, 8)

        when(tcycle === 3.U) {
          out.done := true.B
        }
      }

      // ---------------------------------------------------------------------
      // LD SP,HL - Load HL into SP (0xF9)
      // 1-cycle instruction
      // ---------------------------------------------------------------------
    }.elsewhen(IR === "hF9".U) {
      out.SP := HL
      when(tcycle === 3.U) { out.done := true.B }

      // LD HL,SP+e - Load SP+signed offset into HL (0xF8)
    }.elsewhen(IR === "hF8".U) {
      val offset_signed = Cat(Fill(8, imm8_in(7)), imm8_in).asSInt
      val sp_signed = SP_in.asSInt
      val result = sp_signed + offset_signed

      // Half-carry and Carry are based on UNSIGNED 8-bit addition of lower bytes
      val lower_sum = SP_in(7, 0) +& imm8_in  // Use +& for 9-bit result
      val hc = ((SP_in(3, 0) +& imm8_in(3, 0))(4)) // Check bit 4 of 5-bit result
      val cy = lower_sum(8) // Check bit 8 of 9-bit result

      out.H := result.asUInt(15, 8)
      out.L := result.asUInt(7, 0)
      out.F := Cat(false.B, false.B, hc, cy, 0.U(4.W))  // Z=0, N=0, H, C

      when(tcycle === 3.U) { out.done := true.B }

      // ADD SP,e - Add signed immediate to SP (0xE8)
    }.elsewhen(IR === "hE8".U) {
      val offset_signed = Cat(Fill(8, imm8_in(7)), imm8_in).asSInt
      val sp_signed = SP_in.asSInt
      val result = sp_signed + offset_signed

      // Half-carry and Carry are based on UNSIGNED 8-bit addition of lower bytes
      val lower_sum = SP_in(7, 0) +& imm8_in  // Use +& for 9-bit result
      val hc = ((SP_in(3, 0) +& imm8_in(3, 0))(4)) // Check bit 4 of 5-bit result
      val cy = lower_sum(8) // Check bit 8 of 9-bit result

      out.SP := result.asUInt
      out.F := Cat(false.B, false.B, hc, cy, 0.U(4.W))  // Z=0, N=0, H, C

      when(tcycle === 3.U) { out.done := true.B }

      // ----------------------------------------------------------
      // DEFAULT
      // ----------------------------------------------------------
    }.otherwise {
      when(tcycle === 3.U) { out.done := true.B }
    }

    out
  }
}