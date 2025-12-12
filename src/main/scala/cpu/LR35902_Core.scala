package cpu

import chisel3._
import chisel3.util._
import cpu.Microcode._
import cpu.MicrocodeCB._

class LR35902_Core extends Module {
  val io = IO(new Bundle {
    // Memory bus
    val memAddr      = Output(UInt(16.W))
    val memRead      = Output(Bool())
    val memWrite     = Output(Bool())
    val memWriteData = Output(UInt(8.W))
    val memReadData  = Input(UInt(8.W))

    // Interrupt registers
    val ieReg = Input(UInt(8.W))
    val ifReg = Input(UInt(8.W))

    // Debug regs
    val dbg_pc     = Output(UInt(16.W))
    val dbg_opcode = Output(UInt(8.W))
    val dbg_sp     = Output(UInt(16.W))

    val dbg_a = Output(UInt(8.W))
    val dbg_f = Output(UInt(8.W))
    val dbg_b = Output(UInt(8.W))
    val dbg_c = Output(UInt(8.W))
    val dbg_d = Output(UInt(8.W))
    val dbg_e = Output(UInt(8.W))
    val dbg_h = Output(UInt(8.W))
    val dbg_l = Output(UInt(8.W))

    val dbg_state  = Output(UInt(8.W))
    val dbg_tcycle = Output(UInt(8.W))
    val dbg_mcycle = Output(UInt(8.W))
    val dbg_IR     = Output(UInt(8.W))
  })

  // ============================================================
  // CPU REGISTERS
  // ============================================================
  val A = RegInit(0x01.U(8.W))
  val F = RegInit(0xB0.U(8.W))
  val B = RegInit(0x00.U(8.W))
  val C = RegInit(0x13.U(8.W))
  val D = RegInit(0x00.U(8.W))
  val E = RegInit(0xD8.U(8.W))
  val H = RegInit(0x01.U(8.W))
  val L = RegInit(0x4D.U(8.W))

  val PC = RegInit(0x0000.U(16.W))
  val SP = RegInit(0xFFFE.U(16.W))

  val IR    = RegInit(0.U(8.W))
  val IR2   = RegInit(0.U(8.W))  // CB prefix second byte
  val imm8  = RegInit(0.U(8.W))
  val imm16 = RegInit(0.U(16.W))
  val CB_imm8 = RegInit(0.U(8.W))  // CB result carrier

  val IME         = RegInit(false.B)
  val IME_pending = RegInit(false.B)

  // ============================================================
  // SAMPLED REGISTERS - Captured at start of each M-cycle
  // ============================================================
  val PC_sampled = RegInit(0x0000.U(16.W))  // Match PC initialization
  val SP_sampled = RegInit(0xFFFE.U(16.W))
  val A_sampled  = RegInit(0x01.U(8.W))
  val F_sampled  = RegInit(0xB0.U(8.W))
  val B_sampled  = RegInit(0x00.U(8.W))
  val C_sampled  = RegInit(0x13.U(8.W))
  val D_sampled  = RegInit(0x00.U(8.W))
  val E_sampled  = RegInit(0xD8.U(8.W))
  val H_sampled  = RegInit(0x01.U(8.W))
  val L_sampled  = RegInit(0x4D.U(8.W))

  // ============================================================
  // STATE MACHINE
  // ============================================================
  val sFetchOpcode :: sFetchImm8 :: sFetchImm16Lo :: sFetchImm16Hi :: sExec :: sFetchCBOpcode :: sHalt :: Nil =
    Enum(7)

  val state  = RegInit(sFetchOpcode)
  val tcycle = RegInit(0.U(2.W))
  val mcycle = RegInit(0.U(3.W))
  val halted = RegInit(false.B)

  // ============================================================
  // INTERRUPTS
  // ============================================================
  val intr = Module(new Interrupts)
  intr.io.IE     := io.ieReg
  intr.io.IF     := io.ifReg
  intr.io.IME    := IME
  intr.io.pc     := PC
  intr.io.halted := halted

  // ============================================================
  // MICROCODE BUS
  // ============================================================
  val mcBus = Wire(new Bundle {
    val memAddr      = UInt(16.W)
    val memRead      = Bool()
    val memWrite     = Bool()
    val memWriteData = UInt(8.W)
    val memReadData  = UInt(8.W)
  })

  mcBus.memAddr      := 0.U
  mcBus.memRead      := false.B
  mcBus.memWrite     := false.B
  mcBus.memWriteData := 0.U
  mcBus.memReadData  := io.memReadData

  // ============================================================
  // MICROCODE - Uses sampled registers
  // ============================================================
  val u = Microcode(
    IR, mcycle, tcycle,
    PC_sampled, SP_sampled,
    A_sampled, F_sampled,
    B_sampled, C_sampled,
    D_sampled, E_sampled,
    H_sampled, L_sampled,
    mcBus,
    imm8, imm16,
    IME, IME_pending
  )

  // ============================================================
  // BUS OUTPUT
  // ============================================================
  val busAddr      = WireDefault(0.U(16.W))
  val busRead      = WireDefault(false.B)
  val busWrite     = WireDefault(false.B)
  val busWriteData = WireDefault(0.U(8.W))

