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

    val dbg_a = Output(UInt(8.W))
    val dbg_f = Output(UInt(8.W))
    val dbg_b = Output(UInt(8.W))
    val dbg_c = Output(UInt(8.W))
    val dbg_d = Output(UInt(8.W))
    val dbg_e = Output(UInt(8.W))
    val dbg_h = Output(UInt(8.W))
    val dbg_l = Output(UInt(8.W))

    // NEW DEBUG SIGNALS
    val dbg_state  = Output(UInt(8.W))
    val dbg_tcycle = Output(UInt(8.W))
    val dbg_mcycle = Output(UInt(8.W))
    val dbg_IR     = Output(UInt(8.W))
  })

  // ============================================================
  // CPU REGISTERS - Initialize to post-boot state
  // ============================================================
  val A = RegInit(0x01.U(8.W))  // Post-boot: 0x01 (DMG), 0x11 (GBC)
  val F = RegInit(0xB0.U(8.W))  // Post-boot: Z=1, N=0, H=1, C=1
  val B = RegInit(0x00.U(8.W))
  val C = RegInit(0x13.U(8.W))  // Post-boot: BC = 0x0013
  val D = RegInit(0x00.U(8.W))
  val E = RegInit(0xD8.U(8.W))  // Post-boot: DE = 0x00D8
  val H = RegInit(0x01.U(8.W))
  val L = RegInit(0x4D.U(8.W))  // Post-boot: HL = 0x014D

  val PC = RegInit(0x0100.U(16.W))  // Start at 0x0100 (after boot ROM)
  val SP = RegInit(0xFFFE.U(16.W))  // Post-boot stack pointer

  val IR    = RegInit(0.U(8.W))
  val imm8  = RegInit(0.U(8.W))
  val imm16 = RegInit(0.U(16.W))

  val IME         = RegInit(false.B)
  val IME_pending = RegInit(false.B)

  // ============================================================
  // STATE MACHINE
  // ============================================================
  val sFetchOpcode :: sFetchImm8 :: sFetchImm16Lo :: sFetchImm16Hi :: sExec :: sHalt :: Nil =
    Enum(6)

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

  val u = Microcode(
    IR, mcycle, tcycle,
    PC, SP,
    A, F, B, C, D, E, H, L,
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
  // IMMEDIATE DECODER
  // ============================================================
  val isLDrImm = ((IR & "hC7".U) === "h06".U)

  val needsImm8 =
    isLDrImm ||
      (IR === "h18".U) ||  // JR e
      (IR === "h20".U) || (IR === "h28".U) || (IR === "h30".U) || (IR === "h38".U) ||  // JR cc,e
      (IR === "hC6".U) ||  // ADD A,n
      (IR === "hD6".U) ||  // SUB A,n
      (IR === "hE0".U) ||  // LDH (n),A
      (IR === "hE6".U) ||  // AND A,n
      (IR === "hEE".U) ||  // XOR A,n
      (IR === "hF0".U) ||  // LDH A,(n)
      (IR === "hF6".U) ||  // OR A,n
      (IR === "hFE".U)     // CP A,n

  val needsImm16 =
    (IR === "hC2".U) || (IR === "hCA".U) || (IR === "hD2".U) || (IR === "hDA".U) ||  // JP cc,nn
      (IR === "hC3".U) ||  // JP nn
      (IR === "hC4".U) || (IR === "hCC".U) || (IR === "hD4".U) || (IR === "hDC".U) ||  // CALL cc,nn
      (IR === "hCD".U) ||  // CALL nn
      (IR === "h01".U) ||  // LD BC,nn
      (IR === "h11".U) ||  // LD DE,nn
      (IR === "h21".U) ||  // LD HL,nn
      (IR === "h31".U)     // LD SP,nn

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

      // FIX: Capture IR at T-cycle 3 instead of T-cycle 2
      // This ensures memory data is stable before latching
      when(tcycle === 3.U) {
        IR := io.memReadData  // ← CRITICAL FIX: Moved from tcycle 2 to 3
        PC := PC + 1.U
        mcycle := 0.U

        // Handle delayed interrupt enable (EI takes effect after next instruction)
        when(IME_pending) {
          IME := true.B
          IME_pending := false.B
        }

        when(needsImm8)       { state := sFetchImm8 }
          .elsewhen(needsImm16) { state := sFetchImm16Lo }
          .otherwise            { state := sExec }

        tcycle := 0.U
      }
    }

    // ------------------------------------------------------------
    // FETCH IMM8
    // ------------------------------------------------------------
    is(sFetchImm8) {
      busAddr := PC
      busRead := true.B

      when(tcycle === 3.U) {
        imm8   := io.memReadData  // ← Also moved to tcycle 3 for consistency
        PC     := PC + 1.U
        mcycle := 0.U
        state  := sExec
        tcycle := 0.U
      }
    }

    // ------------------------------------------------------------
    // FETCH IMM16 LO
    // ------------------------------------------------------------
    is(sFetchImm16Lo) {
      busAddr := PC
      busRead := true.B

      when(tcycle === 3.U) {
        imm16  := io.memReadData  // ← Also moved to tcycle 3
        PC     := PC + 1.U
        state  := sFetchImm16Hi
        tcycle := 0.U
      }
    }

    // ------------------------------------------------------------
    // FETCH IMM16 HI
    // ------------------------------------------------------------
    is(sFetchImm16Hi) {
      busAddr := PC
      busRead := true.B

      when(tcycle === 3.U) {
        imm16  := Cat(io.memReadData, imm16(7,0))  // ← Also moved to tcycle 3
        PC     := PC + 1.U
        mcycle := 0.U
        state  := sExec
        tcycle := 0.U
      }
    }

    // ------------------------------------------------------------
    // EXECUTION
    // ------------------------------------------------------------
    is(sExec) {
      busAddr      := mcBus.memAddr
      busRead      := mcBus.memRead
      busWrite     := mcBus.memWrite
      busWriteData := mcBus.memWriteData

      when(tcycle === 3.U) {

        // Writeback - happens EVERY M-cycle, not just the last one
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

        imm8        := u.imm8
        imm16       := u.imm16
        IME         := u.IME
        IME_pending := u.IME_pending

        when(u.done) {
          mcycle := 0.U
          state  := sFetchOpcode
          tcycle := 0.U
        }.otherwise {
          mcycle := u.next_mcycle
          tcycle := 0.U
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