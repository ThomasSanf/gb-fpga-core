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
  // CPU REGISTERS  (post-boot default state)
  // ============================================================
  val A = RegInit(0x01.U(8.W))
  val F = RegInit(0xB0.U(8.W))
  val B = RegInit(0x00.U(8.W))
  val C = RegInit(0x13.U(8.W))
  val D = RegInit(0x00.U(8.W))
  val E = RegInit(0xD8.U(8.W))
  val H = RegInit(0x01.U(8.W))
  val L = RegInit(0x4D.U(8.W))

  val PC = RegInit(0x0100.U(16.W))
  val SP = RegInit(0xFFFE.U(16.W))

  val IR       = RegInit(0.U(8.W))
  val IR2      = RegInit(0.U(8.W))
  val imm8     = RegInit(0.U(8.W))
  val imm16    = RegInit(0.U(16.W))
  val CB_imm8  = RegInit(0.U(8.W))

  val IME         = RegInit(false.B)
  val IME_pending = RegInit(false.B)

  // ============================================================
  // SAMPLED REGISTERS
  // ============================================================
  val PC_sampled = RegInit(0x0100.U(16.W))
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
  val states = Enum(8)

  val sFetchOpcode      = states(0)
  val sFetchImm8        = states(1)
  val sFetchImm16Lo     = states(2)
  val sFetchImm16Hi     = states(3)
  val sExec             = states(4)
  val sFetchCBOpcode    = states(5)
  val sHalt             = states(6)
  val sInterrupt        = states(7)


  val state  = RegInit(sFetchOpcode)
  val tcycle = RegInit(0.U(2.W))
  val mcycle = RegInit(0.U(3.W))
  val halted = RegInit(false.B)

  val debugCounter = RegInit(0.U(16.W))
  // ============================================================
  // DEBUG LOOKAHEAD (instruction bytes)
  // ============================================================
  val dbg_op0 = Reg(UInt(8.W))
  val dbg_op1 = Reg(UInt(8.W))
  val dbg_op2 = Reg(UInt(8.W))
  val dbg_op3 = Reg(UInt(8.W))

  val dbg_pc_fetch = Reg(UInt(16.W)) // PC at opcode fetch
  val nextByte1 = io.memReadData  // This will need to come from memory
  val nextByte2 = 0.U(8.W)  // Would need memory lookahead
  val nextByte3 = 0.U(8.W)  // Would need memory lookahead
  // ============================================================
  // INTERRUPTS
  // ============================================================
  val intr = Module(new Interrupts)
  intr.io.IE     := io.ieReg
  intr.io.IF     := io.ifReg
  intr.io.IME    := IME
  intr.io.pc     := PC
  intr.io.halted := halted
  // Interrupts may only be taken between instructions
  val canTakeInterrupt =
    state === sFetchOpcode &&
      tcycle === 0.U &&
      !halted
  val shouldIrq  = intr.io.should_irq
  val irqVector = intr.io.irq_vector


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
    // INTERRUPT ENTRY
    // ------------------------------------------------------------
    is(sInterrupt) {
      switch(mcycle) {

        // M0: clear IF bit (write to 0xFF0F)
        is(0.U) {
          busAddr      := "hFF0F".U
          busWrite     := true.B
          busWriteData := io.ifReg & ~(1.U << intr.io.irq_index)

          when(tcycle === 3.U) {
            mcycle := 1.U
          }
        }

        // M1: push PC high
        is(1.U) {
          busAddr      := SP - 1.U
          busWrite     := true.B
          busWriteData := PC(15,8)

          when(tcycle === 3.U) {
            SP := SP - 1.U
            mcycle := 2.U
          }
        }

        // M2: push PC low + jump
        is(2.U) {
          busAddr      := SP - 1.U
          busWrite     := true.B
          busWriteData := PC(7,0)

          when(tcycle === 3.U) {
            SP := SP - 1.U
            PC := intr.io.irq_vector
            mcycle := 0.U
            state  := sFetchOpcode
          }
        }
      }
    }
    // ------------------------------------------------------------
    // OPCODE FETCH (M1)
    // ------------------------------------------------------------
    is(sFetchOpcode) {

      // Interrupt entry stays here
      when (canTakeInterrupt && shouldIrq) {
        halted := false.B
        IME := false.B
        mcycle := 0.U
        state  := sInterrupt
      }.otherwise {

        busAddr := PC
        busRead := true.B

        when (tcycle === 3.U) {
          val fetchedOpcode = io.memReadData
          val nextPC = PC + 1.U

          // === DEBUG CAPTURE ===
          dbg_pc_fetch := PC
          dbg_op0 := fetchedOpcode

          IR := fetchedOpcode
          PC := nextPC
          mcycle := 0.U


          // In the printf section:
          when(debugCounter < 80000.U) {
            printf(p"A: ${Hexadecimal(A)} F: ${Hexadecimal(F)} B: ${Hexadecimal(B)} C: ${Hexadecimal(C)} " +
              p"D: ${Hexadecimal(D)} E: ${Hexadecimal(E)} H: ${Hexadecimal(H)} L: ${Hexadecimal(L)} " +
              p"SP: ${Hexadecimal(SP)} PC: ${Hexadecimal(PC)} | ${Hexadecimal(fetchedOpcode)}\n")
            debugCounter := debugCounter + 1.U
          }


          val isLDrImm = ((fetchedOpcode & "hC7".U) === "h06".U)

          val needsImm8 =
            isLDrImm ||
              fetchedOpcode === "h18".U ||
              fetchedOpcode === "h20".U || fetchedOpcode === "h28".U ||
              fetchedOpcode === "h30".U || fetchedOpcode === "h38".U ||
              fetchedOpcode === "hC6".U || // ADD A,n
              fetchedOpcode === "hCE".U || // ✅ ADC A,n  (THIS WAS MISSING)
              fetchedOpcode === "hD6".U || // SUB A,n
              fetchedOpcode === "hDE".U || // ✅ SBC A,n  (add this too)
              fetchedOpcode === "hE0".U || fetchedOpcode === "hE6".U ||
              fetchedOpcode === "hE8".U || fetchedOpcode === "hEE".U ||
              fetchedOpcode === "hF0".U || fetchedOpcode === "hF6".U ||
              fetchedOpcode === "hF8".U || fetchedOpcode === "hFE".U



          val needsImm16 =
            fetchedOpcode === "hC2".U || fetchedOpcode === "hCA".U ||
              fetchedOpcode === "hD2".U || fetchedOpcode === "hDA".U ||
              fetchedOpcode === "hC3".U ||
              fetchedOpcode === "hC4".U || fetchedOpcode === "hCC".U ||
              fetchedOpcode === "hD4".U || fetchedOpcode === "hDC".U ||
              fetchedOpcode === "hCD".U ||
              fetchedOpcode === "hEA".U || fetchedOpcode === "hFA".U ||
              fetchedOpcode === "h01".U || fetchedOpcode === "h08".U ||
              fetchedOpcode === "h11".U || fetchedOpcode === "h21".U ||
              fetchedOpcode === "h31".U

          when (fetchedOpcode === "hCB".U) {
            state := sFetchCBOpcode
          }.elsewhen (needsImm8) {
            state := sFetchImm8
          }.elsewhen (needsImm16) {
            state := sFetchImm16Lo
          }.otherwise {
            state := sExec

            // ✅ SAMPLE ONCE, CORRECT PC
            PC_sampled := nextPC
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
    }




    // ------------------------------------------------------------
    // FETCH IMM8
    // ------------------------------------------------------------
    is(sFetchImm8) {
      busAddr := PC
      busRead := true.B

      when(tcycle === 3.U) {
        imm8   := io.memReadData
        val newPC = PC + 1.U  // Calculate new PC value
        PC     := newPC
        mcycle := 0.U
        state  := sExec

        // Sample registers using CALCULATED values
        PC_sampled := newPC  // Use newPC, not PC + 1.U!
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
        val newPC = PC + 1.U  // Calculate new PC value
        PC     := newPC
        mcycle := 0.U
        state  := sExec

        // Sample registers using CALCULATED values
        PC_sampled := newPC  // Use newPC, not PC + 1.U!
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
        val newPC = PC + 1.U  // Calculate new PC value
        PC     := newPC
        mcycle := 1.U  // CB instructions start at M-cycle 1
        state  := sExec

        // Sample registers using CALCULATED values
        PC_sampled := newPC  // Use newPC, not PC + 1.U!
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
            //  printf(p"[WRITEBACK T3] mcycle=$mcycle IR=0x${Hexadecimal(IR)} u.SP=0x${Hexadecimal(u.SP)} (was SP=0x${Hexadecimal(SP)})\n")
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

        //  imm8        := u.imm8
        //  imm16       := u.imm16
          IME         := u.IME
          IME_pending := u.IME_pending
          // EI delay handling (SM83 correct)
          when (u.done && IME_pending) {
            IME := true.B
            IME_pending := false.B
          }

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
      when (intr.io.IF.orR) {
        halted := false.B
        state  := sFetchOpcode
        mcycle := 0.U
        tcycle := 0.U
      }.otherwise {
        halted := true.B
      }
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