  // ============================================================
  // T-CYCLE COUNTER
  // ============================================================
  when(tcycle === 3.U) {
    tcycle := 0.U
  }.otherwise {
    tcycle := tcycle + 1.U
  }

  // ============================================================
  // FSM
  // ============================================================
  switch(state) {

    // ------------------------------------------------------------
    // OPCODE FETCH (M1)
    // ------------------------------------------------------------
    is(sFetchOpcode) {
      busAddr := PC
      busRead := true.B

      when(tcycle === 3.U) {
        val fetchedOpcode = io.memReadData
        IR := fetchedOpcode
        PC := PC + 1.U
        mcycle := 0.U

        when(IME_pending) {
          IME := true.B
          IME_pending := false.B
        }

        val isLDrImm_new = ((fetchedOpcode & "hC7".U) === "h06".U)

        val needsImm8_new =
          isLDrImm_new ||
            (fetchedOpcode === "h18".U) ||
            (fetchedOpcode === "h20".U) || (fetchedOpcode === "h28".U) || (fetchedOpcode === "h30".U) || (fetchedOpcode === "h38".U) ||
            (fetchedOpcode === "hC6".U) ||
            (fetchedOpcode === "hD6".U) ||
            (fetchedOpcode === "hE0".U) ||
            (fetchedOpcode === "hE6".U) ||
            (fetchedOpcode === "hE8".U) ||  // ADD SP,e
            (fetchedOpcode === "hEE".U) ||
            (fetchedOpcode === "hF0".U) ||
            (fetchedOpcode === "hF6".U) ||
            (fetchedOpcode === "hF8".U) ||  // LD HL,SP+e
            (fetchedOpcode === "hFE".U)

        val needsImm16_new =
          (fetchedOpcode === "hC2".U) || (fetchedOpcode === "hCA".U) || (fetchedOpcode === "hD2".U) || (fetchedOpcode === "hDA".U) ||
            (fetchedOpcode === "hC3".U) ||
            (fetchedOpcode === "hC4".U) || (fetchedOpcode === "hCC".U) || (fetchedOpcode === "hD4".U) || (fetchedOpcode === "hDC".U) ||
            (fetchedOpcode === "hCD".U) ||
            (fetchedOpcode === "hEA".U) ||  // LD (nn),A
            (fetchedOpcode === "hFA".U) ||   // LD A,(nn)
            (fetchedOpcode === "h01".U) ||
            (fetchedOpcode === "h08".U) ||  // LD (nn),SP
            (fetchedOpcode === "h11".U) ||
            (fetchedOpcode === "h21".U) ||
            (fetchedOpcode === "h31".U)

        // Check for CB prefix
        when(fetchedOpcode === "hCB".U) {
          state := sFetchCBOpcode
        }.elsewhen(needsImm8_new) {
          state := sFetchImm8
        }.elsewhen(needsImm16_new) {
          state := sFetchImm16Lo
        }.otherwise {
          state := sExec
          // Sample registers for the upcoming execution (no immediates case)
          PC_sampled := PC + 1.U
          SP_sampled := SP
          A_sampled  := A
          F_sampled  := F
          B_sampled  := B
          C_sampled  := C
          D_sampled  := D
          E_sampled  := E
          H_sampled  := H
          L_sampled  := L
        }
      }
    }

    // ------------------------------------------------------------
    // FETCH IMM8
    // ------------------------------------------------------------
    is(sFetchImm8) {
      busAddr := PC
      busRead := true.B

      when(tcycle === 3.U) {
        imm8   := io.memReadData
        PC     := PC + 1.U
        mcycle := 0.U
        state  := sExec

        // Sample registers for the upcoming execution
        PC_sampled := PC + 1.U  // PC already incremented above
        SP_sampled := SP
        A_sampled  := A
        F_sampled  := F
        B_sampled  := B
        C_sampled  := C
        D_sampled  := D
        E_sampled  := E
        H_sampled  := H
        L_sampled  := L
      }
    }

    // ------------------------------------------------------------
    // FETCH IMM16 LO
    // ------------------------------------------------------------
    is(sFetchImm16Lo) {
      busAddr := PC
      busRead := true.B

      when(tcycle === 3.U) {
        imm16  := io.memReadData
        PC     := PC + 1.U
        state  := sFetchImm16Hi
      }
    }

    // ------------------------------------------------------------
    // FETCH IMM16 HI
    // ------------------------------------------------------------
    is(sFetchImm16Hi) {
      busAddr := PC
      busRead := true.B

      when(tcycle === 3.U) {
        imm16  := Cat(io.memReadData, imm16(7,0))
        PC     := PC + 1.U
        mcycle := 0.U
        state  := sExec

        // Sample registers for the upcoming execution
        PC_sampled := PC + 1.U  // PC already incremented above
        SP_sampled := SP
        A_sampled  := A
        F_sampled  := F
        B_sampled  := B
        C_sampled  := C
        D_sampled  := D
        E_sampled  := E
        H_sampled  := H
        L_sampled  := L
      }
    }

    // ------------------------------------------------------------
    // FETCH CB OPCODE (second byte of CB instruction)
    // ------------------------------------------------------------
    is(sFetchCBOpcode) {
      busAddr := PC
      busRead := true.B

      when(tcycle === 3.U) {
        IR2    := io.memReadData
        PC     := PC + 1.U
        mcycle := 1.U  // CB instructions start at M-cycle 1
        state  := sExec

        // Sample registers for CB execution
        PC_sampled := PC + 1.U
        SP_sampled := SP
        A_sampled  := A
        F_sampled  := F
        B_sampled  := B
        C_sampled  := C
        D_sampled  := D
        E_sampled  := E
        H_sampled  := H
        L_sampled  := L
      }
    }

    // ------------------------------------------------------------
    // EXECUTION
    // ------------------------------------------------------------
    is(sExec) {
      // Check if this is a CB instruction
      when(IR === "hCB".U) {
        // ============ CB INSTRUCTION ============
        val cbOut = MicrocodeCB(
          IR2    = IR2,
          mcycle = mcycle,
          tcycle = tcycle,
          A_in = A_sampled, F_in = F_sampled,
          B_in = B_sampled, C_in = C_sampled,
          D_in = D_sampled, E_in = E_sampled,
          H_in = H_sampled, L_in = L_sampled,
          imm8_in = CB_imm8,  // Pass result carrier
          io = mcBus
        )

        busAddr      := mcBus.memAddr
        busRead      := mcBus.memRead
        busWrite     := mcBus.memWrite
        busWriteData := mcBus.memWriteData

        // Writeback at END of M-cycle (tcycle 3)
        when(tcycle === 3.U) {
          // CB instructions don't modify PC or SP
          A  := cbOut.A
          F  := cbOut.F
          B  := cbOut.B
          C  := cbOut.C
          D  := cbOut.D
          E  := cbOut.E
          H  := cbOut.H
          L  := cbOut.L

          CB_imm8 := cbOut.imm8  // Save result for next M-cycle

          // Update sampled registers for next M-cycle
          A_sampled  := cbOut.A
          F_sampled  := cbOut.F
          B_sampled  := cbOut.B
          C_sampled  := cbOut.C
          D_sampled  := cbOut.D
          E_sampled  := cbOut.E
          H_sampled  := cbOut.H
          L_sampled  := cbOut.L

          when(cbOut.done) {
            mcycle := 0.U
            state  := sFetchOpcode
          }.otherwise {
            mcycle := cbOut.next_mcycle
          }
        }

      }.otherwise {
        // ============ NORMAL INSTRUCTION ============
        busAddr      := mcBus.memAddr
        busRead      := mcBus.memRead
        busWrite     := mcBus.memWrite
        busWriteData := mcBus.memWriteData

        // Writeback at END of M-cycle (tcycle 3)
        when(tcycle === 3.U) {
          // DEBUG: Print what microcode is outputting
          when(IR === "hCD".U || IR === "hC9".U) {
            printf(p"[WRITEBACK T3] mcycle=$mcycle IR=0x${Hexadecimal(IR)} u.SP=0x${Hexadecimal(u.SP)} (was SP=0x${Hexadecimal(SP)})\n")
          }

          // Write to REAL registers
          PC := u.PC
          SP := u.SP
          A  := u.A
          F  := u.F
          B  := u.B
          C  := u.C
          D  := u.D
          E  := u.E
          H  := u.H
          L  := u.L

          // CRITICAL FIX: Also write to sampled registers
          // This ensures next M-cycle sees the updated values
          PC_sampled := u.PC
          SP_sampled := u.SP
          A_sampled  := u.A
          F_sampled  := u.F
          B_sampled  := u.B
          C_sampled  := u.C
          D_sampled  := u.D
          E_sampled  := u.E
          H_sampled  := u.H
          L_sampled  := u.L

          imm8        := u.imm8
          imm16       := u.imm16
          IME         := u.IME
          IME_pending := u.IME_pending

          when(u.done) {
            mcycle := 0.U
            state  := sFetchOpcode
          }.otherwise {
            mcycle := u.next_mcycle
          }
        }
      }
    }

    // ------------------------------------------------------------
    // HALT
    // ------------------------------------------------------------
    is(sHalt) {
      halted := true.B
    }
  }

  // ============================================================
  // OUTPUTS
  // ============================================================
  io.memAddr      := busAddr
  io.memRead      := busRead
  io.memWrite     := busWrite
  io.memWriteData := busWriteData

  io.dbg_pc     := PC
  io.dbg_opcode := IR
  io.dbg_sp     := SP

  io.dbg_a := A
  io.dbg_f := F
  io.dbg_b := B
  io.dbg_c := C
  io.dbg_d := D
  io.dbg_e := E
  io.dbg_h := H
  io.dbg_l := L

  io.dbg_state  := state
  io.dbg_tcycle := tcycle
  io.dbg_mcycle := mcycle
  io.dbg_IR     := IR
}