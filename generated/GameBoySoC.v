module Interrupts(
  input  [7:0]  io_IE,
  input  [7:0]  io_IF,
  input         io_IME,
  output        io_should_irq,
  output [15:0] io_irq_vector,
  output [2:0]  io_irq_index
);
  wire [7:0] active = io_IE & io_IF; // @[Interrupts.scala 26:19]
  wire  anyActive = |active; // @[Interrupts.scala 28:26]
  wire [15:0] _GEN_0 = active[4] ? 16'h60 : 16'h0; // @[Interrupts.scala 44:25 45:12 33:27]
  wire [2:0] _GEN_1 = active[4] ? 3'h4 : 3'h0; // @[Interrupts.scala 44:25 34:27 45:32]
  wire [15:0] _GEN_2 = active[3] ? 16'h58 : _GEN_0; // @[Interrupts.scala 42:25 43:12]
  wire [2:0] _GEN_3 = active[3] ? 3'h3 : _GEN_1; // @[Interrupts.scala 42:25 43:32]
  wire [15:0] _GEN_4 = active[2] ? 16'h50 : _GEN_2; // @[Interrupts.scala 40:25 41:12]
  wire [2:0] _GEN_5 = active[2] ? 3'h2 : _GEN_3; // @[Interrupts.scala 40:25 41:32]
  wire [15:0] _GEN_6 = active[1] ? 16'h48 : _GEN_4; // @[Interrupts.scala 38:25 39:12]
  wire [2:0] _GEN_7 = active[1] ? 3'h1 : _GEN_5; // @[Interrupts.scala 38:25 39:32]
  assign io_should_irq = io_IME & anyActive; // @[Interrupts.scala 51:27]
  assign io_irq_vector = active[0] ? 16'h40 : _GEN_6; // @[Interrupts.scala 36:19 37:12]
  assign io_irq_index = active[0] ? 3'h0 : _GEN_7; // @[Interrupts.scala 36:19 37:32]
endmodule
module LR35902_ALU(
  input  [3:0] io_op,
  input  [7:0] io_a,
  input  [7:0] io_b,
  input        io_carryIn,
  output [7:0] io_out,
  output       io_flagZ,
  output       io_flagN,
  output       io_flagH,
  output       io_flagC
);
  wire [8:0] a9 = {1'h0,io_a}; // @[Cat.scala 33:92]
  wire [8:0] b9 = {1'h0,io_b}; // @[Cat.scala 33:92]
  wire [8:0] sum9 = a9 + b9; // @[LR35902_ALU.scala 36:18]
  wire [8:0] _GEN_50 = {{8'd0}, io_carryIn}; // @[LR35902_ALU.scala 37:23]
  wire [8:0] sumc9 = sum9 + _GEN_50; // @[LR35902_ALU.scala 37:23]
  wire [8:0] diff9 = a9 - b9; // @[LR35902_ALU.scala 39:19]
  wire [8:0] diffc9 = diff9 - _GEN_50; // @[LR35902_ALU.scala 40:24]
  wire [7:0] _io_flagH_T = io_a & 8'hf; // @[LR35902_ALU.scala 44:9]
  wire [7:0] _io_flagH_T_1 = io_b & 8'hf; // @[LR35902_ALU.scala 44:23]
  wire [7:0] _io_flagH_T_3 = _io_flagH_T + _io_flagH_T_1; // @[LR35902_ALU.scala 44:18]
  wire [8:0] _io_flagH_T_4 = {{1'd0}, _io_flagH_T_3}; // @[LR35902_ALU.scala 44:32]
  wire  _io_flagH_T_6 = _io_flagH_T_4[7:0] > 8'hf; // @[LR35902_ALU.scala 44:37]
  wire [7:0] _GEN_52 = {{7'd0}, io_carryIn}; // @[LR35902_ALU.scala 44:32]
  wire [7:0] _io_flagH_T_12 = _io_flagH_T_3 + _GEN_52; // @[LR35902_ALU.scala 44:32]
  wire  _io_flagH_T_13 = _io_flagH_T_12 > 8'hf; // @[LR35902_ALU.scala 44:37]
  wire  _io_flagZ_T_5 = diff9[7:0] == 8'h0; // @[LR35902_ALU.scala 87:30]
  wire [3:0] io_flagH_aNib = io_a[3:0]; // @[LR35902_ALU.scala 47:17]
  wire [3:0] io_flagH_bNib = io_b[3:0]; // @[LR35902_ALU.scala 48:17]
  wire [4:0] _io_flagH_T_14 = {{1'd0}, io_flagH_bNib}; // @[LR35902_ALU.scala 49:18]
  wire [4:0] _GEN_53 = {{1'd0}, io_flagH_aNib}; // @[LR35902_ALU.scala 49:10]
  wire  _io_flagH_T_15 = _GEN_53 < _io_flagH_T_14; // @[LR35902_ALU.scala 49:10]
  wire  _io_flagC_T_2 = io_a < io_b; // @[LR35902_ALU.scala 90:24]
  wire [3:0] _GEN_54 = {{3'd0}, io_carryIn}; // @[LR35902_ALU.scala 49:18]
  wire [4:0] _io_flagH_T_16 = io_flagH_bNib + _GEN_54; // @[LR35902_ALU.scala 49:18]
  wire  _io_flagH_T_17 = _GEN_53 < _io_flagH_T_16; // @[LR35902_ALU.scala 49:10]
  wire [7:0] _io_flagC_T_4 = io_b + _GEN_52; // @[LR35902_ALU.scala 102:32]
  wire [7:0] r = io_a & io_b; // @[LR35902_ALU.scala 110:20]
  wire [7:0] r_1 = io_a | io_b; // @[LR35902_ALU.scala 122:20]
  wire [7:0] r_2 = io_a ^ io_b; // @[LR35902_ALU.scala 134:20]
  wire [7:0] r_4 = io_a + 8'h1; // @[LR35902_ALU.scala 160:20]
  wire [7:0] r_5 = io_a - 8'h1; // @[LR35902_ALU.scala 172:20]
  wire [7:0] _GEN_0 = 4'h9 == io_op ? r_5 : io_a; // @[LR35902_ALU.scala 173:16 26:12 56:17]
  wire  _GEN_1 = 4'h9 == io_op & r_5 == 8'h0; // @[LR35902_ALU.scala 174:16 27:12 56:17]
  wire  _GEN_3 = 4'h9 == io_op & _io_flagH_T == 8'h0; // @[LR35902_ALU.scala 176:16 29:12 56:17]
  wire [7:0] _GEN_5 = 4'h8 == io_op ? r_4 : _GEN_0; // @[LR35902_ALU.scala 161:16 56:17]
  wire  _GEN_6 = 4'h8 == io_op ? r_4 == 8'h0 : _GEN_1; // @[LR35902_ALU.scala 162:16 56:17]
  wire  _GEN_7 = 4'h8 == io_op ? 1'h0 : 4'h9 == io_op; // @[LR35902_ALU.scala 163:16 56:17]
  wire  _GEN_8 = 4'h8 == io_op ? _io_flagH_T == 8'hf : _GEN_3; // @[LR35902_ALU.scala 164:16 56:17]
  wire [7:0] _GEN_10 = 4'h7 == io_op ? io_a : _GEN_5; // @[LR35902_ALU.scala 148:16 56:17]
  wire  _GEN_11 = 4'h7 == io_op ? _io_flagZ_T_5 : _GEN_6; // @[LR35902_ALU.scala 149:16 56:17]
  wire  _GEN_12 = 4'h7 == io_op | _GEN_7; // @[LR35902_ALU.scala 150:16 56:17]
  wire  _GEN_13 = 4'h7 == io_op ? _io_flagH_T_15 : _GEN_8; // @[LR35902_ALU.scala 151:16 56:17]
  wire  _GEN_14 = 4'h7 == io_op & _io_flagC_T_2; // @[LR35902_ALU.scala 152:16 56:17]
  wire [7:0] _GEN_15 = 4'h6 == io_op ? r_2 : _GEN_10; // @[LR35902_ALU.scala 135:16 56:17]
  wire  _GEN_16 = 4'h6 == io_op ? r_2 == 8'h0 : _GEN_11; // @[LR35902_ALU.scala 136:16 56:17]
  wire  _GEN_17 = 4'h6 == io_op ? 1'h0 : _GEN_12; // @[LR35902_ALU.scala 137:16 56:17]
  wire  _GEN_18 = 4'h6 == io_op ? 1'h0 : _GEN_13; // @[LR35902_ALU.scala 138:16 56:17]
  wire  _GEN_19 = 4'h6 == io_op ? 1'h0 : _GEN_14; // @[LR35902_ALU.scala 139:16 56:17]
  wire [7:0] _GEN_20 = 4'h5 == io_op ? r_1 : _GEN_15; // @[LR35902_ALU.scala 123:16 56:17]
  wire  _GEN_21 = 4'h5 == io_op ? r_1 == 8'h0 : _GEN_16; // @[LR35902_ALU.scala 124:16 56:17]
  wire  _GEN_22 = 4'h5 == io_op ? 1'h0 : _GEN_17; // @[LR35902_ALU.scala 125:16 56:17]
  wire  _GEN_23 = 4'h5 == io_op ? 1'h0 : _GEN_18; // @[LR35902_ALU.scala 126:16 56:17]
  wire  _GEN_24 = 4'h5 == io_op ? 1'h0 : _GEN_19; // @[LR35902_ALU.scala 127:16 56:17]
  wire [7:0] _GEN_25 = 4'h4 == io_op ? r : _GEN_20; // @[LR35902_ALU.scala 111:16 56:17]
  wire  _GEN_26 = 4'h4 == io_op ? r == 8'h0 : _GEN_21; // @[LR35902_ALU.scala 112:16 56:17]
  wire  _GEN_27 = 4'h4 == io_op ? 1'h0 : _GEN_22; // @[LR35902_ALU.scala 113:16 56:17]
  wire  _GEN_28 = 4'h4 == io_op | _GEN_23; // @[LR35902_ALU.scala 114:16 56:17]
  wire  _GEN_29 = 4'h4 == io_op ? 1'h0 : _GEN_24; // @[LR35902_ALU.scala 115:16 56:17]
  wire [7:0] _GEN_30 = 4'h3 == io_op ? diffc9[7:0] : _GEN_25; // @[LR35902_ALU.scala 56:17 98:16]
  wire  _GEN_31 = 4'h3 == io_op ? diffc9[7:0] == 8'h0 : _GEN_26; // @[LR35902_ALU.scala 56:17 99:16]
  wire  _GEN_32 = 4'h3 == io_op | _GEN_27; // @[LR35902_ALU.scala 100:16 56:17]
  wire  _GEN_33 = 4'h3 == io_op ? _io_flagH_T_17 : _GEN_28; // @[LR35902_ALU.scala 101:16 56:17]
  wire  _GEN_34 = 4'h3 == io_op ? io_a < _io_flagC_T_4 : _GEN_29; // @[LR35902_ALU.scala 102:16 56:17]
  wire [7:0] _GEN_35 = 4'h2 == io_op ? diff9[7:0] : _GEN_30; // @[LR35902_ALU.scala 56:17 86:16]
  wire  _GEN_36 = 4'h2 == io_op ? diff9[7:0] == 8'h0 : _GEN_31; // @[LR35902_ALU.scala 56:17 87:16]
  wire  _GEN_37 = 4'h2 == io_op | _GEN_32; // @[LR35902_ALU.scala 56:17 88:16]
  wire  _GEN_38 = 4'h2 == io_op ? _io_flagH_T_15 : _GEN_33; // @[LR35902_ALU.scala 56:17 89:16]
  wire  _GEN_39 = 4'h2 == io_op ? io_a < io_b : _GEN_34; // @[LR35902_ALU.scala 56:17 90:16]
  wire [7:0] _GEN_40 = 4'h1 == io_op ? sumc9[7:0] : _GEN_35; // @[LR35902_ALU.scala 56:17 74:16]
  wire  _GEN_41 = 4'h1 == io_op ? sumc9[7:0] == 8'h0 : _GEN_36; // @[LR35902_ALU.scala 56:17 75:16]
  wire  _GEN_42 = 4'h1 == io_op ? 1'h0 : _GEN_37; // @[LR35902_ALU.scala 56:17 76:16]
  wire  _GEN_43 = 4'h1 == io_op ? _io_flagH_T_13 : _GEN_38; // @[LR35902_ALU.scala 56:17 77:16]
  wire  _GEN_44 = 4'h1 == io_op ? sumc9[8] : _GEN_39; // @[LR35902_ALU.scala 56:17 78:16]
  assign io_out = 4'h0 == io_op ? sum9[7:0] : _GEN_40; // @[LR35902_ALU.scala 56:17 62:16]
  assign io_flagZ = 4'h0 == io_op ? sum9[7:0] == 8'h0 : _GEN_41; // @[LR35902_ALU.scala 56:17 63:16]
  assign io_flagN = 4'h0 == io_op ? 1'h0 : _GEN_42; // @[LR35902_ALU.scala 56:17 64:16]
  assign io_flagH = 4'h0 == io_op ? _io_flagH_T_6 : _GEN_43; // @[LR35902_ALU.scala 56:17 65:16]
  assign io_flagC = 4'h0 == io_op ? sum9[8] : _GEN_44; // @[LR35902_ALU.scala 56:17 66:16]
endmodule
module LR35902_Core(
  input         clock,
  input         reset,
  output [15:0] io_memAddr,
  output        io_memWrite,
  output [7:0]  io_memWriteData,
  input  [7:0]  io_memReadData,
  input  [7:0]  io_ieReg,
  input  [7:0]  io_ifReg,
  output [15:0] io_dbg_pc,
  output [7:0]  io_dbg_opcode,
  output [7:0]  io_dbg_a,
  output [7:0]  io_dbg_f,
  output [7:0]  io_dbg_b,
  output [7:0]  io_dbg_c,
  output [7:0]  io_dbg_d,
  output [7:0]  io_dbg_e,
  output [7:0]  io_dbg_h,
  output [7:0]  io_dbg_l,
  input  [7:0]  io_dbgBytes_0,
  input  [7:0]  io_dbgBytes_1,
  input  [7:0]  io_dbgBytes_2,
  input  [7:0]  io_dbgBytes_3,
  output [7:0]  io_dbg_state,
  output [7:0]  io_dbg_tcycle,
  output [7:0]  io_dbg_mcycle,
  output [7:0]  io_dbg_IR
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
`endif // RANDOMIZE_REG_INIT
  wire [7:0] intr_io_IE; // @[LR35902_Core.scala 117:20]
  wire [7:0] intr_io_IF; // @[LR35902_Core.scala 117:20]
  wire  intr_io_IME; // @[LR35902_Core.scala 117:20]
  wire  intr_io_should_irq; // @[LR35902_Core.scala 117:20]
  wire [15:0] intr_io_irq_vector; // @[LR35902_Core.scala 117:20]
  wire [2:0] intr_io_irq_index; // @[LR35902_Core.scala 117:20]
  wire [3:0] u_alu_io_op; // @[Microcode.scala 107:21]
  wire [7:0] u_alu_io_a; // @[Microcode.scala 107:21]
  wire [7:0] u_alu_io_b; // @[Microcode.scala 107:21]
  wire  u_alu_io_carryIn; // @[Microcode.scala 107:21]
  wire [7:0] u_alu_io_out; // @[Microcode.scala 107:21]
  wire  u_alu_io_flagZ; // @[Microcode.scala 107:21]
  wire  u_alu_io_flagN; // @[Microcode.scala 107:21]
  wire  u_alu_io_flagH; // @[Microcode.scala 107:21]
  wire  u_alu_io_flagC; // @[Microcode.scala 107:21]
  reg [7:0] A; // @[LR35902_Core.scala 45:18]
  reg [7:0] F; // @[LR35902_Core.scala 46:18]
  reg [7:0] B; // @[LR35902_Core.scala 47:18]
  reg [7:0] C; // @[LR35902_Core.scala 48:18]
  reg [7:0] D; // @[LR35902_Core.scala 49:18]
  reg [7:0] E; // @[LR35902_Core.scala 50:18]
  reg [7:0] H; // @[LR35902_Core.scala 51:18]
  reg [7:0] L; // @[LR35902_Core.scala 52:18]
  reg [15:0] PC; // @[LR35902_Core.scala 54:19]
  reg [15:0] SP; // @[LR35902_Core.scala 55:19]
  reg [7:0] IR; // @[LR35902_Core.scala 57:25]
  reg [7:0] IR2; // @[LR35902_Core.scala 58:25]
  reg [7:0] imm8; // @[LR35902_Core.scala 59:25]
  reg [15:0] imm16; // @[LR35902_Core.scala 60:25]
  reg [7:0] CB_imm8; // @[LR35902_Core.scala 61:25]
  reg  IME; // @[LR35902_Core.scala 63:28]
  reg  IME_pending; // @[LR35902_Core.scala 64:28]
  reg [15:0] PC_sampled; // @[LR35902_Core.scala 69:27]
  reg [15:0] SP_sampled; // @[LR35902_Core.scala 70:27]
  reg [7:0] A_sampled; // @[LR35902_Core.scala 71:27]
  reg [7:0] F_sampled; // @[LR35902_Core.scala 72:27]
  reg [7:0] B_sampled; // @[LR35902_Core.scala 73:27]
  reg [7:0] C_sampled; // @[LR35902_Core.scala 74:27]
  reg [7:0] D_sampled; // @[LR35902_Core.scala 75:27]
  reg [7:0] E_sampled; // @[LR35902_Core.scala 76:27]
  reg [7:0] H_sampled; // @[LR35902_Core.scala 77:27]
  reg [7:0] L_sampled; // @[LR35902_Core.scala 78:27]
  reg [2:0] state; // @[LR35902_Core.scala 96:23]
  reg [1:0] tcycle; // @[LR35902_Core.scala 97:23]
  reg [2:0] mcycle; // @[LR35902_Core.scala 98:23]
  wire  _canTakeInterrupt_T_1 = tcycle == 2'h0; // @[LR35902_Core.scala 126:14]
  wire  canTakeInterrupt = state == 3'h0 & _canTakeInterrupt_T_1; // @[LR35902_Core.scala 125:28]
  reg [15:0] irqVectorLatched; // @[LR35902_Core.scala 129:33]
  reg [2:0] irqIndexLatched; // @[LR35902_Core.scala 130:33]
  reg [7:0] u_tmp8; // @[Microcode.scala 56:24]
  wire [15:0] u_HL = {H_sampled,L_sampled}; // @[Cat.scala 33:92]
  wire  _u_T_1 = tcycle == 2'h3; // @[Microcode.scala 121:19]
  wire [7:0] _u_T_4 = IR & 8'hcf; // @[Microcode.scala 136:20]
  wire [3:0] u_rr = IR[7:4] & 4'h3; // @[Microcode.scala 137:26]
  wire  _u_T_6 = 4'h0 == u_rr; // @[Microcode.scala 139:18]
  wire  _u_T_7 = 4'h1 == u_rr; // @[Microcode.scala 139:18]
  wire  _u_T_8 = 4'h2 == u_rr; // @[Microcode.scala 139:18]
  wire  _u_T_9 = 4'h3 == u_rr; // @[Microcode.scala 139:18]
  wire [15:0] _GEN_2 = 4'h3 == u_rr ? imm16 : SP_sampled; // @[Microcode.scala 139:18 153:18 64:15]
  wire [7:0] _GEN_3 = 4'h2 == u_rr ? imm16[7:0] : L_sampled; // @[Microcode.scala 139:18 149:17 72:15]
  wire [7:0] _GEN_4 = 4'h2 == u_rr ? imm16[15:8] : H_sampled; // @[Microcode.scala 139:18 150:17 71:15]
  wire [15:0] _GEN_5 = 4'h2 == u_rr ? SP_sampled : _GEN_2; // @[Microcode.scala 139:18 64:15]
  wire [7:0] _GEN_6 = 4'h1 == u_rr ? imm16[7:0] : E_sampled; // @[Microcode.scala 139:18 145:17 70:15]
  wire [7:0] _GEN_7 = 4'h1 == u_rr ? imm16[15:8] : D_sampled; // @[Microcode.scala 139:18 146:17 69:15]
  wire [7:0] _GEN_8 = 4'h1 == u_rr ? L_sampled : _GEN_3; // @[Microcode.scala 139:18 72:15]
  wire [7:0] _GEN_9 = 4'h1 == u_rr ? H_sampled : _GEN_4; // @[Microcode.scala 139:18 71:15]
  wire [15:0] _GEN_10 = 4'h1 == u_rr ? SP_sampled : _GEN_5; // @[Microcode.scala 139:18 64:15]
  wire [7:0] _GEN_11 = 4'h0 == u_rr ? imm16[7:0] : C_sampled; // @[Microcode.scala 139:18 141:17 68:15]
  wire [7:0] _GEN_12 = 4'h0 == u_rr ? imm16[15:8] : B_sampled; // @[Microcode.scala 139:18 142:17 67:15]
  wire [7:0] _GEN_13 = 4'h0 == u_rr ? E_sampled : _GEN_6; // @[Microcode.scala 139:18 70:15]
  wire [7:0] _GEN_14 = 4'h0 == u_rr ? D_sampled : _GEN_7; // @[Microcode.scala 139:18 69:15]
  wire [7:0] _GEN_15 = 4'h0 == u_rr ? L_sampled : _GEN_8; // @[Microcode.scala 139:18 72:15]
  wire [7:0] _GEN_16 = 4'h0 == u_rr ? H_sampled : _GEN_9; // @[Microcode.scala 139:18 71:15]
  wire [15:0] _GEN_17 = 4'h0 == u_rr ? SP_sampled : _GEN_10; // @[Microcode.scala 139:18 64:15]
  wire [15:0] _u_result_T = {B_sampled,C_sampled}; // @[Cat.scala 33:92]
  wire [15:0] _u_result_T_2 = _u_result_T + 16'h1; // @[Microcode.scala 164:33]
  wire [15:0] _u_result_T_3 = {D_sampled,E_sampled}; // @[Cat.scala 33:92]
  wire [15:0] _u_result_T_5 = _u_result_T_3 + 16'h1; // @[Microcode.scala 165:33]
  wire [15:0] _u_result_T_8 = u_HL + 16'h1; // @[Microcode.scala 166:33]
  wire [15:0] _u_result_T_10 = SP_sampled + 16'h1; // @[Microcode.scala 167:23]
  wire [15:0] _u_result_T_12 = _u_T_6 ? _u_result_T_2 : 16'h0; // @[Mux.scala 81:58]
  wire [15:0] _u_result_T_14 = _u_T_7 ? _u_result_T_5 : _u_result_T_12; // @[Mux.scala 81:58]
  wire [15:0] _u_result_T_16 = _u_T_8 ? _u_result_T_8 : _u_result_T_14; // @[Mux.scala 81:58]
  wire [15:0] u_result = _u_T_9 ? _u_result_T_10 : _u_result_T_16; // @[Mux.scala 81:58]
  wire [15:0] _GEN_19 = _u_T_9 ? u_result : SP_sampled; // @[Microcode.scala 170:18 174:26 64:15]
  wire [7:0] _GEN_20 = _u_T_8 ? u_result[15:8] : H_sampled; // @[Microcode.scala 170:18 173:25 71:15]
  wire [7:0] _GEN_21 = _u_T_8 ? u_result[7:0] : L_sampled; // @[Microcode.scala 170:18 173:49 72:15]
  wire [15:0] _GEN_22 = _u_T_8 ? SP_sampled : _GEN_19; // @[Microcode.scala 170:18 64:15]
  wire [7:0] _GEN_23 = _u_T_7 ? u_result[15:8] : D_sampled; // @[Microcode.scala 170:18 172:25 69:15]
  wire [7:0] _GEN_24 = _u_T_7 ? u_result[7:0] : E_sampled; // @[Microcode.scala 170:18 172:49 70:15]
  wire [7:0] _GEN_25 = _u_T_7 ? H_sampled : _GEN_20; // @[Microcode.scala 170:18 71:15]
  wire [7:0] _GEN_26 = _u_T_7 ? L_sampled : _GEN_21; // @[Microcode.scala 170:18 72:15]
  wire [15:0] _GEN_27 = _u_T_7 ? SP_sampled : _GEN_22; // @[Microcode.scala 170:18 64:15]
  wire [7:0] _GEN_28 = _u_T_6 ? u_result[15:8] : B_sampled; // @[Microcode.scala 170:18 171:25 67:15]
  wire [7:0] _GEN_29 = _u_T_6 ? u_result[7:0] : C_sampled; // @[Microcode.scala 170:18 171:49 68:15]
  wire [7:0] _GEN_30 = _u_T_6 ? D_sampled : _GEN_23; // @[Microcode.scala 170:18 69:15]
  wire [7:0] _GEN_31 = _u_T_6 ? E_sampled : _GEN_24; // @[Microcode.scala 170:18 70:15]
  wire [7:0] _GEN_32 = _u_T_6 ? H_sampled : _GEN_25; // @[Microcode.scala 170:18 71:15]
  wire [7:0] _GEN_33 = _u_T_6 ? L_sampled : _GEN_26; // @[Microcode.scala 170:18 72:15]
  wire [15:0] _GEN_34 = _u_T_6 ? SP_sampled : _GEN_27; // @[Microcode.scala 170:18 64:15]
  wire [15:0] _u_result_T_20 = _u_result_T - 16'h1; // @[Microcode.scala 184:33]
  wire [15:0] _u_result_T_23 = _u_result_T_3 - 16'h1; // @[Microcode.scala 185:33]
  wire [15:0] _u_result_T_26 = u_HL - 16'h1; // @[Microcode.scala 186:33]
  wire [15:0] _u_result_T_28 = SP_sampled - 16'h1; // @[Microcode.scala 187:23]
  wire [15:0] _u_result_T_30 = _u_T_6 ? _u_result_T_20 : 16'h0; // @[Mux.scala 81:58]
  wire [15:0] _u_result_T_32 = _u_T_7 ? _u_result_T_23 : _u_result_T_30; // @[Mux.scala 81:58]
  wire [15:0] _u_result_T_34 = _u_T_8 ? _u_result_T_26 : _u_result_T_32; // @[Mux.scala 81:58]
  wire [15:0] u_result_1 = _u_T_9 ? _u_result_T_28 : _u_result_T_34; // @[Mux.scala 81:58]
  wire [15:0] _GEN_36 = _u_T_9 ? u_result_1 : SP_sampled; // @[Microcode.scala 190:18 194:26 64:15]
  wire [7:0] _GEN_37 = _u_T_8 ? u_result_1[15:8] : H_sampled; // @[Microcode.scala 190:18 193:25 71:15]
  wire [7:0] _GEN_38 = _u_T_8 ? u_result_1[7:0] : L_sampled; // @[Microcode.scala 190:18 193:49 72:15]
  wire [15:0] _GEN_39 = _u_T_8 ? SP_sampled : _GEN_36; // @[Microcode.scala 190:18 64:15]
  wire [7:0] _GEN_40 = _u_T_7 ? u_result_1[15:8] : D_sampled; // @[Microcode.scala 190:18 192:25 69:15]
  wire [7:0] _GEN_41 = _u_T_7 ? u_result_1[7:0] : E_sampled; // @[Microcode.scala 190:18 192:49 70:15]
  wire [7:0] _GEN_42 = _u_T_7 ? H_sampled : _GEN_37; // @[Microcode.scala 190:18 71:15]
  wire [7:0] _GEN_43 = _u_T_7 ? L_sampled : _GEN_38; // @[Microcode.scala 190:18 72:15]
  wire [15:0] _GEN_44 = _u_T_7 ? SP_sampled : _GEN_39; // @[Microcode.scala 190:18 64:15]
  wire [7:0] _GEN_45 = _u_T_6 ? u_result_1[15:8] : B_sampled; // @[Microcode.scala 190:18 191:25 67:15]
  wire [7:0] _GEN_46 = _u_T_6 ? u_result_1[7:0] : C_sampled; // @[Microcode.scala 190:18 191:49 68:15]
  wire [7:0] _GEN_47 = _u_T_6 ? D_sampled : _GEN_40; // @[Microcode.scala 190:18 69:15]
  wire [7:0] _GEN_48 = _u_T_6 ? E_sampled : _GEN_41; // @[Microcode.scala 190:18 70:15]
  wire [7:0] _GEN_49 = _u_T_6 ? H_sampled : _GEN_42; // @[Microcode.scala 190:18 71:15]
  wire [7:0] _GEN_50 = _u_T_6 ? L_sampled : _GEN_43; // @[Microcode.scala 190:18 72:15]
  wire [15:0] _GEN_51 = _u_T_6 ? SP_sampled : _GEN_44; // @[Microcode.scala 190:18 64:15]
  wire [15:0] _u_operand_T_4 = _u_T_6 ? _u_result_T : 16'h0; // @[Mux.scala 81:58]
  wire [15:0] _u_operand_T_6 = _u_T_7 ? _u_result_T_3 : _u_operand_T_4; // @[Mux.scala 81:58]
  wire [15:0] _u_operand_T_8 = _u_T_8 ? u_HL : _u_operand_T_6; // @[Mux.scala 81:58]
  wire [15:0] u_operand = _u_T_9 ? SP_sampled : _u_operand_T_8; // @[Mux.scala 81:58]
  wire [15:0] u_result_2 = u_HL + u_operand; // @[Microcode.scala 211:23]
  wire [15:0] _u_halfCarry_T = u_HL & 16'hfff; // @[Microcode.scala 216:28]
  wire [15:0] _u_halfCarry_T_1 = u_operand & 16'hfff; // @[Microcode.scala 216:52]
  wire [15:0] _u_halfCarry_T_3 = _u_halfCarry_T + _u_halfCarry_T_1; // @[Microcode.scala 216:41]
  wire  u_halfCarry = _u_halfCarry_T_3 > 16'hfff; // @[Microcode.scala 216:66]
  wire [7:0] _u_out_F_T = {F_sampled[7],1'h0,u_halfCarry,5'h0}; // @[Cat.scala 33:92]
  wire [7:0] _u_T_29 = IR & 8'hc7; // @[Microcode.scala 225:20]
  wire [4:0] _u_T_32 = IR[7:3] & 5'h7; // @[Microcode.scala 225:57]
  wire  _u_T_33 = _u_T_32 != 5'h6; // @[Microcode.scala 225:64]
  wire  _u_oldVal_T = 5'h0 == _u_T_32; // @[Mux.scala 81:61]
  wire [7:0] _u_oldVal_T_1 = 5'h0 == _u_T_32 ? B_sampled : 8'h0; // @[Mux.scala 81:58]
  wire  _u_oldVal_T_2 = 5'h1 == _u_T_32; // @[Mux.scala 81:61]
  wire [7:0] _u_oldVal_T_3 = 5'h1 == _u_T_32 ? C_sampled : _u_oldVal_T_1; // @[Mux.scala 81:58]
  wire  _u_oldVal_T_4 = 5'h2 == _u_T_32; // @[Mux.scala 81:61]
  wire [7:0] _u_oldVal_T_5 = 5'h2 == _u_T_32 ? D_sampled : _u_oldVal_T_3; // @[Mux.scala 81:58]
  wire  _u_oldVal_T_6 = 5'h3 == _u_T_32; // @[Mux.scala 81:61]
  wire [7:0] _u_oldVal_T_7 = 5'h3 == _u_T_32 ? E_sampled : _u_oldVal_T_5; // @[Mux.scala 81:58]
  wire  _u_oldVal_T_8 = 5'h4 == _u_T_32; // @[Mux.scala 81:61]
  wire [7:0] _u_oldVal_T_9 = 5'h4 == _u_T_32 ? H_sampled : _u_oldVal_T_7; // @[Mux.scala 81:58]
  wire  _u_oldVal_T_10 = 5'h5 == _u_T_32; // @[Mux.scala 81:61]
  wire [7:0] _u_oldVal_T_11 = 5'h5 == _u_T_32 ? L_sampled : _u_oldVal_T_9; // @[Mux.scala 81:58]
  wire  _u_oldVal_T_12 = 5'h7 == _u_T_32; // @[Mux.scala 81:61]
  wire [7:0] u_oldVal = 5'h7 == _u_T_32 ? A_sampled : _u_oldVal_T_11; // @[Mux.scala 81:58]
  wire [7:0] _GEN_54 = _u_oldVal_T_12 ? u_alu_io_out : A_sampled; // @[Microcode.scala 93:17 100:25 65:15]
  wire [7:0] _GEN_55 = _u_oldVal_T_10 ? u_alu_io_out : L_sampled; // @[Microcode.scala 72:15 93:17 99:25]
  wire [7:0] _GEN_56 = _u_oldVal_T_10 ? A_sampled : _GEN_54; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_57 = _u_oldVal_T_8 ? u_alu_io_out : H_sampled; // @[Microcode.scala 71:15 93:17 98:25]
  wire [7:0] _GEN_58 = _u_oldVal_T_8 ? L_sampled : _GEN_55; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_59 = _u_oldVal_T_8 ? A_sampled : _GEN_56; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_60 = _u_oldVal_T_6 ? u_alu_io_out : E_sampled; // @[Microcode.scala 70:15 93:17 97:25]
  wire [7:0] _GEN_61 = _u_oldVal_T_6 ? H_sampled : _GEN_57; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_62 = _u_oldVal_T_6 ? L_sampled : _GEN_58; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_63 = _u_oldVal_T_6 ? A_sampled : _GEN_59; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_64 = _u_oldVal_T_4 ? u_alu_io_out : D_sampled; // @[Microcode.scala 69:15 93:17 96:25]
  wire [7:0] _GEN_65 = _u_oldVal_T_4 ? E_sampled : _GEN_60; // @[Microcode.scala 70:15 93:17]
  wire [7:0] _GEN_66 = _u_oldVal_T_4 ? H_sampled : _GEN_61; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_67 = _u_oldVal_T_4 ? L_sampled : _GEN_62; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_68 = _u_oldVal_T_4 ? A_sampled : _GEN_63; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_69 = _u_oldVal_T_2 ? u_alu_io_out : C_sampled; // @[Microcode.scala 68:15 93:17 95:25]
  wire [7:0] _GEN_70 = _u_oldVal_T_2 ? D_sampled : _GEN_64; // @[Microcode.scala 69:15 93:17]
  wire [7:0] _GEN_71 = _u_oldVal_T_2 ? E_sampled : _GEN_65; // @[Microcode.scala 70:15 93:17]
  wire [7:0] _GEN_72 = _u_oldVal_T_2 ? H_sampled : _GEN_66; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_73 = _u_oldVal_T_2 ? L_sampled : _GEN_67; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_74 = _u_oldVal_T_2 ? A_sampled : _GEN_68; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_75 = _u_oldVal_T ? u_alu_io_out : B_sampled; // @[Microcode.scala 67:15 93:17 94:25]
  wire [7:0] _GEN_76 = _u_oldVal_T ? C_sampled : _GEN_69; // @[Microcode.scala 68:15 93:17]
  wire [7:0] _GEN_77 = _u_oldVal_T ? D_sampled : _GEN_70; // @[Microcode.scala 69:15 93:17]
  wire [7:0] _GEN_78 = _u_oldVal_T ? E_sampled : _GEN_71; // @[Microcode.scala 70:15 93:17]
  wire [7:0] _GEN_79 = _u_oldVal_T ? H_sampled : _GEN_72; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_80 = _u_oldVal_T ? L_sampled : _GEN_73; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_81 = _u_oldVal_T ? A_sampled : _GEN_74; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _u_out_F_T_1 = {u_alu_io_flagZ,1'h0,u_alu_io_flagH,F_sampled[4],4'h0}; // @[Cat.scala 33:92]
  wire [7:0] _u_out_F_T_2 = {u_alu_io_flagZ,u_alu_io_flagN,u_alu_io_flagH,F_sampled[4],4'h0}; // @[Cat.scala 33:92]
  wire  _u_T_59 = 3'h0 == mcycle; // @[Microcode.scala 268:22]
  wire [7:0] _GEN_112 = _u_T_1 ? io_memReadData : u_tmp8; // @[Microcode.scala 273:32 274:18 56:24]
  wire [2:0] _GEN_113 = _u_T_1 ? 3'h1 : mcycle; // @[Microcode.scala 273:32 275:29 77:21]
  wire  _u_T_61 = 3'h1 == mcycle; // @[Microcode.scala 268:22]
  wire [7:0] _GEN_114 = _u_T_1 ? u_alu_io_out : u_tmp8; // @[Microcode.scala 292:32 293:18 56:24]
  wire [2:0] _GEN_115 = _u_T_1 ? 3'h2 : mcycle; // @[Microcode.scala 292:32 294:29 77:21]
  wire  _u_T_63 = 3'h2 == mcycle; // @[Microcode.scala 268:22]
  wire  _u_mcBus_memWrite_T = tcycle == 2'h2; // @[Microcode.scala 301:38]
  wire [15:0] _GEN_117 = 3'h2 == mcycle ? u_HL : 16'h0; // @[Microcode.scala 268:22 300:27 80:21]
  wire  _GEN_118 = 3'h2 == mcycle & tcycle == 2'h2; // @[Microcode.scala 268:22 301:27 82:21]
  wire [7:0] _GEN_119 = 3'h2 == mcycle ? u_tmp8 : 8'h0; // @[Microcode.scala 268:22 302:27 83:21]
  wire [3:0] _GEN_121 = 3'h1 == mcycle ? 4'h8 : 4'h0; // @[Microcode.scala 110:21 268:22 281:21]
  wire [7:0] _GEN_122 = 3'h1 == mcycle ? u_tmp8 : 8'h0; // @[Microcode.scala 108:21 268:22 282:21]
  wire [7:0] _GEN_124 = 3'h1 == mcycle ? _u_out_F_T_1 : F_sampled; // @[Microcode.scala 105:13 268:22 66:15]
  wire [7:0] _GEN_125 = 3'h1 == mcycle ? _GEN_114 : u_tmp8; // @[Microcode.scala 268:22 56:24]
  wire [2:0] _GEN_126 = 3'h1 == mcycle ? _GEN_115 : mcycle; // @[Microcode.scala 268:22 77:21]
  wire [15:0] _GEN_127 = 3'h1 == mcycle ? 16'h0 : _GEN_117; // @[Microcode.scala 268:22 80:21]
  wire  _GEN_128 = 3'h1 == mcycle ? 1'h0 : _GEN_118; // @[Microcode.scala 268:22 82:21]
  wire [7:0] _GEN_129 = 3'h1 == mcycle ? 8'h0 : _GEN_119; // @[Microcode.scala 268:22 83:21]
  wire  _GEN_130 = 3'h1 == mcycle ? 1'h0 : 3'h2 == mcycle & _u_T_1; // @[Microcode.scala 268:22 78:21]
  wire [15:0] _GEN_131 = 3'h0 == mcycle ? u_HL : _GEN_127; // @[Microcode.scala 268:22 271:22]
  wire [7:0] _GEN_133 = 3'h0 == mcycle ? _GEN_112 : _GEN_125; // @[Microcode.scala 268:22]
  wire [2:0] _GEN_134 = 3'h0 == mcycle ? _GEN_113 : _GEN_126; // @[Microcode.scala 268:22]
  wire [3:0] _GEN_135 = 3'h0 == mcycle ? 4'h0 : _GEN_121; // @[Microcode.scala 110:21 268:22]
  wire [7:0] _GEN_136 = 3'h0 == mcycle ? 8'h0 : _GEN_122; // @[Microcode.scala 108:21 268:22]
  wire [7:0] _GEN_138 = 3'h0 == mcycle ? F_sampled : _GEN_124; // @[Microcode.scala 268:22 66:15]
  wire  _GEN_139 = 3'h0 == mcycle ? 1'h0 : _GEN_128; // @[Microcode.scala 268:22 82:21]
  wire [7:0] _GEN_140 = 3'h0 == mcycle ? 8'h0 : _GEN_129; // @[Microcode.scala 268:22 83:21]
  wire  _GEN_141 = 3'h0 == mcycle ? 1'h0 : _GEN_130; // @[Microcode.scala 268:22 78:21]
  wire [7:0] _u_out_F_T_4 = {u_alu_io_flagZ,1'h1,u_alu_io_flagH,F_sampled[4],4'h0}; // @[Cat.scala 33:92]
  wire [3:0] _GEN_151 = _u_T_61 ? 4'h9 : 4'h0; // @[Microcode.scala 110:21 313:22 326:21]
  wire [7:0] _GEN_154 = _u_T_61 ? _u_out_F_T_4 : F_sampled; // @[Microcode.scala 105:13 313:22 66:15]
  wire [3:0] _GEN_165 = _u_T_59 ? 4'h0 : _GEN_151; // @[Microcode.scala 110:21 313:22]
  wire [7:0] _GEN_168 = _u_T_59 ? F_sampled : _GEN_154; // @[Microcode.scala 313:22 66:15]
  wire  _u_T_77 = IR != 8'h76; // @[Microcode.scala 364:11]
  wire  _u_T_78 = IR >= 8'h40 & IR <= 8'h7f & _u_T_77; // @[Microcode.scala 363:49]
  wire [7:0] _u_T_79 = IR & 8'h7; // @[Microcode.scala 365:12]
  wire  _u_T_80 = _u_T_79 != 8'h6; // @[Microcode.scala 365:23]
  wire  _u_T_81 = _u_T_78 & _u_T_80; // @[Microcode.scala 364:24]
  wire [7:0] _u_T_82 = IR & 8'hf8; // @[Microcode.scala 366:12]
  wire  _u_T_83 = _u_T_82 != 8'h70; // @[Microcode.scala 366:23]
  wire  _u_T_84 = _u_T_81 & _u_T_83; // @[Microcode.scala 365:36]
  wire [7:0] _u_T_86 = 8'h0 == _u_T_79 ? B_sampled : 8'h0; // @[Mux.scala 81:58]
  wire [7:0] _u_T_88 = 8'h1 == _u_T_79 ? C_sampled : _u_T_86; // @[Mux.scala 81:58]
  wire [7:0] _u_T_90 = 8'h2 == _u_T_79 ? D_sampled : _u_T_88; // @[Mux.scala 81:58]
  wire [7:0] _u_T_92 = 8'h3 == _u_T_79 ? E_sampled : _u_T_90; // @[Mux.scala 81:58]
  wire [7:0] _u_T_94 = 8'h4 == _u_T_79 ? H_sampled : _u_T_92; // @[Mux.scala 81:58]
  wire [7:0] _u_T_96 = 8'h5 == _u_T_79 ? L_sampled : _u_T_94; // @[Mux.scala 81:58]
  wire [7:0] _u_T_98 = 8'h7 == _u_T_79 ? A_sampled : _u_T_96; // @[Mux.scala 81:58]
  wire [7:0] _GEN_173 = _u_oldVal_T_12 ? _u_T_98 : A_sampled; // @[Microcode.scala 93:17 100:25 65:15]
  wire [7:0] _GEN_174 = _u_oldVal_T_10 ? _u_T_98 : L_sampled; // @[Microcode.scala 72:15 93:17 99:25]
  wire [7:0] _GEN_175 = _u_oldVal_T_10 ? A_sampled : _GEN_173; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_176 = _u_oldVal_T_8 ? _u_T_98 : H_sampled; // @[Microcode.scala 71:15 93:17 98:25]
  wire [7:0] _GEN_177 = _u_oldVal_T_8 ? L_sampled : _GEN_174; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_178 = _u_oldVal_T_8 ? A_sampled : _GEN_175; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_179 = _u_oldVal_T_6 ? _u_T_98 : E_sampled; // @[Microcode.scala 70:15 93:17 97:25]
  wire [7:0] _GEN_180 = _u_oldVal_T_6 ? H_sampled : _GEN_176; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_181 = _u_oldVal_T_6 ? L_sampled : _GEN_177; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_182 = _u_oldVal_T_6 ? A_sampled : _GEN_178; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_183 = _u_oldVal_T_4 ? _u_T_98 : D_sampled; // @[Microcode.scala 69:15 93:17 96:25]
  wire [7:0] _GEN_184 = _u_oldVal_T_4 ? E_sampled : _GEN_179; // @[Microcode.scala 70:15 93:17]
  wire [7:0] _GEN_185 = _u_oldVal_T_4 ? H_sampled : _GEN_180; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_186 = _u_oldVal_T_4 ? L_sampled : _GEN_181; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_187 = _u_oldVal_T_4 ? A_sampled : _GEN_182; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_188 = _u_oldVal_T_2 ? _u_T_98 : C_sampled; // @[Microcode.scala 68:15 93:17 95:25]
  wire [7:0] _GEN_189 = _u_oldVal_T_2 ? D_sampled : _GEN_183; // @[Microcode.scala 69:15 93:17]
  wire [7:0] _GEN_190 = _u_oldVal_T_2 ? E_sampled : _GEN_184; // @[Microcode.scala 70:15 93:17]
  wire [7:0] _GEN_191 = _u_oldVal_T_2 ? H_sampled : _GEN_185; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_192 = _u_oldVal_T_2 ? L_sampled : _GEN_186; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_193 = _u_oldVal_T_2 ? A_sampled : _GEN_187; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_194 = _u_oldVal_T ? _u_T_98 : B_sampled; // @[Microcode.scala 67:15 93:17 94:25]
  wire [7:0] _GEN_195 = _u_oldVal_T ? C_sampled : _GEN_188; // @[Microcode.scala 68:15 93:17]
  wire [7:0] _GEN_196 = _u_oldVal_T ? D_sampled : _GEN_189; // @[Microcode.scala 69:15 93:17]
  wire [7:0] _GEN_197 = _u_oldVal_T ? E_sampled : _GEN_190; // @[Microcode.scala 70:15 93:17]
  wire [7:0] _GEN_198 = _u_oldVal_T ? H_sampled : _GEN_191; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_199 = _u_oldVal_T ? L_sampled : _GEN_192; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_200 = _u_oldVal_T ? A_sampled : _GEN_193; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_202 = _u_oldVal_T_12 ? imm8 : A_sampled; // @[Microcode.scala 93:17 100:25 65:15]
  wire [7:0] _GEN_203 = _u_oldVal_T_10 ? imm8 : L_sampled; // @[Microcode.scala 72:15 93:17 99:25]
  wire [7:0] _GEN_204 = _u_oldVal_T_10 ? A_sampled : _GEN_202; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_205 = _u_oldVal_T_8 ? imm8 : H_sampled; // @[Microcode.scala 71:15 93:17 98:25]
  wire [7:0] _GEN_206 = _u_oldVal_T_8 ? L_sampled : _GEN_203; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_207 = _u_oldVal_T_8 ? A_sampled : _GEN_204; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_208 = _u_oldVal_T_6 ? imm8 : E_sampled; // @[Microcode.scala 70:15 93:17 97:25]
  wire [7:0] _GEN_209 = _u_oldVal_T_6 ? H_sampled : _GEN_205; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_210 = _u_oldVal_T_6 ? L_sampled : _GEN_206; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_211 = _u_oldVal_T_6 ? A_sampled : _GEN_207; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_212 = _u_oldVal_T_4 ? imm8 : D_sampled; // @[Microcode.scala 69:15 93:17 96:25]
  wire [7:0] _GEN_213 = _u_oldVal_T_4 ? E_sampled : _GEN_208; // @[Microcode.scala 70:15 93:17]
  wire [7:0] _GEN_214 = _u_oldVal_T_4 ? H_sampled : _GEN_209; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_215 = _u_oldVal_T_4 ? L_sampled : _GEN_210; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_216 = _u_oldVal_T_4 ? A_sampled : _GEN_211; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_217 = _u_oldVal_T_2 ? imm8 : C_sampled; // @[Microcode.scala 68:15 93:17 95:25]
  wire [7:0] _GEN_218 = _u_oldVal_T_2 ? D_sampled : _GEN_212; // @[Microcode.scala 69:15 93:17]
  wire [7:0] _GEN_219 = _u_oldVal_T_2 ? E_sampled : _GEN_213; // @[Microcode.scala 70:15 93:17]
  wire [7:0] _GEN_220 = _u_oldVal_T_2 ? H_sampled : _GEN_214; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_221 = _u_oldVal_T_2 ? L_sampled : _GEN_215; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_222 = _u_oldVal_T_2 ? A_sampled : _GEN_216; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_223 = _u_oldVal_T ? imm8 : B_sampled; // @[Microcode.scala 67:15 93:17 94:25]
  wire [7:0] _GEN_224 = _u_oldVal_T ? C_sampled : _GEN_217; // @[Microcode.scala 68:15 93:17]
  wire [7:0] _GEN_225 = _u_oldVal_T ? D_sampled : _GEN_218; // @[Microcode.scala 69:15 93:17]
  wire [7:0] _GEN_226 = _u_oldVal_T ? E_sampled : _GEN_219; // @[Microcode.scala 70:15 93:17]
  wire [7:0] _GEN_227 = _u_oldVal_T ? H_sampled : _GEN_220; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_228 = _u_oldVal_T ? L_sampled : _GEN_221; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_229 = _u_oldVal_T ? A_sampled : _GEN_222; // @[Microcode.scala 65:15 93:17]
  wire  _u_T_128 = mcycle == 3'h0; // @[Microcode.scala 402:19]
  wire [15:0] _GEN_233 = mcycle == 3'h0 ? u_HL : 16'h0; // @[Microcode.scala 402:28 403:20 80:21]
  wire [7:0] _GEN_235 = mcycle == 3'h0 ? imm8 : 8'h0; // @[Microcode.scala 402:28 405:25 83:21]
  wire  _GEN_236 = mcycle == 3'h0 & _u_T_1; // @[Microcode.scala 402:28 78:21]
  wire  _u_T_137 = _canTakeInterrupt_T_1 | tcycle == 2'h1 | _u_mcBus_memWrite_T | _u_T_1; // @[Microcode.scala 416:63]
  wire [15:0] _GEN_237 = _canTakeInterrupt_T_1 | tcycle == 2'h1 | _u_mcBus_memWrite_T | _u_T_1 ? _u_result_T_3 : 16'h0; // @[Microcode.scala 416:82 417:20 80:21]
  wire [7:0] _GEN_239 = _u_T_1 ? io_memReadData : A_sampled; // @[Microcode.scala 423:28 425:15 65:15]
  wire [7:0] _GEN_242 = _u_T_1 ? _u_result_T_8[15:8] : H_sampled; // @[Microcode.scala 439:32 444:19 71:15]
  wire [7:0] _GEN_243 = _u_T_1 ? _u_result_T_8[7:0] : L_sampled; // @[Microcode.scala 439:32 445:19 72:15]
  wire [7:0] _GEN_246 = _u_T_61 ? u_tmp8 : A_sampled; // @[Microcode.scala 432:22 453:17 65:15]
  wire [15:0] _GEN_248 = _u_T_59 ? u_HL : 16'h0; // @[Microcode.scala 432:22 436:22 80:21]
  wire [7:0] _GEN_250 = _u_T_59 ? _GEN_112 : u_tmp8; // @[Microcode.scala 432:22 56:24]
  wire [7:0] _GEN_251 = _u_T_59 ? _GEN_242 : H_sampled; // @[Microcode.scala 432:22 71:15]
  wire [7:0] _GEN_252 = _u_T_59 ? _GEN_243 : L_sampled; // @[Microcode.scala 432:22 72:15]
  wire [2:0] _GEN_253 = _u_T_59 ? _GEN_113 : mcycle; // @[Microcode.scala 432:22 77:21]
  wire [7:0] _GEN_254 = _u_T_59 ? A_sampled : _GEN_246; // @[Microcode.scala 432:22 65:15]
  wire  _GEN_255 = _u_T_59 ? 1'h0 : _u_T_61 & _u_T_1; // @[Microcode.scala 432:22 78:21]
  wire [7:0] _GEN_260 = _u_T_61 ? _u_result_T_26[15:8] : H_sampled; // @[Microcode.scala 468:22 486:17 71:15]
  wire [7:0] _GEN_261 = _u_T_61 ? _u_result_T_26[7:0] : L_sampled; // @[Microcode.scala 468:22 487:17 72:15]
  wire [7:0] _GEN_268 = _u_T_59 ? H_sampled : _GEN_260; // @[Microcode.scala 468:22 71:15]
  wire [7:0] _GEN_269 = _u_T_59 ? L_sampled : _GEN_261; // @[Microcode.scala 468:22 72:15]
  wire [15:0] u_addr = {8'hff,C_sampled}; // @[Cat.scala 33:92]
  wire [15:0] _GEN_278 = _u_T_59 ? u_addr : 16'h0; // @[Microcode.scala 531:22 533:22 80:21]
  wire [15:0] _u_mcBus_memAddr_T_2 = {8'hff,imm8}; // @[Cat.scala 33:92]
  wire [15:0] _GEN_291 = _u_T_59 ? _u_mcBus_memAddr_T_2 : 16'h0; // @[Microcode.scala 573:22 577:22 80:21]
  wire  _u_T_173 = IR == 8'h5e; // @[Microcode.scala 601:10]
  wire  _u_T_174 = IR == 8'h46 | IR == 8'h4e | IR == 8'h56 | _u_T_173; // @[Microcode.scala 600:67]
  wire [7:0] _GEN_297 = _u_oldVal_T_12 ? io_memReadData : A_sampled; // @[Microcode.scala 93:17 100:25 65:15]
  wire [7:0] _GEN_298 = _u_oldVal_T_10 ? io_memReadData : L_sampled; // @[Microcode.scala 72:15 93:17 99:25]
  wire [7:0] _GEN_299 = _u_oldVal_T_10 ? A_sampled : _GEN_297; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_300 = _u_oldVal_T_8 ? io_memReadData : H_sampled; // @[Microcode.scala 71:15 93:17 98:25]
  wire [7:0] _GEN_301 = _u_oldVal_T_8 ? L_sampled : _GEN_298; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_302 = _u_oldVal_T_8 ? A_sampled : _GEN_299; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_303 = _u_oldVal_T_6 ? io_memReadData : E_sampled; // @[Microcode.scala 70:15 93:17 97:25]
  wire [7:0] _GEN_304 = _u_oldVal_T_6 ? H_sampled : _GEN_300; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_305 = _u_oldVal_T_6 ? L_sampled : _GEN_301; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_306 = _u_oldVal_T_6 ? A_sampled : _GEN_302; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_307 = _u_oldVal_T_4 ? io_memReadData : D_sampled; // @[Microcode.scala 69:15 93:17 96:25]
  wire [7:0] _GEN_308 = _u_oldVal_T_4 ? E_sampled : _GEN_303; // @[Microcode.scala 70:15 93:17]
  wire [7:0] _GEN_309 = _u_oldVal_T_4 ? H_sampled : _GEN_304; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_310 = _u_oldVal_T_4 ? L_sampled : _GEN_305; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_311 = _u_oldVal_T_4 ? A_sampled : _GEN_306; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_312 = _u_oldVal_T_2 ? io_memReadData : C_sampled; // @[Microcode.scala 68:15 93:17 95:25]
  wire [7:0] _GEN_313 = _u_oldVal_T_2 ? D_sampled : _GEN_307; // @[Microcode.scala 69:15 93:17]
  wire [7:0] _GEN_314 = _u_oldVal_T_2 ? E_sampled : _GEN_308; // @[Microcode.scala 70:15 93:17]
  wire [7:0] _GEN_315 = _u_oldVal_T_2 ? H_sampled : _GEN_309; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_316 = _u_oldVal_T_2 ? L_sampled : _GEN_310; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_317 = _u_oldVal_T_2 ? A_sampled : _GEN_311; // @[Microcode.scala 65:15 93:17]
  wire [7:0] _GEN_318 = _u_oldVal_T ? io_memReadData : B_sampled; // @[Microcode.scala 67:15 93:17 94:25]
  wire [7:0] _GEN_319 = _u_oldVal_T ? C_sampled : _GEN_312; // @[Microcode.scala 68:15 93:17]
  wire [7:0] _GEN_320 = _u_oldVal_T ? D_sampled : _GEN_313; // @[Microcode.scala 69:15 93:17]
  wire [7:0] _GEN_321 = _u_oldVal_T ? E_sampled : _GEN_314; // @[Microcode.scala 70:15 93:17]
  wire [7:0] _GEN_322 = _u_oldVal_T ? H_sampled : _GEN_315; // @[Microcode.scala 71:15 93:17]
  wire [7:0] _GEN_323 = _u_oldVal_T ? L_sampled : _GEN_316; // @[Microcode.scala 72:15 93:17]
  wire [7:0] _GEN_324 = _u_oldVal_T ? A_sampled : _GEN_317; // @[Microcode.scala 65:15 93:17]
  wire [15:0] _GEN_326 = _u_T_137 ? u_HL : 16'h0; // @[Microcode.scala 614:82 615:20 80:21]
  wire [7:0] _u_out_F_T_5 = {u_alu_io_flagZ,1'h0,u_alu_io_flagH,u_alu_io_flagC,4'h0}; // @[Cat.scala 33:92]
  wire [7:0] _GEN_329 = _u_T_1 ? A_sampled : 8'h0; // @[Microcode.scala 618:28 620:19 108:21]
  wire [7:0] _GEN_330 = _u_T_1 ? io_memReadData : 8'h0; // @[Microcode.scala 618:28 621:19 109:21]
  wire [7:0] _GEN_331 = _u_T_1 ? u_alu_io_out : A_sampled; // @[Microcode.scala 618:28 622:19 65:15]
  wire [7:0] _GEN_332 = _u_T_1 ? _u_out_F_T_5 : F_sampled; // @[Microcode.scala 105:13 618:28 66:15]
  wire [7:0] _u_out_F_T_6 = {u_alu_io_flagZ,1'h0,1'h0,5'h0}; // @[Cat.scala 33:92]
  wire [3:0] _GEN_336 = _u_T_1 ? 4'h6 : 4'h0; // @[Microcode.scala 637:28 638:19 110:21]
  wire [7:0] _GEN_340 = _u_T_1 ? _u_out_F_T_6 : F_sampled; // @[Microcode.scala 105:13 637:28 66:15]
  wire [7:0] _u_out_F_T_8 = {u_alu_io_flagZ,u_alu_io_flagN,u_alu_io_flagH,u_alu_io_flagC,4'h0}; // @[Cat.scala 33:92]
  wire [7:0] _u_out_F_T_14 = {u_alu_io_flagZ,1'h1,u_alu_io_flagH,u_alu_io_flagC,4'h0}; // @[Cat.scala 33:92]
  wire [3:0] _GEN_351 = _u_T_1 ? 4'h2 : 4'h0; // @[Microcode.scala 751:28 752:19 110:21]
  wire  _GEN_354 = _u_T_1 ? 1'h0 : F_sampled[4]; // @[Microcode.scala 111:21 751:28 755:24]
  wire [7:0] _GEN_355 = _u_T_1 ? _u_out_F_T_14 : F_sampled; // @[Microcode.scala 105:13 66:15 751:28]
  wire [7:0] u_off = imm8; // @[Microcode.scala 869:25]
  wire [15:0] _GEN_2583 = {{8{u_off[7]}},u_off}; // @[Microcode.scala 871:33]
  wire [15:0] _u_out_PC_T_4 = $signed(PC_sampled) + $signed(_GEN_2583); // @[Microcode.scala 871:40]
  wire [15:0] _GEN_365 = _u_T_1 ? _u_out_PC_T_4 : PC_sampled; // @[Microcode.scala 63:15 870:28 871:16]
  wire [15:0] _u_regPair_T_3 = {A_sampled,F_sampled}; // @[Cat.scala 33:92]
  wire [15:0] u_regPair = _u_T_9 ? _u_regPair_T_3 : _u_operand_T_8; // @[Mux.scala 81:58]
  wire [15:0] _GEN_370 = _u_T_61 ? _u_result_T_28 : 16'h0; // @[Microcode.scala 80:21 897:22 910:27]
  wire [7:0] _GEN_372 = _u_T_61 ? u_regPair[7:0] : 8'h0; // @[Microcode.scala 83:21 897:22 912:27]
  wire [15:0] _GEN_373 = _u_T_61 ? _u_result_T_28 : SP_sampled; // @[Microcode.scala 64:15 897:22 913:18]
  wire [15:0] _GEN_375 = _u_T_59 ? _u_result_T_28 : _GEN_370; // @[Microcode.scala 897:22 900:27]
  wire  _GEN_376 = _u_T_59 | _u_T_61; // @[Microcode.scala 897:22 901:27]
  wire [7:0] _GEN_377 = _u_T_59 ? u_regPair[15:8] : _GEN_372; // @[Microcode.scala 897:22 902:27]
  wire [15:0] _GEN_378 = _u_T_59 ? _u_result_T_28 : _GEN_373; // @[Microcode.scala 897:22 903:18]
  wire [15:0] _GEN_382 = _u_T_1 ? _u_result_T_10 : SP_sampled; // @[Microcode.scala 64:15 933:32 935:20]
  wire [7:0] _u_out_F_T_23 = u_tmp8 & 8'hf0; // @[Microcode.scala 952:54]
  wire [7:0] _GEN_384 = _u_T_9 ? io_memReadData : A_sampled; // @[Microcode.scala 65:15 948:24 952:31]
  wire [7:0] _GEN_385 = _u_T_9 ? _u_out_F_T_23 : F_sampled; // @[Microcode.scala 66:15 948:24 952:46]
  wire [7:0] _GEN_386 = _u_T_8 ? io_memReadData : H_sampled; // @[Microcode.scala 71:15 948:24 951:31]
  wire [7:0] _GEN_387 = _u_T_8 ? u_tmp8 : L_sampled; // @[Microcode.scala 72:15 948:24 951:46]
  wire [7:0] _GEN_388 = _u_T_8 ? A_sampled : _GEN_384; // @[Microcode.scala 65:15 948:24]
  wire [7:0] _GEN_389 = _u_T_8 ? F_sampled : _GEN_385; // @[Microcode.scala 66:15 948:24]
  wire [7:0] _GEN_390 = _u_T_7 ? io_memReadData : D_sampled; // @[Microcode.scala 69:15 948:24 950:31]
  wire [7:0] _GEN_391 = _u_T_7 ? u_tmp8 : E_sampled; // @[Microcode.scala 70:15 948:24 950:46]
  wire [7:0] _GEN_392 = _u_T_7 ? H_sampled : _GEN_386; // @[Microcode.scala 71:15 948:24]
  wire [7:0] _GEN_393 = _u_T_7 ? L_sampled : _GEN_387; // @[Microcode.scala 72:15 948:24]
  wire [7:0] _GEN_394 = _u_T_7 ? A_sampled : _GEN_388; // @[Microcode.scala 65:15 948:24]
  wire [7:0] _GEN_395 = _u_T_7 ? F_sampled : _GEN_389; // @[Microcode.scala 66:15 948:24]
  wire [7:0] _GEN_396 = _u_T_6 ? io_memReadData : B_sampled; // @[Microcode.scala 67:15 948:24 949:31]
  wire [7:0] _GEN_397 = _u_T_6 ? u_tmp8 : C_sampled; // @[Microcode.scala 68:15 948:24 949:46]
  wire [7:0] _GEN_398 = _u_T_6 ? D_sampled : _GEN_390; // @[Microcode.scala 69:15 948:24]
  wire [7:0] _GEN_399 = _u_T_6 ? E_sampled : _GEN_391; // @[Microcode.scala 70:15 948:24]
  wire [7:0] _GEN_400 = _u_T_6 ? H_sampled : _GEN_392; // @[Microcode.scala 71:15 948:24]
  wire [7:0] _GEN_401 = _u_T_6 ? L_sampled : _GEN_393; // @[Microcode.scala 72:15 948:24]
  wire [7:0] _GEN_402 = _u_T_6 ? A_sampled : _GEN_394; // @[Microcode.scala 65:15 948:24]
  wire [7:0] _GEN_403 = _u_T_6 ? F_sampled : _GEN_395; // @[Microcode.scala 66:15 948:24]
  wire [7:0] _GEN_404 = _u_T_1 ? _GEN_396 : B_sampled; // @[Microcode.scala 67:15 944:32]
  wire [7:0] _GEN_405 = _u_T_1 ? _GEN_397 : C_sampled; // @[Microcode.scala 68:15 944:32]
  wire [7:0] _GEN_406 = _u_T_1 ? _GEN_398 : D_sampled; // @[Microcode.scala 69:15 944:32]
  wire [7:0] _GEN_407 = _u_T_1 ? _GEN_399 : E_sampled; // @[Microcode.scala 70:15 944:32]
  wire [7:0] _GEN_408 = _u_T_1 ? _GEN_400 : H_sampled; // @[Microcode.scala 71:15 944:32]
  wire [7:0] _GEN_409 = _u_T_1 ? _GEN_401 : L_sampled; // @[Microcode.scala 72:15 944:32]
  wire [7:0] _GEN_410 = _u_T_1 ? _GEN_402 : A_sampled; // @[Microcode.scala 65:15 944:32]
  wire [7:0] _GEN_411 = _u_T_1 ? _GEN_403 : F_sampled; // @[Microcode.scala 66:15 944:32]
  wire [15:0] _GEN_414 = _u_T_61 ? SP_sampled : 16'h0; // @[Microcode.scala 80:21 928:22 942:22]
  wire [7:0] _GEN_416 = _u_T_61 ? _GEN_404 : B_sampled; // @[Microcode.scala 67:15 928:22]
  wire [7:0] _GEN_417 = _u_T_61 ? _GEN_405 : C_sampled; // @[Microcode.scala 68:15 928:22]
  wire [7:0] _GEN_418 = _u_T_61 ? _GEN_406 : D_sampled; // @[Microcode.scala 69:15 928:22]
  wire [7:0] _GEN_419 = _u_T_61 ? _GEN_407 : E_sampled; // @[Microcode.scala 70:15 928:22]
  wire [7:0] _GEN_420 = _u_T_61 ? _GEN_408 : H_sampled; // @[Microcode.scala 71:15 928:22]
  wire [7:0] _GEN_421 = _u_T_61 ? _GEN_409 : L_sampled; // @[Microcode.scala 72:15 928:22]
  wire [7:0] _GEN_422 = _u_T_61 ? _GEN_410 : A_sampled; // @[Microcode.scala 65:15 928:22]
  wire [7:0] _GEN_423 = _u_T_61 ? _GEN_411 : F_sampled; // @[Microcode.scala 66:15 928:22]
  wire [15:0] _GEN_424 = _u_T_61 ? _GEN_382 : SP_sampled; // @[Microcode.scala 64:15 928:22]
  wire [15:0] _GEN_426 = _u_T_59 ? SP_sampled : _GEN_414; // @[Microcode.scala 928:22 931:22]
  wire [15:0] _GEN_429 = _u_T_59 ? _GEN_382 : _GEN_424; // @[Microcode.scala 928:22]
  wire [7:0] _GEN_431 = _u_T_59 ? B_sampled : _GEN_416; // @[Microcode.scala 67:15 928:22]
  wire [7:0] _GEN_432 = _u_T_59 ? C_sampled : _GEN_417; // @[Microcode.scala 68:15 928:22]
  wire [7:0] _GEN_433 = _u_T_59 ? D_sampled : _GEN_418; // @[Microcode.scala 69:15 928:22]
  wire [7:0] _GEN_434 = _u_T_59 ? E_sampled : _GEN_419; // @[Microcode.scala 70:15 928:22]
  wire [7:0] _GEN_435 = _u_T_59 ? H_sampled : _GEN_420; // @[Microcode.scala 71:15 928:22]
  wire [7:0] _GEN_436 = _u_T_59 ? L_sampled : _GEN_421; // @[Microcode.scala 72:15 928:22]
  wire [7:0] _GEN_437 = _u_T_59 ? A_sampled : _GEN_422; // @[Microcode.scala 65:15 928:22]
  wire [7:0] _GEN_438 = _u_T_59 ? F_sampled : _GEN_423; // @[Microcode.scala 66:15 928:22]
  wire [15:0] _GEN_443 = _u_T_63 ? imm16 : PC_sampled; // @[Microcode.scala 63:15 967:22 985:18]
  wire [7:0] _GEN_447 = _u_T_61 ? PC_sampled[7:0] : 8'h0; // @[Microcode.scala 83:21 967:22 980:27]
  wire [15:0] _GEN_450 = _u_T_61 ? PC_sampled : _GEN_443; // @[Microcode.scala 63:15 967:22]
  wire [7:0] _GEN_454 = _u_T_59 ? PC_sampled[15:8] : _GEN_447; // @[Microcode.scala 967:22 972:27]
  wire [15:0] _GEN_457 = _u_T_59 ? PC_sampled : _GEN_450; // @[Microcode.scala 63:15 967:22]
  wire [15:0] _u_out_PC_T_5 = {io_memReadData,u_tmp8}; // @[Cat.scala 33:92]
  wire [15:0] _GEN_462 = _u_T_1 ? _u_out_PC_T_5 : PC_sampled; // @[Microcode.scala 1009:32 1010:20 63:15]
  wire [15:0] _GEN_467 = _u_T_61 ? _GEN_462 : PC_sampled; // @[Microcode.scala 63:15 992:22]
  wire [15:0] _GEN_475 = _u_T_59 ? PC_sampled : _GEN_467; // @[Microcode.scala 63:15 992:22]
  wire  _GEN_482 = _u_T_1 | IME; // @[Microcode.scala 1041:32 1044:21 74:21]
  wire  _GEN_488 = _u_T_61 ? _GEN_482 : IME; // @[Microcode.scala 1022:22 74:21]
  wire  _GEN_496 = _u_T_59 ? IME : _GEN_488; // @[Microcode.scala 1022:22 74:21]
  wire [7:0] u_vec = IR & 8'h38; // @[Microcode.scala 1055:21]
  wire [15:0] _GEN_503 = _u_T_61 ? {{8'd0}, u_vec} : PC_sampled; // @[Microcode.scala 1056:22 1070:18 63:15]
  wire [15:0] _GEN_511 = _u_T_59 ? PC_sampled : _GEN_503; // @[Microcode.scala 1056:22 63:15]
  wire [7:0] _u_T_313 = IR & 8'he7; // @[Microcode.scala 1094:20]
  wire [4:0] u_cc = IR[7:3] & 5'h3; // @[Microcode.scala 1095:26]
  wire  _u_condition_T = ~F_sampled[7]; // @[Microcode.scala 1101:16]
  wire  _u_condition_T_1 = ~F_sampled[4]; // @[Microcode.scala 1103:16]
  wire  _u_condition_T_5 = 5'h1 == u_cc ? F_sampled[7] : 5'h0 == u_cc & _u_condition_T; // @[Mux.scala 81:58]
  wire  _u_condition_T_7 = 5'h2 == u_cc ? _u_condition_T_1 : _u_condition_T_5; // @[Mux.scala 81:58]
  wire  u_condition = 5'h3 == u_cc ? F_sampled[4] : _u_condition_T_7; // @[Mux.scala 81:58]
  wire [15:0] _GEN_515 = u_condition ? _u_out_PC_T_4 : PC_sampled; // @[Microcode.scala 1107:23 1108:16 63:15]
  wire [15:0] _GEN_517 = u_condition ? imm16 : PC_sampled; // @[Microcode.scala 1128:23 1129:16 63:15]
  wire [15:0] _GEN_524 = _u_T_61 ? imm16 : PC_sampled; // @[Microcode.scala 1150:24 1164:20 63:15]
  wire [15:0] _GEN_532 = _u_T_59 ? PC_sampled : _GEN_524; // @[Microcode.scala 1150:24 63:15]
  wire [15:0] _GEN_535 = u_condition ? _GEN_375 : 16'h0; // @[Microcode.scala 1149:23 80:21]
  wire  _GEN_536 = u_condition & _GEN_376; // @[Microcode.scala 1149:23 82:21]
  wire [7:0] _GEN_537 = u_condition ? _GEN_454 : 8'h0; // @[Microcode.scala 1149:23 83:21]
  wire [15:0] _GEN_538 = u_condition ? _GEN_378 : SP_sampled; // @[Microcode.scala 1149:23 64:15]
  wire [2:0] _GEN_539 = u_condition ? _GEN_253 : mcycle; // @[Microcode.scala 1149:23 77:21]
  wire [15:0] _GEN_540 = u_condition ? _GEN_532 : PC_sampled; // @[Microcode.scala 1149:23 63:15]
  wire  _GEN_541 = u_condition ? _GEN_255 : _u_T_1; // @[Microcode.scala 1149:23]
  wire [15:0] _GEN_561 = u_condition ? _GEN_426 : 16'h0; // @[Microcode.scala 1189:23 80:21]
  wire [7:0] _GEN_563 = u_condition ? _GEN_250 : u_tmp8; // @[Microcode.scala 1189:23 56:24]
  wire [15:0] _GEN_564 = u_condition ? _GEN_429 : SP_sampled; // @[Microcode.scala 1189:23 64:15]
  wire [15:0] _GEN_566 = u_condition ? _GEN_475 : PC_sampled; // @[Microcode.scala 1189:23 63:15]
  wire [7:0] _u_out_F_T_25 = {F_sampled[7],1'h0,1'h0,5'h10}; // @[Cat.scala 33:92]
  wire [7:0] _u_out_F_T_29 = {F_sampled[7],1'h0,1'h0,_u_condition_T_1,4'h0}; // @[Cat.scala 33:92]
  wire [7:0] _u_out_A_T = ~A_sampled; // @[Microcode.scala 1236:16]
  wire [7:0] _u_out_F_T_32 = {F_sampled[7],1'h1,1'h1,F_sampled[4],4'h0}; // @[Cat.scala 33:92]
  wire  u_N = F_sampled[6]; // @[Microcode.scala 1243:19]
  wire  u_H = F_sampled[5]; // @[Microcode.scala 1244:19]
  wire [6:0] _GEN_572 = F_sampled[4] | A_sampled > 8'h99 ? 7'h60 : 7'h0; // @[Microcode.scala 1260:22 1264:36 1265:24]
  wire  _GEN_573 = F_sampled[4] | A_sampled > 8'h99 | F_sampled[4]; // @[Microcode.scala 1253:16 1264:36 1266:20]
  wire [7:0] _u_T_345 = A_sampled & 8'hf; // @[Microcode.scala 1270:26]
  wire [2:0] _GEN_574 = u_H | _u_T_345 > 8'h9 ? 3'h6 : 3'h0; // @[Microcode.scala 1261:22 1270:47 1271:24]
  wire [7:0] u_upperCorrect = {{1'd0}, _GEN_572}; // @[Microcode.scala 1257:32]
  wire [7:0] u_lowerCorrect = {{5'd0}, _GEN_574}; // @[Microcode.scala 1258:32]
  wire [7:0] _u_correction_T_1 = u_upperCorrect + u_lowerCorrect; // @[Microcode.scala 1274:36]
  wire [6:0] _GEN_575 = F_sampled[4] ? 7'h60 : 7'h0; // @[Microcode.scala 1285:17 1282:22 1286:24]
  wire [7:0] u_upperCorrect_1 = {{1'd0}, _GEN_575}; // @[Microcode.scala 1279:32]
  wire [2:0] _GEN_576 = u_H ? 3'h6 : 3'h0; // @[Microcode.scala 1288:17 1283:22 1289:24]
  wire [7:0] u_lowerCorrect_1 = {{5'd0}, _GEN_576}; // @[Microcode.scala 1280:32]
  wire [7:0] _u_correction_T_3 = u_upperCorrect_1 + u_lowerCorrect_1; // @[Microcode.scala 1292:36]
  wire [7:0] u_correction = ~u_N ? _u_correction_T_1 : _u_correction_T_3; // @[Microcode.scala 1255:16 1274:20 1292:20]
  wire [7:0] _u_adjusted_T_1 = A_sampled + u_correction; // @[Microcode.scala 1275:26]
  wire [7:0] _u_adjusted_T_3 = A_sampled - u_correction; // @[Microcode.scala 1293:26]
  wire  u_newCarry = ~u_N ? _GEN_573 : F_sampled[4]; // @[Microcode.scala 1255:16 1294:18]
  wire [7:0] u_adjusted = ~u_N ? _u_adjusted_T_1 : _u_adjusted_T_3; // @[Microcode.scala 1255:16 1275:18 1293:18]
  wire  _u_T_348 = u_adjusted == 8'h0; // @[Microcode.scala 1298:25]
  wire [7:0] _u_out_F_T_33 = {_u_T_348,u_N,1'h0,u_newCarry,4'h0}; // @[Cat.scala 33:92]
  wire  u_newC = A_sampled[7]; // @[Microcode.scala 1308:24]
  wire [7:0] u_newA = {A_sampled[6:0],F_sampled[4]}; // @[Cat.scala 33:92]
  wire [7:0] _u_out_F_T_34 = {3'h0,u_newC,4'h0}; // @[Cat.scala 33:92]
  wire [7:0] _GEN_581 = _u_T_1 ? u_newA : A_sampled; // @[Microcode.scala 1305:28 1312:15 65:15]
  wire [7:0] _GEN_582 = _u_T_1 ? _u_out_F_T_34 : F_sampled; // @[Microcode.scala 1305:28 1313:15 66:15]
  wire  u_newC_1 = A_sampled[0]; // @[Microcode.scala 1324:24]
  wire [7:0] u_newA_1 = {F_sampled[4],A_sampled[7:1]}; // @[Cat.scala 33:92]
  wire [7:0] _u_out_F_T_35 = {3'h0,u_newC_1,4'h0}; // @[Cat.scala 33:92]
  wire [7:0] _GEN_584 = _u_T_1 ? u_newA_1 : A_sampled; // @[Microcode.scala 1321:28 1328:15 65:15]
  wire [7:0] _GEN_585 = _u_T_1 ? _u_out_F_T_35 : F_sampled; // @[Microcode.scala 1321:28 1329:15 66:15]
  wire [15:0] _GEN_589 = _u_T_128 ? imm16 : 16'h0; // @[Microcode.scala 1346:28 1347:20 80:21]
  wire [7:0] _GEN_591 = _u_T_128 ? _GEN_239 : A_sampled; // @[Microcode.scala 1346:28 65:15]
  wire  _GEN_595 = _u_T_128 & _u_mcBus_memWrite_T; // @[Microcode.scala 1362:28 1364:21 82:21]
  wire [7:0] _GEN_596 = _u_T_128 ? A_sampled : 8'h0; // @[Microcode.scala 1362:28 1365:25 83:21]
  wire  _u_T_363 = mcycle == 3'h1; // @[Microcode.scala 1387:25]
  wire [15:0] _u_mcBus_memAddr_T_8 = imm16 + 16'h1; // @[Microcode.scala 1388:32]
  wire [15:0] _GEN_600 = mcycle == 3'h1 ? _u_mcBus_memAddr_T_8 : 16'h0; // @[Microcode.scala 1387:34 1388:20 80:21]
  wire  _GEN_601 = mcycle == 3'h1 & _u_mcBus_memWrite_T; // @[Microcode.scala 1387:34 1389:21 82:21]
  wire [7:0] _GEN_602 = mcycle == 3'h1 ? SP_sampled[15:8] : 8'h0; // @[Microcode.scala 1387:34 1390:25 83:21]
  wire  _GEN_603 = mcycle == 3'h1 & _u_T_1; // @[Microcode.scala 1387:34 78:21]
  wire [15:0] _GEN_604 = _u_T_128 ? imm16 : _GEN_600; // @[Microcode.scala 1379:28 1380:20]
  wire  _GEN_605 = _u_T_128 ? _u_mcBus_memWrite_T : _GEN_601; // @[Microcode.scala 1379:28 1381:21]
  wire [7:0] _GEN_606 = _u_T_128 ? SP_sampled[7:0] : _GEN_602; // @[Microcode.scala 1379:28 1382:25]
  wire [2:0] _GEN_607 = _u_T_128 ? _GEN_113 : mcycle; // @[Microcode.scala 1379:28 77:21]
  wire  _GEN_608 = _u_T_128 ? 1'h0 : _GEN_603; // @[Microcode.scala 1379:28 78:21]
  wire [7:0] _u_offset_signed_T_2 = imm8[7] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [15:0] u_offset_signed = {_u_offset_signed_T_2,imm8}; // @[Microcode.scala 1407:61]
  wire [8:0] u_lower_sum = SP_sampled[7:0] + imm8; // @[Microcode.scala 1412:35]
  wire [4:0] _u_hc_T_2 = SP_sampled[3:0] + imm8[3:0]; // @[Microcode.scala 1413:30]
  wire  u_hc = _u_hc_T_2[4]; // @[Microcode.scala 1413:47]
  wire  u_cy = u_lower_sum[8]; // @[Microcode.scala 1414:25]
  wire [15:0] _u_out_H_T_8 = $signed(SP_sampled) + $signed(u_offset_signed); // @[Microcode.scala 1416:23]
  wire [7:0] _u_out_F_T_36 = {2'h0,u_hc,u_cy,4'h0}; // @[Cat.scala 33:92]
  wire [15:0] _GEN_613 = IR == 8'he8 ? _u_out_H_T_8 : SP_sampled; // @[Microcode.scala 1423:32 1433:14 64:15]
  wire [7:0] _GEN_614 = IR == 8'he8 ? _u_out_F_T_36 : F_sampled; // @[Microcode.scala 1423:32 1434:13 66:15]
  wire  _GEN_615 = IR == 8'he8 ? _u_T_1 : _u_T_1; // @[Microcode.scala 1423:32]
  wire [7:0] _GEN_616 = IR == 8'hf8 ? _u_out_H_T_8[15:8] : H_sampled; // @[Microcode.scala 1406:32 1416:13 71:15]
  wire [7:0] _GEN_617 = IR == 8'hf8 ? _u_out_H_T_8[7:0] : L_sampled; // @[Microcode.scala 1406:32 1417:13 72:15]
  wire [7:0] _GEN_618 = IR == 8'hf8 ? _u_out_F_T_36 : _GEN_614; // @[Microcode.scala 1406:32 1418:13]
  wire  _GEN_619 = IR == 8'hf8 ? _u_T_1 : _GEN_615; // @[Microcode.scala 1406:32]
  wire [15:0] _GEN_620 = IR == 8'hf8 ? SP_sampled : _GEN_613; // @[Microcode.scala 1406:32 64:15]
  wire [15:0] _GEN_621 = IR == 8'hf9 ? u_HL : _GEN_620; // @[Microcode.scala 1401:32 1402:14]
  wire  _GEN_622 = IR == 8'hf9 ? _u_T_1 : _GEN_619; // @[Microcode.scala 1401:32]
  wire [7:0] _GEN_623 = IR == 8'hf9 ? H_sampled : _GEN_616; // @[Microcode.scala 1401:32 71:15]
  wire [7:0] _GEN_624 = IR == 8'hf9 ? L_sampled : _GEN_617; // @[Microcode.scala 1401:32 72:15]
  wire [7:0] _GEN_625 = IR == 8'hf9 ? F_sampled : _GEN_618; // @[Microcode.scala 1401:32 66:15]
  wire [15:0] _GEN_626 = IR == 8'h8 ? _GEN_604 : 16'h0; // @[Microcode.scala 1378:32 80:21]
  wire  _GEN_627 = IR == 8'h8 & _GEN_605; // @[Microcode.scala 1378:32 82:21]
  wire [7:0] _GEN_628 = IR == 8'h8 ? _GEN_606 : 8'h0; // @[Microcode.scala 1378:32 83:21]
  wire [2:0] _GEN_629 = IR == 8'h8 ? _GEN_607 : mcycle; // @[Microcode.scala 1378:32 77:21]
  wire  _GEN_630 = IR == 8'h8 ? _GEN_608 : _GEN_622; // @[Microcode.scala 1378:32]
  wire [15:0] _GEN_631 = IR == 8'h8 ? SP_sampled : _GEN_621; // @[Microcode.scala 1378:32 64:15]
  wire [7:0] _GEN_632 = IR == 8'h8 ? H_sampled : _GEN_623; // @[Microcode.scala 1378:32 71:15]
  wire [7:0] _GEN_633 = IR == 8'h8 ? L_sampled : _GEN_624; // @[Microcode.scala 1378:32 72:15]
  wire [7:0] _GEN_634 = IR == 8'h8 ? F_sampled : _GEN_625; // @[Microcode.scala 1378:32 66:15]
  wire [15:0] _GEN_635 = IR == 8'hea ? _GEN_589 : _GEN_626; // @[Microcode.scala 1361:32]
  wire  _GEN_636 = IR == 8'hea ? _GEN_595 : _GEN_627; // @[Microcode.scala 1361:32]
  wire [7:0] _GEN_637 = IR == 8'hea ? _GEN_596 : _GEN_628; // @[Microcode.scala 1361:32]
  wire  _GEN_638 = IR == 8'hea ? _GEN_236 : _GEN_630; // @[Microcode.scala 1361:32]
  wire [2:0] _GEN_639 = IR == 8'hea ? mcycle : _GEN_629; // @[Microcode.scala 1361:32 77:21]
  wire [15:0] _GEN_640 = IR == 8'hea ? SP_sampled : _GEN_631; // @[Microcode.scala 1361:32 64:15]
  wire [7:0] _GEN_641 = IR == 8'hea ? H_sampled : _GEN_632; // @[Microcode.scala 1361:32 71:15]
  wire [7:0] _GEN_642 = IR == 8'hea ? L_sampled : _GEN_633; // @[Microcode.scala 1361:32 72:15]
  wire [7:0] _GEN_643 = IR == 8'hea ? F_sampled : _GEN_634; // @[Microcode.scala 1361:32 66:15]
  wire [15:0] _GEN_644 = IR == 8'hfa ? _GEN_589 : _GEN_635; // @[Microcode.scala 1345:32]
  wire [7:0] _GEN_646 = IR == 8'hfa ? _GEN_591 : A_sampled; // @[Microcode.scala 1345:32 65:15]
  wire  _GEN_647 = IR == 8'hfa ? _GEN_236 : _GEN_638; // @[Microcode.scala 1345:32]
  wire  _GEN_648 = IR == 8'hfa ? 1'h0 : _GEN_636; // @[Microcode.scala 1345:32 82:21]
  wire [7:0] _GEN_649 = IR == 8'hfa ? 8'h0 : _GEN_637; // @[Microcode.scala 1345:32 83:21]
  wire [2:0] _GEN_650 = IR == 8'hfa ? mcycle : _GEN_639; // @[Microcode.scala 1345:32 77:21]
  wire [15:0] _GEN_651 = IR == 8'hfa ? SP_sampled : _GEN_640; // @[Microcode.scala 1345:32 64:15]
  wire [7:0] _GEN_652 = IR == 8'hfa ? H_sampled : _GEN_641; // @[Microcode.scala 1345:32 71:15]
  wire [7:0] _GEN_653 = IR == 8'hfa ? L_sampled : _GEN_642; // @[Microcode.scala 1345:32 72:15]
  wire [7:0] _GEN_654 = IR == 8'hfa ? F_sampled : _GEN_643; // @[Microcode.scala 1345:32 66:15]
  wire [7:0] _GEN_655 = IR == 8'h1f ? _GEN_584 : _GEN_646; // @[Microcode.scala 1320:32]
  wire [7:0] _GEN_656 = IR == 8'h1f ? _GEN_585 : _GEN_654; // @[Microcode.scala 1320:32]
  wire  _GEN_657 = IR == 8'h1f ? _u_T_1 : _GEN_647; // @[Microcode.scala 1320:32]
  wire [15:0] _GEN_658 = IR == 8'h1f ? 16'h0 : _GEN_644; // @[Microcode.scala 1320:32 80:21]
  wire  _GEN_660 = IR == 8'h1f ? 1'h0 : _GEN_648; // @[Microcode.scala 1320:32 82:21]
  wire [7:0] _GEN_661 = IR == 8'h1f ? 8'h0 : _GEN_649; // @[Microcode.scala 1320:32 83:21]
  wire [2:0] _GEN_662 = IR == 8'h1f ? mcycle : _GEN_650; // @[Microcode.scala 1320:32 77:21]
  wire [15:0] _GEN_663 = IR == 8'h1f ? SP_sampled : _GEN_651; // @[Microcode.scala 1320:32 64:15]
  wire [7:0] _GEN_664 = IR == 8'h1f ? H_sampled : _GEN_652; // @[Microcode.scala 1320:32 71:15]
  wire [7:0] _GEN_665 = IR == 8'h1f ? L_sampled : _GEN_653; // @[Microcode.scala 1320:32 72:15]
  wire [7:0] _GEN_666 = IR == 8'h17 ? _GEN_581 : _GEN_655; // @[Microcode.scala 1304:32]
  wire [7:0] _GEN_667 = IR == 8'h17 ? _GEN_582 : _GEN_656; // @[Microcode.scala 1304:32]
  wire  _GEN_668 = IR == 8'h17 ? _u_T_1 : _GEN_657; // @[Microcode.scala 1304:32]
  wire [15:0] _GEN_669 = IR == 8'h17 ? 16'h0 : _GEN_658; // @[Microcode.scala 1304:32 80:21]
  wire  _GEN_671 = IR == 8'h17 ? 1'h0 : _GEN_660; // @[Microcode.scala 1304:32 82:21]
  wire [7:0] _GEN_672 = IR == 8'h17 ? 8'h0 : _GEN_661; // @[Microcode.scala 1304:32 83:21]
  wire [2:0] _GEN_673 = IR == 8'h17 ? mcycle : _GEN_662; // @[Microcode.scala 1304:32 77:21]
  wire [15:0] _GEN_674 = IR == 8'h17 ? SP_sampled : _GEN_663; // @[Microcode.scala 1304:32 64:15]
  wire [7:0] _GEN_675 = IR == 8'h17 ? H_sampled : _GEN_664; // @[Microcode.scala 1304:32 71:15]
  wire [7:0] _GEN_676 = IR == 8'h17 ? L_sampled : _GEN_665; // @[Microcode.scala 1304:32 72:15]
  wire [7:0] _GEN_677 = IR == 8'h27 ? u_adjusted : _GEN_666; // @[Microcode.scala 1242:32 1297:13]
  wire [7:0] _GEN_678 = IR == 8'h27 ? _u_out_F_T_33 : _GEN_667; // @[Microcode.scala 105:13 1242:32]
  wire  _GEN_679 = IR == 8'h27 ? _u_T_1 : _GEN_668; // @[Microcode.scala 1242:32]
  wire [15:0] _GEN_680 = IR == 8'h27 ? 16'h0 : _GEN_669; // @[Microcode.scala 1242:32 80:21]
  wire  _GEN_682 = IR == 8'h27 ? 1'h0 : _GEN_671; // @[Microcode.scala 1242:32 82:21]
  wire [7:0] _GEN_683 = IR == 8'h27 ? 8'h0 : _GEN_672; // @[Microcode.scala 1242:32 83:21]
  wire [2:0] _GEN_684 = IR == 8'h27 ? mcycle : _GEN_673; // @[Microcode.scala 1242:32 77:21]
  wire [15:0] _GEN_685 = IR == 8'h27 ? SP_sampled : _GEN_674; // @[Microcode.scala 1242:32 64:15]
  wire [7:0] _GEN_686 = IR == 8'h27 ? H_sampled : _GEN_675; // @[Microcode.scala 1242:32 71:15]
  wire [7:0] _GEN_687 = IR == 8'h27 ? L_sampled : _GEN_676; // @[Microcode.scala 1242:32 72:15]
  wire [7:0] _GEN_688 = IR == 8'h2f ? _u_out_A_T : _GEN_677; // @[Microcode.scala 1235:32 1236:13]
  wire [7:0] _GEN_689 = IR == 8'h2f ? _u_out_F_T_32 : _GEN_678; // @[Microcode.scala 1235:32 1237:13]
  wire  _GEN_690 = IR == 8'h2f ? _u_T_1 : _GEN_679; // @[Microcode.scala 1235:32]
  wire [15:0] _GEN_691 = IR == 8'h2f ? 16'h0 : _GEN_680; // @[Microcode.scala 1235:32 80:21]
  wire  _GEN_693 = IR == 8'h2f ? 1'h0 : _GEN_682; // @[Microcode.scala 1235:32 82:21]
  wire [7:0] _GEN_694 = IR == 8'h2f ? 8'h0 : _GEN_683; // @[Microcode.scala 1235:32 83:21]
  wire [2:0] _GEN_695 = IR == 8'h2f ? mcycle : _GEN_684; // @[Microcode.scala 1235:32 77:21]
  wire [15:0] _GEN_696 = IR == 8'h2f ? SP_sampled : _GEN_685; // @[Microcode.scala 1235:32 64:15]
  wire [7:0] _GEN_697 = IR == 8'h2f ? H_sampled : _GEN_686; // @[Microcode.scala 1235:32 71:15]
  wire [7:0] _GEN_698 = IR == 8'h2f ? L_sampled : _GEN_687; // @[Microcode.scala 1235:32 72:15]
  wire [7:0] _GEN_699 = IR == 8'h3f ? _u_out_F_T_29 : _GEN_689; // @[Microcode.scala 1230:32 1231:13]
  wire  _GEN_700 = IR == 8'h3f ? _u_T_1 : _GEN_690; // @[Microcode.scala 1230:32]
  wire [7:0] _GEN_701 = IR == 8'h3f ? A_sampled : _GEN_688; // @[Microcode.scala 1230:32 65:15]
  wire [15:0] _GEN_702 = IR == 8'h3f ? 16'h0 : _GEN_691; // @[Microcode.scala 1230:32 80:21]
  wire  _GEN_704 = IR == 8'h3f ? 1'h0 : _GEN_693; // @[Microcode.scala 1230:32 82:21]
  wire [7:0] _GEN_705 = IR == 8'h3f ? 8'h0 : _GEN_694; // @[Microcode.scala 1230:32 83:21]
  wire [2:0] _GEN_706 = IR == 8'h3f ? mcycle : _GEN_695; // @[Microcode.scala 1230:32 77:21]
  wire [15:0] _GEN_707 = IR == 8'h3f ? SP_sampled : _GEN_696; // @[Microcode.scala 1230:32 64:15]
  wire [7:0] _GEN_708 = IR == 8'h3f ? H_sampled : _GEN_697; // @[Microcode.scala 1230:32 71:15]
  wire [7:0] _GEN_709 = IR == 8'h3f ? L_sampled : _GEN_698; // @[Microcode.scala 1230:32 72:15]
  wire [7:0] _GEN_710 = IR == 8'h37 ? _u_out_F_T_25 : _GEN_699; // @[Microcode.scala 1225:32 1226:13]
  wire  _GEN_711 = IR == 8'h37 ? _u_T_1 : _GEN_700; // @[Microcode.scala 1225:32]
  wire [7:0] _GEN_712 = IR == 8'h37 ? A_sampled : _GEN_701; // @[Microcode.scala 1225:32 65:15]
  wire [15:0] _GEN_713 = IR == 8'h37 ? 16'h0 : _GEN_702; // @[Microcode.scala 1225:32 80:21]
  wire  _GEN_715 = IR == 8'h37 ? 1'h0 : _GEN_704; // @[Microcode.scala 1225:32 82:21]
  wire [7:0] _GEN_716 = IR == 8'h37 ? 8'h0 : _GEN_705; // @[Microcode.scala 1225:32 83:21]
  wire [2:0] _GEN_717 = IR == 8'h37 ? mcycle : _GEN_706; // @[Microcode.scala 1225:32 77:21]
  wire [15:0] _GEN_718 = IR == 8'h37 ? SP_sampled : _GEN_707; // @[Microcode.scala 1225:32 64:15]
  wire [7:0] _GEN_719 = IR == 8'h37 ? H_sampled : _GEN_708; // @[Microcode.scala 1225:32 71:15]
  wire [7:0] _GEN_720 = IR == 8'h37 ? L_sampled : _GEN_709; // @[Microcode.scala 1225:32 72:15]
  wire [15:0] _GEN_721 = IR == 8'hc3 ? imm16 : PC_sampled; // @[Microcode.scala 1220:32 1221:14 63:15]
  wire  _GEN_722 = IR == 8'hc3 ? _u_T_1 : _GEN_711; // @[Microcode.scala 1220:32]
  wire [7:0] _GEN_723 = IR == 8'hc3 ? F_sampled : _GEN_710; // @[Microcode.scala 1220:32 66:15]
  wire [7:0] _GEN_724 = IR == 8'hc3 ? A_sampled : _GEN_712; // @[Microcode.scala 1220:32 65:15]
  wire [15:0] _GEN_725 = IR == 8'hc3 ? 16'h0 : _GEN_713; // @[Microcode.scala 1220:32 80:21]
  wire  _GEN_727 = IR == 8'hc3 ? 1'h0 : _GEN_715; // @[Microcode.scala 1220:32 82:21]
  wire [7:0] _GEN_728 = IR == 8'hc3 ? 8'h0 : _GEN_716; // @[Microcode.scala 1220:32 83:21]
  wire [2:0] _GEN_729 = IR == 8'hc3 ? mcycle : _GEN_717; // @[Microcode.scala 1220:32 77:21]
  wire [15:0] _GEN_730 = IR == 8'hc3 ? SP_sampled : _GEN_718; // @[Microcode.scala 1220:32 64:15]
  wire [7:0] _GEN_731 = IR == 8'hc3 ? H_sampled : _GEN_719; // @[Microcode.scala 1220:32 71:15]
  wire [7:0] _GEN_732 = IR == 8'hc3 ? L_sampled : _GEN_720; // @[Microcode.scala 1220:32 72:15]
  wire [15:0] _GEN_733 = _u_T_313 == 8'hc0 ? _GEN_561 : _GEN_725; // @[Microcode.scala 1177:44]
  wire [7:0] _GEN_735 = _u_T_313 == 8'hc0 ? _GEN_563 : u_tmp8; // @[Microcode.scala 1177:44 56:24]
  wire [15:0] _GEN_736 = _u_T_313 == 8'hc0 ? _GEN_564 : _GEN_730; // @[Microcode.scala 1177:44]
  wire [2:0] _GEN_737 = _u_T_313 == 8'hc0 ? _GEN_539 : _GEN_729; // @[Microcode.scala 1177:44]
  wire [15:0] _GEN_738 = _u_T_313 == 8'hc0 ? _GEN_566 : _GEN_721; // @[Microcode.scala 1177:44]
  wire  _GEN_739 = _u_T_313 == 8'hc0 ? _GEN_541 : _GEN_722; // @[Microcode.scala 1177:44]
  wire [7:0] _GEN_740 = _u_T_313 == 8'hc0 ? F_sampled : _GEN_723; // @[Microcode.scala 1177:44 66:15]
  wire [7:0] _GEN_741 = _u_T_313 == 8'hc0 ? A_sampled : _GEN_724; // @[Microcode.scala 1177:44 65:15]
  wire  _GEN_742 = _u_T_313 == 8'hc0 ? 1'h0 : _GEN_727; // @[Microcode.scala 1177:44 82:21]
  wire [7:0] _GEN_743 = _u_T_313 == 8'hc0 ? 8'h0 : _GEN_728; // @[Microcode.scala 1177:44 83:21]
  wire [7:0] _GEN_744 = _u_T_313 == 8'hc0 ? H_sampled : _GEN_731; // @[Microcode.scala 1177:44 71:15]
  wire [7:0] _GEN_745 = _u_T_313 == 8'hc0 ? L_sampled : _GEN_732; // @[Microcode.scala 1177:44 72:15]
  wire [15:0] _GEN_746 = _u_T_313 == 8'hc4 ? _GEN_535 : _GEN_733; // @[Microcode.scala 1137:44]
  wire  _GEN_747 = _u_T_313 == 8'hc4 ? _GEN_536 : _GEN_742; // @[Microcode.scala 1137:44]
  wire [7:0] _GEN_748 = _u_T_313 == 8'hc4 ? _GEN_537 : _GEN_743; // @[Microcode.scala 1137:44]
  wire [15:0] _GEN_749 = _u_T_313 == 8'hc4 ? _GEN_538 : _GEN_736; // @[Microcode.scala 1137:44]
  wire [2:0] _GEN_750 = _u_T_313 == 8'hc4 ? _GEN_539 : _GEN_737; // @[Microcode.scala 1137:44]
  wire [15:0] _GEN_751 = _u_T_313 == 8'hc4 ? _GEN_540 : _GEN_738; // @[Microcode.scala 1137:44]
  wire  _GEN_752 = _u_T_313 == 8'hc4 ? _GEN_541 : _GEN_739; // @[Microcode.scala 1137:44]
  wire [7:0] _GEN_754 = _u_T_313 == 8'hc4 ? u_tmp8 : _GEN_735; // @[Microcode.scala 1137:44 56:24]
  wire [7:0] _GEN_755 = _u_T_313 == 8'hc4 ? F_sampled : _GEN_740; // @[Microcode.scala 1137:44 66:15]
  wire [7:0] _GEN_756 = _u_T_313 == 8'hc4 ? A_sampled : _GEN_741; // @[Microcode.scala 1137:44 65:15]
  wire [7:0] _GEN_757 = _u_T_313 == 8'hc4 ? H_sampled : _GEN_744; // @[Microcode.scala 1137:44 71:15]
  wire [7:0] _GEN_758 = _u_T_313 == 8'hc4 ? L_sampled : _GEN_745; // @[Microcode.scala 1137:44 72:15]
  wire [15:0] _GEN_759 = _u_T_313 == 8'hc2 ? _GEN_517 : _GEN_751; // @[Microcode.scala 1116:44]
  wire  _GEN_760 = _u_T_313 == 8'hc2 ? _u_T_1 : _GEN_752; // @[Microcode.scala 1116:44]
  wire [15:0] _GEN_761 = _u_T_313 == 8'hc2 ? 16'h0 : _GEN_746; // @[Microcode.scala 1116:44 80:21]
  wire  _GEN_762 = _u_T_313 == 8'hc2 ? 1'h0 : _GEN_747; // @[Microcode.scala 1116:44 82:21]
  wire [7:0] _GEN_763 = _u_T_313 == 8'hc2 ? 8'h0 : _GEN_748; // @[Microcode.scala 1116:44 83:21]
  wire [15:0] _GEN_764 = _u_T_313 == 8'hc2 ? SP_sampled : _GEN_749; // @[Microcode.scala 1116:44 64:15]
  wire [2:0] _GEN_765 = _u_T_313 == 8'hc2 ? mcycle : _GEN_750; // @[Microcode.scala 1116:44 77:21]
  wire [7:0] _GEN_767 = _u_T_313 == 8'hc2 ? u_tmp8 : _GEN_754; // @[Microcode.scala 1116:44 56:24]
  wire [7:0] _GEN_768 = _u_T_313 == 8'hc2 ? F_sampled : _GEN_755; // @[Microcode.scala 1116:44 66:15]
  wire [7:0] _GEN_769 = _u_T_313 == 8'hc2 ? A_sampled : _GEN_756; // @[Microcode.scala 1116:44 65:15]
  wire [7:0] _GEN_770 = _u_T_313 == 8'hc2 ? H_sampled : _GEN_757; // @[Microcode.scala 1116:44 71:15]
  wire [7:0] _GEN_771 = _u_T_313 == 8'hc2 ? L_sampled : _GEN_758; // @[Microcode.scala 1116:44 72:15]
  wire [15:0] _GEN_772 = _u_T_313 == 8'h20 ? _GEN_515 : _GEN_759; // @[Microcode.scala 1094:44]
  wire  _GEN_773 = _u_T_313 == 8'h20 ? _u_T_1 : _GEN_760; // @[Microcode.scala 1094:44]
  wire [15:0] _GEN_774 = _u_T_313 == 8'h20 ? 16'h0 : _GEN_761; // @[Microcode.scala 1094:44 80:21]
  wire  _GEN_775 = _u_T_313 == 8'h20 ? 1'h0 : _GEN_762; // @[Microcode.scala 1094:44 82:21]
  wire [7:0] _GEN_776 = _u_T_313 == 8'h20 ? 8'h0 : _GEN_763; // @[Microcode.scala 1094:44 83:21]
  wire [15:0] _GEN_777 = _u_T_313 == 8'h20 ? SP_sampled : _GEN_764; // @[Microcode.scala 1094:44 64:15]
  wire [2:0] _GEN_778 = _u_T_313 == 8'h20 ? mcycle : _GEN_765; // @[Microcode.scala 1094:44 77:21]
  wire [7:0] _GEN_780 = _u_T_313 == 8'h20 ? u_tmp8 : _GEN_767; // @[Microcode.scala 1094:44 56:24]
  wire [7:0] _GEN_781 = _u_T_313 == 8'h20 ? F_sampled : _GEN_768; // @[Microcode.scala 1094:44 66:15]
  wire [7:0] _GEN_782 = _u_T_313 == 8'h20 ? A_sampled : _GEN_769; // @[Microcode.scala 1094:44 65:15]
  wire [7:0] _GEN_783 = _u_T_313 == 8'h20 ? H_sampled : _GEN_770; // @[Microcode.scala 1094:44 71:15]
  wire [7:0] _GEN_784 = _u_T_313 == 8'h20 ? L_sampled : _GEN_771; // @[Microcode.scala 1094:44 72:15]
  wire  _GEN_785 = IR == 8'hf3 ? 1'h0 : IME; // @[Microcode.scala 1086:32 1087:15 74:21]
  wire  _GEN_786 = IR == 8'hf3 ? 1'h0 : IME_pending; // @[Microcode.scala 1086:32 1088:23 75:21]
  wire  _GEN_787 = IR == 8'hf3 ? _u_T_1 : _GEN_773; // @[Microcode.scala 1086:32]
  wire [15:0] _GEN_788 = IR == 8'hf3 ? PC_sampled : _GEN_772; // @[Microcode.scala 1086:32 63:15]
  wire [15:0] _GEN_789 = IR == 8'hf3 ? 16'h0 : _GEN_774; // @[Microcode.scala 1086:32 80:21]
  wire  _GEN_790 = IR == 8'hf3 ? 1'h0 : _GEN_775; // @[Microcode.scala 1086:32 82:21]
  wire [7:0] _GEN_791 = IR == 8'hf3 ? 8'h0 : _GEN_776; // @[Microcode.scala 1086:32 83:21]
  wire [15:0] _GEN_792 = IR == 8'hf3 ? SP_sampled : _GEN_777; // @[Microcode.scala 1086:32 64:15]
  wire [2:0] _GEN_793 = IR == 8'hf3 ? mcycle : _GEN_778; // @[Microcode.scala 1086:32 77:21]
  wire [7:0] _GEN_795 = IR == 8'hf3 ? u_tmp8 : _GEN_780; // @[Microcode.scala 1086:32 56:24]
  wire [7:0] _GEN_796 = IR == 8'hf3 ? F_sampled : _GEN_781; // @[Microcode.scala 1086:32 66:15]
  wire [7:0] _GEN_797 = IR == 8'hf3 ? A_sampled : _GEN_782; // @[Microcode.scala 1086:32 65:15]
  wire [7:0] _GEN_798 = IR == 8'hf3 ? H_sampled : _GEN_783; // @[Microcode.scala 1086:32 71:15]
  wire [7:0] _GEN_799 = IR == 8'hf3 ? L_sampled : _GEN_784; // @[Microcode.scala 1086:32 72:15]
  wire  _GEN_800 = IR == 8'hfb | _GEN_786; // @[Microcode.scala 1079:32 1080:23]
  wire  _GEN_801 = IR == 8'hfb ? _u_T_1 : _GEN_787; // @[Microcode.scala 1079:32]
  wire  _GEN_802 = IR == 8'hfb ? IME : _GEN_785; // @[Microcode.scala 1079:32 74:21]
  wire [15:0] _GEN_803 = IR == 8'hfb ? PC_sampled : _GEN_788; // @[Microcode.scala 1079:32 63:15]
  wire [15:0] _GEN_804 = IR == 8'hfb ? 16'h0 : _GEN_789; // @[Microcode.scala 1079:32 80:21]
  wire  _GEN_805 = IR == 8'hfb ? 1'h0 : _GEN_790; // @[Microcode.scala 1079:32 82:21]
  wire [7:0] _GEN_806 = IR == 8'hfb ? 8'h0 : _GEN_791; // @[Microcode.scala 1079:32 83:21]
  wire [15:0] _GEN_807 = IR == 8'hfb ? SP_sampled : _GEN_792; // @[Microcode.scala 1079:32 64:15]
  wire [2:0] _GEN_808 = IR == 8'hfb ? mcycle : _GEN_793; // @[Microcode.scala 1079:32 77:21]
  wire [7:0] _GEN_810 = IR == 8'hfb ? u_tmp8 : _GEN_795; // @[Microcode.scala 1079:32 56:24]
  wire [7:0] _GEN_811 = IR == 8'hfb ? F_sampled : _GEN_796; // @[Microcode.scala 1079:32 66:15]
  wire [7:0] _GEN_812 = IR == 8'hfb ? A_sampled : _GEN_797; // @[Microcode.scala 1079:32 65:15]
  wire [7:0] _GEN_813 = IR == 8'hfb ? H_sampled : _GEN_798; // @[Microcode.scala 1079:32 71:15]
  wire [7:0] _GEN_814 = IR == 8'hfb ? L_sampled : _GEN_799; // @[Microcode.scala 1079:32 72:15]
  wire [15:0] _GEN_815 = _u_T_29 == 8'hc7 ? _GEN_375 : _GEN_804; // @[Microcode.scala 1054:44]
  wire  _GEN_816 = _u_T_29 == 8'hc7 ? _GEN_376 : _GEN_805; // @[Microcode.scala 1054:44]
  wire [7:0] _GEN_817 = _u_T_29 == 8'hc7 ? _GEN_454 : _GEN_806; // @[Microcode.scala 1054:44]
  wire [15:0] _GEN_818 = _u_T_29 == 8'hc7 ? _GEN_378 : _GEN_807; // @[Microcode.scala 1054:44]
  wire [2:0] _GEN_819 = _u_T_29 == 8'hc7 ? _GEN_253 : _GEN_808; // @[Microcode.scala 1054:44]
  wire [15:0] _GEN_820 = _u_T_29 == 8'hc7 ? _GEN_511 : _GEN_803; // @[Microcode.scala 1054:44]
  wire  _GEN_821 = _u_T_29 == 8'hc7 ? _GEN_255 : _GEN_801; // @[Microcode.scala 1054:44]
  wire  _GEN_822 = _u_T_29 == 8'hc7 ? IME_pending : _GEN_800; // @[Microcode.scala 1054:44 75:21]
  wire  _GEN_823 = _u_T_29 == 8'hc7 ? IME : _GEN_802; // @[Microcode.scala 1054:44 74:21]
  wire [7:0] _GEN_825 = _u_T_29 == 8'hc7 ? u_tmp8 : _GEN_810; // @[Microcode.scala 1054:44 56:24]
  wire [7:0] _GEN_826 = _u_T_29 == 8'hc7 ? F_sampled : _GEN_811; // @[Microcode.scala 1054:44 66:15]
  wire [7:0] _GEN_827 = _u_T_29 == 8'hc7 ? A_sampled : _GEN_812; // @[Microcode.scala 1054:44 65:15]
  wire [7:0] _GEN_828 = _u_T_29 == 8'hc7 ? H_sampled : _GEN_813; // @[Microcode.scala 1054:44 71:15]
  wire [7:0] _GEN_829 = _u_T_29 == 8'hc7 ? L_sampled : _GEN_814; // @[Microcode.scala 1054:44 72:15]
  wire [15:0] _GEN_830 = IR == 8'hd9 ? _GEN_426 : _GEN_815; // @[Microcode.scala 1021:32]
  wire [7:0] _GEN_832 = IR == 8'hd9 ? _GEN_250 : _GEN_825; // @[Microcode.scala 1021:32]
  wire [15:0] _GEN_833 = IR == 8'hd9 ? _GEN_429 : _GEN_818; // @[Microcode.scala 1021:32]
  wire [2:0] _GEN_834 = IR == 8'hd9 ? _GEN_253 : _GEN_819; // @[Microcode.scala 1021:32]
  wire [15:0] _GEN_835 = IR == 8'hd9 ? _GEN_475 : _GEN_820; // @[Microcode.scala 1021:32]
  wire  _GEN_836 = IR == 8'hd9 ? _GEN_496 : _GEN_823; // @[Microcode.scala 1021:32]
  wire  _GEN_837 = IR == 8'hd9 ? _GEN_255 : _GEN_821; // @[Microcode.scala 1021:32]
  wire  _GEN_838 = IR == 8'hd9 ? 1'h0 : _GEN_816; // @[Microcode.scala 1021:32 82:21]
  wire [7:0] _GEN_839 = IR == 8'hd9 ? 8'h0 : _GEN_817; // @[Microcode.scala 1021:32 83:21]
  wire  _GEN_840 = IR == 8'hd9 ? IME_pending : _GEN_822; // @[Microcode.scala 1021:32 75:21]
  wire [7:0] _GEN_841 = IR == 8'hd9 ? F_sampled : _GEN_826; // @[Microcode.scala 1021:32 66:15]
  wire [7:0] _GEN_842 = IR == 8'hd9 ? A_sampled : _GEN_827; // @[Microcode.scala 1021:32 65:15]
  wire [7:0] _GEN_843 = IR == 8'hd9 ? H_sampled : _GEN_828; // @[Microcode.scala 1021:32 71:15]
  wire [7:0] _GEN_844 = IR == 8'hd9 ? L_sampled : _GEN_829; // @[Microcode.scala 1021:32 72:15]
  wire [15:0] _GEN_845 = IR == 8'hc9 ? _GEN_426 : _GEN_830; // @[Microcode.scala 991:32]
  wire [7:0] _GEN_847 = IR == 8'hc9 ? _GEN_250 : _GEN_832; // @[Microcode.scala 991:32]
  wire [15:0] _GEN_848 = IR == 8'hc9 ? _GEN_429 : _GEN_833; // @[Microcode.scala 991:32]
  wire [2:0] _GEN_849 = IR == 8'hc9 ? _GEN_253 : _GEN_834; // @[Microcode.scala 991:32]
  wire [15:0] _GEN_850 = IR == 8'hc9 ? _GEN_475 : _GEN_835; // @[Microcode.scala 991:32]
  wire  _GEN_851 = IR == 8'hc9 ? _GEN_255 : _GEN_837; // @[Microcode.scala 991:32]
  wire  _GEN_852 = IR == 8'hc9 ? IME : _GEN_836; // @[Microcode.scala 74:21 991:32]
  wire  _GEN_853 = IR == 8'hc9 ? 1'h0 : _GEN_838; // @[Microcode.scala 82:21 991:32]
  wire [7:0] _GEN_854 = IR == 8'hc9 ? 8'h0 : _GEN_839; // @[Microcode.scala 83:21 991:32]
  wire  _GEN_855 = IR == 8'hc9 ? IME_pending : _GEN_840; // @[Microcode.scala 75:21 991:32]
  wire [7:0] _GEN_856 = IR == 8'hc9 ? F_sampled : _GEN_841; // @[Microcode.scala 66:15 991:32]
  wire [7:0] _GEN_857 = IR == 8'hc9 ? A_sampled : _GEN_842; // @[Microcode.scala 65:15 991:32]
  wire [7:0] _GEN_858 = IR == 8'hc9 ? H_sampled : _GEN_843; // @[Microcode.scala 71:15 991:32]
  wire [7:0] _GEN_859 = IR == 8'hc9 ? L_sampled : _GEN_844; // @[Microcode.scala 72:15 991:32]
  wire [15:0] _GEN_860 = IR == 8'hcd ? _GEN_375 : _GEN_845; // @[Microcode.scala 966:32]
  wire  _GEN_861 = IR == 8'hcd ? _GEN_376 : _GEN_853; // @[Microcode.scala 966:32]
  wire [7:0] _GEN_862 = IR == 8'hcd ? _GEN_454 : _GEN_854; // @[Microcode.scala 966:32]
  wire [15:0] _GEN_863 = IR == 8'hcd ? _GEN_378 : _GEN_848; // @[Microcode.scala 966:32]
  wire [2:0] _GEN_864 = IR == 8'hcd ? _GEN_134 : _GEN_849; // @[Microcode.scala 966:32]
  wire [15:0] _GEN_865 = IR == 8'hcd ? _GEN_457 : _GEN_850; // @[Microcode.scala 966:32]
  wire  _GEN_866 = IR == 8'hcd ? _GEN_141 : _GEN_851; // @[Microcode.scala 966:32]
  wire [7:0] _GEN_868 = IR == 8'hcd ? u_tmp8 : _GEN_847; // @[Microcode.scala 56:24 966:32]
  wire  _GEN_869 = IR == 8'hcd ? IME : _GEN_852; // @[Microcode.scala 74:21 966:32]
  wire  _GEN_870 = IR == 8'hcd ? IME_pending : _GEN_855; // @[Microcode.scala 75:21 966:32]
  wire [7:0] _GEN_871 = IR == 8'hcd ? F_sampled : _GEN_856; // @[Microcode.scala 66:15 966:32]
  wire [7:0] _GEN_872 = IR == 8'hcd ? A_sampled : _GEN_857; // @[Microcode.scala 65:15 966:32]
  wire [7:0] _GEN_873 = IR == 8'hcd ? H_sampled : _GEN_858; // @[Microcode.scala 71:15 966:32]
  wire [7:0] _GEN_874 = IR == 8'hcd ? L_sampled : _GEN_859; // @[Microcode.scala 72:15 966:32]
  wire [15:0] _GEN_875 = _u_T_4 == 8'hc1 ? _GEN_426 : _GEN_860; // @[Microcode.scala 925:44]
  wire [7:0] _GEN_877 = _u_T_4 == 8'hc1 ? _GEN_250 : _GEN_868; // @[Microcode.scala 925:44]
  wire [15:0] _GEN_878 = _u_T_4 == 8'hc1 ? _GEN_429 : _GEN_863; // @[Microcode.scala 925:44]
  wire [2:0] _GEN_879 = _u_T_4 == 8'hc1 ? _GEN_253 : _GEN_864; // @[Microcode.scala 925:44]
  wire [7:0] _GEN_880 = _u_T_4 == 8'hc1 ? _GEN_431 : B_sampled; // @[Microcode.scala 67:15 925:44]
  wire [7:0] _GEN_881 = _u_T_4 == 8'hc1 ? _GEN_432 : C_sampled; // @[Microcode.scala 68:15 925:44]
  wire [7:0] _GEN_882 = _u_T_4 == 8'hc1 ? _GEN_433 : D_sampled; // @[Microcode.scala 69:15 925:44]
  wire [7:0] _GEN_883 = _u_T_4 == 8'hc1 ? _GEN_434 : E_sampled; // @[Microcode.scala 70:15 925:44]
  wire [7:0] _GEN_884 = _u_T_4 == 8'hc1 ? _GEN_435 : _GEN_873; // @[Microcode.scala 925:44]
  wire [7:0] _GEN_885 = _u_T_4 == 8'hc1 ? _GEN_436 : _GEN_874; // @[Microcode.scala 925:44]
  wire [7:0] _GEN_886 = _u_T_4 == 8'hc1 ? _GEN_437 : _GEN_872; // @[Microcode.scala 925:44]
  wire [7:0] _GEN_887 = _u_T_4 == 8'hc1 ? _GEN_438 : _GEN_871; // @[Microcode.scala 925:44]
  wire  _GEN_888 = _u_T_4 == 8'hc1 ? _GEN_255 : _GEN_866; // @[Microcode.scala 925:44]
  wire  _GEN_889 = _u_T_4 == 8'hc1 ? 1'h0 : _GEN_861; // @[Microcode.scala 82:21 925:44]
  wire [7:0] _GEN_890 = _u_T_4 == 8'hc1 ? 8'h0 : _GEN_862; // @[Microcode.scala 83:21 925:44]
  wire [15:0] _GEN_891 = _u_T_4 == 8'hc1 ? PC_sampled : _GEN_865; // @[Microcode.scala 63:15 925:44]
  wire  _GEN_892 = _u_T_4 == 8'hc1 ? IME : _GEN_869; // @[Microcode.scala 74:21 925:44]
  wire  _GEN_893 = _u_T_4 == 8'hc1 ? IME_pending : _GEN_870; // @[Microcode.scala 75:21 925:44]
  wire [15:0] _GEN_894 = _u_T_4 == 8'hc5 ? _GEN_375 : _GEN_875; // @[Microcode.scala 888:44]
  wire  _GEN_895 = _u_T_4 == 8'hc5 ? _GEN_376 : _GEN_889; // @[Microcode.scala 888:44]
  wire [7:0] _GEN_896 = _u_T_4 == 8'hc5 ? _GEN_377 : _GEN_890; // @[Microcode.scala 888:44]
  wire [15:0] _GEN_897 = _u_T_4 == 8'hc5 ? _GEN_378 : _GEN_878; // @[Microcode.scala 888:44]
  wire [2:0] _GEN_898 = _u_T_4 == 8'hc5 ? _GEN_253 : _GEN_879; // @[Microcode.scala 888:44]
  wire  _GEN_899 = _u_T_4 == 8'hc5 ? _GEN_255 : _GEN_888; // @[Microcode.scala 888:44]
  wire [7:0] _GEN_901 = _u_T_4 == 8'hc5 ? u_tmp8 : _GEN_877; // @[Microcode.scala 56:24 888:44]
  wire [7:0] _GEN_902 = _u_T_4 == 8'hc5 ? B_sampled : _GEN_880; // @[Microcode.scala 67:15 888:44]
  wire [7:0] _GEN_903 = _u_T_4 == 8'hc5 ? C_sampled : _GEN_881; // @[Microcode.scala 68:15 888:44]
  wire [7:0] _GEN_904 = _u_T_4 == 8'hc5 ? D_sampled : _GEN_882; // @[Microcode.scala 69:15 888:44]
  wire [7:0] _GEN_905 = _u_T_4 == 8'hc5 ? E_sampled : _GEN_883; // @[Microcode.scala 70:15 888:44]
  wire [7:0] _GEN_906 = _u_T_4 == 8'hc5 ? H_sampled : _GEN_884; // @[Microcode.scala 71:15 888:44]
  wire [7:0] _GEN_907 = _u_T_4 == 8'hc5 ? L_sampled : _GEN_885; // @[Microcode.scala 72:15 888:44]
  wire [7:0] _GEN_908 = _u_T_4 == 8'hc5 ? A_sampled : _GEN_886; // @[Microcode.scala 65:15 888:44]
  wire [7:0] _GEN_909 = _u_T_4 == 8'hc5 ? F_sampled : _GEN_887; // @[Microcode.scala 66:15 888:44]
  wire [15:0] _GEN_910 = _u_T_4 == 8'hc5 ? PC_sampled : _GEN_891; // @[Microcode.scala 63:15 888:44]
  wire  _GEN_911 = _u_T_4 == 8'hc5 ? IME : _GEN_892; // @[Microcode.scala 74:21 888:44]
  wire  _GEN_912 = _u_T_4 == 8'hc5 ? IME_pending : _GEN_893; // @[Microcode.scala 75:21 888:44]
  wire  _GEN_913 = IR == 8'h10 ? _u_T_1 : _GEN_899; // @[Microcode.scala 881:32]
  wire [15:0] _GEN_914 = IR == 8'h10 ? 16'h0 : _GEN_894; // @[Microcode.scala 80:21 881:32]
  wire  _GEN_915 = IR == 8'h10 ? 1'h0 : _GEN_895; // @[Microcode.scala 82:21 881:32]
  wire [7:0] _GEN_916 = IR == 8'h10 ? 8'h0 : _GEN_896; // @[Microcode.scala 83:21 881:32]
  wire [15:0] _GEN_917 = IR == 8'h10 ? SP_sampled : _GEN_897; // @[Microcode.scala 64:15 881:32]
  wire [2:0] _GEN_918 = IR == 8'h10 ? mcycle : _GEN_898; // @[Microcode.scala 77:21 881:32]
  wire [7:0] _GEN_920 = IR == 8'h10 ? u_tmp8 : _GEN_901; // @[Microcode.scala 56:24 881:32]
  wire [7:0] _GEN_921 = IR == 8'h10 ? B_sampled : _GEN_902; // @[Microcode.scala 67:15 881:32]
  wire [7:0] _GEN_922 = IR == 8'h10 ? C_sampled : _GEN_903; // @[Microcode.scala 68:15 881:32]
  wire [7:0] _GEN_923 = IR == 8'h10 ? D_sampled : _GEN_904; // @[Microcode.scala 69:15 881:32]
  wire [7:0] _GEN_924 = IR == 8'h10 ? E_sampled : _GEN_905; // @[Microcode.scala 70:15 881:32]
  wire [7:0] _GEN_925 = IR == 8'h10 ? H_sampled : _GEN_906; // @[Microcode.scala 71:15 881:32]
  wire [7:0] _GEN_926 = IR == 8'h10 ? L_sampled : _GEN_907; // @[Microcode.scala 72:15 881:32]
  wire [7:0] _GEN_927 = IR == 8'h10 ? A_sampled : _GEN_908; // @[Microcode.scala 65:15 881:32]
  wire [7:0] _GEN_928 = IR == 8'h10 ? F_sampled : _GEN_909; // @[Microcode.scala 66:15 881:32]
  wire [15:0] _GEN_929 = IR == 8'h10 ? PC_sampled : _GEN_910; // @[Microcode.scala 63:15 881:32]
  wire  _GEN_930 = IR == 8'h10 ? IME : _GEN_911; // @[Microcode.scala 74:21 881:32]
  wire  _GEN_931 = IR == 8'h10 ? IME_pending : _GEN_912; // @[Microcode.scala 75:21 881:32]
  wire [15:0] _GEN_932 = IR == 8'h18 ? _GEN_365 : _GEN_929; // @[Microcode.scala 868:32]
  wire  _GEN_933 = IR == 8'h18 ? _u_T_1 : _GEN_913; // @[Microcode.scala 868:32]
  wire [15:0] _GEN_934 = IR == 8'h18 ? 16'h0 : _GEN_914; // @[Microcode.scala 80:21 868:32]
  wire  _GEN_935 = IR == 8'h18 ? 1'h0 : _GEN_915; // @[Microcode.scala 82:21 868:32]
  wire [7:0] _GEN_936 = IR == 8'h18 ? 8'h0 : _GEN_916; // @[Microcode.scala 83:21 868:32]
  wire [15:0] _GEN_937 = IR == 8'h18 ? SP_sampled : _GEN_917; // @[Microcode.scala 64:15 868:32]
  wire [2:0] _GEN_938 = IR == 8'h18 ? mcycle : _GEN_918; // @[Microcode.scala 77:21 868:32]
  wire [7:0] _GEN_940 = IR == 8'h18 ? u_tmp8 : _GEN_920; // @[Microcode.scala 56:24 868:32]
  wire [7:0] _GEN_941 = IR == 8'h18 ? B_sampled : _GEN_921; // @[Microcode.scala 67:15 868:32]
  wire [7:0] _GEN_942 = IR == 8'h18 ? C_sampled : _GEN_922; // @[Microcode.scala 68:15 868:32]
  wire [7:0] _GEN_943 = IR == 8'h18 ? D_sampled : _GEN_923; // @[Microcode.scala 69:15 868:32]
  wire [7:0] _GEN_944 = IR == 8'h18 ? E_sampled : _GEN_924; // @[Microcode.scala 70:15 868:32]
  wire [7:0] _GEN_945 = IR == 8'h18 ? H_sampled : _GEN_925; // @[Microcode.scala 71:15 868:32]
  wire [7:0] _GEN_946 = IR == 8'h18 ? L_sampled : _GEN_926; // @[Microcode.scala 72:15 868:32]
  wire [7:0] _GEN_947 = IR == 8'h18 ? A_sampled : _GEN_927; // @[Microcode.scala 65:15 868:32]
  wire [7:0] _GEN_948 = IR == 8'h18 ? F_sampled : _GEN_928; // @[Microcode.scala 66:15 868:32]
  wire  _GEN_949 = IR == 8'h18 ? IME : _GEN_930; // @[Microcode.scala 74:21 868:32]
  wire  _GEN_950 = IR == 8'h18 ? IME_pending : _GEN_931; // @[Microcode.scala 75:21 868:32]
  wire [3:0] _GEN_951 = IR == 8'hfe ? 4'h2 : 4'h0; // @[Microcode.scala 852:32 853:17 110:21]
  wire [7:0] _GEN_952 = IR == 8'hfe ? A_sampled : 8'h0; // @[Microcode.scala 852:32 854:17 108:21]
  wire [7:0] _GEN_953 = IR == 8'hfe ? imm8 : 8'h0; // @[Microcode.scala 852:32 855:17 109:21]
  wire  _GEN_954 = IR == 8'hfe ? 1'h0 : F_sampled[4]; // @[Microcode.scala 111:21 852:32 856:22]
  wire [7:0] _GEN_955 = IR == 8'hfe ? _u_out_F_T_14 : _GEN_948; // @[Microcode.scala 105:13 852:32]
  wire  _GEN_956 = IR == 8'hfe ? _u_T_1 : _GEN_933; // @[Microcode.scala 852:32]
  wire [15:0] _GEN_957 = IR == 8'hfe ? PC_sampled : _GEN_932; // @[Microcode.scala 63:15 852:32]
  wire [15:0] _GEN_958 = IR == 8'hfe ? 16'h0 : _GEN_934; // @[Microcode.scala 80:21 852:32]
  wire  _GEN_959 = IR == 8'hfe ? 1'h0 : _GEN_935; // @[Microcode.scala 82:21 852:32]
  wire [7:0] _GEN_960 = IR == 8'hfe ? 8'h0 : _GEN_936; // @[Microcode.scala 83:21 852:32]
  wire [15:0] _GEN_961 = IR == 8'hfe ? SP_sampled : _GEN_937; // @[Microcode.scala 64:15 852:32]
  wire [2:0] _GEN_962 = IR == 8'hfe ? mcycle : _GEN_938; // @[Microcode.scala 77:21 852:32]
  wire [7:0] _GEN_964 = IR == 8'hfe ? u_tmp8 : _GEN_940; // @[Microcode.scala 56:24 852:32]
  wire [7:0] _GEN_965 = IR == 8'hfe ? B_sampled : _GEN_941; // @[Microcode.scala 67:15 852:32]
  wire [7:0] _GEN_966 = IR == 8'hfe ? C_sampled : _GEN_942; // @[Microcode.scala 68:15 852:32]
  wire [7:0] _GEN_967 = IR == 8'hfe ? D_sampled : _GEN_943; // @[Microcode.scala 69:15 852:32]
  wire [7:0] _GEN_968 = IR == 8'hfe ? E_sampled : _GEN_944; // @[Microcode.scala 70:15 852:32]
  wire [7:0] _GEN_969 = IR == 8'hfe ? H_sampled : _GEN_945; // @[Microcode.scala 71:15 852:32]
  wire [7:0] _GEN_970 = IR == 8'hfe ? L_sampled : _GEN_946; // @[Microcode.scala 72:15 852:32]
  wire [7:0] _GEN_971 = IR == 8'hfe ? A_sampled : _GEN_947; // @[Microcode.scala 65:15 852:32]
  wire  _GEN_972 = IR == 8'hfe ? IME : _GEN_949; // @[Microcode.scala 74:21 852:32]
  wire  _GEN_973 = IR == 8'hfe ? IME_pending : _GEN_950; // @[Microcode.scala 75:21 852:32]
  wire [3:0] _GEN_974 = IR == 8'hf6 ? 4'h5 : _GEN_951; // @[Microcode.scala 841:32 842:17]
  wire [7:0] _GEN_975 = IR == 8'hf6 ? A_sampled : _GEN_952; // @[Microcode.scala 841:32 843:17]
  wire [7:0] _GEN_976 = IR == 8'hf6 ? imm8 : _GEN_953; // @[Microcode.scala 841:32 844:17]
  wire [7:0] _GEN_977 = IR == 8'hf6 ? u_alu_io_out : _GEN_971; // @[Microcode.scala 841:32 845:17]
  wire [7:0] _GEN_978 = IR == 8'hf6 ? _u_out_F_T_8 : _GEN_955; // @[Microcode.scala 105:13 841:32]
  wire  _GEN_979 = IR == 8'hf6 ? _u_T_1 : _GEN_956; // @[Microcode.scala 841:32]
  wire  _GEN_980 = IR == 8'hf6 ? F_sampled[4] : _GEN_954; // @[Microcode.scala 111:21 841:32]
  wire [15:0] _GEN_981 = IR == 8'hf6 ? PC_sampled : _GEN_957; // @[Microcode.scala 63:15 841:32]
  wire [15:0] _GEN_982 = IR == 8'hf6 ? 16'h0 : _GEN_958; // @[Microcode.scala 80:21 841:32]
  wire  _GEN_983 = IR == 8'hf6 ? 1'h0 : _GEN_959; // @[Microcode.scala 82:21 841:32]
  wire [7:0] _GEN_984 = IR == 8'hf6 ? 8'h0 : _GEN_960; // @[Microcode.scala 83:21 841:32]
  wire [15:0] _GEN_985 = IR == 8'hf6 ? SP_sampled : _GEN_961; // @[Microcode.scala 64:15 841:32]
  wire [2:0] _GEN_986 = IR == 8'hf6 ? mcycle : _GEN_962; // @[Microcode.scala 77:21 841:32]
  wire [7:0] _GEN_988 = IR == 8'hf6 ? u_tmp8 : _GEN_964; // @[Microcode.scala 56:24 841:32]
  wire [7:0] _GEN_989 = IR == 8'hf6 ? B_sampled : _GEN_965; // @[Microcode.scala 67:15 841:32]
  wire [7:0] _GEN_990 = IR == 8'hf6 ? C_sampled : _GEN_966; // @[Microcode.scala 68:15 841:32]
  wire [7:0] _GEN_991 = IR == 8'hf6 ? D_sampled : _GEN_967; // @[Microcode.scala 69:15 841:32]
  wire [7:0] _GEN_992 = IR == 8'hf6 ? E_sampled : _GEN_968; // @[Microcode.scala 70:15 841:32]
  wire [7:0] _GEN_993 = IR == 8'hf6 ? H_sampled : _GEN_969; // @[Microcode.scala 71:15 841:32]
  wire [7:0] _GEN_994 = IR == 8'hf6 ? L_sampled : _GEN_970; // @[Microcode.scala 72:15 841:32]
  wire  _GEN_995 = IR == 8'hf6 ? IME : _GEN_972; // @[Microcode.scala 74:21 841:32]
  wire  _GEN_996 = IR == 8'hf6 ? IME_pending : _GEN_973; // @[Microcode.scala 75:21 841:32]
  wire [3:0] _GEN_997 = IR == 8'hee ? 4'h6 : _GEN_974; // @[Microcode.scala 830:32 831:17]
  wire [7:0] _GEN_998 = IR == 8'hee ? A_sampled : _GEN_975; // @[Microcode.scala 830:32 832:17]
  wire [7:0] _GEN_999 = IR == 8'hee ? imm8 : _GEN_976; // @[Microcode.scala 830:32 833:17]
  wire [7:0] _GEN_1000 = IR == 8'hee ? u_alu_io_out : _GEN_977; // @[Microcode.scala 830:32 834:17]
  wire [7:0] _GEN_1001 = IR == 8'hee ? _u_out_F_T_8 : _GEN_978; // @[Microcode.scala 105:13 830:32]
  wire  _GEN_1002 = IR == 8'hee ? _u_T_1 : _GEN_979; // @[Microcode.scala 830:32]
  wire  _GEN_1003 = IR == 8'hee ? F_sampled[4] : _GEN_980; // @[Microcode.scala 111:21 830:32]
  wire [15:0] _GEN_1004 = IR == 8'hee ? PC_sampled : _GEN_981; // @[Microcode.scala 63:15 830:32]
  wire [15:0] _GEN_1005 = IR == 8'hee ? 16'h0 : _GEN_982; // @[Microcode.scala 80:21 830:32]
  wire  _GEN_1006 = IR == 8'hee ? 1'h0 : _GEN_983; // @[Microcode.scala 82:21 830:32]
  wire [7:0] _GEN_1007 = IR == 8'hee ? 8'h0 : _GEN_984; // @[Microcode.scala 83:21 830:32]
  wire [15:0] _GEN_1008 = IR == 8'hee ? SP_sampled : _GEN_985; // @[Microcode.scala 64:15 830:32]
  wire [2:0] _GEN_1009 = IR == 8'hee ? mcycle : _GEN_986; // @[Microcode.scala 77:21 830:32]
  wire [7:0] _GEN_1011 = IR == 8'hee ? u_tmp8 : _GEN_988; // @[Microcode.scala 56:24 830:32]
  wire [7:0] _GEN_1012 = IR == 8'hee ? B_sampled : _GEN_989; // @[Microcode.scala 67:15 830:32]
  wire [7:0] _GEN_1013 = IR == 8'hee ? C_sampled : _GEN_990; // @[Microcode.scala 68:15 830:32]
  wire [7:0] _GEN_1014 = IR == 8'hee ? D_sampled : _GEN_991; // @[Microcode.scala 69:15 830:32]
  wire [7:0] _GEN_1015 = IR == 8'hee ? E_sampled : _GEN_992; // @[Microcode.scala 70:15 830:32]
  wire [7:0] _GEN_1016 = IR == 8'hee ? H_sampled : _GEN_993; // @[Microcode.scala 71:15 830:32]
  wire [7:0] _GEN_1017 = IR == 8'hee ? L_sampled : _GEN_994; // @[Microcode.scala 72:15 830:32]
  wire  _GEN_1018 = IR == 8'hee ? IME : _GEN_995; // @[Microcode.scala 74:21 830:32]
  wire  _GEN_1019 = IR == 8'hee ? IME_pending : _GEN_996; // @[Microcode.scala 75:21 830:32]
  wire [3:0] _GEN_1020 = IR == 8'he6 ? 4'h4 : _GEN_997; // @[Microcode.scala 819:32 820:17]
  wire [7:0] _GEN_1021 = IR == 8'he6 ? A_sampled : _GEN_998; // @[Microcode.scala 819:32 821:17]
  wire [7:0] _GEN_1022 = IR == 8'he6 ? imm8 : _GEN_999; // @[Microcode.scala 819:32 822:17]
  wire [7:0] _GEN_1023 = IR == 8'he6 ? u_alu_io_out : _GEN_1000; // @[Microcode.scala 819:32 823:17]
  wire [7:0] _GEN_1024 = IR == 8'he6 ? _u_out_F_T_8 : _GEN_1001; // @[Microcode.scala 105:13 819:32]
  wire  _GEN_1025 = IR == 8'he6 ? _u_T_1 : _GEN_1002; // @[Microcode.scala 819:32]
  wire  _GEN_1026 = IR == 8'he6 ? F_sampled[4] : _GEN_1003; // @[Microcode.scala 111:21 819:32]
  wire [15:0] _GEN_1027 = IR == 8'he6 ? PC_sampled : _GEN_1004; // @[Microcode.scala 63:15 819:32]
  wire [15:0] _GEN_1028 = IR == 8'he6 ? 16'h0 : _GEN_1005; // @[Microcode.scala 80:21 819:32]
  wire  _GEN_1029 = IR == 8'he6 ? 1'h0 : _GEN_1006; // @[Microcode.scala 819:32 82:21]
  wire [7:0] _GEN_1030 = IR == 8'he6 ? 8'h0 : _GEN_1007; // @[Microcode.scala 819:32 83:21]
  wire [15:0] _GEN_1031 = IR == 8'he6 ? SP_sampled : _GEN_1008; // @[Microcode.scala 64:15 819:32]
  wire [2:0] _GEN_1032 = IR == 8'he6 ? mcycle : _GEN_1009; // @[Microcode.scala 77:21 819:32]
  wire [7:0] _GEN_1034 = IR == 8'he6 ? u_tmp8 : _GEN_1011; // @[Microcode.scala 56:24 819:32]
  wire [7:0] _GEN_1035 = IR == 8'he6 ? B_sampled : _GEN_1012; // @[Microcode.scala 67:15 819:32]
  wire [7:0] _GEN_1036 = IR == 8'he6 ? C_sampled : _GEN_1013; // @[Microcode.scala 68:15 819:32]
  wire [7:0] _GEN_1037 = IR == 8'he6 ? D_sampled : _GEN_1014; // @[Microcode.scala 69:15 819:32]
  wire [7:0] _GEN_1038 = IR == 8'he6 ? E_sampled : _GEN_1015; // @[Microcode.scala 70:15 819:32]
  wire [7:0] _GEN_1039 = IR == 8'he6 ? H_sampled : _GEN_1016; // @[Microcode.scala 71:15 819:32]
  wire [7:0] _GEN_1040 = IR == 8'he6 ? L_sampled : _GEN_1017; // @[Microcode.scala 72:15 819:32]
  wire  _GEN_1041 = IR == 8'he6 ? IME : _GEN_1018; // @[Microcode.scala 74:21 819:32]
  wire  _GEN_1042 = IR == 8'he6 ? IME_pending : _GEN_1019; // @[Microcode.scala 75:21 819:32]
  wire [3:0] _GEN_1043 = IR == 8'hd6 ? 4'h2 : _GEN_1020; // @[Microcode.scala 808:32 809:17]
  wire [7:0] _GEN_1044 = IR == 8'hd6 ? A_sampled : _GEN_1021; // @[Microcode.scala 808:32 810:17]
  wire [7:0] _GEN_1045 = IR == 8'hd6 ? imm8 : _GEN_1022; // @[Microcode.scala 808:32 811:17]
  wire [7:0] _GEN_1046 = IR == 8'hd6 ? u_alu_io_out : _GEN_1023; // @[Microcode.scala 808:32 812:17]
  wire [7:0] _GEN_1047 = IR == 8'hd6 ? _u_out_F_T_8 : _GEN_1024; // @[Microcode.scala 105:13 808:32]
  wire  _GEN_1048 = IR == 8'hd6 ? _u_T_1 : _GEN_1025; // @[Microcode.scala 808:32]
  wire  _GEN_1049 = IR == 8'hd6 ? F_sampled[4] : _GEN_1026; // @[Microcode.scala 111:21 808:32]
  wire [15:0] _GEN_1050 = IR == 8'hd6 ? PC_sampled : _GEN_1027; // @[Microcode.scala 63:15 808:32]
  wire [15:0] _GEN_1051 = IR == 8'hd6 ? 16'h0 : _GEN_1028; // @[Microcode.scala 80:21 808:32]
  wire  _GEN_1052 = IR == 8'hd6 ? 1'h0 : _GEN_1029; // @[Microcode.scala 808:32 82:21]
  wire [7:0] _GEN_1053 = IR == 8'hd6 ? 8'h0 : _GEN_1030; // @[Microcode.scala 808:32 83:21]
  wire [15:0] _GEN_1054 = IR == 8'hd6 ? SP_sampled : _GEN_1031; // @[Microcode.scala 64:15 808:32]
  wire [2:0] _GEN_1055 = IR == 8'hd6 ? mcycle : _GEN_1032; // @[Microcode.scala 77:21 808:32]
  wire [7:0] _GEN_1057 = IR == 8'hd6 ? u_tmp8 : _GEN_1034; // @[Microcode.scala 56:24 808:32]
  wire [7:0] _GEN_1058 = IR == 8'hd6 ? B_sampled : _GEN_1035; // @[Microcode.scala 67:15 808:32]
  wire [7:0] _GEN_1059 = IR == 8'hd6 ? C_sampled : _GEN_1036; // @[Microcode.scala 68:15 808:32]
  wire [7:0] _GEN_1060 = IR == 8'hd6 ? D_sampled : _GEN_1037; // @[Microcode.scala 69:15 808:32]
  wire [7:0] _GEN_1061 = IR == 8'hd6 ? E_sampled : _GEN_1038; // @[Microcode.scala 70:15 808:32]
  wire [7:0] _GEN_1062 = IR == 8'hd6 ? H_sampled : _GEN_1039; // @[Microcode.scala 71:15 808:32]
  wire [7:0] _GEN_1063 = IR == 8'hd6 ? L_sampled : _GEN_1040; // @[Microcode.scala 72:15 808:32]
  wire  _GEN_1064 = IR == 8'hd6 ? IME : _GEN_1041; // @[Microcode.scala 74:21 808:32]
  wire  _GEN_1065 = IR == 8'hd6 ? IME_pending : _GEN_1042; // @[Microcode.scala 75:21 808:32]
  wire [3:0] _GEN_1066 = IR == 8'hce ? 4'h1 : _GEN_1043; // @[Microcode.scala 790:32 791:17]
  wire [7:0] _GEN_1067 = IR == 8'hce ? A_sampled : _GEN_1044; // @[Microcode.scala 790:32 792:17]
  wire [7:0] _GEN_1068 = IR == 8'hce ? imm8 : _GEN_1045; // @[Microcode.scala 790:32 793:17]
  wire [7:0] _GEN_1069 = IR == 8'hce ? u_alu_io_out : _GEN_1046; // @[Microcode.scala 790:32 795:13]
  wire [7:0] _GEN_1070 = IR == 8'hce ? _u_out_F_T_5 : _GEN_1047; // @[Microcode.scala 105:13 790:32]
  wire  _GEN_1071 = IR == 8'hce ? _u_T_1 : _GEN_1048; // @[Microcode.scala 790:32]
  wire  _GEN_1072 = IR == 8'hce ? F_sampled[4] : _GEN_1049; // @[Microcode.scala 111:21 790:32]
  wire [15:0] _GEN_1073 = IR == 8'hce ? PC_sampled : _GEN_1050; // @[Microcode.scala 63:15 790:32]
  wire [15:0] _GEN_1074 = IR == 8'hce ? 16'h0 : _GEN_1051; // @[Microcode.scala 790:32 80:21]
  wire  _GEN_1075 = IR == 8'hce ? 1'h0 : _GEN_1052; // @[Microcode.scala 790:32 82:21]
  wire [7:0] _GEN_1076 = IR == 8'hce ? 8'h0 : _GEN_1053; // @[Microcode.scala 790:32 83:21]
  wire [15:0] _GEN_1077 = IR == 8'hce ? SP_sampled : _GEN_1054; // @[Microcode.scala 64:15 790:32]
  wire [2:0] _GEN_1078 = IR == 8'hce ? mcycle : _GEN_1055; // @[Microcode.scala 77:21 790:32]
  wire [7:0] _GEN_1080 = IR == 8'hce ? u_tmp8 : _GEN_1057; // @[Microcode.scala 56:24 790:32]
  wire [7:0] _GEN_1081 = IR == 8'hce ? B_sampled : _GEN_1058; // @[Microcode.scala 67:15 790:32]
  wire [7:0] _GEN_1082 = IR == 8'hce ? C_sampled : _GEN_1059; // @[Microcode.scala 68:15 790:32]
  wire [7:0] _GEN_1083 = IR == 8'hce ? D_sampled : _GEN_1060; // @[Microcode.scala 69:15 790:32]
  wire [7:0] _GEN_1084 = IR == 8'hce ? E_sampled : _GEN_1061; // @[Microcode.scala 70:15 790:32]
  wire [7:0] _GEN_1085 = IR == 8'hce ? H_sampled : _GEN_1062; // @[Microcode.scala 71:15 790:32]
  wire [7:0] _GEN_1086 = IR == 8'hce ? L_sampled : _GEN_1063; // @[Microcode.scala 72:15 790:32]
  wire  _GEN_1087 = IR == 8'hce ? IME : _GEN_1064; // @[Microcode.scala 74:21 790:32]
  wire  _GEN_1088 = IR == 8'hce ? IME_pending : _GEN_1065; // @[Microcode.scala 75:21 790:32]
  wire [3:0] _GEN_1089 = IR == 8'hc6 ? 4'h0 : _GEN_1066; // @[Microcode.scala 780:32 781:17]
  wire [7:0] _GEN_1090 = IR == 8'hc6 ? A_sampled : _GEN_1067; // @[Microcode.scala 780:32 782:17]
  wire [7:0] _GEN_1091 = IR == 8'hc6 ? imm8 : _GEN_1068; // @[Microcode.scala 780:32 783:17]
  wire [7:0] _GEN_1092 = IR == 8'hc6 ? u_alu_io_out : _GEN_1069; // @[Microcode.scala 780:32 784:17]
  wire [7:0] _GEN_1093 = IR == 8'hc6 ? _u_out_F_T_8 : _GEN_1070; // @[Microcode.scala 105:13 780:32]
  wire  _GEN_1094 = IR == 8'hc6 ? _u_T_1 : _GEN_1071; // @[Microcode.scala 780:32]
  wire  _GEN_1095 = IR == 8'hc6 ? F_sampled[4] : _GEN_1072; // @[Microcode.scala 111:21 780:32]
  wire [15:0] _GEN_1096 = IR == 8'hc6 ? PC_sampled : _GEN_1073; // @[Microcode.scala 63:15 780:32]
  wire [15:0] _GEN_1097 = IR == 8'hc6 ? 16'h0 : _GEN_1074; // @[Microcode.scala 780:32 80:21]
  wire  _GEN_1098 = IR == 8'hc6 ? 1'h0 : _GEN_1075; // @[Microcode.scala 780:32 82:21]
  wire [7:0] _GEN_1099 = IR == 8'hc6 ? 8'h0 : _GEN_1076; // @[Microcode.scala 780:32 83:21]
  wire [15:0] _GEN_1100 = IR == 8'hc6 ? SP_sampled : _GEN_1077; // @[Microcode.scala 64:15 780:32]
  wire [2:0] _GEN_1101 = IR == 8'hc6 ? mcycle : _GEN_1078; // @[Microcode.scala 77:21 780:32]
  wire [7:0] _GEN_1103 = IR == 8'hc6 ? u_tmp8 : _GEN_1080; // @[Microcode.scala 56:24 780:32]
  wire [7:0] _GEN_1104 = IR == 8'hc6 ? B_sampled : _GEN_1081; // @[Microcode.scala 67:15 780:32]
  wire [7:0] _GEN_1105 = IR == 8'hc6 ? C_sampled : _GEN_1082; // @[Microcode.scala 68:15 780:32]
  wire [7:0] _GEN_1106 = IR == 8'hc6 ? D_sampled : _GEN_1083; // @[Microcode.scala 69:15 780:32]
  wire [7:0] _GEN_1107 = IR == 8'hc6 ? E_sampled : _GEN_1084; // @[Microcode.scala 70:15 780:32]
  wire [7:0] _GEN_1108 = IR == 8'hc6 ? H_sampled : _GEN_1085; // @[Microcode.scala 71:15 780:32]
  wire [7:0] _GEN_1109 = IR == 8'hc6 ? L_sampled : _GEN_1086; // @[Microcode.scala 72:15 780:32]
  wire  _GEN_1110 = IR == 8'hc6 ? IME : _GEN_1087; // @[Microcode.scala 74:21 780:32]
  wire  _GEN_1111 = IR == 8'hc6 ? IME_pending : _GEN_1088; // @[Microcode.scala 75:21 780:32]
  wire [3:0] _GEN_1112 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? 4'h2 : _GEN_1089; // @[Microcode.scala 763:68 765:17]
  wire [7:0] _GEN_1113 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? A_sampled : _GEN_1090; // @[Microcode.scala 763:68 766:17]
  wire [7:0] _GEN_1114 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? _u_T_98 : _GEN_1091; // @[Microcode.scala 763:68 767:17]
  wire  _GEN_1115 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? 1'h0 : _GEN_1095; // @[Microcode.scala 763:68 768:22]
  wire [7:0] _GEN_1116 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? _u_out_F_T_14 : _GEN_1093; // @[Microcode.scala 105:13 763:68]
  wire  _GEN_1117 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? _u_T_1 : _GEN_1094; // @[Microcode.scala 763:68]
  wire [7:0] _GEN_1118 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? A_sampled : _GEN_1092; // @[Microcode.scala 65:15 763:68]
  wire [15:0] _GEN_1119 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? PC_sampled : _GEN_1096; // @[Microcode.scala 63:15 763:68]
  wire [15:0] _GEN_1120 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? 16'h0 : _GEN_1097; // @[Microcode.scala 763:68 80:21]
  wire  _GEN_1121 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? 1'h0 : _GEN_1098; // @[Microcode.scala 763:68 82:21]
  wire [7:0] _GEN_1122 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? 8'h0 : _GEN_1099; // @[Microcode.scala 763:68 83:21]
  wire [15:0] _GEN_1123 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? SP_sampled : _GEN_1100; // @[Microcode.scala 64:15 763:68]
  wire [2:0] _GEN_1124 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? mcycle : _GEN_1101; // @[Microcode.scala 763:68 77:21]
  wire [7:0] _GEN_1126 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? u_tmp8 : _GEN_1103; // @[Microcode.scala 56:24 763:68]
  wire [7:0] _GEN_1127 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? B_sampled : _GEN_1104; // @[Microcode.scala 67:15 763:68]
  wire [7:0] _GEN_1128 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? C_sampled : _GEN_1105; // @[Microcode.scala 68:15 763:68]
  wire [7:0] _GEN_1129 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? D_sampled : _GEN_1106; // @[Microcode.scala 69:15 763:68]
  wire [7:0] _GEN_1130 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? E_sampled : _GEN_1107; // @[Microcode.scala 70:15 763:68]
  wire [7:0] _GEN_1131 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? H_sampled : _GEN_1108; // @[Microcode.scala 71:15 763:68]
  wire [7:0] _GEN_1132 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? L_sampled : _GEN_1109; // @[Microcode.scala 72:15 763:68]
  wire  _GEN_1133 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? IME : _GEN_1110; // @[Microcode.scala 74:21 763:68]
  wire  _GEN_1134 = IR >= 8'hb8 & IR <= 8'hbd | IR == 8'hbf ? IME_pending : _GEN_1111; // @[Microcode.scala 75:21 763:68]
  wire [15:0] _GEN_1135 = IR == 8'hbe ? _GEN_326 : _GEN_1120; // @[Microcode.scala 746:32]
  wire [3:0] _GEN_1137 = IR == 8'hbe ? _GEN_351 : _GEN_1112; // @[Microcode.scala 746:32]
  wire [7:0] _GEN_1138 = IR == 8'hbe ? _GEN_329 : _GEN_1113; // @[Microcode.scala 746:32]
  wire [7:0] _GEN_1139 = IR == 8'hbe ? _GEN_330 : _GEN_1114; // @[Microcode.scala 746:32]
  wire  _GEN_1140 = IR == 8'hbe ? _GEN_354 : _GEN_1115; // @[Microcode.scala 746:32]
  wire [7:0] _GEN_1141 = IR == 8'hbe ? _GEN_355 : _GEN_1116; // @[Microcode.scala 746:32]
  wire  _GEN_1142 = IR == 8'hbe ? _u_T_1 : _GEN_1117; // @[Microcode.scala 746:32]
  wire [7:0] _GEN_1143 = IR == 8'hbe ? A_sampled : _GEN_1118; // @[Microcode.scala 65:15 746:32]
  wire [15:0] _GEN_1144 = IR == 8'hbe ? PC_sampled : _GEN_1119; // @[Microcode.scala 63:15 746:32]
  wire  _GEN_1145 = IR == 8'hbe ? 1'h0 : _GEN_1121; // @[Microcode.scala 746:32 82:21]
  wire [7:0] _GEN_1146 = IR == 8'hbe ? 8'h0 : _GEN_1122; // @[Microcode.scala 746:32 83:21]
  wire [15:0] _GEN_1147 = IR == 8'hbe ? SP_sampled : _GEN_1123; // @[Microcode.scala 64:15 746:32]
  wire [2:0] _GEN_1148 = IR == 8'hbe ? mcycle : _GEN_1124; // @[Microcode.scala 746:32 77:21]
  wire [7:0] _GEN_1149 = IR == 8'hbe ? u_tmp8 : _GEN_1126; // @[Microcode.scala 56:24 746:32]
  wire [7:0] _GEN_1150 = IR == 8'hbe ? B_sampled : _GEN_1127; // @[Microcode.scala 67:15 746:32]
  wire [7:0] _GEN_1151 = IR == 8'hbe ? C_sampled : _GEN_1128; // @[Microcode.scala 68:15 746:32]
  wire [7:0] _GEN_1152 = IR == 8'hbe ? D_sampled : _GEN_1129; // @[Microcode.scala 69:15 746:32]
  wire [7:0] _GEN_1153 = IR == 8'hbe ? E_sampled : _GEN_1130; // @[Microcode.scala 70:15 746:32]
  wire [7:0] _GEN_1154 = IR == 8'hbe ? H_sampled : _GEN_1131; // @[Microcode.scala 71:15 746:32]
  wire [7:0] _GEN_1155 = IR == 8'hbe ? L_sampled : _GEN_1132; // @[Microcode.scala 72:15 746:32]
  wire  _GEN_1156 = IR == 8'hbe ? IME : _GEN_1133; // @[Microcode.scala 74:21 746:32]
  wire  _GEN_1157 = IR == 8'hbe ? IME_pending : _GEN_1134; // @[Microcode.scala 746:32 75:21]
  wire [3:0] _GEN_1158 = IR >= 8'hb0 & IR <= 8'hb7 ? 4'h5 : _GEN_1137; // @[Microcode.scala 734:48 736:17]
  wire [7:0] _GEN_1159 = IR >= 8'hb0 & IR <= 8'hb7 ? A_sampled : _GEN_1138; // @[Microcode.scala 734:48 737:17]
  wire [7:0] _GEN_1160 = IR >= 8'hb0 & IR <= 8'hb7 ? _u_T_98 : _GEN_1139; // @[Microcode.scala 734:48 738:17]
  wire [7:0] _GEN_1161 = IR >= 8'hb0 & IR <= 8'hb7 ? u_alu_io_out : _GEN_1143; // @[Microcode.scala 734:48 739:17]
  wire [7:0] _GEN_1162 = IR >= 8'hb0 & IR <= 8'hb7 ? _u_out_F_T_8 : _GEN_1141; // @[Microcode.scala 105:13 734:48]
  wire  _GEN_1163 = IR >= 8'hb0 & IR <= 8'hb7 ? _u_T_1 : _GEN_1142; // @[Microcode.scala 734:48]
  wire [15:0] _GEN_1164 = IR >= 8'hb0 & IR <= 8'hb7 ? 16'h0 : _GEN_1135; // @[Microcode.scala 734:48 80:21]
  wire  _GEN_1166 = IR >= 8'hb0 & IR <= 8'hb7 ? F_sampled[4] : _GEN_1140; // @[Microcode.scala 111:21 734:48]
  wire [15:0] _GEN_1167 = IR >= 8'hb0 & IR <= 8'hb7 ? PC_sampled : _GEN_1144; // @[Microcode.scala 63:15 734:48]
  wire  _GEN_1168 = IR >= 8'hb0 & IR <= 8'hb7 ? 1'h0 : _GEN_1145; // @[Microcode.scala 734:48 82:21]
  wire [7:0] _GEN_1169 = IR >= 8'hb0 & IR <= 8'hb7 ? 8'h0 : _GEN_1146; // @[Microcode.scala 734:48 83:21]
  wire [15:0] _GEN_1170 = IR >= 8'hb0 & IR <= 8'hb7 ? SP_sampled : _GEN_1147; // @[Microcode.scala 64:15 734:48]
  wire [2:0] _GEN_1171 = IR >= 8'hb0 & IR <= 8'hb7 ? mcycle : _GEN_1148; // @[Microcode.scala 734:48 77:21]
  wire [7:0] _GEN_1172 = IR >= 8'hb0 & IR <= 8'hb7 ? u_tmp8 : _GEN_1149; // @[Microcode.scala 56:24 734:48]
  wire [7:0] _GEN_1173 = IR >= 8'hb0 & IR <= 8'hb7 ? B_sampled : _GEN_1150; // @[Microcode.scala 67:15 734:48]
  wire [7:0] _GEN_1174 = IR >= 8'hb0 & IR <= 8'hb7 ? C_sampled : _GEN_1151; // @[Microcode.scala 68:15 734:48]
  wire [7:0] _GEN_1175 = IR >= 8'hb0 & IR <= 8'hb7 ? D_sampled : _GEN_1152; // @[Microcode.scala 69:15 734:48]
  wire [7:0] _GEN_1176 = IR >= 8'hb0 & IR <= 8'hb7 ? E_sampled : _GEN_1153; // @[Microcode.scala 70:15 734:48]
  wire [7:0] _GEN_1177 = IR >= 8'hb0 & IR <= 8'hb7 ? H_sampled : _GEN_1154; // @[Microcode.scala 71:15 734:48]
  wire [7:0] _GEN_1178 = IR >= 8'hb0 & IR <= 8'hb7 ? L_sampled : _GEN_1155; // @[Microcode.scala 72:15 734:48]
  wire  _GEN_1179 = IR >= 8'hb0 & IR <= 8'hb7 ? IME : _GEN_1156; // @[Microcode.scala 734:48 74:21]
  wire  _GEN_1180 = IR >= 8'hb0 & IR <= 8'hb7 ? IME_pending : _GEN_1157; // @[Microcode.scala 734:48 75:21]
  wire [3:0] _GEN_1181 = IR >= 8'ha8 & IR <= 8'haf ? 4'h6 : _GEN_1158; // @[Microcode.scala 722:48 724:17]
  wire [7:0] _GEN_1182 = IR >= 8'ha8 & IR <= 8'haf ? A_sampled : _GEN_1159; // @[Microcode.scala 722:48 725:17]
  wire [7:0] _GEN_1183 = IR >= 8'ha8 & IR <= 8'haf ? _u_T_98 : _GEN_1160; // @[Microcode.scala 722:48 726:17]
  wire [7:0] _GEN_1184 = IR >= 8'ha8 & IR <= 8'haf ? u_alu_io_out : _GEN_1161; // @[Microcode.scala 722:48 727:17]
  wire [7:0] _GEN_1185 = IR >= 8'ha8 & IR <= 8'haf ? _u_out_F_T_8 : _GEN_1162; // @[Microcode.scala 105:13 722:48]
  wire  _GEN_1186 = IR >= 8'ha8 & IR <= 8'haf ? _u_T_1 : _GEN_1163; // @[Microcode.scala 722:48]
  wire [15:0] _GEN_1187 = IR >= 8'ha8 & IR <= 8'haf ? 16'h0 : _GEN_1164; // @[Microcode.scala 722:48 80:21]
  wire  _GEN_1189 = IR >= 8'ha8 & IR <= 8'haf ? F_sampled[4] : _GEN_1166; // @[Microcode.scala 111:21 722:48]
  wire [15:0] _GEN_1190 = IR >= 8'ha8 & IR <= 8'haf ? PC_sampled : _GEN_1167; // @[Microcode.scala 63:15 722:48]
  wire  _GEN_1191 = IR >= 8'ha8 & IR <= 8'haf ? 1'h0 : _GEN_1168; // @[Microcode.scala 722:48 82:21]
  wire [7:0] _GEN_1192 = IR >= 8'ha8 & IR <= 8'haf ? 8'h0 : _GEN_1169; // @[Microcode.scala 722:48 83:21]
  wire [15:0] _GEN_1193 = IR >= 8'ha8 & IR <= 8'haf ? SP_sampled : _GEN_1170; // @[Microcode.scala 64:15 722:48]
  wire [2:0] _GEN_1194 = IR >= 8'ha8 & IR <= 8'haf ? mcycle : _GEN_1171; // @[Microcode.scala 722:48 77:21]
  wire [7:0] _GEN_1195 = IR >= 8'ha8 & IR <= 8'haf ? u_tmp8 : _GEN_1172; // @[Microcode.scala 56:24 722:48]
  wire [7:0] _GEN_1196 = IR >= 8'ha8 & IR <= 8'haf ? B_sampled : _GEN_1173; // @[Microcode.scala 67:15 722:48]
  wire [7:0] _GEN_1197 = IR >= 8'ha8 & IR <= 8'haf ? C_sampled : _GEN_1174; // @[Microcode.scala 68:15 722:48]
  wire [7:0] _GEN_1198 = IR >= 8'ha8 & IR <= 8'haf ? D_sampled : _GEN_1175; // @[Microcode.scala 69:15 722:48]
  wire [7:0] _GEN_1199 = IR >= 8'ha8 & IR <= 8'haf ? E_sampled : _GEN_1176; // @[Microcode.scala 70:15 722:48]
  wire [7:0] _GEN_1200 = IR >= 8'ha8 & IR <= 8'haf ? H_sampled : _GEN_1177; // @[Microcode.scala 71:15 722:48]
  wire [7:0] _GEN_1201 = IR >= 8'ha8 & IR <= 8'haf ? L_sampled : _GEN_1178; // @[Microcode.scala 72:15 722:48]
  wire  _GEN_1202 = IR >= 8'ha8 & IR <= 8'haf ? IME : _GEN_1179; // @[Microcode.scala 722:48 74:21]
  wire  _GEN_1203 = IR >= 8'ha8 & IR <= 8'haf ? IME_pending : _GEN_1180; // @[Microcode.scala 722:48 75:21]
  wire [3:0] _GEN_1204 = IR >= 8'ha0 & IR <= 8'ha7 ? 4'h4 : _GEN_1181; // @[Microcode.scala 710:48 712:17]
  wire [7:0] _GEN_1205 = IR >= 8'ha0 & IR <= 8'ha7 ? A_sampled : _GEN_1182; // @[Microcode.scala 710:48 713:17]
  wire [7:0] _GEN_1206 = IR >= 8'ha0 & IR <= 8'ha7 ? _u_T_98 : _GEN_1183; // @[Microcode.scala 710:48 714:17]
  wire [7:0] _GEN_1207 = IR >= 8'ha0 & IR <= 8'ha7 ? u_alu_io_out : _GEN_1184; // @[Microcode.scala 710:48 715:17]
  wire [7:0] _GEN_1208 = IR >= 8'ha0 & IR <= 8'ha7 ? _u_out_F_T_8 : _GEN_1185; // @[Microcode.scala 105:13 710:48]
  wire  _GEN_1209 = IR >= 8'ha0 & IR <= 8'ha7 ? _u_T_1 : _GEN_1186; // @[Microcode.scala 710:48]
  wire [15:0] _GEN_1210 = IR >= 8'ha0 & IR <= 8'ha7 ? 16'h0 : _GEN_1187; // @[Microcode.scala 710:48 80:21]
  wire  _GEN_1212 = IR >= 8'ha0 & IR <= 8'ha7 ? F_sampled[4] : _GEN_1189; // @[Microcode.scala 111:21 710:48]
  wire [15:0] _GEN_1213 = IR >= 8'ha0 & IR <= 8'ha7 ? PC_sampled : _GEN_1190; // @[Microcode.scala 63:15 710:48]
  wire  _GEN_1214 = IR >= 8'ha0 & IR <= 8'ha7 ? 1'h0 : _GEN_1191; // @[Microcode.scala 710:48 82:21]
  wire [7:0] _GEN_1215 = IR >= 8'ha0 & IR <= 8'ha7 ? 8'h0 : _GEN_1192; // @[Microcode.scala 710:48 83:21]
  wire [15:0] _GEN_1216 = IR >= 8'ha0 & IR <= 8'ha7 ? SP_sampled : _GEN_1193; // @[Microcode.scala 64:15 710:48]
  wire [2:0] _GEN_1217 = IR >= 8'ha0 & IR <= 8'ha7 ? mcycle : _GEN_1194; // @[Microcode.scala 710:48 77:21]
  wire [7:0] _GEN_1218 = IR >= 8'ha0 & IR <= 8'ha7 ? u_tmp8 : _GEN_1195; // @[Microcode.scala 56:24 710:48]
  wire [7:0] _GEN_1219 = IR >= 8'ha0 & IR <= 8'ha7 ? B_sampled : _GEN_1196; // @[Microcode.scala 67:15 710:48]
  wire [7:0] _GEN_1220 = IR >= 8'ha0 & IR <= 8'ha7 ? C_sampled : _GEN_1197; // @[Microcode.scala 68:15 710:48]
  wire [7:0] _GEN_1221 = IR >= 8'ha0 & IR <= 8'ha7 ? D_sampled : _GEN_1198; // @[Microcode.scala 69:15 710:48]
  wire [7:0] _GEN_1222 = IR >= 8'ha0 & IR <= 8'ha7 ? E_sampled : _GEN_1199; // @[Microcode.scala 70:15 710:48]
  wire [7:0] _GEN_1223 = IR >= 8'ha0 & IR <= 8'ha7 ? H_sampled : _GEN_1200; // @[Microcode.scala 71:15 710:48]
  wire [7:0] _GEN_1224 = IR >= 8'ha0 & IR <= 8'ha7 ? L_sampled : _GEN_1201; // @[Microcode.scala 710:48 72:15]
  wire  _GEN_1225 = IR >= 8'ha0 & IR <= 8'ha7 ? IME : _GEN_1202; // @[Microcode.scala 710:48 74:21]
  wire  _GEN_1226 = IR >= 8'ha0 & IR <= 8'ha7 ? IME_pending : _GEN_1203; // @[Microcode.scala 710:48 75:21]
  wire [3:0] _GEN_1227 = IR >= 8'h98 & IR <= 8'h9f ? 4'h3 : _GEN_1204; // @[Microcode.scala 698:48 700:17]
  wire [7:0] _GEN_1228 = IR >= 8'h98 & IR <= 8'h9f ? A_sampled : _GEN_1205; // @[Microcode.scala 698:48 701:17]
  wire [7:0] _GEN_1229 = IR >= 8'h98 & IR <= 8'h9f ? _u_T_98 : _GEN_1206; // @[Microcode.scala 698:48 702:17]
  wire [7:0] _GEN_1230 = IR >= 8'h98 & IR <= 8'h9f ? u_alu_io_out : _GEN_1207; // @[Microcode.scala 698:48 703:17]
  wire [7:0] _GEN_1231 = IR >= 8'h98 & IR <= 8'h9f ? _u_out_F_T_8 : _GEN_1208; // @[Microcode.scala 105:13 698:48]
  wire  _GEN_1232 = IR >= 8'h98 & IR <= 8'h9f ? _u_T_1 : _GEN_1209; // @[Microcode.scala 698:48]
  wire [15:0] _GEN_1233 = IR >= 8'h98 & IR <= 8'h9f ? 16'h0 : _GEN_1210; // @[Microcode.scala 698:48 80:21]
  wire  _GEN_1235 = IR >= 8'h98 & IR <= 8'h9f ? F_sampled[4] : _GEN_1212; // @[Microcode.scala 111:21 698:48]
  wire [15:0] _GEN_1236 = IR >= 8'h98 & IR <= 8'h9f ? PC_sampled : _GEN_1213; // @[Microcode.scala 63:15 698:48]
  wire  _GEN_1237 = IR >= 8'h98 & IR <= 8'h9f ? 1'h0 : _GEN_1214; // @[Microcode.scala 698:48 82:21]
  wire [7:0] _GEN_1238 = IR >= 8'h98 & IR <= 8'h9f ? 8'h0 : _GEN_1215; // @[Microcode.scala 698:48 83:21]
  wire [15:0] _GEN_1239 = IR >= 8'h98 & IR <= 8'h9f ? SP_sampled : _GEN_1216; // @[Microcode.scala 64:15 698:48]
  wire [2:0] _GEN_1240 = IR >= 8'h98 & IR <= 8'h9f ? mcycle : _GEN_1217; // @[Microcode.scala 698:48 77:21]
  wire [7:0] _GEN_1241 = IR >= 8'h98 & IR <= 8'h9f ? u_tmp8 : _GEN_1218; // @[Microcode.scala 56:24 698:48]
  wire [7:0] _GEN_1242 = IR >= 8'h98 & IR <= 8'h9f ? B_sampled : _GEN_1219; // @[Microcode.scala 67:15 698:48]
  wire [7:0] _GEN_1243 = IR >= 8'h98 & IR <= 8'h9f ? C_sampled : _GEN_1220; // @[Microcode.scala 68:15 698:48]
  wire [7:0] _GEN_1244 = IR >= 8'h98 & IR <= 8'h9f ? D_sampled : _GEN_1221; // @[Microcode.scala 69:15 698:48]
  wire [7:0] _GEN_1245 = IR >= 8'h98 & IR <= 8'h9f ? E_sampled : _GEN_1222; // @[Microcode.scala 698:48 70:15]
  wire [7:0] _GEN_1246 = IR >= 8'h98 & IR <= 8'h9f ? H_sampled : _GEN_1223; // @[Microcode.scala 698:48 71:15]
  wire [7:0] _GEN_1247 = IR >= 8'h98 & IR <= 8'h9f ? L_sampled : _GEN_1224; // @[Microcode.scala 698:48 72:15]
  wire  _GEN_1248 = IR >= 8'h98 & IR <= 8'h9f ? IME : _GEN_1225; // @[Microcode.scala 698:48 74:21]
  wire  _GEN_1249 = IR >= 8'h98 & IR <= 8'h9f ? IME_pending : _GEN_1226; // @[Microcode.scala 698:48 75:21]
  wire [3:0] _GEN_1250 = IR >= 8'h90 & IR <= 8'h97 ? 4'h2 : _GEN_1227; // @[Microcode.scala 686:48 688:17]
  wire [7:0] _GEN_1251 = IR >= 8'h90 & IR <= 8'h97 ? A_sampled : _GEN_1228; // @[Microcode.scala 686:48 689:17]
  wire [7:0] _GEN_1252 = IR >= 8'h90 & IR <= 8'h97 ? _u_T_98 : _GEN_1229; // @[Microcode.scala 686:48 690:17]
  wire [7:0] _GEN_1253 = IR >= 8'h90 & IR <= 8'h97 ? u_alu_io_out : _GEN_1230; // @[Microcode.scala 686:48 691:17]
  wire [7:0] _GEN_1254 = IR >= 8'h90 & IR <= 8'h97 ? _u_out_F_T_8 : _GEN_1231; // @[Microcode.scala 105:13 686:48]
  wire  _GEN_1255 = IR >= 8'h90 & IR <= 8'h97 ? _u_T_1 : _GEN_1232; // @[Microcode.scala 686:48]
  wire [15:0] _GEN_1256 = IR >= 8'h90 & IR <= 8'h97 ? 16'h0 : _GEN_1233; // @[Microcode.scala 686:48 80:21]
  wire  _GEN_1258 = IR >= 8'h90 & IR <= 8'h97 ? F_sampled[4] : _GEN_1235; // @[Microcode.scala 111:21 686:48]
  wire [15:0] _GEN_1259 = IR >= 8'h90 & IR <= 8'h97 ? PC_sampled : _GEN_1236; // @[Microcode.scala 63:15 686:48]
  wire  _GEN_1260 = IR >= 8'h90 & IR <= 8'h97 ? 1'h0 : _GEN_1237; // @[Microcode.scala 686:48 82:21]
  wire [7:0] _GEN_1261 = IR >= 8'h90 & IR <= 8'h97 ? 8'h0 : _GEN_1238; // @[Microcode.scala 686:48 83:21]
  wire [15:0] _GEN_1262 = IR >= 8'h90 & IR <= 8'h97 ? SP_sampled : _GEN_1239; // @[Microcode.scala 64:15 686:48]
  wire [2:0] _GEN_1263 = IR >= 8'h90 & IR <= 8'h97 ? mcycle : _GEN_1240; // @[Microcode.scala 686:48 77:21]
  wire [7:0] _GEN_1264 = IR >= 8'h90 & IR <= 8'h97 ? u_tmp8 : _GEN_1241; // @[Microcode.scala 56:24 686:48]
  wire [7:0] _GEN_1265 = IR >= 8'h90 & IR <= 8'h97 ? B_sampled : _GEN_1242; // @[Microcode.scala 67:15 686:48]
  wire [7:0] _GEN_1266 = IR >= 8'h90 & IR <= 8'h97 ? C_sampled : _GEN_1243; // @[Microcode.scala 68:15 686:48]
  wire [7:0] _GEN_1267 = IR >= 8'h90 & IR <= 8'h97 ? D_sampled : _GEN_1244; // @[Microcode.scala 686:48 69:15]
  wire [7:0] _GEN_1268 = IR >= 8'h90 & IR <= 8'h97 ? E_sampled : _GEN_1245; // @[Microcode.scala 686:48 70:15]
  wire [7:0] _GEN_1269 = IR >= 8'h90 & IR <= 8'h97 ? H_sampled : _GEN_1246; // @[Microcode.scala 686:48 71:15]
  wire [7:0] _GEN_1270 = IR >= 8'h90 & IR <= 8'h97 ? L_sampled : _GEN_1247; // @[Microcode.scala 686:48 72:15]
  wire  _GEN_1271 = IR >= 8'h90 & IR <= 8'h97 ? IME : _GEN_1248; // @[Microcode.scala 686:48 74:21]
  wire  _GEN_1272 = IR >= 8'h90 & IR <= 8'h97 ? IME_pending : _GEN_1249; // @[Microcode.scala 686:48 75:21]
  wire [3:0] _GEN_1273 = IR >= 8'h88 & IR <= 8'h8f ? 4'h1 : _GEN_1250; // @[Microcode.scala 674:48 676:17]
  wire [7:0] _GEN_1274 = IR >= 8'h88 & IR <= 8'h8f ? A_sampled : _GEN_1251; // @[Microcode.scala 674:48 677:17]
  wire [7:0] _GEN_1275 = IR >= 8'h88 & IR <= 8'h8f ? _u_T_98 : _GEN_1252; // @[Microcode.scala 674:48 678:17]
  wire [7:0] _GEN_1276 = IR >= 8'h88 & IR <= 8'h8f ? u_alu_io_out : _GEN_1253; // @[Microcode.scala 674:48 679:17]
  wire [7:0] _GEN_1277 = IR >= 8'h88 & IR <= 8'h8f ? _u_out_F_T_8 : _GEN_1254; // @[Microcode.scala 105:13 674:48]
  wire  _GEN_1278 = IR >= 8'h88 & IR <= 8'h8f ? _u_T_1 : _GEN_1255; // @[Microcode.scala 674:48]
  wire [15:0] _GEN_1279 = IR >= 8'h88 & IR <= 8'h8f ? 16'h0 : _GEN_1256; // @[Microcode.scala 674:48 80:21]
  wire  _GEN_1281 = IR >= 8'h88 & IR <= 8'h8f ? F_sampled[4] : _GEN_1258; // @[Microcode.scala 111:21 674:48]
  wire [15:0] _GEN_1282 = IR >= 8'h88 & IR <= 8'h8f ? PC_sampled : _GEN_1259; // @[Microcode.scala 63:15 674:48]
  wire  _GEN_1283 = IR >= 8'h88 & IR <= 8'h8f ? 1'h0 : _GEN_1260; // @[Microcode.scala 674:48 82:21]
  wire [7:0] _GEN_1284 = IR >= 8'h88 & IR <= 8'h8f ? 8'h0 : _GEN_1261; // @[Microcode.scala 674:48 83:21]
  wire [15:0] _GEN_1285 = IR >= 8'h88 & IR <= 8'h8f ? SP_sampled : _GEN_1262; // @[Microcode.scala 64:15 674:48]
  wire [2:0] _GEN_1286 = IR >= 8'h88 & IR <= 8'h8f ? mcycle : _GEN_1263; // @[Microcode.scala 674:48 77:21]
  wire [7:0] _GEN_1287 = IR >= 8'h88 & IR <= 8'h8f ? u_tmp8 : _GEN_1264; // @[Microcode.scala 56:24 674:48]
  wire [7:0] _GEN_1288 = IR >= 8'h88 & IR <= 8'h8f ? B_sampled : _GEN_1265; // @[Microcode.scala 67:15 674:48]
  wire [7:0] _GEN_1289 = IR >= 8'h88 & IR <= 8'h8f ? C_sampled : _GEN_1266; // @[Microcode.scala 674:48 68:15]
  wire [7:0] _GEN_1290 = IR >= 8'h88 & IR <= 8'h8f ? D_sampled : _GEN_1267; // @[Microcode.scala 674:48 69:15]
  wire [7:0] _GEN_1291 = IR >= 8'h88 & IR <= 8'h8f ? E_sampled : _GEN_1268; // @[Microcode.scala 674:48 70:15]
  wire [7:0] _GEN_1292 = IR >= 8'h88 & IR <= 8'h8f ? H_sampled : _GEN_1269; // @[Microcode.scala 674:48 71:15]
  wire [7:0] _GEN_1293 = IR >= 8'h88 & IR <= 8'h8f ? L_sampled : _GEN_1270; // @[Microcode.scala 674:48 72:15]
  wire  _GEN_1294 = IR >= 8'h88 & IR <= 8'h8f ? IME : _GEN_1271; // @[Microcode.scala 674:48 74:21]
  wire  _GEN_1295 = IR >= 8'h88 & IR <= 8'h8f ? IME_pending : _GEN_1272; // @[Microcode.scala 674:48 75:21]
  wire [3:0] _GEN_1296 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? 4'h0 : _GEN_1273; // @[Microcode.scala 657:68 659:17]
  wire [7:0] _GEN_1297 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? A_sampled : _GEN_1274; // @[Microcode.scala 657:68 660:17]
  wire [7:0] _GEN_1298 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? _u_T_98 : _GEN_1275; // @[Microcode.scala 657:68 661:17]
  wire [7:0] _GEN_1299 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? u_alu_io_out : _GEN_1276; // @[Microcode.scala 657:68 662:17]
  wire [7:0] _GEN_1300 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? _u_out_F_T_5 : _GEN_1277; // @[Microcode.scala 105:13 657:68]
  wire  _GEN_1301 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? _u_T_1 : _GEN_1278; // @[Microcode.scala 657:68]
  wire [15:0] _GEN_1302 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? 16'h0 : _GEN_1279; // @[Microcode.scala 657:68 80:21]
  wire  _GEN_1304 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? F_sampled[4] : _GEN_1281; // @[Microcode.scala 111:21 657:68]
  wire [15:0] _GEN_1305 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? PC_sampled : _GEN_1282; // @[Microcode.scala 63:15 657:68]
  wire  _GEN_1306 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? 1'h0 : _GEN_1283; // @[Microcode.scala 657:68 82:21]
  wire [7:0] _GEN_1307 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? 8'h0 : _GEN_1284; // @[Microcode.scala 657:68 83:21]
  wire [15:0] _GEN_1308 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? SP_sampled : _GEN_1285; // @[Microcode.scala 64:15 657:68]
  wire [2:0] _GEN_1309 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? mcycle : _GEN_1286; // @[Microcode.scala 657:68 77:21]
  wire [7:0] _GEN_1310 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? u_tmp8 : _GEN_1287; // @[Microcode.scala 56:24 657:68]
  wire [7:0] _GEN_1311 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? B_sampled : _GEN_1288; // @[Microcode.scala 657:68 67:15]
  wire [7:0] _GEN_1312 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? C_sampled : _GEN_1289; // @[Microcode.scala 657:68 68:15]
  wire [7:0] _GEN_1313 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? D_sampled : _GEN_1290; // @[Microcode.scala 657:68 69:15]
  wire [7:0] _GEN_1314 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? E_sampled : _GEN_1291; // @[Microcode.scala 657:68 70:15]
  wire [7:0] _GEN_1315 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? H_sampled : _GEN_1292; // @[Microcode.scala 657:68 71:15]
  wire [7:0] _GEN_1316 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? L_sampled : _GEN_1293; // @[Microcode.scala 657:68 72:15]
  wire  _GEN_1317 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? IME : _GEN_1294; // @[Microcode.scala 657:68 74:21]
  wire  _GEN_1318 = IR >= 8'h80 & IR <= 8'h85 | IR == 8'h87 ? IME_pending : _GEN_1295; // @[Microcode.scala 657:68 75:21]
  wire [15:0] _GEN_1319 = IR == 8'hae ? _GEN_326 : _GEN_1302; // @[Microcode.scala 630:32]
  wire [3:0] _GEN_1321 = IR == 8'hae ? _GEN_336 : _GEN_1296; // @[Microcode.scala 630:32]
  wire [7:0] _GEN_1322 = IR == 8'hae ? _GEN_329 : _GEN_1297; // @[Microcode.scala 630:32]
  wire [7:0] _GEN_1323 = IR == 8'hae ? _GEN_330 : _GEN_1298; // @[Microcode.scala 630:32]
  wire [7:0] _GEN_1324 = IR == 8'hae ? _GEN_331 : _GEN_1299; // @[Microcode.scala 630:32]
  wire [7:0] _GEN_1325 = IR == 8'hae ? _GEN_340 : _GEN_1300; // @[Microcode.scala 630:32]
  wire  _GEN_1326 = IR == 8'hae ? _u_T_1 : _GEN_1301; // @[Microcode.scala 630:32]
  wire  _GEN_1327 = IR == 8'hae ? F_sampled[4] : _GEN_1304; // @[Microcode.scala 111:21 630:32]
  wire [15:0] _GEN_1328 = IR == 8'hae ? PC_sampled : _GEN_1305; // @[Microcode.scala 63:15 630:32]
  wire  _GEN_1329 = IR == 8'hae ? 1'h0 : _GEN_1306; // @[Microcode.scala 630:32 82:21]
  wire [7:0] _GEN_1330 = IR == 8'hae ? 8'h0 : _GEN_1307; // @[Microcode.scala 630:32 83:21]
  wire [15:0] _GEN_1331 = IR == 8'hae ? SP_sampled : _GEN_1308; // @[Microcode.scala 630:32 64:15]
  wire [2:0] _GEN_1332 = IR == 8'hae ? mcycle : _GEN_1309; // @[Microcode.scala 630:32 77:21]
  wire [7:0] _GEN_1333 = IR == 8'hae ? u_tmp8 : _GEN_1310; // @[Microcode.scala 56:24 630:32]
  wire [7:0] _GEN_1334 = IR == 8'hae ? B_sampled : _GEN_1311; // @[Microcode.scala 630:32 67:15]
  wire [7:0] _GEN_1335 = IR == 8'hae ? C_sampled : _GEN_1312; // @[Microcode.scala 630:32 68:15]
  wire [7:0] _GEN_1336 = IR == 8'hae ? D_sampled : _GEN_1313; // @[Microcode.scala 630:32 69:15]
  wire [7:0] _GEN_1337 = IR == 8'hae ? E_sampled : _GEN_1314; // @[Microcode.scala 630:32 70:15]
  wire [7:0] _GEN_1338 = IR == 8'hae ? H_sampled : _GEN_1315; // @[Microcode.scala 630:32 71:15]
  wire [7:0] _GEN_1339 = IR == 8'hae ? L_sampled : _GEN_1316; // @[Microcode.scala 630:32 72:15]
  wire  _GEN_1340 = IR == 8'hae ? IME : _GEN_1317; // @[Microcode.scala 630:32 74:21]
  wire  _GEN_1341 = IR == 8'hae ? IME_pending : _GEN_1318; // @[Microcode.scala 630:32 75:21]
  wire [15:0] _GEN_1342 = IR == 8'h86 ? _GEN_326 : _GEN_1319; // @[Microcode.scala 613:32]
  wire [3:0] _GEN_1344 = IR == 8'h86 ? 4'h0 : _GEN_1321; // @[Microcode.scala 613:32]
  wire [7:0] _GEN_1345 = IR == 8'h86 ? _GEN_329 : _GEN_1322; // @[Microcode.scala 613:32]
  wire [7:0] _GEN_1346 = IR == 8'h86 ? _GEN_330 : _GEN_1323; // @[Microcode.scala 613:32]
  wire [7:0] _GEN_1347 = IR == 8'h86 ? _GEN_331 : _GEN_1324; // @[Microcode.scala 613:32]
  wire [7:0] _GEN_1348 = IR == 8'h86 ? _GEN_332 : _GEN_1325; // @[Microcode.scala 613:32]
  wire  _GEN_1349 = IR == 8'h86 ? _u_T_1 : _GEN_1326; // @[Microcode.scala 613:32]
  wire  _GEN_1350 = IR == 8'h86 ? F_sampled[4] : _GEN_1327; // @[Microcode.scala 111:21 613:32]
  wire [15:0] _GEN_1351 = IR == 8'h86 ? PC_sampled : _GEN_1328; // @[Microcode.scala 613:32 63:15]
  wire  _GEN_1352 = IR == 8'h86 ? 1'h0 : _GEN_1329; // @[Microcode.scala 613:32 82:21]
  wire [7:0] _GEN_1353 = IR == 8'h86 ? 8'h0 : _GEN_1330; // @[Microcode.scala 613:32 83:21]
  wire [15:0] _GEN_1354 = IR == 8'h86 ? SP_sampled : _GEN_1331; // @[Microcode.scala 613:32 64:15]
  wire [2:0] _GEN_1355 = IR == 8'h86 ? mcycle : _GEN_1332; // @[Microcode.scala 613:32 77:21]
  wire [7:0] _GEN_1356 = IR == 8'h86 ? u_tmp8 : _GEN_1333; // @[Microcode.scala 56:24 613:32]
  wire [7:0] _GEN_1357 = IR == 8'h86 ? B_sampled : _GEN_1334; // @[Microcode.scala 613:32 67:15]
  wire [7:0] _GEN_1358 = IR == 8'h86 ? C_sampled : _GEN_1335; // @[Microcode.scala 613:32 68:15]
  wire [7:0] _GEN_1359 = IR == 8'h86 ? D_sampled : _GEN_1336; // @[Microcode.scala 613:32 69:15]
  wire [7:0] _GEN_1360 = IR == 8'h86 ? E_sampled : _GEN_1337; // @[Microcode.scala 613:32 70:15]
  wire [7:0] _GEN_1361 = IR == 8'h86 ? H_sampled : _GEN_1338; // @[Microcode.scala 613:32 71:15]
  wire [7:0] _GEN_1362 = IR == 8'h86 ? L_sampled : _GEN_1339; // @[Microcode.scala 613:32 72:15]
  wire  _GEN_1363 = IR == 8'h86 ? IME : _GEN_1340; // @[Microcode.scala 613:32 74:21]
  wire  _GEN_1364 = IR == 8'h86 ? IME_pending : _GEN_1341; // @[Microcode.scala 613:32 75:21]
  wire [15:0] _GEN_1365 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? u_HL : _GEN_1342; // @[Microcode.scala 601:77 604:18]
  wire [7:0] _GEN_1367 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _GEN_318 : _GEN_1357; // @[Microcode.scala 601:77]
  wire [7:0] _GEN_1368 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _GEN_319 : _GEN_1358; // @[Microcode.scala 601:77]
  wire [7:0] _GEN_1369 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _GEN_320 : _GEN_1359; // @[Microcode.scala 601:77]
  wire [7:0] _GEN_1370 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _GEN_321 : _GEN_1360; // @[Microcode.scala 601:77]
  wire [7:0] _GEN_1371 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _GEN_322 : _GEN_1361; // @[Microcode.scala 601:77]
  wire [7:0] _GEN_1372 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _GEN_323 : _GEN_1362; // @[Microcode.scala 601:77]
  wire [7:0] _GEN_1373 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _GEN_324 : _GEN_1347; // @[Microcode.scala 601:77]
  wire  _GEN_1374 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _u_T_1 : _GEN_1349; // @[Microcode.scala 601:77]
  wire [3:0] _GEN_1375 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? 4'h0 : _GEN_1344; // @[Microcode.scala 110:21 601:77]
  wire [7:0] _GEN_1376 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? 8'h0 : _GEN_1345; // @[Microcode.scala 108:21 601:77]
  wire [7:0] _GEN_1377 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? 8'h0 : _GEN_1346; // @[Microcode.scala 109:21 601:77]
  wire [7:0] _GEN_1378 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? F_sampled : _GEN_1348; // @[Microcode.scala 601:77 66:15]
  wire  _GEN_1379 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? F_sampled[4] : _GEN_1350; // @[Microcode.scala 111:21 601:77]
  wire [15:0] _GEN_1380 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? PC_sampled : _GEN_1351; // @[Microcode.scala 601:77 63:15]
  wire  _GEN_1381 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? 1'h0 : _GEN_1352; // @[Microcode.scala 601:77 82:21]
  wire [7:0] _GEN_1382 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? 8'h0 : _GEN_1353; // @[Microcode.scala 601:77 83:21]
  wire [15:0] _GEN_1383 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? SP_sampled : _GEN_1354; // @[Microcode.scala 601:77 64:15]
  wire [2:0] _GEN_1384 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? mcycle : _GEN_1355; // @[Microcode.scala 601:77 77:21]
  wire [7:0] _GEN_1385 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? u_tmp8 : _GEN_1356; // @[Microcode.scala 56:24 601:77]
  wire  _GEN_1386 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? IME : _GEN_1363; // @[Microcode.scala 601:77 74:21]
  wire  _GEN_1387 = _u_T_174 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? IME_pending : _GEN_1364; // @[Microcode.scala 601:77 75:21]
  wire [15:0] _GEN_1388 = IR == 8'hf0 ? _GEN_291 : _GEN_1365; // @[Microcode.scala 572:32]
  wire [7:0] _GEN_1390 = IR == 8'hf0 ? _GEN_250 : _GEN_1385; // @[Microcode.scala 572:32]
  wire [2:0] _GEN_1391 = IR == 8'hf0 ? _GEN_253 : _GEN_1384; // @[Microcode.scala 572:32]
  wire [7:0] _GEN_1392 = IR == 8'hf0 ? _GEN_254 : _GEN_1373; // @[Microcode.scala 572:32]
  wire  _GEN_1393 = IR == 8'hf0 ? _GEN_255 : _GEN_1374; // @[Microcode.scala 572:32]
  wire [7:0] _GEN_1394 = IR == 8'hf0 ? B_sampled : _GEN_1367; // @[Microcode.scala 572:32 67:15]
  wire [7:0] _GEN_1395 = IR == 8'hf0 ? C_sampled : _GEN_1368; // @[Microcode.scala 572:32 68:15]
  wire [7:0] _GEN_1396 = IR == 8'hf0 ? D_sampled : _GEN_1369; // @[Microcode.scala 572:32 69:15]
  wire [7:0] _GEN_1397 = IR == 8'hf0 ? E_sampled : _GEN_1370; // @[Microcode.scala 572:32 70:15]
  wire [7:0] _GEN_1398 = IR == 8'hf0 ? H_sampled : _GEN_1371; // @[Microcode.scala 572:32 71:15]
  wire [7:0] _GEN_1399 = IR == 8'hf0 ? L_sampled : _GEN_1372; // @[Microcode.scala 572:32 72:15]
  wire [3:0] _GEN_1400 = IR == 8'hf0 ? 4'h0 : _GEN_1375; // @[Microcode.scala 110:21 572:32]
  wire [7:0] _GEN_1401 = IR == 8'hf0 ? 8'h0 : _GEN_1376; // @[Microcode.scala 108:21 572:32]
  wire [7:0] _GEN_1402 = IR == 8'hf0 ? 8'h0 : _GEN_1377; // @[Microcode.scala 109:21 572:32]
  wire [7:0] _GEN_1403 = IR == 8'hf0 ? F_sampled : _GEN_1378; // @[Microcode.scala 572:32 66:15]
  wire  _GEN_1404 = IR == 8'hf0 ? F_sampled[4] : _GEN_1379; // @[Microcode.scala 111:21 572:32]
  wire [15:0] _GEN_1405 = IR == 8'hf0 ? PC_sampled : _GEN_1380; // @[Microcode.scala 572:32 63:15]
  wire  _GEN_1406 = IR == 8'hf0 ? 1'h0 : _GEN_1381; // @[Microcode.scala 572:32 82:21]
  wire [7:0] _GEN_1407 = IR == 8'hf0 ? 8'h0 : _GEN_1382; // @[Microcode.scala 572:32 83:21]
  wire [15:0] _GEN_1408 = IR == 8'hf0 ? SP_sampled : _GEN_1383; // @[Microcode.scala 572:32 64:15]
  wire  _GEN_1409 = IR == 8'hf0 ? IME : _GEN_1386; // @[Microcode.scala 572:32 74:21]
  wire  _GEN_1410 = IR == 8'hf0 ? IME_pending : _GEN_1387; // @[Microcode.scala 572:32 75:21]
  wire [15:0] _GEN_1411 = IR == 8'he0 ? _u_mcBus_memAddr_T_2 : _GEN_1388; // @[Microcode.scala 559:32 560:23]
  wire [7:0] _GEN_1412 = IR == 8'he0 ? A_sampled : _GEN_1407; // @[Microcode.scala 559:32 561:23]
  wire  _GEN_1413 = IR == 8'he0 ? _u_mcBus_memWrite_T : _GEN_1406; // @[Microcode.scala 559:32 562:23]
  wire  _GEN_1414 = IR == 8'he0 ? _u_T_1 : _GEN_1393; // @[Microcode.scala 559:32]
  wire [7:0] _GEN_1416 = IR == 8'he0 ? u_tmp8 : _GEN_1390; // @[Microcode.scala 559:32 56:24]
  wire [2:0] _GEN_1417 = IR == 8'he0 ? mcycle : _GEN_1391; // @[Microcode.scala 559:32 77:21]
  wire [7:0] _GEN_1418 = IR == 8'he0 ? A_sampled : _GEN_1392; // @[Microcode.scala 559:32 65:15]
  wire [7:0] _GEN_1419 = IR == 8'he0 ? B_sampled : _GEN_1394; // @[Microcode.scala 559:32 67:15]
  wire [7:0] _GEN_1420 = IR == 8'he0 ? C_sampled : _GEN_1395; // @[Microcode.scala 559:32 68:15]
  wire [7:0] _GEN_1421 = IR == 8'he0 ? D_sampled : _GEN_1396; // @[Microcode.scala 559:32 69:15]
  wire [7:0] _GEN_1422 = IR == 8'he0 ? E_sampled : _GEN_1397; // @[Microcode.scala 559:32 70:15]
  wire [7:0] _GEN_1423 = IR == 8'he0 ? H_sampled : _GEN_1398; // @[Microcode.scala 559:32 71:15]
  wire [7:0] _GEN_1424 = IR == 8'he0 ? L_sampled : _GEN_1399; // @[Microcode.scala 559:32 72:15]
  wire [3:0] _GEN_1425 = IR == 8'he0 ? 4'h0 : _GEN_1400; // @[Microcode.scala 110:21 559:32]
  wire [7:0] _GEN_1426 = IR == 8'he0 ? 8'h0 : _GEN_1401; // @[Microcode.scala 108:21 559:32]
  wire [7:0] _GEN_1427 = IR == 8'he0 ? 8'h0 : _GEN_1402; // @[Microcode.scala 109:21 559:32]
  wire [7:0] _GEN_1428 = IR == 8'he0 ? F_sampled : _GEN_1403; // @[Microcode.scala 559:32 66:15]
  wire  _GEN_1429 = IR == 8'he0 ? F_sampled[4] : _GEN_1404; // @[Microcode.scala 111:21 559:32]
  wire [15:0] _GEN_1430 = IR == 8'he0 ? PC_sampled : _GEN_1405; // @[Microcode.scala 559:32 63:15]
  wire [15:0] _GEN_1431 = IR == 8'he0 ? SP_sampled : _GEN_1408; // @[Microcode.scala 559:32 64:15]
  wire  _GEN_1432 = IR == 8'he0 ? IME : _GEN_1409; // @[Microcode.scala 559:32 74:21]
  wire  _GEN_1433 = IR == 8'he0 ? IME_pending : _GEN_1410; // @[Microcode.scala 559:32 75:21]
  wire [15:0] _GEN_1434 = IR == 8'he2 ? u_addr : _GEN_1411; // @[Microcode.scala 549:32 550:23]
  wire [7:0] _GEN_1435 = IR == 8'he2 ? A_sampled : _GEN_1412; // @[Microcode.scala 549:32 551:23]
  wire  _GEN_1436 = IR == 8'he2 ? _u_mcBus_memWrite_T : _GEN_1413; // @[Microcode.scala 549:32 552:23]
  wire  _GEN_1437 = IR == 8'he2 ? _u_T_1 : _GEN_1414; // @[Microcode.scala 549:32]
  wire [7:0] _GEN_1439 = IR == 8'he2 ? u_tmp8 : _GEN_1416; // @[Microcode.scala 549:32 56:24]
  wire [2:0] _GEN_1440 = IR == 8'he2 ? mcycle : _GEN_1417; // @[Microcode.scala 549:32 77:21]
  wire [7:0] _GEN_1441 = IR == 8'he2 ? A_sampled : _GEN_1418; // @[Microcode.scala 549:32 65:15]
  wire [7:0] _GEN_1442 = IR == 8'he2 ? B_sampled : _GEN_1419; // @[Microcode.scala 549:32 67:15]
  wire [7:0] _GEN_1443 = IR == 8'he2 ? C_sampled : _GEN_1420; // @[Microcode.scala 549:32 68:15]
  wire [7:0] _GEN_1444 = IR == 8'he2 ? D_sampled : _GEN_1421; // @[Microcode.scala 549:32 69:15]
  wire [7:0] _GEN_1445 = IR == 8'he2 ? E_sampled : _GEN_1422; // @[Microcode.scala 549:32 70:15]
  wire [7:0] _GEN_1446 = IR == 8'he2 ? H_sampled : _GEN_1423; // @[Microcode.scala 549:32 71:15]
  wire [7:0] _GEN_1447 = IR == 8'he2 ? L_sampled : _GEN_1424; // @[Microcode.scala 549:32 72:15]
  wire [3:0] _GEN_1448 = IR == 8'he2 ? 4'h0 : _GEN_1425; // @[Microcode.scala 110:21 549:32]
  wire [7:0] _GEN_1449 = IR == 8'he2 ? 8'h0 : _GEN_1426; // @[Microcode.scala 108:21 549:32]
  wire [7:0] _GEN_1450 = IR == 8'he2 ? 8'h0 : _GEN_1427; // @[Microcode.scala 109:21 549:32]
  wire [7:0] _GEN_1451 = IR == 8'he2 ? F_sampled : _GEN_1428; // @[Microcode.scala 549:32 66:15]
  wire  _GEN_1452 = IR == 8'he2 ? F_sampled[4] : _GEN_1429; // @[Microcode.scala 111:21 549:32]
  wire [15:0] _GEN_1453 = IR == 8'he2 ? PC_sampled : _GEN_1430; // @[Microcode.scala 549:32 63:15]
  wire [15:0] _GEN_1454 = IR == 8'he2 ? SP_sampled : _GEN_1431; // @[Microcode.scala 549:32 64:15]
  wire  _GEN_1455 = IR == 8'he2 ? IME : _GEN_1432; // @[Microcode.scala 549:32 74:21]
  wire  _GEN_1456 = IR == 8'he2 ? IME_pending : _GEN_1433; // @[Microcode.scala 549:32 75:21]
  wire [15:0] _GEN_1457 = IR == 8'hf2 ? _GEN_278 : _GEN_1434; // @[Microcode.scala 528:32]
  wire [7:0] _GEN_1459 = IR == 8'hf2 ? _GEN_250 : _GEN_1439; // @[Microcode.scala 528:32]
  wire [2:0] _GEN_1460 = IR == 8'hf2 ? _GEN_253 : _GEN_1440; // @[Microcode.scala 528:32]
  wire [7:0] _GEN_1461 = IR == 8'hf2 ? _GEN_254 : _GEN_1441; // @[Microcode.scala 528:32]
  wire  _GEN_1462 = IR == 8'hf2 ? _GEN_255 : _GEN_1437; // @[Microcode.scala 528:32]
  wire [7:0] _GEN_1463 = IR == 8'hf2 ? 8'h0 : _GEN_1435; // @[Microcode.scala 528:32 83:21]
  wire  _GEN_1464 = IR == 8'hf2 ? 1'h0 : _GEN_1436; // @[Microcode.scala 528:32 82:21]
  wire [7:0] _GEN_1465 = IR == 8'hf2 ? B_sampled : _GEN_1442; // @[Microcode.scala 528:32 67:15]
  wire [7:0] _GEN_1466 = IR == 8'hf2 ? C_sampled : _GEN_1443; // @[Microcode.scala 528:32 68:15]
  wire [7:0] _GEN_1467 = IR == 8'hf2 ? D_sampled : _GEN_1444; // @[Microcode.scala 528:32 69:15]
  wire [7:0] _GEN_1468 = IR == 8'hf2 ? E_sampled : _GEN_1445; // @[Microcode.scala 528:32 70:15]
  wire [7:0] _GEN_1469 = IR == 8'hf2 ? H_sampled : _GEN_1446; // @[Microcode.scala 528:32 71:15]
  wire [7:0] _GEN_1470 = IR == 8'hf2 ? L_sampled : _GEN_1447; // @[Microcode.scala 528:32 72:15]
  wire [3:0] _GEN_1471 = IR == 8'hf2 ? 4'h0 : _GEN_1448; // @[Microcode.scala 110:21 528:32]
  wire [7:0] _GEN_1472 = IR == 8'hf2 ? 8'h0 : _GEN_1449; // @[Microcode.scala 108:21 528:32]
  wire [7:0] _GEN_1473 = IR == 8'hf2 ? 8'h0 : _GEN_1450; // @[Microcode.scala 109:21 528:32]
  wire [7:0] _GEN_1474 = IR == 8'hf2 ? F_sampled : _GEN_1451; // @[Microcode.scala 528:32 66:15]
  wire  _GEN_1475 = IR == 8'hf2 ? F_sampled[4] : _GEN_1452; // @[Microcode.scala 111:21 528:32]
  wire [15:0] _GEN_1476 = IR == 8'hf2 ? PC_sampled : _GEN_1453; // @[Microcode.scala 528:32 63:15]
  wire [15:0] _GEN_1477 = IR == 8'hf2 ? SP_sampled : _GEN_1454; // @[Microcode.scala 528:32 64:15]
  wire  _GEN_1478 = IR == 8'hf2 ? IME : _GEN_1455; // @[Microcode.scala 528:32 74:21]
  wire  _GEN_1479 = IR == 8'hf2 ? IME_pending : _GEN_1456; // @[Microcode.scala 528:32 75:21]
  wire [7:0] _GEN_1480 = IR == 8'h32 ? _u_result_T_26[15:8] : _GEN_1469; // @[Microcode.scala 513:32 516:13]
  wire [7:0] _GEN_1481 = IR == 8'h32 ? _u_result_T_26[7:0] : _GEN_1470; // @[Microcode.scala 513:32 517:13]
  wire [15:0] _GEN_1482 = IR == 8'h32 ? u_HL : _GEN_1457; // @[Microcode.scala 513:32 519:23]
  wire [7:0] _GEN_1483 = IR == 8'h32 ? A_sampled : _GEN_1463; // @[Microcode.scala 513:32 520:23]
  wire  _GEN_1484 = IR == 8'h32 ? _u_mcBus_memWrite_T : _GEN_1464; // @[Microcode.scala 513:32 521:23]
  wire  _GEN_1485 = IR == 8'h32 ? _u_T_1 : _GEN_1462; // @[Microcode.scala 513:32]
  wire [7:0] _GEN_1487 = IR == 8'h32 ? u_tmp8 : _GEN_1459; // @[Microcode.scala 513:32 56:24]
  wire [2:0] _GEN_1488 = IR == 8'h32 ? mcycle : _GEN_1460; // @[Microcode.scala 513:32 77:21]
  wire [7:0] _GEN_1489 = IR == 8'h32 ? A_sampled : _GEN_1461; // @[Microcode.scala 513:32 65:15]
  wire [7:0] _GEN_1490 = IR == 8'h32 ? B_sampled : _GEN_1465; // @[Microcode.scala 513:32 67:15]
  wire [7:0] _GEN_1491 = IR == 8'h32 ? C_sampled : _GEN_1466; // @[Microcode.scala 513:32 68:15]
  wire [7:0] _GEN_1492 = IR == 8'h32 ? D_sampled : _GEN_1467; // @[Microcode.scala 513:32 69:15]
  wire [7:0] _GEN_1493 = IR == 8'h32 ? E_sampled : _GEN_1468; // @[Microcode.scala 513:32 70:15]
  wire [3:0] _GEN_1494 = IR == 8'h32 ? 4'h0 : _GEN_1471; // @[Microcode.scala 110:21 513:32]
  wire [7:0] _GEN_1495 = IR == 8'h32 ? 8'h0 : _GEN_1472; // @[Microcode.scala 108:21 513:32]
  wire [7:0] _GEN_1496 = IR == 8'h32 ? 8'h0 : _GEN_1473; // @[Microcode.scala 109:21 513:32]
  wire [7:0] _GEN_1497 = IR == 8'h32 ? F_sampled : _GEN_1474; // @[Microcode.scala 513:32 66:15]
  wire  _GEN_1498 = IR == 8'h32 ? F_sampled[4] : _GEN_1475; // @[Microcode.scala 111:21 513:32]
  wire [15:0] _GEN_1499 = IR == 8'h32 ? PC_sampled : _GEN_1476; // @[Microcode.scala 513:32 63:15]
  wire [15:0] _GEN_1500 = IR == 8'h32 ? SP_sampled : _GEN_1477; // @[Microcode.scala 513:32 64:15]
  wire  _GEN_1501 = IR == 8'h32 ? IME : _GEN_1478; // @[Microcode.scala 513:32 74:21]
  wire  _GEN_1502 = IR == 8'h32 ? IME_pending : _GEN_1479; // @[Microcode.scala 513:32 75:21]
  wire [7:0] _GEN_1503 = IR == 8'h22 ? _u_result_T_8[15:8] : _GEN_1480; // @[Microcode.scala 498:32 501:13]
  wire [7:0] _GEN_1504 = IR == 8'h22 ? _u_result_T_8[7:0] : _GEN_1481; // @[Microcode.scala 498:32 502:13]
  wire [15:0] _GEN_1505 = IR == 8'h22 ? u_HL : _GEN_1482; // @[Microcode.scala 498:32 504:23]
  wire [7:0] _GEN_1506 = IR == 8'h22 ? A_sampled : _GEN_1483; // @[Microcode.scala 498:32 505:23]
  wire  _GEN_1507 = IR == 8'h22 ? _u_mcBus_memWrite_T : _GEN_1484; // @[Microcode.scala 498:32 506:23]
  wire  _GEN_1508 = IR == 8'h22 ? _u_T_1 : _GEN_1485; // @[Microcode.scala 498:32]
  wire [7:0] _GEN_1510 = IR == 8'h22 ? u_tmp8 : _GEN_1487; // @[Microcode.scala 498:32 56:24]
  wire [2:0] _GEN_1511 = IR == 8'h22 ? mcycle : _GEN_1488; // @[Microcode.scala 498:32 77:21]
  wire [7:0] _GEN_1512 = IR == 8'h22 ? A_sampled : _GEN_1489; // @[Microcode.scala 498:32 65:15]
  wire [7:0] _GEN_1513 = IR == 8'h22 ? B_sampled : _GEN_1490; // @[Microcode.scala 498:32 67:15]
  wire [7:0] _GEN_1514 = IR == 8'h22 ? C_sampled : _GEN_1491; // @[Microcode.scala 498:32 68:15]
  wire [7:0] _GEN_1515 = IR == 8'h22 ? D_sampled : _GEN_1492; // @[Microcode.scala 498:32 69:15]
  wire [7:0] _GEN_1516 = IR == 8'h22 ? E_sampled : _GEN_1493; // @[Microcode.scala 498:32 70:15]
  wire [3:0] _GEN_1517 = IR == 8'h22 ? 4'h0 : _GEN_1494; // @[Microcode.scala 110:21 498:32]
  wire [7:0] _GEN_1518 = IR == 8'h22 ? 8'h0 : _GEN_1495; // @[Microcode.scala 108:21 498:32]
  wire [7:0] _GEN_1519 = IR == 8'h22 ? 8'h0 : _GEN_1496; // @[Microcode.scala 109:21 498:32]
  wire [7:0] _GEN_1520 = IR == 8'h22 ? F_sampled : _GEN_1497; // @[Microcode.scala 498:32 66:15]
  wire  _GEN_1521 = IR == 8'h22 ? F_sampled[4] : _GEN_1498; // @[Microcode.scala 111:21 498:32]
  wire [15:0] _GEN_1522 = IR == 8'h22 ? PC_sampled : _GEN_1499; // @[Microcode.scala 498:32 63:15]
  wire [15:0] _GEN_1523 = IR == 8'h22 ? SP_sampled : _GEN_1500; // @[Microcode.scala 498:32 64:15]
  wire  _GEN_1524 = IR == 8'h22 ? IME : _GEN_1501; // @[Microcode.scala 498:32 74:21]
  wire  _GEN_1525 = IR == 8'h22 ? IME_pending : _GEN_1502; // @[Microcode.scala 498:32 75:21]
  wire [15:0] _GEN_1526 = IR == 8'h3a ? _GEN_248 : _GEN_1505; // @[Microcode.scala 467:32]
  wire [7:0] _GEN_1528 = IR == 8'h3a ? _GEN_250 : _GEN_1510; // @[Microcode.scala 467:32]
  wire [2:0] _GEN_1529 = IR == 8'h3a ? _GEN_253 : _GEN_1511; // @[Microcode.scala 467:32]
  wire [7:0] _GEN_1530 = IR == 8'h3a ? _GEN_254 : _GEN_1512; // @[Microcode.scala 467:32]
  wire [7:0] _GEN_1531 = IR == 8'h3a ? _GEN_268 : _GEN_1503; // @[Microcode.scala 467:32]
  wire [7:0] _GEN_1532 = IR == 8'h3a ? _GEN_269 : _GEN_1504; // @[Microcode.scala 467:32]
  wire  _GEN_1533 = IR == 8'h3a ? _GEN_255 : _GEN_1508; // @[Microcode.scala 467:32]
  wire [7:0] _GEN_1534 = IR == 8'h3a ? 8'h0 : _GEN_1506; // @[Microcode.scala 467:32 83:21]
  wire  _GEN_1535 = IR == 8'h3a ? 1'h0 : _GEN_1507; // @[Microcode.scala 467:32 82:21]
  wire [7:0] _GEN_1536 = IR == 8'h3a ? B_sampled : _GEN_1513; // @[Microcode.scala 467:32 67:15]
  wire [7:0] _GEN_1537 = IR == 8'h3a ? C_sampled : _GEN_1514; // @[Microcode.scala 467:32 68:15]
  wire [7:0] _GEN_1538 = IR == 8'h3a ? D_sampled : _GEN_1515; // @[Microcode.scala 467:32 69:15]
  wire [7:0] _GEN_1539 = IR == 8'h3a ? E_sampled : _GEN_1516; // @[Microcode.scala 467:32 70:15]
  wire [3:0] _GEN_1540 = IR == 8'h3a ? 4'h0 : _GEN_1517; // @[Microcode.scala 110:21 467:32]
  wire [7:0] _GEN_1541 = IR == 8'h3a ? 8'h0 : _GEN_1518; // @[Microcode.scala 108:21 467:32]
  wire [7:0] _GEN_1542 = IR == 8'h3a ? 8'h0 : _GEN_1519; // @[Microcode.scala 109:21 467:32]
  wire [7:0] _GEN_1543 = IR == 8'h3a ? F_sampled : _GEN_1520; // @[Microcode.scala 467:32 66:15]
  wire  _GEN_1544 = IR == 8'h3a ? F_sampled[4] : _GEN_1521; // @[Microcode.scala 111:21 467:32]
  wire [15:0] _GEN_1545 = IR == 8'h3a ? PC_sampled : _GEN_1522; // @[Microcode.scala 467:32 63:15]
  wire [15:0] _GEN_1546 = IR == 8'h3a ? SP_sampled : _GEN_1523; // @[Microcode.scala 467:32 64:15]
  wire  _GEN_1547 = IR == 8'h3a ? IME : _GEN_1524; // @[Microcode.scala 467:32 74:21]
  wire  _GEN_1548 = IR == 8'h3a ? IME_pending : _GEN_1525; // @[Microcode.scala 467:32 75:21]
  wire [15:0] _GEN_1549 = IR == 8'h2a ? _GEN_248 : _GEN_1526; // @[Microcode.scala 431:32]
  wire [7:0] _GEN_1551 = IR == 8'h2a ? _GEN_250 : _GEN_1528; // @[Microcode.scala 431:32]
  wire [7:0] _GEN_1552 = IR == 8'h2a ? _GEN_251 : _GEN_1531; // @[Microcode.scala 431:32]
  wire [7:0] _GEN_1553 = IR == 8'h2a ? _GEN_252 : _GEN_1532; // @[Microcode.scala 431:32]
  wire [2:0] _GEN_1554 = IR == 8'h2a ? _GEN_253 : _GEN_1529; // @[Microcode.scala 431:32]
  wire [7:0] _GEN_1555 = IR == 8'h2a ? _GEN_254 : _GEN_1530; // @[Microcode.scala 431:32]
  wire  _GEN_1556 = IR == 8'h2a ? _GEN_255 : _GEN_1533; // @[Microcode.scala 431:32]
  wire [7:0] _GEN_1557 = IR == 8'h2a ? 8'h0 : _GEN_1534; // @[Microcode.scala 431:32 83:21]
  wire  _GEN_1558 = IR == 8'h2a ? 1'h0 : _GEN_1535; // @[Microcode.scala 431:32 82:21]
  wire [7:0] _GEN_1559 = IR == 8'h2a ? B_sampled : _GEN_1536; // @[Microcode.scala 431:32 67:15]
  wire [7:0] _GEN_1560 = IR == 8'h2a ? C_sampled : _GEN_1537; // @[Microcode.scala 431:32 68:15]
  wire [7:0] _GEN_1561 = IR == 8'h2a ? D_sampled : _GEN_1538; // @[Microcode.scala 431:32 69:15]
  wire [7:0] _GEN_1562 = IR == 8'h2a ? E_sampled : _GEN_1539; // @[Microcode.scala 431:32 70:15]
  wire [3:0] _GEN_1563 = IR == 8'h2a ? 4'h0 : _GEN_1540; // @[Microcode.scala 110:21 431:32]
  wire [7:0] _GEN_1564 = IR == 8'h2a ? 8'h0 : _GEN_1541; // @[Microcode.scala 108:21 431:32]
  wire [7:0] _GEN_1565 = IR == 8'h2a ? 8'h0 : _GEN_1542; // @[Microcode.scala 109:21 431:32]
  wire [7:0] _GEN_1566 = IR == 8'h2a ? F_sampled : _GEN_1543; // @[Microcode.scala 431:32 66:15]
  wire  _GEN_1567 = IR == 8'h2a ? F_sampled[4] : _GEN_1544; // @[Microcode.scala 111:21 431:32]
  wire [15:0] _GEN_1568 = IR == 8'h2a ? PC_sampled : _GEN_1545; // @[Microcode.scala 431:32 63:15]
  wire [15:0] _GEN_1569 = IR == 8'h2a ? SP_sampled : _GEN_1546; // @[Microcode.scala 431:32 64:15]
  wire  _GEN_1570 = IR == 8'h2a ? IME : _GEN_1547; // @[Microcode.scala 431:32 74:21]
  wire  _GEN_1571 = IR == 8'h2a ? IME_pending : _GEN_1548; // @[Microcode.scala 431:32 75:21]
  wire [15:0] _GEN_1572 = IR == 8'h1a ? _GEN_237 : _GEN_1549; // @[Microcode.scala 415:32]
  wire [7:0] _GEN_1574 = IR == 8'h1a ? _GEN_239 : _GEN_1555; // @[Microcode.scala 415:32]
  wire  _GEN_1575 = IR == 8'h1a ? _u_T_1 : _GEN_1556; // @[Microcode.scala 415:32]
  wire [7:0] _GEN_1576 = IR == 8'h1a ? u_tmp8 : _GEN_1551; // @[Microcode.scala 415:32 56:24]
  wire [7:0] _GEN_1577 = IR == 8'h1a ? H_sampled : _GEN_1552; // @[Microcode.scala 415:32 71:15]
  wire [7:0] _GEN_1578 = IR == 8'h1a ? L_sampled : _GEN_1553; // @[Microcode.scala 415:32 72:15]
  wire [2:0] _GEN_1579 = IR == 8'h1a ? mcycle : _GEN_1554; // @[Microcode.scala 415:32 77:21]
  wire [7:0] _GEN_1580 = IR == 8'h1a ? 8'h0 : _GEN_1557; // @[Microcode.scala 415:32 83:21]
  wire  _GEN_1581 = IR == 8'h1a ? 1'h0 : _GEN_1558; // @[Microcode.scala 415:32 82:21]
  wire [7:0] _GEN_1582 = IR == 8'h1a ? B_sampled : _GEN_1559; // @[Microcode.scala 415:32 67:15]
  wire [7:0] _GEN_1583 = IR == 8'h1a ? C_sampled : _GEN_1560; // @[Microcode.scala 415:32 68:15]
  wire [7:0] _GEN_1584 = IR == 8'h1a ? D_sampled : _GEN_1561; // @[Microcode.scala 415:32 69:15]
  wire [7:0] _GEN_1585 = IR == 8'h1a ? E_sampled : _GEN_1562; // @[Microcode.scala 415:32 70:15]
  wire [3:0] _GEN_1586 = IR == 8'h1a ? 4'h0 : _GEN_1563; // @[Microcode.scala 110:21 415:32]
  wire [7:0] _GEN_1587 = IR == 8'h1a ? 8'h0 : _GEN_1564; // @[Microcode.scala 108:21 415:32]
  wire [7:0] _GEN_1588 = IR == 8'h1a ? 8'h0 : _GEN_1565; // @[Microcode.scala 109:21 415:32]
  wire [7:0] _GEN_1589 = IR == 8'h1a ? F_sampled : _GEN_1566; // @[Microcode.scala 415:32 66:15]
  wire  _GEN_1590 = IR == 8'h1a ? F_sampled[4] : _GEN_1567; // @[Microcode.scala 111:21 415:32]
  wire [15:0] _GEN_1591 = IR == 8'h1a ? PC_sampled : _GEN_1568; // @[Microcode.scala 415:32 63:15]
  wire [15:0] _GEN_1592 = IR == 8'h1a ? SP_sampled : _GEN_1569; // @[Microcode.scala 415:32 64:15]
  wire  _GEN_1593 = IR == 8'h1a ? IME : _GEN_1570; // @[Microcode.scala 415:32 74:21]
  wire  _GEN_1594 = IR == 8'h1a ? IME_pending : _GEN_1571; // @[Microcode.scala 415:32 75:21]
  wire [15:0] _GEN_1595 = IR == 8'h36 ? _GEN_233 : _GEN_1572; // @[Microcode.scala 397:32]
  wire  _GEN_1596 = IR == 8'h36 ? _u_T_128 : _GEN_1581; // @[Microcode.scala 397:32]
  wire [7:0] _GEN_1597 = IR == 8'h36 ? _GEN_235 : _GEN_1580; // @[Microcode.scala 397:32]
  wire  _GEN_1598 = IR == 8'h36 ? _GEN_236 : _GEN_1575; // @[Microcode.scala 397:32]
  wire [7:0] _GEN_1600 = IR == 8'h36 ? A_sampled : _GEN_1574; // @[Microcode.scala 397:32 65:15]
  wire [7:0] _GEN_1601 = IR == 8'h36 ? u_tmp8 : _GEN_1576; // @[Microcode.scala 397:32 56:24]
  wire [7:0] _GEN_1602 = IR == 8'h36 ? H_sampled : _GEN_1577; // @[Microcode.scala 397:32 71:15]
  wire [7:0] _GEN_1603 = IR == 8'h36 ? L_sampled : _GEN_1578; // @[Microcode.scala 397:32 72:15]
  wire [2:0] _GEN_1604 = IR == 8'h36 ? mcycle : _GEN_1579; // @[Microcode.scala 397:32 77:21]
  wire [7:0] _GEN_1605 = IR == 8'h36 ? B_sampled : _GEN_1582; // @[Microcode.scala 397:32 67:15]
  wire [7:0] _GEN_1606 = IR == 8'h36 ? C_sampled : _GEN_1583; // @[Microcode.scala 397:32 68:15]
  wire [7:0] _GEN_1607 = IR == 8'h36 ? D_sampled : _GEN_1584; // @[Microcode.scala 397:32 69:15]
  wire [7:0] _GEN_1608 = IR == 8'h36 ? E_sampled : _GEN_1585; // @[Microcode.scala 397:32 70:15]
  wire [3:0] _GEN_1609 = IR == 8'h36 ? 4'h0 : _GEN_1586; // @[Microcode.scala 110:21 397:32]
  wire [7:0] _GEN_1610 = IR == 8'h36 ? 8'h0 : _GEN_1587; // @[Microcode.scala 108:21 397:32]
  wire [7:0] _GEN_1611 = IR == 8'h36 ? 8'h0 : _GEN_1588; // @[Microcode.scala 109:21 397:32]
  wire [7:0] _GEN_1612 = IR == 8'h36 ? F_sampled : _GEN_1589; // @[Microcode.scala 397:32 66:15]
  wire  _GEN_1613 = IR == 8'h36 ? F_sampled[4] : _GEN_1590; // @[Microcode.scala 111:21 397:32]
  wire [15:0] _GEN_1614 = IR == 8'h36 ? PC_sampled : _GEN_1591; // @[Microcode.scala 397:32 63:15]
  wire [15:0] _GEN_1615 = IR == 8'h36 ? SP_sampled : _GEN_1592; // @[Microcode.scala 397:32 64:15]
  wire  _GEN_1616 = IR == 8'h36 ? IME : _GEN_1593; // @[Microcode.scala 397:32 74:21]
  wire  _GEN_1617 = IR == 8'h36 ? IME_pending : _GEN_1594; // @[Microcode.scala 397:32 75:21]
  wire [15:0] _GEN_1618 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? u_HL : _GEN_1595; // @[Microcode.scala 385:68 388:23]
  wire  _GEN_1619 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? _u_mcBus_memWrite_T : _GEN_1596; // @[Microcode.scala 385:68 389:23]
  wire [7:0] _GEN_1620 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? _u_T_98 : _GEN_1597; // @[Microcode.scala 385:68 390:23]
  wire  _GEN_1621 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? _u_T_1 : _GEN_1598; // @[Microcode.scala 385:68]
  wire [7:0] _GEN_1623 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? A_sampled : _GEN_1600; // @[Microcode.scala 385:68 65:15]
  wire [7:0] _GEN_1624 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? u_tmp8 : _GEN_1601; // @[Microcode.scala 385:68 56:24]
  wire [7:0] _GEN_1625 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? H_sampled : _GEN_1602; // @[Microcode.scala 385:68 71:15]
  wire [7:0] _GEN_1626 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? L_sampled : _GEN_1603; // @[Microcode.scala 385:68 72:15]
  wire [2:0] _GEN_1627 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? mcycle : _GEN_1604; // @[Microcode.scala 385:68 77:21]
  wire [7:0] _GEN_1628 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? B_sampled : _GEN_1605; // @[Microcode.scala 385:68 67:15]
  wire [7:0] _GEN_1629 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? C_sampled : _GEN_1606; // @[Microcode.scala 385:68 68:15]
  wire [7:0] _GEN_1630 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? D_sampled : _GEN_1607; // @[Microcode.scala 385:68 69:15]
  wire [7:0] _GEN_1631 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? E_sampled : _GEN_1608; // @[Microcode.scala 385:68 70:15]
  wire [3:0] _GEN_1632 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? 4'h0 : _GEN_1609; // @[Microcode.scala 110:21 385:68]
  wire [7:0] _GEN_1633 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? 8'h0 : _GEN_1610; // @[Microcode.scala 108:21 385:68]
  wire [7:0] _GEN_1634 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? 8'h0 : _GEN_1611; // @[Microcode.scala 109:21 385:68]
  wire [7:0] _GEN_1635 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? F_sampled : _GEN_1612; // @[Microcode.scala 385:68 66:15]
  wire  _GEN_1636 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? F_sampled[4] : _GEN_1613; // @[Microcode.scala 111:21 385:68]
  wire [15:0] _GEN_1637 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? PC_sampled : _GEN_1614; // @[Microcode.scala 385:68 63:15]
  wire [15:0] _GEN_1638 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? SP_sampled : _GEN_1615; // @[Microcode.scala 385:68 64:15]
  wire  _GEN_1639 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? IME : _GEN_1616; // @[Microcode.scala 385:68 74:21]
  wire  _GEN_1640 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? IME_pending : _GEN_1617; // @[Microcode.scala 385:68 75:21]
  wire [7:0] _GEN_1641 = _u_T_29 == 8'h6 & _u_T_33 ? _GEN_223 : _GEN_1628; // @[Microcode.scala 375:73]
  wire [7:0] _GEN_1642 = _u_T_29 == 8'h6 & _u_T_33 ? _GEN_224 : _GEN_1629; // @[Microcode.scala 375:73]
  wire [7:0] _GEN_1643 = _u_T_29 == 8'h6 & _u_T_33 ? _GEN_225 : _GEN_1630; // @[Microcode.scala 375:73]
  wire [7:0] _GEN_1644 = _u_T_29 == 8'h6 & _u_T_33 ? _GEN_226 : _GEN_1631; // @[Microcode.scala 375:73]
  wire [7:0] _GEN_1645 = _u_T_29 == 8'h6 & _u_T_33 ? _GEN_227 : _GEN_1625; // @[Microcode.scala 375:73]
  wire [7:0] _GEN_1646 = _u_T_29 == 8'h6 & _u_T_33 ? _GEN_228 : _GEN_1626; // @[Microcode.scala 375:73]
  wire [7:0] _GEN_1647 = _u_T_29 == 8'h6 & _u_T_33 ? _GEN_229 : _GEN_1623; // @[Microcode.scala 375:73]
  wire  _GEN_1648 = _u_T_29 == 8'h6 & _u_T_33 ? _u_T_1 : _GEN_1621; // @[Microcode.scala 375:73]
  wire [15:0] _GEN_1649 = _u_T_29 == 8'h6 & _u_T_33 ? 16'h0 : _GEN_1618; // @[Microcode.scala 375:73 80:21]
  wire  _GEN_1650 = _u_T_29 == 8'h6 & _u_T_33 ? 1'h0 : _GEN_1619; // @[Microcode.scala 375:73 82:21]
  wire [7:0] _GEN_1651 = _u_T_29 == 8'h6 & _u_T_33 ? 8'h0 : _GEN_1620; // @[Microcode.scala 375:73 83:21]
  wire [7:0] _GEN_1653 = _u_T_29 == 8'h6 & _u_T_33 ? u_tmp8 : _GEN_1624; // @[Microcode.scala 375:73 56:24]
  wire [2:0] _GEN_1654 = _u_T_29 == 8'h6 & _u_T_33 ? mcycle : _GEN_1627; // @[Microcode.scala 375:73 77:21]
  wire [3:0] _GEN_1655 = _u_T_29 == 8'h6 & _u_T_33 ? 4'h0 : _GEN_1632; // @[Microcode.scala 110:21 375:73]
  wire [7:0] _GEN_1656 = _u_T_29 == 8'h6 & _u_T_33 ? 8'h0 : _GEN_1633; // @[Microcode.scala 108:21 375:73]
  wire [7:0] _GEN_1657 = _u_T_29 == 8'h6 & _u_T_33 ? 8'h0 : _GEN_1634; // @[Microcode.scala 109:21 375:73]
  wire [7:0] _GEN_1658 = _u_T_29 == 8'h6 & _u_T_33 ? F_sampled : _GEN_1635; // @[Microcode.scala 375:73 66:15]
  wire  _GEN_1659 = _u_T_29 == 8'h6 & _u_T_33 ? F_sampled[4] : _GEN_1636; // @[Microcode.scala 111:21 375:73]
  wire [15:0] _GEN_1660 = _u_T_29 == 8'h6 & _u_T_33 ? PC_sampled : _GEN_1637; // @[Microcode.scala 375:73 63:15]
  wire [15:0] _GEN_1661 = _u_T_29 == 8'h6 & _u_T_33 ? SP_sampled : _GEN_1638; // @[Microcode.scala 375:73 64:15]
  wire  _GEN_1662 = _u_T_29 == 8'h6 & _u_T_33 ? IME : _GEN_1639; // @[Microcode.scala 375:73 74:21]
  wire  _GEN_1663 = _u_T_29 == 8'h6 & _u_T_33 ? IME_pending : _GEN_1640; // @[Microcode.scala 375:73 75:21]
  wire [7:0] _GEN_1664 = _u_T_84 ? _GEN_194 : _GEN_1641; // @[Microcode.scala 366:37]
  wire [7:0] _GEN_1665 = _u_T_84 ? _GEN_195 : _GEN_1642; // @[Microcode.scala 366:37]
  wire [7:0] _GEN_1666 = _u_T_84 ? _GEN_196 : _GEN_1643; // @[Microcode.scala 366:37]
  wire [7:0] _GEN_1667 = _u_T_84 ? _GEN_197 : _GEN_1644; // @[Microcode.scala 366:37]
  wire [7:0] _GEN_1668 = _u_T_84 ? _GEN_198 : _GEN_1645; // @[Microcode.scala 366:37]
  wire [7:0] _GEN_1669 = _u_T_84 ? _GEN_199 : _GEN_1646; // @[Microcode.scala 366:37]
  wire [7:0] _GEN_1670 = _u_T_84 ? _GEN_200 : _GEN_1647; // @[Microcode.scala 366:37]
  wire  _GEN_1671 = _u_T_84 ? _u_T_1 : _GEN_1648; // @[Microcode.scala 366:37]
  wire [15:0] _GEN_1672 = _u_T_84 ? 16'h0 : _GEN_1649; // @[Microcode.scala 366:37 80:21]
  wire  _GEN_1673 = _u_T_84 ? 1'h0 : _GEN_1650; // @[Microcode.scala 366:37 82:21]
  wire [7:0] _GEN_1674 = _u_T_84 ? 8'h0 : _GEN_1651; // @[Microcode.scala 366:37 83:21]
  wire [7:0] _GEN_1676 = _u_T_84 ? u_tmp8 : _GEN_1653; // @[Microcode.scala 366:37 56:24]
  wire [2:0] _GEN_1677 = _u_T_84 ? mcycle : _GEN_1654; // @[Microcode.scala 366:37 77:21]
  wire [3:0] _GEN_1678 = _u_T_84 ? 4'h0 : _GEN_1655; // @[Microcode.scala 110:21 366:37]
  wire [7:0] _GEN_1679 = _u_T_84 ? 8'h0 : _GEN_1656; // @[Microcode.scala 108:21 366:37]
  wire [7:0] _GEN_1680 = _u_T_84 ? 8'h0 : _GEN_1657; // @[Microcode.scala 109:21 366:37]
  wire [7:0] _GEN_1681 = _u_T_84 ? F_sampled : _GEN_1658; // @[Microcode.scala 366:37 66:15]
  wire  _GEN_1682 = _u_T_84 ? F_sampled[4] : _GEN_1659; // @[Microcode.scala 111:21 366:37]
  wire [15:0] _GEN_1683 = _u_T_84 ? PC_sampled : _GEN_1660; // @[Microcode.scala 366:37 63:15]
  wire [15:0] _GEN_1684 = _u_T_84 ? SP_sampled : _GEN_1661; // @[Microcode.scala 366:37 64:15]
  wire  _GEN_1685 = _u_T_84 ? IME : _GEN_1662; // @[Microcode.scala 366:37 74:21]
  wire  _GEN_1686 = _u_T_84 ? IME_pending : _GEN_1663; // @[Microcode.scala 366:37 75:21]
  wire [15:0] _GEN_1687 = IR == 8'he9 ? u_HL : _GEN_1683; // @[Microcode.scala 355:32 356:14]
  wire  _GEN_1688 = IR == 8'he9 ? _u_T_1 : _GEN_1671; // @[Microcode.scala 355:32]
  wire [7:0] _GEN_1689 = IR == 8'he9 ? B_sampled : _GEN_1664; // @[Microcode.scala 355:32 67:15]
  wire [7:0] _GEN_1690 = IR == 8'he9 ? C_sampled : _GEN_1665; // @[Microcode.scala 355:32 68:15]
  wire [7:0] _GEN_1691 = IR == 8'he9 ? D_sampled : _GEN_1666; // @[Microcode.scala 355:32 69:15]
  wire [7:0] _GEN_1692 = IR == 8'he9 ? E_sampled : _GEN_1667; // @[Microcode.scala 355:32 70:15]
  wire [7:0] _GEN_1693 = IR == 8'he9 ? H_sampled : _GEN_1668; // @[Microcode.scala 355:32 71:15]
  wire [7:0] _GEN_1694 = IR == 8'he9 ? L_sampled : _GEN_1669; // @[Microcode.scala 355:32 72:15]
  wire [7:0] _GEN_1695 = IR == 8'he9 ? A_sampled : _GEN_1670; // @[Microcode.scala 355:32 65:15]
  wire [15:0] _GEN_1696 = IR == 8'he9 ? 16'h0 : _GEN_1672; // @[Microcode.scala 355:32 80:21]
  wire  _GEN_1697 = IR == 8'he9 ? 1'h0 : _GEN_1673; // @[Microcode.scala 355:32 82:21]
  wire [7:0] _GEN_1698 = IR == 8'he9 ? 8'h0 : _GEN_1674; // @[Microcode.scala 355:32 83:21]
  wire [7:0] _GEN_1700 = IR == 8'he9 ? u_tmp8 : _GEN_1676; // @[Microcode.scala 355:32 56:24]
  wire [2:0] _GEN_1701 = IR == 8'he9 ? mcycle : _GEN_1677; // @[Microcode.scala 355:32 77:21]
  wire [3:0] _GEN_1702 = IR == 8'he9 ? 4'h0 : _GEN_1678; // @[Microcode.scala 110:21 355:32]
  wire [7:0] _GEN_1703 = IR == 8'he9 ? 8'h0 : _GEN_1679; // @[Microcode.scala 108:21 355:32]
  wire [7:0] _GEN_1704 = IR == 8'he9 ? 8'h0 : _GEN_1680; // @[Microcode.scala 109:21 355:32]
  wire [7:0] _GEN_1705 = IR == 8'he9 ? F_sampled : _GEN_1681; // @[Microcode.scala 355:32 66:15]
  wire  _GEN_1706 = IR == 8'he9 ? F_sampled[4] : _GEN_1682; // @[Microcode.scala 111:21 355:32]
  wire [15:0] _GEN_1707 = IR == 8'he9 ? SP_sampled : _GEN_1684; // @[Microcode.scala 355:32 64:15]
  wire  _GEN_1708 = IR == 8'he9 ? IME : _GEN_1685; // @[Microcode.scala 355:32 74:21]
  wire  _GEN_1709 = IR == 8'he9 ? IME_pending : _GEN_1686; // @[Microcode.scala 355:32 75:21]
  wire [15:0] _GEN_1710 = IR == 8'h35 ? _GEN_131 : _GEN_1696; // @[Microcode.scala 310:32]
  wire [7:0] _GEN_1712 = IR == 8'h35 ? _GEN_133 : _GEN_1700; // @[Microcode.scala 310:32]
  wire [2:0] _GEN_1713 = IR == 8'h35 ? _GEN_134 : _GEN_1701; // @[Microcode.scala 310:32]
  wire [3:0] _GEN_1714 = IR == 8'h35 ? _GEN_165 : _GEN_1702; // @[Microcode.scala 310:32]
  wire [7:0] _GEN_1715 = IR == 8'h35 ? _GEN_136 : _GEN_1703; // @[Microcode.scala 310:32]
  wire [7:0] _GEN_1716 = IR == 8'h35 ? 8'h0 : _GEN_1704; // @[Microcode.scala 310:32]
  wire [7:0] _GEN_1717 = IR == 8'h35 ? _GEN_168 : _GEN_1705; // @[Microcode.scala 310:32]
  wire  _GEN_1718 = IR == 8'h35 ? _GEN_139 : _GEN_1697; // @[Microcode.scala 310:32]
  wire [7:0] _GEN_1719 = IR == 8'h35 ? _GEN_140 : _GEN_1698; // @[Microcode.scala 310:32]
  wire  _GEN_1720 = IR == 8'h35 ? _GEN_141 : _GEN_1688; // @[Microcode.scala 310:32]
  wire [15:0] _GEN_1721 = IR == 8'h35 ? PC_sampled : _GEN_1687; // @[Microcode.scala 310:32 63:15]
  wire [7:0] _GEN_1722 = IR == 8'h35 ? B_sampled : _GEN_1689; // @[Microcode.scala 310:32 67:15]
  wire [7:0] _GEN_1723 = IR == 8'h35 ? C_sampled : _GEN_1690; // @[Microcode.scala 310:32 68:15]
  wire [7:0] _GEN_1724 = IR == 8'h35 ? D_sampled : _GEN_1691; // @[Microcode.scala 310:32 69:15]
  wire [7:0] _GEN_1725 = IR == 8'h35 ? E_sampled : _GEN_1692; // @[Microcode.scala 310:32 70:15]
  wire [7:0] _GEN_1726 = IR == 8'h35 ? H_sampled : _GEN_1693; // @[Microcode.scala 310:32 71:15]
  wire [7:0] _GEN_1727 = IR == 8'h35 ? L_sampled : _GEN_1694; // @[Microcode.scala 310:32 72:15]
  wire [7:0] _GEN_1728 = IR == 8'h35 ? A_sampled : _GEN_1695; // @[Microcode.scala 310:32 65:15]
  wire  _GEN_1729 = IR == 8'h35 ? F_sampled[4] : _GEN_1706; // @[Microcode.scala 111:21 310:32]
  wire [15:0] _GEN_1730 = IR == 8'h35 ? SP_sampled : _GEN_1707; // @[Microcode.scala 310:32 64:15]
  wire  _GEN_1731 = IR == 8'h35 ? IME : _GEN_1708; // @[Microcode.scala 310:32 74:21]
  wire  _GEN_1732 = IR == 8'h35 ? IME_pending : _GEN_1709; // @[Microcode.scala 310:32 75:21]
  wire [15:0] _GEN_1733 = IR == 8'h34 ? _GEN_131 : _GEN_1710; // @[Microcode.scala 265:32]
  wire [7:0] _GEN_1735 = IR == 8'h34 ? _GEN_133 : _GEN_1712; // @[Microcode.scala 265:32]
  wire [2:0] _GEN_1736 = IR == 8'h34 ? _GEN_134 : _GEN_1713; // @[Microcode.scala 265:32]
  wire [3:0] _GEN_1737 = IR == 8'h34 ? _GEN_135 : _GEN_1714; // @[Microcode.scala 265:32]
  wire [7:0] _GEN_1738 = IR == 8'h34 ? _GEN_136 : _GEN_1715; // @[Microcode.scala 265:32]
  wire [7:0] _GEN_1739 = IR == 8'h34 ? 8'h0 : _GEN_1716; // @[Microcode.scala 265:32]
  wire [7:0] _GEN_1740 = IR == 8'h34 ? _GEN_138 : _GEN_1717; // @[Microcode.scala 265:32]
  wire  _GEN_1741 = IR == 8'h34 ? _GEN_139 : _GEN_1718; // @[Microcode.scala 265:32]
  wire [7:0] _GEN_1742 = IR == 8'h34 ? _GEN_140 : _GEN_1719; // @[Microcode.scala 265:32]
  wire  _GEN_1743 = IR == 8'h34 ? _GEN_141 : _GEN_1720; // @[Microcode.scala 265:32]
  wire [15:0] _GEN_1744 = IR == 8'h34 ? PC_sampled : _GEN_1721; // @[Microcode.scala 265:32 63:15]
  wire [7:0] _GEN_1745 = IR == 8'h34 ? B_sampled : _GEN_1722; // @[Microcode.scala 265:32 67:15]
  wire [7:0] _GEN_1746 = IR == 8'h34 ? C_sampled : _GEN_1723; // @[Microcode.scala 265:32 68:15]
  wire [7:0] _GEN_1747 = IR == 8'h34 ? D_sampled : _GEN_1724; // @[Microcode.scala 265:32 69:15]
  wire [7:0] _GEN_1748 = IR == 8'h34 ? E_sampled : _GEN_1725; // @[Microcode.scala 265:32 70:15]
  wire [7:0] _GEN_1749 = IR == 8'h34 ? H_sampled : _GEN_1726; // @[Microcode.scala 265:32 71:15]
  wire [7:0] _GEN_1750 = IR == 8'h34 ? L_sampled : _GEN_1727; // @[Microcode.scala 265:32 72:15]
  wire [7:0] _GEN_1751 = IR == 8'h34 ? A_sampled : _GEN_1728; // @[Microcode.scala 265:32 65:15]
  wire  _GEN_1752 = IR == 8'h34 ? F_sampled[4] : _GEN_1729; // @[Microcode.scala 111:21 265:32]
  wire [15:0] _GEN_1753 = IR == 8'h34 ? SP_sampled : _GEN_1730; // @[Microcode.scala 265:32 64:15]
  wire  _GEN_1754 = IR == 8'h34 ? IME : _GEN_1731; // @[Microcode.scala 265:32 74:21]
  wire  _GEN_1755 = IR == 8'h34 ? IME_pending : _GEN_1732; // @[Microcode.scala 265:32 75:21]
  wire [3:0] _GEN_1756 = _u_T_29 == 8'h5 & _u_T_33 ? 4'h9 : _GEN_1737; // @[Microcode.scala 250:73 254:17]
  wire [7:0] _GEN_1757 = _u_T_29 == 8'h5 & _u_T_33 ? u_oldVal : _GEN_1738; // @[Microcode.scala 250:73 255:17]
  wire [7:0] _GEN_1758 = _u_T_29 == 8'h5 & _u_T_33 ? 8'h0 : _GEN_1739; // @[Microcode.scala 250:73 256:17]
  wire [7:0] _GEN_1759 = _u_T_29 == 8'h5 & _u_T_33 ? _GEN_75 : _GEN_1745; // @[Microcode.scala 250:73]
  wire [7:0] _GEN_1760 = _u_T_29 == 8'h5 & _u_T_33 ? _GEN_76 : _GEN_1746; // @[Microcode.scala 250:73]
  wire [7:0] _GEN_1761 = _u_T_29 == 8'h5 & _u_T_33 ? _GEN_77 : _GEN_1747; // @[Microcode.scala 250:73]
  wire [7:0] _GEN_1762 = _u_T_29 == 8'h5 & _u_T_33 ? _GEN_78 : _GEN_1748; // @[Microcode.scala 250:73]
  wire [7:0] _GEN_1763 = _u_T_29 == 8'h5 & _u_T_33 ? _GEN_79 : _GEN_1749; // @[Microcode.scala 250:73]
  wire [7:0] _GEN_1764 = _u_T_29 == 8'h5 & _u_T_33 ? _GEN_80 : _GEN_1750; // @[Microcode.scala 250:73]
  wire [7:0] _GEN_1765 = _u_T_29 == 8'h5 & _u_T_33 ? _GEN_81 : _GEN_1751; // @[Microcode.scala 250:73]
  wire [7:0] _GEN_1766 = _u_T_29 == 8'h5 & _u_T_33 ? _u_out_F_T_2 : _GEN_1740; // @[Microcode.scala 105:13 250:73]
  wire  _GEN_1767 = _u_T_29 == 8'h5 & _u_T_33 ? _u_T_1 : _GEN_1743; // @[Microcode.scala 250:73]
  wire [15:0] _GEN_1768 = _u_T_29 == 8'h5 & _u_T_33 ? 16'h0 : _GEN_1733; // @[Microcode.scala 250:73 80:21]
  wire [7:0] _GEN_1770 = _u_T_29 == 8'h5 & _u_T_33 ? u_tmp8 : _GEN_1735; // @[Microcode.scala 250:73 56:24]
  wire [2:0] _GEN_1771 = _u_T_29 == 8'h5 & _u_T_33 ? mcycle : _GEN_1736; // @[Microcode.scala 250:73 77:21]
  wire  _GEN_1772 = _u_T_29 == 8'h5 & _u_T_33 ? 1'h0 : _GEN_1741; // @[Microcode.scala 250:73 82:21]
  wire [7:0] _GEN_1773 = _u_T_29 == 8'h5 & _u_T_33 ? 8'h0 : _GEN_1742; // @[Microcode.scala 250:73 83:21]
  wire [15:0] _GEN_1774 = _u_T_29 == 8'h5 & _u_T_33 ? PC_sampled : _GEN_1744; // @[Microcode.scala 250:73 63:15]
  wire  _GEN_1775 = _u_T_29 == 8'h5 & _u_T_33 ? F_sampled[4] : _GEN_1752; // @[Microcode.scala 111:21 250:73]
  wire [15:0] _GEN_1776 = _u_T_29 == 8'h5 & _u_T_33 ? SP_sampled : _GEN_1753; // @[Microcode.scala 250:73 64:15]
  wire  _GEN_1777 = _u_T_29 == 8'h5 & _u_T_33 ? IME : _GEN_1754; // @[Microcode.scala 250:73 74:21]
  wire  _GEN_1778 = _u_T_29 == 8'h5 & _u_T_33 ? IME_pending : _GEN_1755; // @[Microcode.scala 250:73 75:21]
  wire [3:0] _GEN_1779 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? 4'h8 : _GEN_1756; // @[Microcode.scala 225:73 231:17]
  wire [7:0] _GEN_1780 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? u_oldVal : _GEN_1757; // @[Microcode.scala 225:73 232:17]
  wire [7:0] _GEN_1781 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? 8'h0 : _GEN_1758; // @[Microcode.scala 225:73 233:17]
  wire [7:0] _GEN_1782 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _GEN_75 : _GEN_1759; // @[Microcode.scala 225:73]
  wire [7:0] _GEN_1783 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _GEN_76 : _GEN_1760; // @[Microcode.scala 225:73]
  wire [7:0] _GEN_1784 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _GEN_77 : _GEN_1761; // @[Microcode.scala 225:73]
  wire [7:0] _GEN_1785 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _GEN_78 : _GEN_1762; // @[Microcode.scala 225:73]
  wire [7:0] _GEN_1786 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _GEN_79 : _GEN_1763; // @[Microcode.scala 225:73]
  wire [7:0] _GEN_1787 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _GEN_80 : _GEN_1764; // @[Microcode.scala 225:73]
  wire [7:0] _GEN_1788 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _GEN_81 : _GEN_1765; // @[Microcode.scala 225:73]
  wire [7:0] _GEN_1789 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _u_out_F_T_1 : _GEN_1766; // @[Microcode.scala 105:13 225:73]
  wire  _GEN_1790 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _u_T_1 : _GEN_1767; // @[Microcode.scala 225:73]
  wire [15:0] _GEN_1791 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? 16'h0 : _GEN_1768; // @[Microcode.scala 225:73 80:21]
  wire [7:0] _GEN_1793 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? u_tmp8 : _GEN_1770; // @[Microcode.scala 225:73 56:24]
  wire [2:0] _GEN_1794 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? mcycle : _GEN_1771; // @[Microcode.scala 225:73 77:21]
  wire  _GEN_1795 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? 1'h0 : _GEN_1772; // @[Microcode.scala 225:73 82:21]
  wire [7:0] _GEN_1796 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? 8'h0 : _GEN_1773; // @[Microcode.scala 225:73 83:21]
  wire [15:0] _GEN_1797 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? PC_sampled : _GEN_1774; // @[Microcode.scala 225:73 63:15]
  wire  _GEN_1798 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? F_sampled[4] : _GEN_1775; // @[Microcode.scala 111:21 225:73]
  wire [15:0] _GEN_1799 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? SP_sampled : _GEN_1776; // @[Microcode.scala 225:73 64:15]
  wire  _GEN_1800 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? IME : _GEN_1777; // @[Microcode.scala 225:73 74:21]
  wire  _GEN_1801 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? IME_pending : _GEN_1778; // @[Microcode.scala 225:73 75:21]
  wire [7:0] _GEN_1802 = _u_T_4 == 8'h9 ? u_result_2[15:8] : _GEN_1786; // @[Microcode.scala 201:44 212:13]
  wire [7:0] _GEN_1803 = _u_T_4 == 8'h9 ? u_result_2[7:0] : _GEN_1787; // @[Microcode.scala 201:44 213:13]
  wire [7:0] _GEN_1804 = _u_T_4 == 8'h9 ? _u_out_F_T : _GEN_1789; // @[Microcode.scala 105:13 201:44]
  wire  _GEN_1805 = _u_T_4 == 8'h9 ? _u_T_1 : _GEN_1790; // @[Microcode.scala 201:44]
  wire [3:0] _GEN_1806 = _u_T_4 == 8'h9 ? 4'h0 : _GEN_1779; // @[Microcode.scala 110:21 201:44]
  wire [7:0] _GEN_1807 = _u_T_4 == 8'h9 ? 8'h0 : _GEN_1780; // @[Microcode.scala 108:21 201:44]
  wire [7:0] _GEN_1808 = _u_T_4 == 8'h9 ? 8'h0 : _GEN_1781; // @[Microcode.scala 109:21 201:44]
  wire [7:0] _GEN_1809 = _u_T_4 == 8'h9 ? B_sampled : _GEN_1782; // @[Microcode.scala 201:44 67:15]
  wire [7:0] _GEN_1810 = _u_T_4 == 8'h9 ? C_sampled : _GEN_1783; // @[Microcode.scala 201:44 68:15]
  wire [7:0] _GEN_1811 = _u_T_4 == 8'h9 ? D_sampled : _GEN_1784; // @[Microcode.scala 201:44 69:15]
  wire [7:0] _GEN_1812 = _u_T_4 == 8'h9 ? E_sampled : _GEN_1785; // @[Microcode.scala 201:44 70:15]
  wire [7:0] _GEN_1813 = _u_T_4 == 8'h9 ? A_sampled : _GEN_1788; // @[Microcode.scala 201:44 65:15]
  wire [15:0] _GEN_1814 = _u_T_4 == 8'h9 ? 16'h0 : _GEN_1791; // @[Microcode.scala 201:44 80:21]
  wire [7:0] _GEN_1816 = _u_T_4 == 8'h9 ? u_tmp8 : _GEN_1793; // @[Microcode.scala 201:44 56:24]
  wire [2:0] _GEN_1817 = _u_T_4 == 8'h9 ? mcycle : _GEN_1794; // @[Microcode.scala 201:44 77:21]
  wire  _GEN_1818 = _u_T_4 == 8'h9 ? 1'h0 : _GEN_1795; // @[Microcode.scala 201:44 82:21]
  wire [7:0] _GEN_1819 = _u_T_4 == 8'h9 ? 8'h0 : _GEN_1796; // @[Microcode.scala 201:44 83:21]
  wire [15:0] _GEN_1820 = _u_T_4 == 8'h9 ? PC_sampled : _GEN_1797; // @[Microcode.scala 201:44 63:15]
  wire  _GEN_1821 = _u_T_4 == 8'h9 ? F_sampled[4] : _GEN_1798; // @[Microcode.scala 111:21 201:44]
  wire [15:0] _GEN_1822 = _u_T_4 == 8'h9 ? SP_sampled : _GEN_1799; // @[Microcode.scala 201:44 64:15]
  wire  _GEN_1823 = _u_T_4 == 8'h9 ? IME : _GEN_1800; // @[Microcode.scala 201:44 74:21]
  wire  _GEN_1824 = _u_T_4 == 8'h9 ? IME_pending : _GEN_1801; // @[Microcode.scala 201:44 75:21]
  wire [7:0] _GEN_1825 = _u_T_4 == 8'hb ? _GEN_45 : _GEN_1809; // @[Microcode.scala 181:44]
  wire [7:0] _GEN_1826 = _u_T_4 == 8'hb ? _GEN_46 : _GEN_1810; // @[Microcode.scala 181:44]
  wire [7:0] _GEN_1827 = _u_T_4 == 8'hb ? _GEN_47 : _GEN_1811; // @[Microcode.scala 181:44]
  wire [7:0] _GEN_1828 = _u_T_4 == 8'hb ? _GEN_48 : _GEN_1812; // @[Microcode.scala 181:44]
  wire [7:0] _GEN_1829 = _u_T_4 == 8'hb ? _GEN_49 : _GEN_1802; // @[Microcode.scala 181:44]
  wire [7:0] _GEN_1830 = _u_T_4 == 8'hb ? _GEN_50 : _GEN_1803; // @[Microcode.scala 181:44]
  wire [15:0] _GEN_1831 = _u_T_4 == 8'hb ? _GEN_51 : _GEN_1822; // @[Microcode.scala 181:44]
  wire  _GEN_1832 = _u_T_4 == 8'hb ? _u_T_1 : _GEN_1805; // @[Microcode.scala 181:44]
  wire [7:0] _GEN_1833 = _u_T_4 == 8'hb ? F_sampled : _GEN_1804; // @[Microcode.scala 181:44 66:15]
  wire [3:0] _GEN_1834 = _u_T_4 == 8'hb ? 4'h0 : _GEN_1806; // @[Microcode.scala 110:21 181:44]
  wire [7:0] _GEN_1835 = _u_T_4 == 8'hb ? 8'h0 : _GEN_1807; // @[Microcode.scala 108:21 181:44]
  wire [7:0] _GEN_1836 = _u_T_4 == 8'hb ? 8'h0 : _GEN_1808; // @[Microcode.scala 109:21 181:44]
  wire [7:0] _GEN_1837 = _u_T_4 == 8'hb ? A_sampled : _GEN_1813; // @[Microcode.scala 181:44 65:15]
  wire [15:0] _GEN_1838 = _u_T_4 == 8'hb ? 16'h0 : _GEN_1814; // @[Microcode.scala 181:44 80:21]
  wire [7:0] _GEN_1840 = _u_T_4 == 8'hb ? u_tmp8 : _GEN_1816; // @[Microcode.scala 181:44 56:24]
  wire [2:0] _GEN_1841 = _u_T_4 == 8'hb ? mcycle : _GEN_1817; // @[Microcode.scala 181:44 77:21]
  wire  _GEN_1842 = _u_T_4 == 8'hb ? 1'h0 : _GEN_1818; // @[Microcode.scala 181:44 82:21]
  wire [7:0] _GEN_1843 = _u_T_4 == 8'hb ? 8'h0 : _GEN_1819; // @[Microcode.scala 181:44 83:21]
  wire [15:0] _GEN_1844 = _u_T_4 == 8'hb ? PC_sampled : _GEN_1820; // @[Microcode.scala 181:44 63:15]
  wire  _GEN_1845 = _u_T_4 == 8'hb ? F_sampled[4] : _GEN_1821; // @[Microcode.scala 111:21 181:44]
  wire  _GEN_1846 = _u_T_4 == 8'hb ? IME : _GEN_1823; // @[Microcode.scala 181:44 74:21]
  wire  _GEN_1847 = _u_T_4 == 8'hb ? IME_pending : _GEN_1824; // @[Microcode.scala 181:44 75:21]
  wire [7:0] _GEN_1848 = _u_T_4 == 8'h3 ? _GEN_28 : _GEN_1825; // @[Microcode.scala 161:44]
  wire [7:0] _GEN_1849 = _u_T_4 == 8'h3 ? _GEN_29 : _GEN_1826; // @[Microcode.scala 161:44]
  wire [7:0] _GEN_1850 = _u_T_4 == 8'h3 ? _GEN_30 : _GEN_1827; // @[Microcode.scala 161:44]
  wire [7:0] _GEN_1851 = _u_T_4 == 8'h3 ? _GEN_31 : _GEN_1828; // @[Microcode.scala 161:44]
  wire [7:0] _GEN_1852 = _u_T_4 == 8'h3 ? _GEN_32 : _GEN_1829; // @[Microcode.scala 161:44]
  wire [7:0] _GEN_1853 = _u_T_4 == 8'h3 ? _GEN_33 : _GEN_1830; // @[Microcode.scala 161:44]
  wire [15:0] _GEN_1854 = _u_T_4 == 8'h3 ? _GEN_34 : _GEN_1831; // @[Microcode.scala 161:44]
  wire  _GEN_1855 = _u_T_4 == 8'h3 ? _u_T_1 : _GEN_1832; // @[Microcode.scala 161:44]
  wire [7:0] _GEN_1856 = _u_T_4 == 8'h3 ? F_sampled : _GEN_1833; // @[Microcode.scala 161:44 66:15]
  wire [3:0] _GEN_1857 = _u_T_4 == 8'h3 ? 4'h0 : _GEN_1834; // @[Microcode.scala 110:21 161:44]
  wire [7:0] _GEN_1858 = _u_T_4 == 8'h3 ? 8'h0 : _GEN_1835; // @[Microcode.scala 108:21 161:44]
  wire [7:0] _GEN_1859 = _u_T_4 == 8'h3 ? 8'h0 : _GEN_1836; // @[Microcode.scala 109:21 161:44]
  wire [7:0] _GEN_1860 = _u_T_4 == 8'h3 ? A_sampled : _GEN_1837; // @[Microcode.scala 161:44 65:15]
  wire [15:0] _GEN_1861 = _u_T_4 == 8'h3 ? 16'h0 : _GEN_1838; // @[Microcode.scala 161:44 80:21]
  wire [7:0] _GEN_1863 = _u_T_4 == 8'h3 ? u_tmp8 : _GEN_1840; // @[Microcode.scala 161:44 56:24]
  wire [2:0] _GEN_1864 = _u_T_4 == 8'h3 ? mcycle : _GEN_1841; // @[Microcode.scala 161:44 77:21]
  wire  _GEN_1865 = _u_T_4 == 8'h3 ? 1'h0 : _GEN_1842; // @[Microcode.scala 161:44 82:21]
  wire [7:0] _GEN_1866 = _u_T_4 == 8'h3 ? 8'h0 : _GEN_1843; // @[Microcode.scala 161:44 83:21]
  wire [15:0] _GEN_1867 = _u_T_4 == 8'h3 ? PC_sampled : _GEN_1844; // @[Microcode.scala 161:44 63:15]
  wire  _GEN_1868 = _u_T_4 == 8'h3 ? F_sampled[4] : _GEN_1845; // @[Microcode.scala 111:21 161:44]
  wire  _GEN_1869 = _u_T_4 == 8'h3 ? IME : _GEN_1846; // @[Microcode.scala 161:44 74:21]
  wire  _GEN_1870 = _u_T_4 == 8'h3 ? IME_pending : _GEN_1847; // @[Microcode.scala 161:44 75:21]
  wire [7:0] _GEN_1871 = _u_T_4 == 8'h1 ? _GEN_11 : _GEN_1849; // @[Microcode.scala 136:44]
  wire [7:0] _GEN_1872 = _u_T_4 == 8'h1 ? _GEN_12 : _GEN_1848; // @[Microcode.scala 136:44]
  wire [7:0] _GEN_1873 = _u_T_4 == 8'h1 ? _GEN_13 : _GEN_1851; // @[Microcode.scala 136:44]
  wire [7:0] _GEN_1874 = _u_T_4 == 8'h1 ? _GEN_14 : _GEN_1850; // @[Microcode.scala 136:44]
  wire [7:0] _GEN_1875 = _u_T_4 == 8'h1 ? _GEN_15 : _GEN_1853; // @[Microcode.scala 136:44]
  wire [7:0] _GEN_1876 = _u_T_4 == 8'h1 ? _GEN_16 : _GEN_1852; // @[Microcode.scala 136:44]
  wire [15:0] _GEN_1877 = _u_T_4 == 8'h1 ? _GEN_17 : _GEN_1854; // @[Microcode.scala 136:44]
  wire  _GEN_1878 = _u_T_4 == 8'h1 ? _u_T_1 : _GEN_1855; // @[Microcode.scala 136:44]
  wire [7:0] _GEN_1879 = _u_T_4 == 8'h1 ? F_sampled : _GEN_1856; // @[Microcode.scala 136:44 66:15]
  wire [3:0] _GEN_1880 = _u_T_4 == 8'h1 ? 4'h0 : _GEN_1857; // @[Microcode.scala 110:21 136:44]
  wire [7:0] _GEN_1881 = _u_T_4 == 8'h1 ? 8'h0 : _GEN_1858; // @[Microcode.scala 108:21 136:44]
  wire [7:0] _GEN_1882 = _u_T_4 == 8'h1 ? 8'h0 : _GEN_1859; // @[Microcode.scala 109:21 136:44]
  wire [7:0] _GEN_1883 = _u_T_4 == 8'h1 ? A_sampled : _GEN_1860; // @[Microcode.scala 136:44 65:15]
  wire [15:0] _GEN_1884 = _u_T_4 == 8'h1 ? 16'h0 : _GEN_1861; // @[Microcode.scala 136:44 80:21]
  wire [2:0] _GEN_1887 = _u_T_4 == 8'h1 ? mcycle : _GEN_1864; // @[Microcode.scala 136:44 77:21]
  wire  _GEN_1888 = _u_T_4 == 8'h1 ? 1'h0 : _GEN_1865; // @[Microcode.scala 136:44 82:21]
  wire [7:0] _GEN_1889 = _u_T_4 == 8'h1 ? 8'h0 : _GEN_1866; // @[Microcode.scala 136:44 83:21]
  wire [15:0] _GEN_1890 = _u_T_4 == 8'h1 ? PC_sampled : _GEN_1867; // @[Microcode.scala 136:44 63:15]
  wire  _GEN_1891 = _u_T_4 == 8'h1 ? F_sampled[4] : _GEN_1868; // @[Microcode.scala 111:21 136:44]
  wire  _GEN_1892 = _u_T_4 == 8'h1 ? IME : _GEN_1869; // @[Microcode.scala 136:44 74:21]
  wire  _GEN_1893 = _u_T_4 == 8'h1 ? IME_pending : _GEN_1870; // @[Microcode.scala 136:44 75:21]
  wire  _GEN_1894 = IR == 8'h76 ? _u_T_1 : _GEN_1878; // @[Microcode.scala 126:32]
  wire [7:0] _GEN_1895 = IR == 8'h76 ? C_sampled : _GEN_1871; // @[Microcode.scala 126:32 68:15]
  wire [7:0] _GEN_1896 = IR == 8'h76 ? B_sampled : _GEN_1872; // @[Microcode.scala 126:32 67:15]
  wire [7:0] _GEN_1897 = IR == 8'h76 ? E_sampled : _GEN_1873; // @[Microcode.scala 126:32 70:15]
  wire [7:0] _GEN_1898 = IR == 8'h76 ? D_sampled : _GEN_1874; // @[Microcode.scala 126:32 69:15]
  wire [7:0] _GEN_1899 = IR == 8'h76 ? L_sampled : _GEN_1875; // @[Microcode.scala 126:32 72:15]
  wire [7:0] _GEN_1900 = IR == 8'h76 ? H_sampled : _GEN_1876; // @[Microcode.scala 126:32 71:15]
  wire [15:0] _GEN_1901 = IR == 8'h76 ? SP_sampled : _GEN_1877; // @[Microcode.scala 126:32 64:15]
  wire [7:0] _GEN_1902 = IR == 8'h76 ? F_sampled : _GEN_1879; // @[Microcode.scala 126:32 66:15]
  wire [3:0] _GEN_1903 = IR == 8'h76 ? 4'h0 : _GEN_1880; // @[Microcode.scala 110:21 126:32]
  wire [7:0] _GEN_1904 = IR == 8'h76 ? 8'h0 : _GEN_1881; // @[Microcode.scala 108:21 126:32]
  wire [7:0] _GEN_1905 = IR == 8'h76 ? 8'h0 : _GEN_1882; // @[Microcode.scala 109:21 126:32]
  wire [7:0] _GEN_1906 = IR == 8'h76 ? A_sampled : _GEN_1883; // @[Microcode.scala 126:32 65:15]
  wire [15:0] _GEN_1907 = IR == 8'h76 ? 16'h0 : _GEN_1884; // @[Microcode.scala 126:32 80:21]
  wire [2:0] _GEN_1910 = IR == 8'h76 ? mcycle : _GEN_1887; // @[Microcode.scala 126:32 77:21]
  wire  _GEN_1911 = IR == 8'h76 ? 1'h0 : _GEN_1888; // @[Microcode.scala 126:32 82:21]
  wire [7:0] _GEN_1912 = IR == 8'h76 ? 8'h0 : _GEN_1889; // @[Microcode.scala 126:32 83:21]
  wire [15:0] _GEN_1913 = IR == 8'h76 ? PC_sampled : _GEN_1890; // @[Microcode.scala 126:32 63:15]
  wire  _GEN_1914 = IR == 8'h76 ? F_sampled[4] : _GEN_1891; // @[Microcode.scala 111:21 126:32]
  wire  _GEN_1915 = IR == 8'h76 ? IME : _GEN_1892; // @[Microcode.scala 126:32 74:21]
  wire  _GEN_1916 = IR == 8'h76 ? IME_pending : _GEN_1893; // @[Microcode.scala 126:32 75:21]
  wire  u__done = IR == 8'h0 ? _u_T_1 : _GEN_1894; // @[Microcode.scala 120:26]
  wire [7:0] u__C = IR == 8'h0 ? C_sampled : _GEN_1895; // @[Microcode.scala 120:26 68:15]
  wire [7:0] u__B = IR == 8'h0 ? B_sampled : _GEN_1896; // @[Microcode.scala 120:26 67:15]
  wire [7:0] u__E = IR == 8'h0 ? E_sampled : _GEN_1897; // @[Microcode.scala 120:26 70:15]
  wire [7:0] u__D = IR == 8'h0 ? D_sampled : _GEN_1898; // @[Microcode.scala 120:26 69:15]
  wire [7:0] u__L = IR == 8'h0 ? L_sampled : _GEN_1899; // @[Microcode.scala 120:26 72:15]
  wire [7:0] u__H = IR == 8'h0 ? H_sampled : _GEN_1900; // @[Microcode.scala 120:26 71:15]
  wire [15:0] u__SP = IR == 8'h0 ? SP_sampled : _GEN_1901; // @[Microcode.scala 120:26 64:15]
  wire [7:0] u__F = IR == 8'h0 ? F_sampled : _GEN_1902; // @[Microcode.scala 120:26 66:15]
  wire [7:0] u__A = IR == 8'h0 ? A_sampled : _GEN_1906; // @[Microcode.scala 120:26 65:15]
  wire [15:0] _GEN_1930 = IR == 8'h0 ? 16'h0 : _GEN_1907; // @[Microcode.scala 120:26 80:21]
  wire [2:0] u__next_mcycle = IR == 8'h0 ? mcycle : _GEN_1910; // @[Microcode.scala 120:26 77:21]
  wire  _GEN_1934 = IR == 8'h0 ? 1'h0 : _GEN_1911; // @[Microcode.scala 120:26 82:21]
  wire [7:0] _GEN_1935 = IR == 8'h0 ? 8'h0 : _GEN_1912; // @[Microcode.scala 120:26 83:21]
  wire [15:0] u__PC = IR == 8'h0 ? PC_sampled : _GEN_1913; // @[Microcode.scala 120:26 63:15]
  wire  u__IME = IR == 8'h0 ? IME : _GEN_1915; // @[Microcode.scala 120:26 74:21]
  wire  u__IME_pending = IR == 8'h0 ? IME_pending : _GEN_1916; // @[Microcode.scala 120:26 75:21]
  reg [2:0] state_prev; // @[LR35902_Core.scala 177:28]
  reg [2:0] mcycle_prev; // @[LR35902_Core.scala 178:28]
  wire  _T = state == 3'h6; // @[LR35902_Core.scala 183:15]
  wire  _T_2 = state == 3'h6 & state_prev != 3'h6; // @[LR35902_Core.scala 183:25]
  wire  _T_4 = ~reset; // @[LR35902_Core.scala 184:11]
  wire  _T_5 = state_prev == 3'h6; // @[LR35902_Core.scala 187:20]
  wire  _T_7 = state_prev == 3'h6 & state != 3'h6; // @[LR35902_Core.scala 187:30]
  wire  haltActive = _T | _T_5; // @[LR35902_Core.scala 193:21]
  wire [7:0] _T_10 = io_ieReg & io_ifReg; // @[LR35902_Core.scala 195:35]
  wire  _T_11 = |_T_10; // @[LR35902_Core.scala 195:47]
  wire [1:0] _tcycle_T_1 = tcycle + 2'h1; // @[LR35902_Core.scala 203:22]
  wire [1:0] _GEN_1940 = _u_T_1 ? 2'h0 : _tcycle_T_1; // @[LR35902_Core.scala 200:31 201:12 203:12]
  wire [1:0] _GEN_1941 = state != state_prev | mcycle != mcycle_prev ? 2'h0 : _GEN_1940; // @[LR35902_Core.scala 198:63 199:12]
  wire [1:0] _GEN_1942 = haltActive & ~(|_T_10) ? tcycle : _GEN_1941; // @[LR35902_Core.scala 195:53 197:12]
  wire  _T_18 = 3'h7 == state; // @[LR35902_Core.scala 211:17]
  wire [7:0] _busWriteData_T = 8'h1 << irqIndexLatched; // @[LR35902_Core.scala 222:44]
  wire [7:0] _busWriteData_T_1 = ~_busWriteData_T; // @[LR35902_Core.scala 222:38]
  wire [7:0] _busWriteData_T_2 = io_ifReg & _busWriteData_T_1; // @[LR35902_Core.scala 222:36]
  wire [15:0] _busAddr_T_1 = SP - 16'h1; // @[LR35902_Core.scala 229:30]
  wire [15:0] _GEN_1944 = _u_T_1 ? _busAddr_T_1 : SP; // @[LR35902_Core.scala 233:32 234:16 55:19]
  wire [15:0] _GEN_1947 = _u_T_1 ? irqVectorLatched : PC; // @[LR35902_Core.scala 245:32 247:16 54:19]
  wire [2:0] _GEN_1948 = _u_T_1 ? 3'h0 : mcycle; // @[LR35902_Core.scala 245:32 248:20 98:23]
  wire [2:0] _GEN_1949 = _u_T_1 ? 3'h0 : state; // @[LR35902_Core.scala 245:32 249:20 96:23]
  wire [15:0] _GEN_1950 = _u_T_63 ? _busAddr_T_1 : 16'h0; // @[LR35902_Core.scala 216:22 241:24 169:33]
  wire [7:0] _GEN_1952 = _u_T_63 ? PC[7:0] : 8'h0; // @[LR35902_Core.scala 216:22 243:24 172:33]
  wire [15:0] _GEN_1953 = _u_T_63 ? _GEN_1944 : SP; // @[LR35902_Core.scala 216:22 55:19]
  wire [15:0] _GEN_1954 = _u_T_63 ? _GEN_1947 : PC; // @[LR35902_Core.scala 216:22 54:19]
  wire [2:0] _GEN_1955 = _u_T_63 ? _GEN_1948 : mcycle; // @[LR35902_Core.scala 216:22 98:23]
  wire [2:0] _GEN_1956 = _u_T_63 ? _GEN_1949 : state; // @[LR35902_Core.scala 216:22 96:23]
  wire [15:0] _GEN_1957 = _u_T_61 ? _busAddr_T_1 : _GEN_1950; // @[LR35902_Core.scala 216:22 229:24]
  wire  _GEN_1958 = _u_T_61 ? _u_mcBus_memWrite_T : _GEN_118; // @[LR35902_Core.scala 216:22 230:24]
  wire [7:0] _GEN_1959 = _u_T_61 ? PC[15:8] : _GEN_1952; // @[LR35902_Core.scala 216:22 231:24]
  wire [15:0] _GEN_1964 = _u_T_59 ? 16'hff0f : _GEN_1957; // @[LR35902_Core.scala 216:22 220:24]
  wire  _GEN_1965 = _u_T_59 ? _u_mcBus_memWrite_T : _GEN_1958; // @[LR35902_Core.scala 216:22 221:24]
  wire [7:0] _GEN_1966 = _u_T_59 ? _busWriteData_T_2 : _GEN_1959; // @[LR35902_Core.scala 216:22 222:24]
  wire  _T_25 = 3'h0 == state; // @[LR35902_Core.scala 211:17]
  wire  _T_26 = canTakeInterrupt & intr_io_should_irq; // @[LR35902_Core.scala 260:30]
  wire [15:0] nextPC = PC + 16'h1; // @[LR35902_Core.scala 277:27]
  wire [7:0] _isLDrImm_T = io_memReadData & 8'hc7; // @[LR35902_Core.scala 302:42]
  wire  isLDrImm = _isLDrImm_T == 8'h6; // @[LR35902_Core.scala 302:53]
  wire  _needsImm8_T = io_memReadData == 8'h18; // @[LR35902_Core.scala 306:29]
  wire  _needsImm8_T_1 = isLDrImm | _needsImm8_T; // @[LR35902_Core.scala 305:22]
  wire  _needsImm8_T_2 = io_memReadData == 8'h20; // @[LR35902_Core.scala 307:29]
  wire  _needsImm8_T_3 = _needsImm8_T_1 | _needsImm8_T_2; // @[LR35902_Core.scala 306:41]
  wire  _needsImm8_T_6 = io_memReadData == 8'h30; // @[LR35902_Core.scala 308:29]
  wire  _needsImm8_T_7 = _needsImm8_T_3 | io_memReadData == 8'h28 | _needsImm8_T_6; // @[LR35902_Core.scala 307:70]
  wire  _needsImm8_T_10 = io_memReadData == 8'hc6; // @[LR35902_Core.scala 309:29]
  wire  _needsImm8_T_11 = _needsImm8_T_7 | io_memReadData == 8'h38 | _needsImm8_T_10; // @[LR35902_Core.scala 308:70]
  wire  _needsImm8_T_12 = io_memReadData == 8'hce; // @[LR35902_Core.scala 310:29]
  wire  _needsImm8_T_13 = _needsImm8_T_11 | _needsImm8_T_12; // @[LR35902_Core.scala 309:41]
  wire  _needsImm8_T_14 = io_memReadData == 8'hd6; // @[LR35902_Core.scala 311:29]
  wire  _needsImm8_T_15 = _needsImm8_T_13 | _needsImm8_T_14; // @[LR35902_Core.scala 310:41]
  wire  _needsImm8_T_16 = io_memReadData == 8'hde; // @[LR35902_Core.scala 312:29]
  wire  _needsImm8_T_17 = _needsImm8_T_15 | _needsImm8_T_16; // @[LR35902_Core.scala 311:41]
  wire  _needsImm8_T_18 = io_memReadData == 8'he0; // @[LR35902_Core.scala 313:29]
  wire  _needsImm8_T_19 = _needsImm8_T_17 | _needsImm8_T_18; // @[LR35902_Core.scala 312:41]
  wire  _needsImm8_T_22 = io_memReadData == 8'he8; // @[LR35902_Core.scala 314:29]
  wire  _needsImm8_T_23 = _needsImm8_T_19 | io_memReadData == 8'he6 | _needsImm8_T_22; // @[LR35902_Core.scala 313:70]
  wire  _needsImm8_T_26 = io_memReadData == 8'hf0; // @[LR35902_Core.scala 315:29]
  wire  _needsImm8_T_27 = _needsImm8_T_23 | io_memReadData == 8'hee | _needsImm8_T_26; // @[LR35902_Core.scala 314:70]
  wire  _needsImm8_T_30 = io_memReadData == 8'hf8; // @[LR35902_Core.scala 316:29]
  wire  _needsImm8_T_31 = _needsImm8_T_27 | io_memReadData == 8'hf6 | _needsImm8_T_30; // @[LR35902_Core.scala 315:70]
  wire  needsImm8 = _needsImm8_T_31 | io_memReadData == 8'hfe; // @[LR35902_Core.scala 316:41]
  wire  _needsImm16_T_3 = io_memReadData == 8'hd2; // @[LR35902_Core.scala 322:29]
  wire  _needsImm16_T_4 = io_memReadData == 8'hc2 | io_memReadData == 8'hca | _needsImm16_T_3; // @[LR35902_Core.scala 321:68]
  wire  _needsImm16_T_7 = io_memReadData == 8'hc3; // @[LR35902_Core.scala 323:29]
  wire  _needsImm16_T_8 = _needsImm16_T_4 | io_memReadData == 8'hda | _needsImm16_T_7; // @[LR35902_Core.scala 322:70]
  wire  _needsImm16_T_9 = io_memReadData == 8'hc4; // @[LR35902_Core.scala 324:29]
  wire  _needsImm16_T_10 = _needsImm16_T_8 | _needsImm16_T_9; // @[LR35902_Core.scala 323:41]
  wire  _needsImm16_T_13 = io_memReadData == 8'hd4; // @[LR35902_Core.scala 325:29]
  wire  _needsImm16_T_14 = _needsImm16_T_10 | io_memReadData == 8'hcc | _needsImm16_T_13; // @[LR35902_Core.scala 324:70]
  wire  _needsImm16_T_17 = io_memReadData == 8'hcd; // @[LR35902_Core.scala 326:29]
  wire  _needsImm16_T_18 = _needsImm16_T_14 | io_memReadData == 8'hdc | _needsImm16_T_17; // @[LR35902_Core.scala 325:70]
  wire  _needsImm16_T_19 = io_memReadData == 8'hea; // @[LR35902_Core.scala 327:29]
  wire  _needsImm16_T_20 = _needsImm16_T_18 | _needsImm16_T_19; // @[LR35902_Core.scala 326:41]
  wire  _needsImm16_T_23 = io_memReadData == 8'h1; // @[LR35902_Core.scala 328:29]
  wire  _needsImm16_T_24 = _needsImm16_T_20 | io_memReadData == 8'hfa | _needsImm16_T_23; // @[LR35902_Core.scala 327:70]
  wire  _needsImm16_T_27 = io_memReadData == 8'h11; // @[LR35902_Core.scala 329:29]
  wire  _needsImm16_T_28 = _needsImm16_T_24 | io_memReadData == 8'h8 | _needsImm16_T_27; // @[LR35902_Core.scala 328:70]
  wire  _needsImm16_T_31 = io_memReadData == 8'h31; // @[LR35902_Core.scala 330:29]
  wire  needsImm16 = _needsImm16_T_28 | io_memReadData == 8'h21 | _needsImm16_T_31; // @[LR35902_Core.scala 329:70]
  wire [2:0] _GEN_1972 = needsImm16 ? 3'h2 : 3'h4; // @[LR35902_Core.scala 339:35 340:19 342:19]
  wire [15:0] _GEN_1973 = needsImm16 ? PC_sampled : nextPC; // @[LR35902_Core.scala 339:35 345:24 69:27]
  wire [15:0] _GEN_1974 = needsImm16 ? SP_sampled : SP; // @[LR35902_Core.scala 339:35 346:24 70:27]
  wire [7:0] _GEN_1975 = needsImm16 ? A_sampled : A; // @[LR35902_Core.scala 339:35 347:24 71:27]
  wire [7:0] _GEN_1976 = needsImm16 ? F_sampled : F; // @[LR35902_Core.scala 339:35 348:24 72:27]
  wire [7:0] _GEN_1977 = needsImm16 ? B_sampled : B; // @[LR35902_Core.scala 339:35 349:24 73:27]
  wire [7:0] _GEN_1978 = needsImm16 ? C_sampled : C; // @[LR35902_Core.scala 339:35 350:24 74:27]
  wire [7:0] _GEN_1979 = needsImm16 ? D_sampled : D; // @[LR35902_Core.scala 339:35 351:24 75:27]
  wire [7:0] _GEN_1980 = needsImm16 ? E_sampled : E; // @[LR35902_Core.scala 339:35 352:24 76:27]
  wire [7:0] _GEN_1981 = needsImm16 ? H_sampled : H; // @[LR35902_Core.scala 339:35 353:24 77:27]
  wire [7:0] _GEN_1982 = needsImm16 ? L_sampled : L; // @[LR35902_Core.scala 339:35 354:24 78:27]
  wire [2:0] _GEN_1983 = needsImm8 ? 3'h1 : _GEN_1972; // @[LR35902_Core.scala 337:34 338:19]
  wire [15:0] _GEN_1984 = needsImm8 ? PC_sampled : _GEN_1973; // @[LR35902_Core.scala 337:34 69:27]
  wire [15:0] _GEN_1985 = needsImm8 ? SP_sampled : _GEN_1974; // @[LR35902_Core.scala 337:34 70:27]
  wire [7:0] _GEN_1986 = needsImm8 ? A_sampled : _GEN_1975; // @[LR35902_Core.scala 337:34 71:27]
  wire [7:0] _GEN_1987 = needsImm8 ? F_sampled : _GEN_1976; // @[LR35902_Core.scala 337:34 72:27]
  wire [7:0] _GEN_1988 = needsImm8 ? B_sampled : _GEN_1977; // @[LR35902_Core.scala 337:34 73:27]
  wire [7:0] _GEN_1989 = needsImm8 ? C_sampled : _GEN_1978; // @[LR35902_Core.scala 337:34 74:27]
  wire [7:0] _GEN_1990 = needsImm8 ? D_sampled : _GEN_1979; // @[LR35902_Core.scala 337:34 75:27]
  wire [7:0] _GEN_1991 = needsImm8 ? E_sampled : _GEN_1980; // @[LR35902_Core.scala 337:34 76:27]
  wire [7:0] _GEN_1992 = needsImm8 ? H_sampled : _GEN_1981; // @[LR35902_Core.scala 337:34 77:27]
  wire [7:0] _GEN_1993 = needsImm8 ? L_sampled : _GEN_1982; // @[LR35902_Core.scala 337:34 78:27]
  wire [2:0] _GEN_1994 = io_memReadData == 8'h76 ? 3'h6 : _GEN_1983; // @[LR35902_Core.scala 334:50 335:19]
  wire [15:0] _GEN_1996 = io_memReadData == 8'h76 ? PC_sampled : _GEN_1984; // @[LR35902_Core.scala 334:50 69:27]
  wire [15:0] _GEN_1997 = io_memReadData == 8'h76 ? SP_sampled : _GEN_1985; // @[LR35902_Core.scala 334:50 70:27]
  wire [7:0] _GEN_1998 = io_memReadData == 8'h76 ? A_sampled : _GEN_1986; // @[LR35902_Core.scala 334:50 71:27]
  wire [7:0] _GEN_1999 = io_memReadData == 8'h76 ? F_sampled : _GEN_1987; // @[LR35902_Core.scala 334:50 72:27]
  wire [7:0] _GEN_2000 = io_memReadData == 8'h76 ? B_sampled : _GEN_1988; // @[LR35902_Core.scala 334:50 73:27]
  wire [7:0] _GEN_2001 = io_memReadData == 8'h76 ? C_sampled : _GEN_1989; // @[LR35902_Core.scala 334:50 74:27]
  wire [7:0] _GEN_2002 = io_memReadData == 8'h76 ? D_sampled : _GEN_1990; // @[LR35902_Core.scala 334:50 75:27]
  wire [7:0] _GEN_2003 = io_memReadData == 8'h76 ? E_sampled : _GEN_1991; // @[LR35902_Core.scala 334:50 76:27]
  wire [7:0] _GEN_2004 = io_memReadData == 8'h76 ? H_sampled : _GEN_1992; // @[LR35902_Core.scala 334:50 77:27]
  wire [7:0] _GEN_2005 = io_memReadData == 8'h76 ? L_sampled : _GEN_1993; // @[LR35902_Core.scala 334:50 78:27]
  wire [2:0] _GEN_2006 = io_memReadData == 8'hcb ? 3'h5 : _GEN_1994; // @[LR35902_Core.scala 332:44 333:19]
  wire [15:0] _GEN_2008 = io_memReadData == 8'hcb ? PC_sampled : _GEN_1996; // @[LR35902_Core.scala 332:44 69:27]
  wire [15:0] _GEN_2009 = io_memReadData == 8'hcb ? SP_sampled : _GEN_1997; // @[LR35902_Core.scala 332:44 70:27]
  wire [7:0] _GEN_2010 = io_memReadData == 8'hcb ? A_sampled : _GEN_1998; // @[LR35902_Core.scala 332:44 71:27]
  wire [7:0] _GEN_2011 = io_memReadData == 8'hcb ? F_sampled : _GEN_1999; // @[LR35902_Core.scala 332:44 72:27]
  wire [7:0] _GEN_2012 = io_memReadData == 8'hcb ? B_sampled : _GEN_2000; // @[LR35902_Core.scala 332:44 73:27]
  wire [7:0] _GEN_2013 = io_memReadData == 8'hcb ? C_sampled : _GEN_2001; // @[LR35902_Core.scala 332:44 74:27]
  wire [7:0] _GEN_2014 = io_memReadData == 8'hcb ? D_sampled : _GEN_2002; // @[LR35902_Core.scala 332:44 75:27]
  wire [7:0] _GEN_2015 = io_memReadData == 8'hcb ? E_sampled : _GEN_2003; // @[LR35902_Core.scala 332:44 76:27]
  wire [7:0] _GEN_2016 = io_memReadData == 8'hcb ? H_sampled : _GEN_2004; // @[LR35902_Core.scala 332:44 77:27]
  wire [7:0] _GEN_2017 = io_memReadData == 8'hcb ? L_sampled : _GEN_2005; // @[LR35902_Core.scala 332:44 78:27]
  wire [7:0] _GEN_2020 = _u_T_1 ? io_memReadData : IR; // @[LR35902_Core.scala 275:31 283:14 57:25]
  wire [15:0] _GEN_2021 = _u_T_1 ? nextPC : PC; // @[LR35902_Core.scala 275:31 284:14 54:19]
  wire [2:0] _GEN_2024 = _u_T_1 ? _GEN_2006 : state; // @[LR35902_Core.scala 275:31 96:23]
  wire [15:0] _GEN_2026 = _u_T_1 ? _GEN_2008 : PC_sampled; // @[LR35902_Core.scala 275:31 69:27]
  wire [15:0] _GEN_2027 = _u_T_1 ? _GEN_2009 : SP_sampled; // @[LR35902_Core.scala 275:31 70:27]
  wire [7:0] _GEN_2028 = _u_T_1 ? _GEN_2010 : A_sampled; // @[LR35902_Core.scala 275:31 71:27]
  wire [7:0] _GEN_2029 = _u_T_1 ? _GEN_2011 : F_sampled; // @[LR35902_Core.scala 275:31 72:27]
  wire [7:0] _GEN_2030 = _u_T_1 ? _GEN_2012 : B_sampled; // @[LR35902_Core.scala 275:31 73:27]
  wire [7:0] _GEN_2031 = _u_T_1 ? _GEN_2013 : C_sampled; // @[LR35902_Core.scala 275:31 74:27]
  wire [7:0] _GEN_2032 = _u_T_1 ? _GEN_2014 : D_sampled; // @[LR35902_Core.scala 275:31 75:27]
  wire [7:0] _GEN_2033 = _u_T_1 ? _GEN_2015 : E_sampled; // @[LR35902_Core.scala 275:31 76:27]
  wire [7:0] _GEN_2034 = _u_T_1 ? _GEN_2016 : H_sampled; // @[LR35902_Core.scala 275:31 77:27]
  wire [7:0] _GEN_2035 = _u_T_1 ? _GEN_2017 : L_sampled; // @[LR35902_Core.scala 275:31 78:27]
  wire [15:0] _GEN_2043 = canTakeInterrupt & intr_io_should_irq ? 16'h0 : PC; // @[LR35902_Core.scala 169:33 260:44 272:17]
  wire [7:0] _GEN_2060 = _u_T_1 ? io_memReadData : imm8; // @[LR35902_Core.scala 370:28 371:16 59:25]
  wire [2:0] _GEN_2063 = _u_T_1 ? 3'h4 : state; // @[LR35902_Core.scala 370:28 375:16 96:23]
  wire [15:0] _GEN_2064 = _u_T_1 ? nextPC : PC_sampled; // @[LR35902_Core.scala 370:28 378:20 69:27]
  wire [15:0] _GEN_2065 = _u_T_1 ? SP : SP_sampled; // @[LR35902_Core.scala 370:28 379:20 70:27]
  wire [7:0] _GEN_2066 = _u_T_1 ? A : A_sampled; // @[LR35902_Core.scala 370:28 380:20 71:27]
  wire [7:0] _GEN_2067 = _u_T_1 ? F : F_sampled; // @[LR35902_Core.scala 370:28 381:20 72:27]
  wire [7:0] _GEN_2068 = _u_T_1 ? B : B_sampled; // @[LR35902_Core.scala 370:28 382:20 73:27]
  wire [7:0] _GEN_2069 = _u_T_1 ? C : C_sampled; // @[LR35902_Core.scala 370:28 383:20 74:27]
  wire [7:0] _GEN_2070 = _u_T_1 ? D : D_sampled; // @[LR35902_Core.scala 370:28 384:20 75:27]
  wire [7:0] _GEN_2071 = _u_T_1 ? E : E_sampled; // @[LR35902_Core.scala 370:28 385:20 76:27]
  wire [7:0] _GEN_2072 = _u_T_1 ? H : H_sampled; // @[LR35902_Core.scala 370:28 386:20 77:27]
  wire [7:0] _GEN_2073 = _u_T_1 ? L : L_sampled; // @[LR35902_Core.scala 370:28 387:20 78:27]
  wire [15:0] _GEN_2074 = _u_T_1 ? {{8'd0}, io_memReadData} : imm16; // @[LR35902_Core.scala 398:28 399:16 60:25]
  wire [2:0] _GEN_2076 = _u_T_1 ? 3'h3 : state; // @[LR35902_Core.scala 398:28 401:16 96:23]
  wire [15:0] _imm16_T_1 = {io_memReadData,imm16[7:0]}; // @[Cat.scala 33:92]
  wire [15:0] _GEN_2077 = _u_T_1 ? _imm16_T_1 : imm16; // @[LR35902_Core.scala 412:28 413:16 60:25]
  wire [7:0] _GEN_2091 = _u_T_1 ? io_memReadData : IR2; // @[LR35902_Core.scala 440:28 441:16 58:25]
  wire [1:0] cbOut_group = IR2[7:6]; // @[MicrocodeCB.scala 66:21]
  wire [2:0] cbOut_bitIdx = IR2[5:3]; // @[MicrocodeCB.scala 67:21]
  wire [2:0] cbOut_regIdx = IR2[2:0]; // @[MicrocodeCB.scala 68:21]
  wire  cbOut_isHL = cbOut_regIdx == 3'h6; // @[MicrocodeCB.scala 70:23]
  wire [7:0] _GEN_2105 = _u_T_1 ? io_memReadData : CB_imm8; // @[MicrocodeCB.scala 102:30 103:20 55:14]
  wire  _cbOut_out_imm8_T = 3'h0 == cbOut_regIdx; // @[Mux.scala 81:61]
  wire [7:0] _cbOut_out_imm8_T_1 = 3'h0 == cbOut_regIdx ? B_sampled : 8'h0; // @[Mux.scala 81:58]
  wire  _cbOut_out_imm8_T_2 = 3'h1 == cbOut_regIdx; // @[Mux.scala 81:61]
  wire [7:0] _cbOut_out_imm8_T_3 = 3'h1 == cbOut_regIdx ? C_sampled : _cbOut_out_imm8_T_1; // @[Mux.scala 81:58]
  wire  _cbOut_out_imm8_T_4 = 3'h2 == cbOut_regIdx; // @[Mux.scala 81:61]
  wire [7:0] _cbOut_out_imm8_T_5 = 3'h2 == cbOut_regIdx ? D_sampled : _cbOut_out_imm8_T_3; // @[Mux.scala 81:58]
  wire  _cbOut_out_imm8_T_6 = 3'h3 == cbOut_regIdx; // @[Mux.scala 81:61]
  wire [7:0] _cbOut_out_imm8_T_7 = 3'h3 == cbOut_regIdx ? E_sampled : _cbOut_out_imm8_T_5; // @[Mux.scala 81:58]
  wire  _cbOut_out_imm8_T_8 = 3'h4 == cbOut_regIdx; // @[Mux.scala 81:61]
  wire [7:0] _cbOut_out_imm8_T_9 = 3'h4 == cbOut_regIdx ? H_sampled : _cbOut_out_imm8_T_7; // @[Mux.scala 81:58]
  wire  _cbOut_out_imm8_T_10 = 3'h5 == cbOut_regIdx; // @[Mux.scala 81:61]
  wire [7:0] _cbOut_out_imm8_T_11 = 3'h5 == cbOut_regIdx ? L_sampled : _cbOut_out_imm8_T_9; // @[Mux.scala 81:58]
  wire  _cbOut_out_imm8_T_12 = 3'h7 == cbOut_regIdx; // @[Mux.scala 81:61]
  wire [7:0] _cbOut_out_imm8_T_13 = 3'h7 == cbOut_regIdx ? A_sampled : _cbOut_out_imm8_T_11; // @[Mux.scala 81:58]
  wire [7:0] _GEN_2107 = _u_T_1 ? _cbOut_out_imm8_T_13 : CB_imm8; // @[MicrocodeCB.scala 107:30 108:20 55:14]
  wire [15:0] _GEN_2109 = cbOut_isHL ? u_HL : 16'h0; // @[MicrocodeCB.scala 99:18 100:20 60:21]
  wire [7:0] _GEN_2111 = cbOut_isHL ? _GEN_2105 : _GEN_2107; // @[MicrocodeCB.scala 99:18]
  wire [2:0] _GEN_2112 = cbOut_isHL ? _GEN_115 : _GEN_115; // @[MicrocodeCB.scala 99:18]
  wire [15:0] _GEN_2113 = _u_T_363 ? _GEN_2109 : 16'h0; // @[MicrocodeCB.scala 60:21 98:26]
  wire [7:0] _GEN_2115 = _u_T_363 ? _GEN_2111 : CB_imm8; // @[MicrocodeCB.scala 55:14 98:26]
  wire [2:0] _GEN_2116 = _u_T_363 ? _GEN_2112 : mcycle; // @[MicrocodeCB.scala 58:21 98:26]
  wire  cbOut_c = CB_imm8[7]; // @[MicrocodeCB.scala 139:43]
  wire [7:0] _cbOut_result_T_1 = {CB_imm8[6:0],cbOut_c}; // @[Cat.scala 33:92]
  wire  cbOut_c_1 = CB_imm8[0]; // @[MicrocodeCB.scala 140:43]
  wire [7:0] _cbOut_result_T_3 = {cbOut_c_1,CB_imm8[7:1]}; // @[Cat.scala 33:92]
  wire [7:0] _cbOut_result_T_6 = {CB_imm8[6:0],F_sampled[4]}; // @[Cat.scala 33:92]
  wire [7:0] _cbOut_result_T_9 = {F_sampled[4],CB_imm8[7:1]}; // @[Cat.scala 33:92]
  wire [7:0] _cbOut_result_T_11 = {CB_imm8[6:0],1'h0}; // @[Cat.scala 33:92]
  wire [7:0] _cbOut_result_T_14 = {cbOut_c,CB_imm8[7:1]}; // @[Cat.scala 33:92]
  wire [7:0] _cbOut_result_T_17 = {CB_imm8[3:0],CB_imm8[7:4]}; // @[Cat.scala 33:92]
  wire [7:0] _cbOut_result_T_19 = {1'h0,CB_imm8[7:1]}; // @[Cat.scala 33:92]
  wire [7:0] _GEN_2117 = 3'h7 == cbOut_bitIdx ? _cbOut_result_T_19 : CB_imm8; // @[MicrocodeCB.scala 128:14 138:26 146:55]
  wire  _GEN_2118 = 3'h7 == cbOut_bitIdx ? cbOut_c_1 : F_sampled[4]; // @[MicrocodeCB.scala 132:13 138:26 146:88]
  wire [7:0] _GEN_2119 = 3'h6 == cbOut_bitIdx ? _cbOut_result_T_17 : _GEN_2117; // @[MicrocodeCB.scala 138:26 145:35]
  wire  _GEN_2120 = 3'h6 == cbOut_bitIdx ? 1'h0 : _GEN_2118; // @[MicrocodeCB.scala 138:26 145:77]
  wire [7:0] _GEN_2121 = 3'h5 == cbOut_bitIdx ? _cbOut_result_T_14 : _GEN_2119; // @[MicrocodeCB.scala 138:26 144:55]
  wire  _GEN_2122 = 3'h5 == cbOut_bitIdx ? cbOut_c_1 : _GEN_2120; // @[MicrocodeCB.scala 138:26 144:95]
  wire [7:0] _GEN_2123 = 3'h4 == cbOut_bitIdx ? _cbOut_result_T_11 : _GEN_2121; // @[MicrocodeCB.scala 138:26 143:55]
  wire  _GEN_2124 = 3'h4 == cbOut_bitIdx ? cbOut_c : _GEN_2122; // @[MicrocodeCB.scala 138:26 143:88]
  wire [7:0] _GEN_2125 = 3'h3 == cbOut_bitIdx ? _cbOut_result_T_9 : _GEN_2123; // @[MicrocodeCB.scala 138:26 142:55]
  wire  _GEN_2126 = 3'h3 == cbOut_bitIdx ? cbOut_c_1 : _GEN_2124; // @[MicrocodeCB.scala 138:26 142:92]
  wire [7:0] _GEN_2127 = 3'h2 == cbOut_bitIdx ? _cbOut_result_T_6 : _GEN_2125; // @[MicrocodeCB.scala 138:26 141:55]
  wire  _GEN_2128 = 3'h2 == cbOut_bitIdx ? cbOut_c : _GEN_2126; // @[MicrocodeCB.scala 138:26 141:92]
  wire [7:0] _GEN_2129 = 3'h1 == cbOut_bitIdx ? _cbOut_result_T_3 : _GEN_2127; // @[MicrocodeCB.scala 138:26 140:55]
  wire  _GEN_2130 = 3'h1 == cbOut_bitIdx ? cbOut_c_1 : _GEN_2128; // @[MicrocodeCB.scala 138:26 140:86]
  wire [7:0] _GEN_2131 = 3'h0 == cbOut_bitIdx ? _cbOut_result_T_1 : _GEN_2129; // @[MicrocodeCB.scala 138:26 139:55]
  wire  _GEN_2132 = 3'h0 == cbOut_bitIdx ? cbOut_c : _GEN_2130; // @[MicrocodeCB.scala 138:26 139:86]
  wire [7:0] _cbOut_result_T_20 = 8'h1 << cbOut_bitIdx; // @[MicrocodeCB.scala 162:37]
  wire [7:0] _cbOut_result_T_21 = ~_cbOut_result_T_20; // @[MicrocodeCB.scala 162:31]
  wire [7:0] _cbOut_result_T_22 = CB_imm8 & _cbOut_result_T_21; // @[MicrocodeCB.scala 162:29]
  wire [7:0] _cbOut_result_T_24 = CB_imm8 | _cbOut_result_T_20; // @[MicrocodeCB.scala 167:29]
  wire [7:0] _GEN_2133 = 2'h3 == cbOut_group ? _cbOut_result_T_24 : CB_imm8; // @[MicrocodeCB.scala 128:14 134:21 167:18]
  wire [7:0] _GEN_2134 = 2'h2 == cbOut_group ? _cbOut_result_T_22 : _GEN_2133; // @[MicrocodeCB.scala 134:21 162:18]
  wire [7:0] _GEN_2138 = 2'h1 == cbOut_group ? CB_imm8 : _GEN_2134; // @[MicrocodeCB.scala 128:14 134:21]
  wire [7:0] cbOut_result = 2'h0 == cbOut_group ? _GEN_2131 : _GEN_2138; // @[MicrocodeCB.scala 134:21]
  wire [7:0] _cbOut_flagZ_T_2 = CB_imm8 >> cbOut_bitIdx; // @[MicrocodeCB.scala 155:28]
  wire  _GEN_2135 = 2'h1 == cbOut_group ? ~_cbOut_flagZ_T_2[0] : F_sampled[7]; // @[MicrocodeCB.scala 129:13 134:21 155:17]
  wire  _GEN_2136 = 2'h1 == cbOut_group ? 1'h0 : u_N; // @[MicrocodeCB.scala 130:13 134:21 156:17]
  wire  _GEN_2137 = 2'h1 == cbOut_group | u_H; // @[MicrocodeCB.scala 131:13 134:21 157:17]
  wire  cbOut_flagC = 2'h0 == cbOut_group ? _GEN_2132 : F_sampled[4]; // @[MicrocodeCB.scala 132:13 134:21]
  wire  cbOut_flagZ = 2'h0 == cbOut_group ? cbOut_result == 8'h0 : _GEN_2135; // @[MicrocodeCB.scala 134:21 148:17]
  wire  cbOut_flagN = 2'h0 == cbOut_group ? 1'h0 : _GEN_2136; // @[MicrocodeCB.scala 134:21 149:17]
  wire  cbOut_flagH = 2'h0 == cbOut_group ? 1'h0 : _GEN_2137; // @[MicrocodeCB.scala 134:21 150:17]
  wire [7:0] _cbOut_out_F_T = {cbOut_flagZ,cbOut_flagN,cbOut_flagH,cbOut_flagC,4'h0}; // @[Cat.scala 33:92]
  wire [7:0] _GEN_2144 = _cbOut_out_imm8_T_12 ? cbOut_result : A_sampled; // @[MicrocodeCB.scala 47:11 84:17 91:25]
  wire [7:0] _GEN_2145 = _cbOut_out_imm8_T_10 ? cbOut_result : L_sampled; // @[MicrocodeCB.scala 54:11 84:17 90:25]
  wire [7:0] _GEN_2146 = _cbOut_out_imm8_T_10 ? A_sampled : _GEN_2144; // @[MicrocodeCB.scala 47:11 84:17]
  wire [7:0] _GEN_2147 = _cbOut_out_imm8_T_8 ? cbOut_result : H_sampled; // @[MicrocodeCB.scala 53:11 84:17 89:25]
  wire [7:0] _GEN_2148 = _cbOut_out_imm8_T_8 ? L_sampled : _GEN_2145; // @[MicrocodeCB.scala 54:11 84:17]
  wire [7:0] _GEN_2149 = _cbOut_out_imm8_T_8 ? A_sampled : _GEN_2146; // @[MicrocodeCB.scala 47:11 84:17]
  wire [7:0] _GEN_2150 = _cbOut_out_imm8_T_6 ? cbOut_result : E_sampled; // @[MicrocodeCB.scala 52:11 84:17 88:25]
  wire [7:0] _GEN_2151 = _cbOut_out_imm8_T_6 ? H_sampled : _GEN_2147; // @[MicrocodeCB.scala 53:11 84:17]
  wire [7:0] _GEN_2152 = _cbOut_out_imm8_T_6 ? L_sampled : _GEN_2148; // @[MicrocodeCB.scala 54:11 84:17]
  wire [7:0] _GEN_2153 = _cbOut_out_imm8_T_6 ? A_sampled : _GEN_2149; // @[MicrocodeCB.scala 47:11 84:17]
  wire [7:0] _GEN_2154 = _cbOut_out_imm8_T_4 ? cbOut_result : D_sampled; // @[MicrocodeCB.scala 51:11 84:17 87:25]
  wire [7:0] _GEN_2155 = _cbOut_out_imm8_T_4 ? E_sampled : _GEN_2150; // @[MicrocodeCB.scala 52:11 84:17]
  wire [7:0] _GEN_2156 = _cbOut_out_imm8_T_4 ? H_sampled : _GEN_2151; // @[MicrocodeCB.scala 53:11 84:17]
  wire [7:0] _GEN_2157 = _cbOut_out_imm8_T_4 ? L_sampled : _GEN_2152; // @[MicrocodeCB.scala 54:11 84:17]
  wire [7:0] _GEN_2158 = _cbOut_out_imm8_T_4 ? A_sampled : _GEN_2153; // @[MicrocodeCB.scala 47:11 84:17]
  wire [7:0] _GEN_2159 = _cbOut_out_imm8_T_2 ? cbOut_result : C_sampled; // @[MicrocodeCB.scala 50:11 84:17 86:25]
  wire [7:0] _GEN_2160 = _cbOut_out_imm8_T_2 ? D_sampled : _GEN_2154; // @[MicrocodeCB.scala 51:11 84:17]
  wire [7:0] _GEN_2161 = _cbOut_out_imm8_T_2 ? E_sampled : _GEN_2155; // @[MicrocodeCB.scala 52:11 84:17]
  wire [7:0] _GEN_2162 = _cbOut_out_imm8_T_2 ? H_sampled : _GEN_2156; // @[MicrocodeCB.scala 53:11 84:17]
  wire [7:0] _GEN_2163 = _cbOut_out_imm8_T_2 ? L_sampled : _GEN_2157; // @[MicrocodeCB.scala 54:11 84:17]
  wire [7:0] _GEN_2164 = _cbOut_out_imm8_T_2 ? A_sampled : _GEN_2158; // @[MicrocodeCB.scala 47:11 84:17]
  wire [7:0] _GEN_2165 = _cbOut_out_imm8_T ? cbOut_result : B_sampled; // @[MicrocodeCB.scala 49:11 84:17 85:25]
  wire [7:0] _GEN_2166 = _cbOut_out_imm8_T ? C_sampled : _GEN_2159; // @[MicrocodeCB.scala 50:11 84:17]
  wire [7:0] _GEN_2167 = _cbOut_out_imm8_T ? D_sampled : _GEN_2160; // @[MicrocodeCB.scala 51:11 84:17]
  wire [7:0] _GEN_2168 = _cbOut_out_imm8_T ? E_sampled : _GEN_2161; // @[MicrocodeCB.scala 52:11 84:17]
  wire [7:0] _GEN_2169 = _cbOut_out_imm8_T ? H_sampled : _GEN_2162; // @[MicrocodeCB.scala 53:11 84:17]
  wire [7:0] _GEN_2170 = _cbOut_out_imm8_T ? L_sampled : _GEN_2163; // @[MicrocodeCB.scala 54:11 84:17]
  wire [7:0] _GEN_2171 = _cbOut_out_imm8_T ? A_sampled : _GEN_2164; // @[MicrocodeCB.scala 47:11 84:17]
  wire [2:0] _GEN_2173 = _u_T_1 ? 3'h3 : _GEN_2116; // @[MicrocodeCB.scala 178:{30,48}]
  wire [7:0] _GEN_2174 = ~cbOut_isHL ? _GEN_2165 : B_sampled; // @[MicrocodeCB.scala 173:19 49:11]
  wire [7:0] _GEN_2175 = ~cbOut_isHL ? _GEN_2166 : C_sampled; // @[MicrocodeCB.scala 173:19 50:11]
  wire [7:0] _GEN_2176 = ~cbOut_isHL ? _GEN_2167 : D_sampled; // @[MicrocodeCB.scala 173:19 51:11]
  wire [7:0] _GEN_2177 = ~cbOut_isHL ? _GEN_2168 : E_sampled; // @[MicrocodeCB.scala 173:19 52:11]
  wire [7:0] _GEN_2178 = ~cbOut_isHL ? _GEN_2169 : H_sampled; // @[MicrocodeCB.scala 173:19 53:11]
  wire [7:0] _GEN_2179 = ~cbOut_isHL ? _GEN_2170 : L_sampled; // @[MicrocodeCB.scala 173:19 54:11]
  wire [7:0] _GEN_2180 = ~cbOut_isHL ? _GEN_2171 : A_sampled; // @[MicrocodeCB.scala 173:19 47:11]
  wire  _GEN_2181 = ~cbOut_isHL & _u_T_1; // @[MicrocodeCB.scala 173:19 57:14]
  wire [7:0] _GEN_2182 = ~cbOut_isHL ? _GEN_2115 : cbOut_result; // @[MicrocodeCB.scala 173:19 177:18]
  wire [2:0] _GEN_2183 = ~cbOut_isHL ? _GEN_2116 : _GEN_2173; // @[MicrocodeCB.scala 173:19]
  wire [7:0] cbOut_F = mcycle == 3'h2 ? _cbOut_out_F_T : F_sampled; // @[MicrocodeCB.scala 117:26 171:13 48:11]
  wire [7:0] cbOut_B = mcycle == 3'h2 ? _GEN_2174 : B_sampled; // @[MicrocodeCB.scala 117:26 49:11]
  wire [7:0] cbOut_C = mcycle == 3'h2 ? _GEN_2175 : C_sampled; // @[MicrocodeCB.scala 117:26 50:11]
  wire [7:0] cbOut_D = mcycle == 3'h2 ? _GEN_2176 : D_sampled; // @[MicrocodeCB.scala 117:26 51:11]
  wire [7:0] cbOut_E = mcycle == 3'h2 ? _GEN_2177 : E_sampled; // @[MicrocodeCB.scala 117:26 52:11]
  wire [7:0] cbOut_H = mcycle == 3'h2 ? _GEN_2178 : H_sampled; // @[MicrocodeCB.scala 117:26 53:11]
  wire [7:0] cbOut_L = mcycle == 3'h2 ? _GEN_2179 : L_sampled; // @[MicrocodeCB.scala 117:26 54:11]
  wire [7:0] cbOut_A = mcycle == 3'h2 ? _GEN_2180 : A_sampled; // @[MicrocodeCB.scala 117:26 47:11]
  wire  _GEN_2192 = mcycle == 3'h2 & _GEN_2181; // @[MicrocodeCB.scala 117:26 57:14]
  wire [7:0] cbOut_imm8 = mcycle == 3'h2 ? _GEN_2182 : _GEN_2115; // @[MicrocodeCB.scala 117:26]
  wire [2:0] cbOut_next_mcycle = mcycle == 3'h2 ? _GEN_2183 : _GEN_2116; // @[MicrocodeCB.scala 117:26]
  wire  _cbOut_T_26 = mcycle == 3'h3; // @[MicrocodeCB.scala 185:17]
  wire  _GEN_2195 = _u_T_1 | _GEN_2192; // @[MicrocodeCB.scala 189:{28,39}]
  wire [15:0] _GEN_2196 = mcycle == 3'h3 ? u_HL : _GEN_2113; // @[MicrocodeCB.scala 185:26 186:18]
  wire [7:0] _GEN_2198 = mcycle == 3'h3 ? CB_imm8 : 8'h0; // @[MicrocodeCB.scala 185:26 188:23 63:21]
  wire  cbOut_done = mcycle == 3'h3 ? _GEN_2195 : _GEN_2192; // @[MicrocodeCB.scala 185:26]
  wire [2:0] _GEN_2200 = cbOut_done ? 3'h0 : cbOut_next_mcycle; // @[LR35902_Core.scala 509:28 510:20 513:20]
  wire [2:0] _GEN_2201 = cbOut_done ? 3'h0 : state; // @[LR35902_Core.scala 509:28 511:20 96:23]
  wire [7:0] _GEN_2202 = _u_T_1 ? cbOut_A : A; // @[LR35902_Core.scala 486:30 488:14 45:18]
  wire [7:0] _GEN_2203 = _u_T_1 ? cbOut_F : F; // @[LR35902_Core.scala 486:30 489:14 46:18]
  wire [7:0] _GEN_2204 = _u_T_1 ? cbOut_B : B; // @[LR35902_Core.scala 486:30 490:14 47:18]
  wire [7:0] _GEN_2205 = _u_T_1 ? cbOut_C : C; // @[LR35902_Core.scala 486:30 491:14 48:18]
  wire [7:0] _GEN_2206 = _u_T_1 ? cbOut_D : D; // @[LR35902_Core.scala 486:30 492:14 49:18]
  wire [7:0] _GEN_2207 = _u_T_1 ? cbOut_E : E; // @[LR35902_Core.scala 486:30 493:14 50:18]
  wire [7:0] _GEN_2208 = _u_T_1 ? cbOut_H : H; // @[LR35902_Core.scala 486:30 494:14 51:18]
  wire [7:0] _GEN_2209 = _u_T_1 ? cbOut_L : L; // @[LR35902_Core.scala 486:30 495:14 52:18]
  wire [7:0] _GEN_2210 = _u_T_1 ? cbOut_imm8 : CB_imm8; // @[LR35902_Core.scala 486:30 497:19 61:25]
  wire [7:0] _GEN_2211 = _u_T_1 ? cbOut_A : A_sampled; // @[LR35902_Core.scala 486:30 500:22 71:27]
  wire [7:0] _GEN_2212 = _u_T_1 ? cbOut_F : F_sampled; // @[LR35902_Core.scala 486:30 501:22 72:27]
  wire [7:0] _GEN_2213 = _u_T_1 ? cbOut_B : B_sampled; // @[LR35902_Core.scala 486:30 502:22 73:27]
  wire [7:0] _GEN_2214 = _u_T_1 ? cbOut_C : C_sampled; // @[LR35902_Core.scala 486:30 503:22 74:27]
  wire [7:0] _GEN_2215 = _u_T_1 ? cbOut_D : D_sampled; // @[LR35902_Core.scala 486:30 504:22 75:27]
  wire [7:0] _GEN_2216 = _u_T_1 ? cbOut_E : E_sampled; // @[LR35902_Core.scala 486:30 505:22 76:27]
  wire [7:0] _GEN_2217 = _u_T_1 ? cbOut_H : H_sampled; // @[LR35902_Core.scala 486:30 506:22 77:27]
  wire [7:0] _GEN_2218 = _u_T_1 ? cbOut_L : L_sampled; // @[LR35902_Core.scala 486:30 507:22 78:27]
  wire [2:0] _GEN_2219 = _u_T_1 ? _GEN_2200 : mcycle; // @[LR35902_Core.scala 486:30 98:23]
  wire [2:0] _GEN_2220 = _u_T_1 ? _GEN_2201 : state; // @[LR35902_Core.scala 486:30 96:23]
  wire [15:0] _GEN_2221 = u__PC != PC_sampled ? u__PC : PC; // @[LR35902_Core.scala 532:37 533:16 54:19]
  wire  _GEN_2222 = u__done & IME_pending | u__IME; // @[LR35902_Core.scala 563:40 564:17 560:23]
  wire  _GEN_2223 = u__done & IME_pending ? 1'h0 : u__IME_pending; // @[LR35902_Core.scala 561:23 563:40 565:25]
  wire [2:0] _GEN_2224 = u__done ? 3'h0 : u__next_mcycle; // @[LR35902_Core.scala 568:24 569:20 572:20]
  wire [2:0] _GEN_2225 = u__done ? 3'h0 : state; // @[LR35902_Core.scala 568:24 570:20 96:23]
  wire [15:0] _GEN_2226 = _u_T_1 ? _GEN_2221 : PC; // @[LR35902_Core.scala 525:30 54:19]
  wire [15:0] _GEN_2227 = _u_T_1 ? u__SP : SP; // @[LR35902_Core.scala 525:30 535:14 55:19]
  wire [7:0] _GEN_2228 = _u_T_1 ? u__A : A; // @[LR35902_Core.scala 525:30 536:14 45:18]
  wire [7:0] _GEN_2229 = _u_T_1 ? u__F : F; // @[LR35902_Core.scala 525:30 537:14 46:18]
  wire [7:0] _GEN_2230 = _u_T_1 ? u__B : B; // @[LR35902_Core.scala 525:30 538:14 47:18]
  wire [7:0] _GEN_2231 = _u_T_1 ? u__C : C; // @[LR35902_Core.scala 525:30 539:14 48:18]
  wire [7:0] _GEN_2232 = _u_T_1 ? u__D : D; // @[LR35902_Core.scala 525:30 540:14 49:18]
  wire [7:0] _GEN_2233 = _u_T_1 ? u__E : E; // @[LR35902_Core.scala 525:30 541:14 50:18]
  wire [7:0] _GEN_2234 = _u_T_1 ? u__H : H; // @[LR35902_Core.scala 525:30 542:14 51:18]
  wire [7:0] _GEN_2235 = _u_T_1 ? u__L : L; // @[LR35902_Core.scala 525:30 543:14 52:18]
  wire [15:0] _GEN_2236 = _u_T_1 ? u__PC : PC_sampled; // @[LR35902_Core.scala 525:30 547:22 69:27]
  wire [15:0] _GEN_2237 = _u_T_1 ? u__SP : SP_sampled; // @[LR35902_Core.scala 525:30 548:22 70:27]
  wire [7:0] _GEN_2238 = _u_T_1 ? u__A : A_sampled; // @[LR35902_Core.scala 525:30 549:22 71:27]
  wire [7:0] _GEN_2239 = _u_T_1 ? u__F : F_sampled; // @[LR35902_Core.scala 525:30 550:22 72:27]
  wire [7:0] _GEN_2240 = _u_T_1 ? u__B : B_sampled; // @[LR35902_Core.scala 525:30 551:22 73:27]
  wire [7:0] _GEN_2241 = _u_T_1 ? u__C : C_sampled; // @[LR35902_Core.scala 525:30 552:22 74:27]
  wire [7:0] _GEN_2242 = _u_T_1 ? u__D : D_sampled; // @[LR35902_Core.scala 525:30 553:22 75:27]
  wire [7:0] _GEN_2243 = _u_T_1 ? u__E : E_sampled; // @[LR35902_Core.scala 525:30 554:22 76:27]
  wire [7:0] _GEN_2244 = _u_T_1 ? u__H : H_sampled; // @[LR35902_Core.scala 525:30 555:22 77:27]
  wire [7:0] _GEN_2245 = _u_T_1 ? u__L : L_sampled; // @[LR35902_Core.scala 525:30 556:22 78:27]
  wire  _GEN_2246 = _u_T_1 ? _GEN_2222 : IME; // @[LR35902_Core.scala 525:30 63:28]
  wire  _GEN_2247 = _u_T_1 ? _GEN_2223 : IME_pending; // @[LR35902_Core.scala 525:30 64:28]
  wire [2:0] _GEN_2248 = _u_T_1 ? _GEN_2224 : mcycle; // @[LR35902_Core.scala 525:30 98:23]
  wire [2:0] _GEN_2249 = _u_T_1 ? _GEN_2225 : state; // @[LR35902_Core.scala 525:30 96:23]
  wire [15:0] _GEN_2250 = IR == 8'hcb ? _GEN_2196 : _GEN_1930; // @[LR35902_Core.scala 466:28]
  wire  _GEN_2252 = IR == 8'hcb ? _cbOut_T_26 : _GEN_1934; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2253 = IR == 8'hcb ? _GEN_2198 : _GEN_1935; // @[LR35902_Core.scala 466:28]
  wire [15:0] _GEN_2302 = 3'h4 == state ? _GEN_2250 : _GEN_1930; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2355 = 3'h5 == state ? _GEN_1930 : _GEN_2302; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2394 = 3'h3 == state ? _GEN_1930 : _GEN_2355; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2433 = 3'h2 == state ? _GEN_1930 : _GEN_2394; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2473 = 3'h1 == state ? _GEN_1930 : _GEN_2433; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2522 = 3'h0 == state ? _GEN_1930 : _GEN_2473; // @[LR35902_Core.scala 211:17]
  wire [15:0] mcBus_memAddr = 3'h7 == state ? _GEN_1930 : _GEN_2522; // @[LR35902_Core.scala 211:17]
  wire  _GEN_2304 = 3'h4 == state ? _GEN_2252 : _GEN_1934; // @[LR35902_Core.scala 211:17]
  wire  _GEN_2357 = 3'h5 == state ? _GEN_1934 : _GEN_2304; // @[LR35902_Core.scala 211:17]
  wire  _GEN_2396 = 3'h3 == state ? _GEN_1934 : _GEN_2357; // @[LR35902_Core.scala 211:17]
  wire  _GEN_2435 = 3'h2 == state ? _GEN_1934 : _GEN_2396; // @[LR35902_Core.scala 211:17]
  wire  _GEN_2475 = 3'h1 == state ? _GEN_1934 : _GEN_2435; // @[LR35902_Core.scala 211:17]
  wire  _GEN_2524 = 3'h0 == state ? _GEN_1934 : _GEN_2475; // @[LR35902_Core.scala 211:17]
  wire  mcBus_memWrite = 3'h7 == state ? _GEN_1934 : _GEN_2524; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2305 = 3'h4 == state ? _GEN_2253 : _GEN_1935; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2358 = 3'h5 == state ? _GEN_1935 : _GEN_2305; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2397 = 3'h3 == state ? _GEN_1935 : _GEN_2358; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2436 = 3'h2 == state ? _GEN_1935 : _GEN_2397; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2476 = 3'h1 == state ? _GEN_1935 : _GEN_2436; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2525 = 3'h0 == state ? _GEN_1935 : _GEN_2476; // @[LR35902_Core.scala 211:17]
  wire [7:0] mcBus_memWriteData = 3'h7 == state ? _GEN_1935 : _GEN_2525; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2258 = IR == 8'hcb ? _GEN_2202 : _GEN_2228; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2259 = IR == 8'hcb ? _GEN_2203 : _GEN_2229; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2260 = IR == 8'hcb ? _GEN_2204 : _GEN_2230; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2261 = IR == 8'hcb ? _GEN_2205 : _GEN_2231; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2262 = IR == 8'hcb ? _GEN_2206 : _GEN_2232; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2263 = IR == 8'hcb ? _GEN_2207 : _GEN_2233; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2264 = IR == 8'hcb ? _GEN_2208 : _GEN_2234; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2265 = IR == 8'hcb ? _GEN_2209 : _GEN_2235; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2266 = IR == 8'hcb ? _GEN_2210 : CB_imm8; // @[LR35902_Core.scala 466:28 61:25]
  wire [7:0] _GEN_2267 = IR == 8'hcb ? _GEN_2211 : _GEN_2238; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2268 = IR == 8'hcb ? _GEN_2212 : _GEN_2239; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2269 = IR == 8'hcb ? _GEN_2213 : _GEN_2240; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2270 = IR == 8'hcb ? _GEN_2214 : _GEN_2241; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2271 = IR == 8'hcb ? _GEN_2215 : _GEN_2242; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2272 = IR == 8'hcb ? _GEN_2216 : _GEN_2243; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2273 = IR == 8'hcb ? _GEN_2217 : _GEN_2244; // @[LR35902_Core.scala 466:28]
  wire [7:0] _GEN_2274 = IR == 8'hcb ? _GEN_2218 : _GEN_2245; // @[LR35902_Core.scala 466:28]
  wire [2:0] _GEN_2275 = IR == 8'hcb ? _GEN_2219 : _GEN_2248; // @[LR35902_Core.scala 466:28]
  wire [2:0] _GEN_2276 = IR == 8'hcb ? _GEN_2220 : _GEN_2249; // @[LR35902_Core.scala 466:28]
  wire [15:0] _GEN_2277 = IR == 8'hcb ? PC : _GEN_2226; // @[LR35902_Core.scala 466:28 54:19]
  wire [15:0] _GEN_2278 = IR == 8'hcb ? SP : _GEN_2227; // @[LR35902_Core.scala 466:28 55:19]
  wire [15:0] _GEN_2279 = IR == 8'hcb ? PC_sampled : _GEN_2236; // @[LR35902_Core.scala 466:28 69:27]
  wire [15:0] _GEN_2280 = IR == 8'hcb ? SP_sampled : _GEN_2237; // @[LR35902_Core.scala 466:28 70:27]
  wire  _GEN_2281 = IR == 8'hcb ? IME : _GEN_2246; // @[LR35902_Core.scala 466:28 63:28]
  wire  _GEN_2282 = IR == 8'hcb ? IME_pending : _GEN_2247; // @[LR35902_Core.scala 466:28 64:28]
  wire [15:0] _GEN_2283 = IME ? intr_io_irq_vector : irqVectorLatched; // @[LR35902_Core.scala 593:20 597:28 129:33]
  wire [2:0] _GEN_2284 = IME ? intr_io_irq_index : irqIndexLatched; // @[LR35902_Core.scala 593:20 598:28 130:33]
  wire  _GEN_2285 = IME ? 1'h0 : IME; // @[LR35902_Core.scala 593:20 600:18 63:28]
  wire [2:0] _GEN_2287 = IME ? 3'h7 : 3'h0; // @[LR35902_Core.scala 593:20 603:18 613:18]
  wire [15:0] _GEN_2289 = _T_11 ? _GEN_2283 : irqVectorLatched; // @[LR35902_Core.scala 589:22 129:33]
  wire [2:0] _GEN_2290 = _T_11 ? _GEN_2284 : irqIndexLatched; // @[LR35902_Core.scala 589:22 130:33]
  wire  _GEN_2291 = _T_11 ? _GEN_2285 : IME; // @[LR35902_Core.scala 589:22 63:28]
  wire [2:0] _GEN_2292 = _T_11 ? 3'h0 : mcycle; // @[LR35902_Core.scala 589:22 624:16]
  wire [1:0] _GEN_2293 = _T_11 ? 2'h0 : tcycle; // @[LR35902_Core.scala 589:22 625:16]
  wire [2:0] _GEN_2294 = _T_11 ? _GEN_2287 : state; // @[LR35902_Core.scala 589:22 96:23]
  wire [15:0] _GEN_2296 = 3'h6 == state ? _GEN_2289 : irqVectorLatched; // @[LR35902_Core.scala 211:17 129:33]
  wire [2:0] _GEN_2297 = 3'h6 == state ? _GEN_2290 : irqIndexLatched; // @[LR35902_Core.scala 211:17 130:33]
  wire  _GEN_2298 = 3'h6 == state ? _GEN_2291 : IME; // @[LR35902_Core.scala 211:17 63:28]
  wire [2:0] _GEN_2299 = 3'h6 == state ? _GEN_2292 : mcycle; // @[LR35902_Core.scala 211:17 98:23]
  wire [1:0] _GEN_2300 = 3'h6 == state ? _GEN_2293 : _GEN_1942; // @[LR35902_Core.scala 211:17]
  wire [2:0] _GEN_2301 = 3'h6 == state ? _GEN_2294 : state; // @[LR35902_Core.scala 211:17 96:23]
  wire [15:0] _GEN_2306 = 3'h4 == state ? mcBus_memAddr : 16'h0; // @[LR35902_Core.scala 211:17 169:33]
  wire [7:0] _GEN_2309 = 3'h4 == state ? mcBus_memWriteData : 8'h0; // @[LR35902_Core.scala 211:17 172:33]
  wire [7:0] _GEN_2310 = 3'h4 == state ? _GEN_2258 : A; // @[LR35902_Core.scala 211:17 45:18]
  wire [7:0] _GEN_2311 = 3'h4 == state ? _GEN_2259 : F; // @[LR35902_Core.scala 211:17 46:18]
  wire [7:0] _GEN_2312 = 3'h4 == state ? _GEN_2260 : B; // @[LR35902_Core.scala 211:17 47:18]
  wire [7:0] _GEN_2313 = 3'h4 == state ? _GEN_2261 : C; // @[LR35902_Core.scala 211:17 48:18]
  wire [7:0] _GEN_2314 = 3'h4 == state ? _GEN_2262 : D; // @[LR35902_Core.scala 211:17 49:18]
  wire [7:0] _GEN_2315 = 3'h4 == state ? _GEN_2263 : E; // @[LR35902_Core.scala 211:17 50:18]
  wire [7:0] _GEN_2316 = 3'h4 == state ? _GEN_2264 : H; // @[LR35902_Core.scala 211:17 51:18]
  wire [7:0] _GEN_2317 = 3'h4 == state ? _GEN_2265 : L; // @[LR35902_Core.scala 211:17 52:18]
  wire [7:0] _GEN_2318 = 3'h4 == state ? _GEN_2266 : CB_imm8; // @[LR35902_Core.scala 211:17 61:25]
  wire [7:0] _GEN_2319 = 3'h4 == state ? _GEN_2267 : A_sampled; // @[LR35902_Core.scala 211:17 71:27]
  wire [7:0] _GEN_2320 = 3'h4 == state ? _GEN_2268 : F_sampled; // @[LR35902_Core.scala 211:17 72:27]
  wire [7:0] _GEN_2321 = 3'h4 == state ? _GEN_2269 : B_sampled; // @[LR35902_Core.scala 211:17 73:27]
  wire [7:0] _GEN_2322 = 3'h4 == state ? _GEN_2270 : C_sampled; // @[LR35902_Core.scala 211:17 74:27]
  wire [7:0] _GEN_2323 = 3'h4 == state ? _GEN_2271 : D_sampled; // @[LR35902_Core.scala 211:17 75:27]
  wire [7:0] _GEN_2324 = 3'h4 == state ? _GEN_2272 : E_sampled; // @[LR35902_Core.scala 211:17 76:27]
  wire [7:0] _GEN_2325 = 3'h4 == state ? _GEN_2273 : H_sampled; // @[LR35902_Core.scala 211:17 77:27]
  wire [7:0] _GEN_2326 = 3'h4 == state ? _GEN_2274 : L_sampled; // @[LR35902_Core.scala 211:17 78:27]
  wire [2:0] _GEN_2327 = 3'h4 == state ? _GEN_2275 : _GEN_2299; // @[LR35902_Core.scala 211:17]
  wire [2:0] _GEN_2328 = 3'h4 == state ? _GEN_2276 : _GEN_2301; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2329 = 3'h4 == state ? _GEN_2277 : PC; // @[LR35902_Core.scala 211:17 54:19]
  wire [15:0] _GEN_2330 = 3'h4 == state ? _GEN_2278 : SP; // @[LR35902_Core.scala 211:17 55:19]
  wire [15:0] _GEN_2331 = 3'h4 == state ? _GEN_2279 : PC_sampled; // @[LR35902_Core.scala 211:17 69:27]
  wire [15:0] _GEN_2332 = 3'h4 == state ? _GEN_2280 : SP_sampled; // @[LR35902_Core.scala 211:17 70:27]
  wire  _GEN_2333 = 3'h4 == state ? _GEN_2281 : _GEN_2298; // @[LR35902_Core.scala 211:17]
  wire  _GEN_2334 = 3'h4 == state ? _GEN_2282 : IME_pending; // @[LR35902_Core.scala 211:17 64:28]
  wire [15:0] _GEN_2336 = 3'h4 == state ? irqVectorLatched : _GEN_2296; // @[LR35902_Core.scala 211:17 129:33]
  wire [2:0] _GEN_2337 = 3'h4 == state ? irqIndexLatched : _GEN_2297; // @[LR35902_Core.scala 211:17 130:33]
  wire [1:0] _GEN_2338 = 3'h4 == state ? _GEN_1942 : _GEN_2300; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2339 = 3'h5 == state ? PC : _GEN_2306; // @[LR35902_Core.scala 211:17 437:15]
  wire [7:0] _GEN_2341 = 3'h5 == state ? _GEN_2091 : IR2; // @[LR35902_Core.scala 211:17 58:25]
  wire [15:0] _GEN_2342 = 3'h5 == state ? _GEN_2021 : _GEN_2329; // @[LR35902_Core.scala 211:17]
  wire [2:0] _GEN_2343 = 3'h5 == state ? _GEN_113 : _GEN_2327; // @[LR35902_Core.scala 211:17]
  wire [2:0] _GEN_2344 = 3'h5 == state ? _GEN_2063 : _GEN_2328; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2345 = 3'h5 == state ? _GEN_2064 : _GEN_2331; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2346 = 3'h5 == state ? _GEN_2065 : _GEN_2332; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2347 = 3'h5 == state ? _GEN_2066 : _GEN_2319; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2348 = 3'h5 == state ? _GEN_2067 : _GEN_2320; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2349 = 3'h5 == state ? _GEN_2068 : _GEN_2321; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2350 = 3'h5 == state ? _GEN_2069 : _GEN_2322; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2351 = 3'h5 == state ? _GEN_2070 : _GEN_2323; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2352 = 3'h5 == state ? _GEN_2071 : _GEN_2324; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2353 = 3'h5 == state ? _GEN_2072 : _GEN_2325; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2354 = 3'h5 == state ? _GEN_2073 : _GEN_2326; // @[LR35902_Core.scala 211:17]
  wire  _GEN_2359 = 3'h5 == state ? 1'h0 : 3'h4 == state & mcBus_memWrite; // @[LR35902_Core.scala 211:17 171:33]
  wire [7:0] _GEN_2360 = 3'h5 == state ? 8'h0 : _GEN_2309; // @[LR35902_Core.scala 211:17 172:33]
  wire [7:0] _GEN_2361 = 3'h5 == state ? A : _GEN_2310; // @[LR35902_Core.scala 211:17 45:18]
  wire [7:0] _GEN_2362 = 3'h5 == state ? F : _GEN_2311; // @[LR35902_Core.scala 211:17 46:18]
  wire [7:0] _GEN_2363 = 3'h5 == state ? B : _GEN_2312; // @[LR35902_Core.scala 211:17 47:18]
  wire [7:0] _GEN_2364 = 3'h5 == state ? C : _GEN_2313; // @[LR35902_Core.scala 211:17 48:18]
  wire [7:0] _GEN_2365 = 3'h5 == state ? D : _GEN_2314; // @[LR35902_Core.scala 211:17 49:18]
  wire [7:0] _GEN_2366 = 3'h5 == state ? E : _GEN_2315; // @[LR35902_Core.scala 211:17 50:18]
  wire [7:0] _GEN_2367 = 3'h5 == state ? H : _GEN_2316; // @[LR35902_Core.scala 211:17 51:18]
  wire [7:0] _GEN_2368 = 3'h5 == state ? L : _GEN_2317; // @[LR35902_Core.scala 211:17 52:18]
  wire [7:0] _GEN_2369 = 3'h5 == state ? CB_imm8 : _GEN_2318; // @[LR35902_Core.scala 211:17 61:25]
  wire [15:0] _GEN_2370 = 3'h5 == state ? SP : _GEN_2330; // @[LR35902_Core.scala 211:17 55:19]
  wire  _GEN_2371 = 3'h5 == state ? IME : _GEN_2333; // @[LR35902_Core.scala 211:17 63:28]
  wire  _GEN_2372 = 3'h5 == state ? IME_pending : _GEN_2334; // @[LR35902_Core.scala 211:17 64:28]
  wire [15:0] _GEN_2374 = 3'h5 == state ? irqVectorLatched : _GEN_2336; // @[LR35902_Core.scala 211:17 129:33]
  wire [2:0] _GEN_2375 = 3'h5 == state ? irqIndexLatched : _GEN_2337; // @[LR35902_Core.scala 211:17 130:33]
  wire [1:0] _GEN_2376 = 3'h5 == state ? _GEN_1942 : _GEN_2338; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2377 = 3'h3 == state ? PC : _GEN_2339; // @[LR35902_Core.scala 211:17 409:15]
  wire [15:0] _GEN_2379 = 3'h3 == state ? _GEN_2077 : imm16; // @[LR35902_Core.scala 211:17 60:25]
  wire [15:0] _GEN_2380 = 3'h3 == state ? _GEN_2021 : _GEN_2342; // @[LR35902_Core.scala 211:17]
  wire [2:0] _GEN_2381 = 3'h3 == state ? _GEN_1948 : _GEN_2343; // @[LR35902_Core.scala 211:17]
  wire [2:0] _GEN_2382 = 3'h3 == state ? _GEN_2063 : _GEN_2344; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2383 = 3'h3 == state ? _GEN_2064 : _GEN_2345; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2384 = 3'h3 == state ? _GEN_2065 : _GEN_2346; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2385 = 3'h3 == state ? _GEN_2066 : _GEN_2347; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2386 = 3'h3 == state ? _GEN_2067 : _GEN_2348; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2387 = 3'h3 == state ? _GEN_2068 : _GEN_2349; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2388 = 3'h3 == state ? _GEN_2069 : _GEN_2350; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2389 = 3'h3 == state ? _GEN_2070 : _GEN_2351; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2390 = 3'h3 == state ? _GEN_2071 : _GEN_2352; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2391 = 3'h3 == state ? _GEN_2072 : _GEN_2353; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2392 = 3'h3 == state ? _GEN_2073 : _GEN_2354; // @[LR35902_Core.scala 211:17]
  wire [7:0] _GEN_2393 = 3'h3 == state ? IR2 : _GEN_2341; // @[LR35902_Core.scala 211:17 58:25]
  wire  _GEN_2398 = 3'h3 == state ? 1'h0 : _GEN_2359; // @[LR35902_Core.scala 211:17 171:33]
  wire [7:0] _GEN_2399 = 3'h3 == state ? 8'h0 : _GEN_2360; // @[LR35902_Core.scala 211:17 172:33]
  wire [7:0] _GEN_2400 = 3'h3 == state ? A : _GEN_2361; // @[LR35902_Core.scala 211:17 45:18]
  wire [7:0] _GEN_2401 = 3'h3 == state ? F : _GEN_2362; // @[LR35902_Core.scala 211:17 46:18]
  wire [7:0] _GEN_2402 = 3'h3 == state ? B : _GEN_2363; // @[LR35902_Core.scala 211:17 47:18]
  wire [7:0] _GEN_2403 = 3'h3 == state ? C : _GEN_2364; // @[LR35902_Core.scala 211:17 48:18]
  wire [7:0] _GEN_2404 = 3'h3 == state ? D : _GEN_2365; // @[LR35902_Core.scala 211:17 49:18]
  wire [7:0] _GEN_2405 = 3'h3 == state ? E : _GEN_2366; // @[LR35902_Core.scala 211:17 50:18]
  wire [7:0] _GEN_2406 = 3'h3 == state ? H : _GEN_2367; // @[LR35902_Core.scala 211:17 51:18]
  wire [7:0] _GEN_2407 = 3'h3 == state ? L : _GEN_2368; // @[LR35902_Core.scala 211:17 52:18]
  wire [7:0] _GEN_2408 = 3'h3 == state ? CB_imm8 : _GEN_2369; // @[LR35902_Core.scala 211:17 61:25]
  wire [15:0] _GEN_2409 = 3'h3 == state ? SP : _GEN_2370; // @[LR35902_Core.scala 211:17 55:19]
  wire  _GEN_2410 = 3'h3 == state ? IME : _GEN_2371; // @[LR35902_Core.scala 211:17 63:28]
  wire  _GEN_2411 = 3'h3 == state ? IME_pending : _GEN_2372; // @[LR35902_Core.scala 211:17 64:28]
  wire [15:0] _GEN_2413 = 3'h3 == state ? irqVectorLatched : _GEN_2374; // @[LR35902_Core.scala 211:17 129:33]
  wire [2:0] _GEN_2414 = 3'h3 == state ? irqIndexLatched : _GEN_2375; // @[LR35902_Core.scala 211:17 130:33]
  wire [1:0] _GEN_2415 = 3'h3 == state ? _GEN_1942 : _GEN_2376; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2416 = 3'h2 == state ? PC : _GEN_2377; // @[LR35902_Core.scala 211:17 395:15]
  wire [15:0] _GEN_2418 = 3'h2 == state ? _GEN_2074 : _GEN_2379; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2419 = 3'h2 == state ? _GEN_2021 : _GEN_2380; // @[LR35902_Core.scala 211:17]
  wire [2:0] _GEN_2420 = 3'h2 == state ? _GEN_2076 : _GEN_2382; // @[LR35902_Core.scala 211:17]
  wire [2:0] _GEN_2421 = 3'h2 == state ? mcycle : _GEN_2381; // @[LR35902_Core.scala 211:17 98:23]
  wire [15:0] _GEN_2422 = 3'h2 == state ? PC_sampled : _GEN_2383; // @[LR35902_Core.scala 211:17 69:27]
  wire [15:0] _GEN_2423 = 3'h2 == state ? SP_sampled : _GEN_2384; // @[LR35902_Core.scala 211:17 70:27]
  wire [7:0] _GEN_2424 = 3'h2 == state ? A_sampled : _GEN_2385; // @[LR35902_Core.scala 211:17 71:27]
  wire [7:0] _GEN_2425 = 3'h2 == state ? F_sampled : _GEN_2386; // @[LR35902_Core.scala 211:17 72:27]
  wire [7:0] _GEN_2426 = 3'h2 == state ? B_sampled : _GEN_2387; // @[LR35902_Core.scala 211:17 73:27]
  wire [7:0] _GEN_2427 = 3'h2 == state ? C_sampled : _GEN_2388; // @[LR35902_Core.scala 211:17 74:27]
  wire [7:0] _GEN_2428 = 3'h2 == state ? D_sampled : _GEN_2389; // @[LR35902_Core.scala 211:17 75:27]
  wire [7:0] _GEN_2429 = 3'h2 == state ? E_sampled : _GEN_2390; // @[LR35902_Core.scala 211:17 76:27]
  wire [7:0] _GEN_2430 = 3'h2 == state ? H_sampled : _GEN_2391; // @[LR35902_Core.scala 211:17 77:27]
  wire [7:0] _GEN_2431 = 3'h2 == state ? L_sampled : _GEN_2392; // @[LR35902_Core.scala 211:17 78:27]
  wire [7:0] _GEN_2432 = 3'h2 == state ? IR2 : _GEN_2393; // @[LR35902_Core.scala 211:17 58:25]
  wire  _GEN_2437 = 3'h2 == state ? 1'h0 : _GEN_2398; // @[LR35902_Core.scala 211:17 171:33]
  wire [7:0] _GEN_2438 = 3'h2 == state ? 8'h0 : _GEN_2399; // @[LR35902_Core.scala 211:17 172:33]
  wire [7:0] _GEN_2439 = 3'h2 == state ? A : _GEN_2400; // @[LR35902_Core.scala 211:17 45:18]
  wire [7:0] _GEN_2440 = 3'h2 == state ? F : _GEN_2401; // @[LR35902_Core.scala 211:17 46:18]
  wire [7:0] _GEN_2441 = 3'h2 == state ? B : _GEN_2402; // @[LR35902_Core.scala 211:17 47:18]
  wire [7:0] _GEN_2442 = 3'h2 == state ? C : _GEN_2403; // @[LR35902_Core.scala 211:17 48:18]
  wire [7:0] _GEN_2443 = 3'h2 == state ? D : _GEN_2404; // @[LR35902_Core.scala 211:17 49:18]
  wire [7:0] _GEN_2444 = 3'h2 == state ? E : _GEN_2405; // @[LR35902_Core.scala 211:17 50:18]
  wire [7:0] _GEN_2445 = 3'h2 == state ? H : _GEN_2406; // @[LR35902_Core.scala 211:17 51:18]
  wire [7:0] _GEN_2446 = 3'h2 == state ? L : _GEN_2407; // @[LR35902_Core.scala 211:17 52:18]
  wire [7:0] _GEN_2447 = 3'h2 == state ? CB_imm8 : _GEN_2408; // @[LR35902_Core.scala 211:17 61:25]
  wire [15:0] _GEN_2448 = 3'h2 == state ? SP : _GEN_2409; // @[LR35902_Core.scala 211:17 55:19]
  wire  _GEN_2449 = 3'h2 == state ? IME : _GEN_2410; // @[LR35902_Core.scala 211:17 63:28]
  wire  _GEN_2450 = 3'h2 == state ? IME_pending : _GEN_2411; // @[LR35902_Core.scala 211:17 64:28]
  wire [15:0] _GEN_2452 = 3'h2 == state ? irqVectorLatched : _GEN_2413; // @[LR35902_Core.scala 211:17 129:33]
  wire [2:0] _GEN_2453 = 3'h2 == state ? irqIndexLatched : _GEN_2414; // @[LR35902_Core.scala 211:17 130:33]
  wire [1:0] _GEN_2454 = 3'h2 == state ? _GEN_1942 : _GEN_2415; // @[LR35902_Core.scala 211:17]
  wire [15:0] _GEN_2455 = 3'h1 == state ? PC : _GEN_2416; // @[LR35902_Core.scala 211:17 367:15]
  wire  _GEN_2477 = 3'h1 == state ? 1'h0 : _GEN_2437; // @[LR35902_Core.scala 211:17 171:33]
  wire [7:0] _GEN_2478 = 3'h1 == state ? 8'h0 : _GEN_2438; // @[LR35902_Core.scala 211:17 172:33]
  wire [15:0] _GEN_2502 = 3'h0 == state ? _GEN_2043 : _GEN_2455; // @[LR35902_Core.scala 211:17]
  wire  _GEN_2526 = 3'h0 == state ? 1'h0 : _GEN_2477; // @[LR35902_Core.scala 211:17 171:33]
  wire [7:0] _GEN_2527 = 3'h0 == state ? 8'h0 : _GEN_2478; // @[LR35902_Core.scala 211:17 172:33]
  Interrupts intr ( // @[LR35902_Core.scala 117:20]
    .io_IE(intr_io_IE),
    .io_IF(intr_io_IF),
    .io_IME(intr_io_IME),
    .io_should_irq(intr_io_should_irq),
    .io_irq_vector(intr_io_irq_vector),
    .io_irq_index(intr_io_irq_index)
  );
  LR35902_ALU u_alu ( // @[Microcode.scala 107:21]
    .io_op(u_alu_io_op),
    .io_a(u_alu_io_a),
    .io_b(u_alu_io_b),
    .io_carryIn(u_alu_io_carryIn),
    .io_out(u_alu_io_out),
    .io_flagZ(u_alu_io_flagZ),
    .io_flagN(u_alu_io_flagN),
    .io_flagH(u_alu_io_flagH),
    .io_flagC(u_alu_io_flagC)
  );
  assign io_memAddr = 3'h7 == state ? _GEN_1964 : _GEN_2502; // @[LR35902_Core.scala 211:17]
  assign io_memWrite = 3'h7 == state ? _GEN_1965 : _GEN_2526; // @[LR35902_Core.scala 211:17]
  assign io_memWriteData = 3'h7 == state ? _GEN_1966 : _GEN_2527; // @[LR35902_Core.scala 211:17]
  assign io_dbg_pc = PC; // @[LR35902_Core.scala 643:17]
  assign io_dbg_opcode = IR; // @[LR35902_Core.scala 644:17]
  assign io_dbg_a = A; // @[LR35902_Core.scala 647:12]
  assign io_dbg_f = F; // @[LR35902_Core.scala 648:12]
  assign io_dbg_b = B; // @[LR35902_Core.scala 649:12]
  assign io_dbg_c = C; // @[LR35902_Core.scala 650:12]
  assign io_dbg_d = D; // @[LR35902_Core.scala 651:12]
  assign io_dbg_e = E; // @[LR35902_Core.scala 652:12]
  assign io_dbg_h = H; // @[LR35902_Core.scala 653:12]
  assign io_dbg_l = L; // @[LR35902_Core.scala 654:12]
  assign io_dbg_state = {{5'd0}, state}; // @[LR35902_Core.scala 656:17]
  assign io_dbg_tcycle = {{6'd0}, tcycle}; // @[LR35902_Core.scala 657:17]
  assign io_dbg_mcycle = {{5'd0}, mcycle}; // @[LR35902_Core.scala 658:17]
  assign io_dbg_IR = IR; // @[LR35902_Core.scala 659:17]
  assign intr_io_IE = io_ieReg; // @[LR35902_Core.scala 118:18]
  assign intr_io_IF = io_ifReg; // @[LR35902_Core.scala 119:18]
  assign intr_io_IME = IME; // @[LR35902_Core.scala 120:18]
  assign u_alu_io_op = IR == 8'h0 ? 4'h0 : _GEN_1903; // @[Microcode.scala 110:21 120:26]
  assign u_alu_io_a = IR == 8'h0 ? 8'h0 : _GEN_1904; // @[Microcode.scala 108:21 120:26]
  assign u_alu_io_b = IR == 8'h0 ? 8'h0 : _GEN_1905; // @[Microcode.scala 109:21 120:26]
  assign u_alu_io_carryIn = IR == 8'h0 ? F_sampled[4] : _GEN_1914; // @[Microcode.scala 111:21 120:26]
  always @(posedge clock) begin
    if (reset) begin // @[LR35902_Core.scala 45:18]
      A <= 8'h1; // @[LR35902_Core.scala 45:18]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (!(3'h0 == state)) begin // @[LR35902_Core.scala 211:17]
        if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
          A <= _GEN_2439;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 46:18]
      F <= 8'hb0; // @[LR35902_Core.scala 46:18]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (!(3'h0 == state)) begin // @[LR35902_Core.scala 211:17]
        if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
          F <= _GEN_2440;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 47:18]
      B <= 8'h0; // @[LR35902_Core.scala 47:18]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (!(3'h0 == state)) begin // @[LR35902_Core.scala 211:17]
        if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
          B <= _GEN_2441;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 48:18]
      C <= 8'h13; // @[LR35902_Core.scala 48:18]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (!(3'h0 == state)) begin // @[LR35902_Core.scala 211:17]
        if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
          C <= _GEN_2442;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 49:18]
      D <= 8'h0; // @[LR35902_Core.scala 49:18]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (!(3'h0 == state)) begin // @[LR35902_Core.scala 211:17]
        if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
          D <= _GEN_2443;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 50:18]
      E <= 8'hd8; // @[LR35902_Core.scala 50:18]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (!(3'h0 == state)) begin // @[LR35902_Core.scala 211:17]
        if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
          E <= _GEN_2444;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 51:18]
      H <= 8'h1; // @[LR35902_Core.scala 51:18]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (!(3'h0 == state)) begin // @[LR35902_Core.scala 211:17]
        if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
          H <= _GEN_2445;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 52:18]
      L <= 8'h4d; // @[LR35902_Core.scala 52:18]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (!(3'h0 == state)) begin // @[LR35902_Core.scala 211:17]
        if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
          L <= _GEN_2446;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 54:19]
      PC <= 16'h100; // @[LR35902_Core.scala 54:19]
    end else if (3'h7 == state) begin // @[LR35902_Core.scala 211:17]
      if (!(_u_T_59)) begin // @[LR35902_Core.scala 216:22]
        if (!(_u_T_61)) begin // @[LR35902_Core.scala 216:22]
          PC <= _GEN_1954;
        end
      end
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
      if (!(canTakeInterrupt & intr_io_should_irq)) begin // @[LR35902_Core.scala 260:44]
        PC <= _GEN_2021;
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
      PC <= _GEN_2021;
    end else begin
      PC <= _GEN_2419;
    end
    if (reset) begin // @[LR35902_Core.scala 55:19]
      SP <= 16'hfffe; // @[LR35902_Core.scala 55:19]
    end else if (3'h7 == state) begin // @[LR35902_Core.scala 211:17]
      if (!(_u_T_59)) begin // @[LR35902_Core.scala 216:22]
        if (_u_T_61) begin // @[LR35902_Core.scala 216:22]
          SP <= _GEN_1944;
        end else begin
          SP <= _GEN_1953;
        end
      end
    end else if (!(3'h0 == state)) begin // @[LR35902_Core.scala 211:17]
      if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
        SP <= _GEN_2448;
      end
    end
    if (reset) begin // @[LR35902_Core.scala 57:25]
      IR <= 8'h0; // @[LR35902_Core.scala 57:25]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
        if (!(canTakeInterrupt & intr_io_should_irq)) begin // @[LR35902_Core.scala 260:44]
          IR <= _GEN_2020;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 58:25]
      IR2 <= 8'h0; // @[LR35902_Core.scala 58:25]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (!(3'h0 == state)) begin // @[LR35902_Core.scala 211:17]
        if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
          IR2 <= _GEN_2432;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 59:25]
      imm8 <= 8'h0; // @[LR35902_Core.scala 59:25]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (!(3'h0 == state)) begin // @[LR35902_Core.scala 211:17]
        if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
          imm8 <= _GEN_2060;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 60:25]
      imm16 <= 16'h0; // @[LR35902_Core.scala 60:25]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (!(3'h0 == state)) begin // @[LR35902_Core.scala 211:17]
        if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
          imm16 <= _GEN_2418;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 61:25]
      CB_imm8 <= 8'h0; // @[LR35902_Core.scala 61:25]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (!(3'h0 == state)) begin // @[LR35902_Core.scala 211:17]
        if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
          CB_imm8 <= _GEN_2447;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 63:28]
      IME <= 1'h0; // @[LR35902_Core.scala 63:28]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
        if (canTakeInterrupt & intr_io_should_irq) begin // @[LR35902_Core.scala 260:44]
          IME <= 1'h0; // @[LR35902_Core.scala 266:16]
        end
      end else if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
        IME <= _GEN_2449;
      end
    end
    if (reset) begin // @[LR35902_Core.scala 64:28]
      IME_pending <= 1'h0; // @[LR35902_Core.scala 64:28]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (!(3'h0 == state)) begin // @[LR35902_Core.scala 211:17]
        if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
          IME_pending <= _GEN_2450;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 69:27]
      PC_sampled <= 16'h100; // @[LR35902_Core.scala 69:27]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
        if (!(canTakeInterrupt & intr_io_should_irq)) begin // @[LR35902_Core.scala 260:44]
          PC_sampled <= _GEN_2026;
        end
      end else if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
        PC_sampled <= _GEN_2064;
      end else begin
        PC_sampled <= _GEN_2422;
      end
    end
    if (reset) begin // @[LR35902_Core.scala 70:27]
      SP_sampled <= 16'hfffe; // @[LR35902_Core.scala 70:27]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
        if (!(canTakeInterrupt & intr_io_should_irq)) begin // @[LR35902_Core.scala 260:44]
          SP_sampled <= _GEN_2027;
        end
      end else if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
        SP_sampled <= _GEN_2065;
      end else begin
        SP_sampled <= _GEN_2423;
      end
    end
    if (reset) begin // @[LR35902_Core.scala 71:27]
      A_sampled <= 8'h1; // @[LR35902_Core.scala 71:27]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
        if (!(canTakeInterrupt & intr_io_should_irq)) begin // @[LR35902_Core.scala 260:44]
          A_sampled <= _GEN_2028;
        end
      end else if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
        A_sampled <= _GEN_2066;
      end else begin
        A_sampled <= _GEN_2424;
      end
    end
    if (reset) begin // @[LR35902_Core.scala 72:27]
      F_sampled <= 8'hb0; // @[LR35902_Core.scala 72:27]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
        if (!(canTakeInterrupt & intr_io_should_irq)) begin // @[LR35902_Core.scala 260:44]
          F_sampled <= _GEN_2029;
        end
      end else if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
        F_sampled <= _GEN_2067;
      end else begin
        F_sampled <= _GEN_2425;
      end
    end
    if (reset) begin // @[LR35902_Core.scala 73:27]
      B_sampled <= 8'h0; // @[LR35902_Core.scala 73:27]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
        if (!(canTakeInterrupt & intr_io_should_irq)) begin // @[LR35902_Core.scala 260:44]
          B_sampled <= _GEN_2030;
        end
      end else if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
        B_sampled <= _GEN_2068;
      end else begin
        B_sampled <= _GEN_2426;
      end
    end
    if (reset) begin // @[LR35902_Core.scala 74:27]
      C_sampled <= 8'h13; // @[LR35902_Core.scala 74:27]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
        if (!(canTakeInterrupt & intr_io_should_irq)) begin // @[LR35902_Core.scala 260:44]
          C_sampled <= _GEN_2031;
        end
      end else if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
        C_sampled <= _GEN_2069;
      end else begin
        C_sampled <= _GEN_2427;
      end
    end
    if (reset) begin // @[LR35902_Core.scala 75:27]
      D_sampled <= 8'h0; // @[LR35902_Core.scala 75:27]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
        if (!(canTakeInterrupt & intr_io_should_irq)) begin // @[LR35902_Core.scala 260:44]
          D_sampled <= _GEN_2032;
        end
      end else if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
        D_sampled <= _GEN_2070;
      end else begin
        D_sampled <= _GEN_2428;
      end
    end
    if (reset) begin // @[LR35902_Core.scala 76:27]
      E_sampled <= 8'hd8; // @[LR35902_Core.scala 76:27]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
        if (!(canTakeInterrupt & intr_io_should_irq)) begin // @[LR35902_Core.scala 260:44]
          E_sampled <= _GEN_2033;
        end
      end else if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
        E_sampled <= _GEN_2071;
      end else begin
        E_sampled <= _GEN_2429;
      end
    end
    if (reset) begin // @[LR35902_Core.scala 77:27]
      H_sampled <= 8'h1; // @[LR35902_Core.scala 77:27]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
        if (!(canTakeInterrupt & intr_io_should_irq)) begin // @[LR35902_Core.scala 260:44]
          H_sampled <= _GEN_2034;
        end
      end else if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
        H_sampled <= _GEN_2072;
      end else begin
        H_sampled <= _GEN_2430;
      end
    end
    if (reset) begin // @[LR35902_Core.scala 78:27]
      L_sampled <= 8'h4d; // @[LR35902_Core.scala 78:27]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
        if (!(canTakeInterrupt & intr_io_should_irq)) begin // @[LR35902_Core.scala 260:44]
          L_sampled <= _GEN_2035;
        end
      end else if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
        L_sampled <= _GEN_2073;
      end else begin
        L_sampled <= _GEN_2431;
      end
    end
    if (reset) begin // @[LR35902_Core.scala 96:23]
      state <= 3'h0; // @[LR35902_Core.scala 96:23]
    end else if (3'h7 == state) begin // @[LR35902_Core.scala 211:17]
      if (!(_u_T_59)) begin // @[LR35902_Core.scala 216:22]
        if (!(_u_T_61)) begin // @[LR35902_Core.scala 216:22]
          state <= _GEN_1956;
        end
      end
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
      if (canTakeInterrupt & intr_io_should_irq) begin // @[LR35902_Core.scala 260:44]
        state <= 3'h7; // @[LR35902_Core.scala 269:16]
      end else begin
        state <= _GEN_2024;
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
      state <= _GEN_2063;
    end else begin
      state <= _GEN_2420;
    end
    if (reset) begin // @[LR35902_Core.scala 97:23]
      tcycle <= 2'h0; // @[LR35902_Core.scala 97:23]
    end else if (3'h7 == state) begin // @[LR35902_Core.scala 211:17]
      tcycle <= _GEN_1942;
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
      if (canTakeInterrupt & intr_io_should_irq) begin // @[LR35902_Core.scala 260:44]
        tcycle <= 2'h0; // @[LR35902_Core.scala 268:16]
      end else begin
        tcycle <= _GEN_1942;
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
      tcycle <= _GEN_1942;
    end else begin
      tcycle <= _GEN_2454;
    end
    if (reset) begin // @[LR35902_Core.scala 98:23]
      mcycle <= 3'h0; // @[LR35902_Core.scala 98:23]
    end else if (3'h7 == state) begin // @[LR35902_Core.scala 211:17]
      if (_u_T_59) begin // @[LR35902_Core.scala 216:22]
        if (_u_T_1) begin // @[Microcode.scala 273:32]
          mcycle <= 3'h1; // @[Microcode.scala 275:29]
        end
      end else if (_u_T_61) begin // @[LR35902_Core.scala 216:22]
        mcycle <= _GEN_115;
      end else begin
        mcycle <= _GEN_1955;
      end
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
      if (canTakeInterrupt & intr_io_should_irq) begin // @[LR35902_Core.scala 260:44]
        mcycle <= 3'h0; // @[LR35902_Core.scala 267:16]
      end else begin
        mcycle <= _GEN_1948;
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 211:17]
      mcycle <= _GEN_1948;
    end else begin
      mcycle <= _GEN_2421;
    end
    if (reset) begin // @[LR35902_Core.scala 129:33]
      irqVectorLatched <= 16'h0; // @[LR35902_Core.scala 129:33]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
        if (canTakeInterrupt & intr_io_should_irq) begin // @[LR35902_Core.scala 260:44]
          irqVectorLatched <= intr_io_irq_vector; // @[LR35902_Core.scala 262:26]
        end
      end else if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
        irqVectorLatched <= _GEN_2452;
      end
    end
    if (reset) begin // @[LR35902_Core.scala 130:33]
      irqIndexLatched <= 3'h0; // @[LR35902_Core.scala 130:33]
    end else if (!(3'h7 == state)) begin // @[LR35902_Core.scala 211:17]
      if (3'h0 == state) begin // @[LR35902_Core.scala 211:17]
        if (canTakeInterrupt & intr_io_should_irq) begin // @[LR35902_Core.scala 260:44]
          irqIndexLatched <= intr_io_irq_index; // @[LR35902_Core.scala 263:26]
        end
      end else if (!(3'h1 == state)) begin // @[LR35902_Core.scala 211:17]
        irqIndexLatched <= _GEN_2453;
      end
    end
    if (reset) begin // @[Microcode.scala 56:24]
      u_tmp8 <= 8'h0; // @[Microcode.scala 56:24]
    end else if (!(IR == 8'h0)) begin // @[Microcode.scala 120:26]
      if (!(IR == 8'h76)) begin // @[Microcode.scala 126:32]
        if (!(_u_T_4 == 8'h1)) begin // @[Microcode.scala 136:44]
          u_tmp8 <= _GEN_1863;
        end
      end
    end
    state_prev <= state; // @[LR35902_Core.scala 177:28]
    mcycle_prev <= mcycle; // @[LR35902_Core.scala 178:28]
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_2 & ~reset) begin
          $fwrite(32'h80000002,"\n>>> ENTER HALT at PC=%x IF=%x IE=%x IME=%d\n",PC,io_ifReg,io_ieReg,IME); // @[LR35902_Core.scala 184:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_7 & _T_4) begin
          $fwrite(32'h80000002,"\n<<< EXIT HALT at PC=%x IF=%x IE=%x IME=%d\n",PC,io_ifReg,io_ieReg,IME); // @[LR35902_Core.scala 188:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~_T_18 & _T_25 & ~_T_26 & _u_T_1 & _T_4) begin
          $fwrite(32'h80000002,"A: %x F: %x B: %x C: %x D: %x E: %x H: %x L: %x SP: %x PC: 00:%x (%x %x %x %x)\n",A,F,B,
            C,D,E,H,L,SP,PC,io_dbgBytes_0,io_dbgBytes_1,io_dbgBytes_2,io_dbgBytes_3); // @[LR35902_Core.scala 290:19]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  A = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  F = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  B = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  C = _RAND_3[7:0];
  _RAND_4 = {1{`RANDOM}};
  D = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  E = _RAND_5[7:0];
  _RAND_6 = {1{`RANDOM}};
  H = _RAND_6[7:0];
  _RAND_7 = {1{`RANDOM}};
  L = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  PC = _RAND_8[15:0];
  _RAND_9 = {1{`RANDOM}};
  SP = _RAND_9[15:0];
  _RAND_10 = {1{`RANDOM}};
  IR = _RAND_10[7:0];
  _RAND_11 = {1{`RANDOM}};
  IR2 = _RAND_11[7:0];
  _RAND_12 = {1{`RANDOM}};
  imm8 = _RAND_12[7:0];
  _RAND_13 = {1{`RANDOM}};
  imm16 = _RAND_13[15:0];
  _RAND_14 = {1{`RANDOM}};
  CB_imm8 = _RAND_14[7:0];
  _RAND_15 = {1{`RANDOM}};
  IME = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  IME_pending = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  PC_sampled = _RAND_17[15:0];
  _RAND_18 = {1{`RANDOM}};
  SP_sampled = _RAND_18[15:0];
  _RAND_19 = {1{`RANDOM}};
  A_sampled = _RAND_19[7:0];
  _RAND_20 = {1{`RANDOM}};
  F_sampled = _RAND_20[7:0];
  _RAND_21 = {1{`RANDOM}};
  B_sampled = _RAND_21[7:0];
  _RAND_22 = {1{`RANDOM}};
  C_sampled = _RAND_22[7:0];
  _RAND_23 = {1{`RANDOM}};
  D_sampled = _RAND_23[7:0];
  _RAND_24 = {1{`RANDOM}};
  E_sampled = _RAND_24[7:0];
  _RAND_25 = {1{`RANDOM}};
  H_sampled = _RAND_25[7:0];
  _RAND_26 = {1{`RANDOM}};
  L_sampled = _RAND_26[7:0];
  _RAND_27 = {1{`RANDOM}};
  state = _RAND_27[2:0];
  _RAND_28 = {1{`RANDOM}};
  tcycle = _RAND_28[1:0];
  _RAND_29 = {1{`RANDOM}};
  mcycle = _RAND_29[2:0];
  _RAND_30 = {1{`RANDOM}};
  irqVectorLatched = _RAND_30[15:0];
  _RAND_31 = {1{`RANDOM}};
  irqIndexLatched = _RAND_31[2:0];
  _RAND_32 = {1{`RANDOM}};
  u_tmp8 = _RAND_32[7:0];
  _RAND_33 = {1{`RANDOM}};
  state_prev = _RAND_33[2:0];
  _RAND_34 = {1{`RANDOM}};
  mcycle_prev = _RAND_34[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module VRAM(
  input         clock,
  input  [12:0] io_addr,
  input         io_read,
  output [7:0]  io_rdata
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] mem [0:8191]; // @[VRAM.scala 16:24]
  wire  mem_io_rdata_MPORT_en; // @[VRAM.scala 16:24]
  wire [12:0] mem_io_rdata_MPORT_addr; // @[VRAM.scala 16:24]
  wire [7:0] mem_io_rdata_MPORT_data; // @[VRAM.scala 16:24]
  wire [7:0] mem_MPORT_data; // @[VRAM.scala 16:24]
  wire [12:0] mem_MPORT_addr; // @[VRAM.scala 16:24]
  wire  mem_MPORT_mask; // @[VRAM.scala 16:24]
  wire  mem_MPORT_en; // @[VRAM.scala 16:24]
  reg  mem_io_rdata_MPORT_en_pipe_0;
  reg [12:0] mem_io_rdata_MPORT_addr_pipe_0;
  assign mem_io_rdata_MPORT_en = mem_io_rdata_MPORT_en_pipe_0;
  assign mem_io_rdata_MPORT_addr = mem_io_rdata_MPORT_addr_pipe_0;
  assign mem_io_rdata_MPORT_data = mem[mem_io_rdata_MPORT_addr]; // @[VRAM.scala 16:24]
  assign mem_MPORT_data = 8'h0;
  assign mem_MPORT_addr = io_addr;
  assign mem_MPORT_mask = 1'h1;
  assign mem_MPORT_en = 1'h0;
  assign io_rdata = mem_io_rdata_MPORT_data; // @[VRAM.scala 20:12]
  always @(posedge clock) begin
    if (mem_MPORT_en & mem_MPORT_mask) begin
      mem[mem_MPORT_addr] <= mem_MPORT_data; // @[VRAM.scala 16:24]
    end
    mem_io_rdata_MPORT_en_pipe_0 <= io_read;
    if (io_read) begin
      mem_io_rdata_MPORT_addr_pipe_0 <= io_addr;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    mem[initvar] = _RAND_0[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  mem_io_rdata_MPORT_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  mem_io_rdata_MPORT_addr_pipe_0 = _RAND_2[12:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PixelFIFO(
  input        clock,
  input        reset,
  input        io_pushEnable,
  input  [1:0] io_pushPixels_0,
  input  [1:0] io_pushPixels_1,
  input  [1:0] io_pushPixels_2,
  input  [1:0] io_pushPixels_3,
  input  [1:0] io_pushPixels_4,
  input  [1:0] io_pushPixels_5,
  input  [1:0] io_pushPixels_6,
  input  [1:0] io_pushPixels_7,
  input        io_popEnable,
  output [1:0] io_outPixel,
  output       io_hasData,
  output [5:0] io_size,
  input        io_clear
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] fifo_0; // @[PPU.scala 17:17]
  reg [1:0] fifo_1; // @[PPU.scala 17:17]
  reg [1:0] fifo_2; // @[PPU.scala 17:17]
  reg [1:0] fifo_3; // @[PPU.scala 17:17]
  reg [1:0] fifo_4; // @[PPU.scala 17:17]
  reg [1:0] fifo_5; // @[PPU.scala 17:17]
  reg [1:0] fifo_6; // @[PPU.scala 17:17]
  reg [1:0] fifo_7; // @[PPU.scala 17:17]
  reg [1:0] fifo_8; // @[PPU.scala 17:17]
  reg [1:0] fifo_9; // @[PPU.scala 17:17]
  reg [1:0] fifo_10; // @[PPU.scala 17:17]
  reg [1:0] fifo_11; // @[PPU.scala 17:17]
  reg [1:0] fifo_12; // @[PPU.scala 17:17]
  reg [1:0] fifo_13; // @[PPU.scala 17:17]
  reg [1:0] fifo_14; // @[PPU.scala 17:17]
  reg [1:0] fifo_15; // @[PPU.scala 17:17]
  reg [1:0] fifo_16; // @[PPU.scala 17:17]
  reg [1:0] fifo_17; // @[PPU.scala 17:17]
  reg [1:0] fifo_18; // @[PPU.scala 17:17]
  reg [1:0] fifo_19; // @[PPU.scala 17:17]
  reg [1:0] fifo_20; // @[PPU.scala 17:17]
  reg [1:0] fifo_21; // @[PPU.scala 17:17]
  reg [1:0] fifo_22; // @[PPU.scala 17:17]
  reg [1:0] fifo_23; // @[PPU.scala 17:17]
  reg [1:0] fifo_24; // @[PPU.scala 17:17]
  reg [1:0] fifo_25; // @[PPU.scala 17:17]
  reg [1:0] fifo_26; // @[PPU.scala 17:17]
  reg [1:0] fifo_27; // @[PPU.scala 17:17]
  reg [1:0] fifo_28; // @[PPU.scala 17:17]
  reg [1:0] fifo_29; // @[PPU.scala 17:17]
  reg [1:0] fifo_30; // @[PPU.scala 17:17]
  reg [1:0] fifo_31; // @[PPU.scala 17:17]
  reg [4:0] head; // @[PPU.scala 18:21]
  reg [4:0] tail; // @[PPU.scala 19:21]
  reg [5:0] count; // @[PPU.scala 20:22]
  wire [1:0] _GEN_1 = 5'h1 == head ? fifo_1 : fifo_0; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_2 = 5'h2 == head ? fifo_2 : _GEN_1; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_3 = 5'h3 == head ? fifo_3 : _GEN_2; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_4 = 5'h4 == head ? fifo_4 : _GEN_3; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_5 = 5'h5 == head ? fifo_5 : _GEN_4; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_6 = 5'h6 == head ? fifo_6 : _GEN_5; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_7 = 5'h7 == head ? fifo_7 : _GEN_6; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_8 = 5'h8 == head ? fifo_8 : _GEN_7; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_9 = 5'h9 == head ? fifo_9 : _GEN_8; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_10 = 5'ha == head ? fifo_10 : _GEN_9; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_11 = 5'hb == head ? fifo_11 : _GEN_10; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_12 = 5'hc == head ? fifo_12 : _GEN_11; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_13 = 5'hd == head ? fifo_13 : _GEN_12; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_14 = 5'he == head ? fifo_14 : _GEN_13; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_15 = 5'hf == head ? fifo_15 : _GEN_14; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_16 = 5'h10 == head ? fifo_16 : _GEN_15; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_17 = 5'h11 == head ? fifo_17 : _GEN_16; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_18 = 5'h12 == head ? fifo_18 : _GEN_17; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_19 = 5'h13 == head ? fifo_19 : _GEN_18; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_20 = 5'h14 == head ? fifo_20 : _GEN_19; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_21 = 5'h15 == head ? fifo_21 : _GEN_20; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_22 = 5'h16 == head ? fifo_22 : _GEN_21; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_23 = 5'h17 == head ? fifo_23 : _GEN_22; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_24 = 5'h18 == head ? fifo_24 : _GEN_23; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_25 = 5'h19 == head ? fifo_25 : _GEN_24; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_26 = 5'h1a == head ? fifo_26 : _GEN_25; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_27 = 5'h1b == head ? fifo_27 : _GEN_26; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_28 = 5'h1c == head ? fifo_28 : _GEN_27; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_29 = 5'h1d == head ? fifo_29 : _GEN_28; // @[PPU.scala 22:{15,15}]
  wire [1:0] _GEN_30 = 5'h1e == head ? fifo_30 : _GEN_29; // @[PPU.scala 22:{15,15}]
  wire [5:0] _T_1 = {{1'd0}, tail}; // @[PPU.scala 32:18]
  wire [1:0] _GEN_32 = 5'h0 == _T_1[4:0] ? io_pushPixels_0 : fifo_0; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_33 = 5'h1 == _T_1[4:0] ? io_pushPixels_0 : fifo_1; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_34 = 5'h2 == _T_1[4:0] ? io_pushPixels_0 : fifo_2; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_35 = 5'h3 == _T_1[4:0] ? io_pushPixels_0 : fifo_3; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_36 = 5'h4 == _T_1[4:0] ? io_pushPixels_0 : fifo_4; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_37 = 5'h5 == _T_1[4:0] ? io_pushPixels_0 : fifo_5; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_38 = 5'h6 == _T_1[4:0] ? io_pushPixels_0 : fifo_6; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_39 = 5'h7 == _T_1[4:0] ? io_pushPixels_0 : fifo_7; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_40 = 5'h8 == _T_1[4:0] ? io_pushPixels_0 : fifo_8; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_41 = 5'h9 == _T_1[4:0] ? io_pushPixels_0 : fifo_9; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_42 = 5'ha == _T_1[4:0] ? io_pushPixels_0 : fifo_10; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_43 = 5'hb == _T_1[4:0] ? io_pushPixels_0 : fifo_11; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_44 = 5'hc == _T_1[4:0] ? io_pushPixels_0 : fifo_12; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_45 = 5'hd == _T_1[4:0] ? io_pushPixels_0 : fifo_13; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_46 = 5'he == _T_1[4:0] ? io_pushPixels_0 : fifo_14; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_47 = 5'hf == _T_1[4:0] ? io_pushPixels_0 : fifo_15; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_48 = 5'h10 == _T_1[4:0] ? io_pushPixels_0 : fifo_16; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_49 = 5'h11 == _T_1[4:0] ? io_pushPixels_0 : fifo_17; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_50 = 5'h12 == _T_1[4:0] ? io_pushPixels_0 : fifo_18; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_51 = 5'h13 == _T_1[4:0] ? io_pushPixels_0 : fifo_19; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_52 = 5'h14 == _T_1[4:0] ? io_pushPixels_0 : fifo_20; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_53 = 5'h15 == _T_1[4:0] ? io_pushPixels_0 : fifo_21; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_54 = 5'h16 == _T_1[4:0] ? io_pushPixels_0 : fifo_22; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_55 = 5'h17 == _T_1[4:0] ? io_pushPixels_0 : fifo_23; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_56 = 5'h18 == _T_1[4:0] ? io_pushPixels_0 : fifo_24; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_57 = 5'h19 == _T_1[4:0] ? io_pushPixels_0 : fifo_25; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_58 = 5'h1a == _T_1[4:0] ? io_pushPixels_0 : fifo_26; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_59 = 5'h1b == _T_1[4:0] ? io_pushPixels_0 : fifo_27; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_60 = 5'h1c == _T_1[4:0] ? io_pushPixels_0 : fifo_28; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_61 = 5'h1d == _T_1[4:0] ? io_pushPixels_0 : fifo_29; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_62 = 5'h1e == _T_1[4:0] ? io_pushPixels_0 : fifo_30; // @[PPU.scala 17:17 32:{36,36}]
  wire [1:0] _GEN_63 = 5'h1f == _T_1[4:0] ? io_pushPixels_0 : fifo_31; // @[PPU.scala 17:17 32:{36,36}]
  wire [4:0] _T_5 = tail + 5'h1; // @[PPU.scala 32:18]
  wire [1:0] _GEN_64 = 5'h0 == _T_5 ? io_pushPixels_1 : _GEN_32; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_65 = 5'h1 == _T_5 ? io_pushPixels_1 : _GEN_33; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_66 = 5'h2 == _T_5 ? io_pushPixels_1 : _GEN_34; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_67 = 5'h3 == _T_5 ? io_pushPixels_1 : _GEN_35; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_68 = 5'h4 == _T_5 ? io_pushPixels_1 : _GEN_36; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_69 = 5'h5 == _T_5 ? io_pushPixels_1 : _GEN_37; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_70 = 5'h6 == _T_5 ? io_pushPixels_1 : _GEN_38; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_71 = 5'h7 == _T_5 ? io_pushPixels_1 : _GEN_39; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_72 = 5'h8 == _T_5 ? io_pushPixels_1 : _GEN_40; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_73 = 5'h9 == _T_5 ? io_pushPixels_1 : _GEN_41; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_74 = 5'ha == _T_5 ? io_pushPixels_1 : _GEN_42; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_75 = 5'hb == _T_5 ? io_pushPixels_1 : _GEN_43; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_76 = 5'hc == _T_5 ? io_pushPixels_1 : _GEN_44; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_77 = 5'hd == _T_5 ? io_pushPixels_1 : _GEN_45; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_78 = 5'he == _T_5 ? io_pushPixels_1 : _GEN_46; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_79 = 5'hf == _T_5 ? io_pushPixels_1 : _GEN_47; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_80 = 5'h10 == _T_5 ? io_pushPixels_1 : _GEN_48; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_81 = 5'h11 == _T_5 ? io_pushPixels_1 : _GEN_49; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_82 = 5'h12 == _T_5 ? io_pushPixels_1 : _GEN_50; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_83 = 5'h13 == _T_5 ? io_pushPixels_1 : _GEN_51; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_84 = 5'h14 == _T_5 ? io_pushPixels_1 : _GEN_52; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_85 = 5'h15 == _T_5 ? io_pushPixels_1 : _GEN_53; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_86 = 5'h16 == _T_5 ? io_pushPixels_1 : _GEN_54; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_87 = 5'h17 == _T_5 ? io_pushPixels_1 : _GEN_55; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_88 = 5'h18 == _T_5 ? io_pushPixels_1 : _GEN_56; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_89 = 5'h19 == _T_5 ? io_pushPixels_1 : _GEN_57; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_90 = 5'h1a == _T_5 ? io_pushPixels_1 : _GEN_58; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_91 = 5'h1b == _T_5 ? io_pushPixels_1 : _GEN_59; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_92 = 5'h1c == _T_5 ? io_pushPixels_1 : _GEN_60; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_93 = 5'h1d == _T_5 ? io_pushPixels_1 : _GEN_61; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_94 = 5'h1e == _T_5 ? io_pushPixels_1 : _GEN_62; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_95 = 5'h1f == _T_5 ? io_pushPixels_1 : _GEN_63; // @[PPU.scala 32:{36,36}]
  wire [4:0] _T_8 = tail + 5'h2; // @[PPU.scala 32:18]
  wire [1:0] _GEN_96 = 5'h0 == _T_8 ? io_pushPixels_2 : _GEN_64; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_97 = 5'h1 == _T_8 ? io_pushPixels_2 : _GEN_65; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_98 = 5'h2 == _T_8 ? io_pushPixels_2 : _GEN_66; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_99 = 5'h3 == _T_8 ? io_pushPixels_2 : _GEN_67; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_100 = 5'h4 == _T_8 ? io_pushPixels_2 : _GEN_68; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_101 = 5'h5 == _T_8 ? io_pushPixels_2 : _GEN_69; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_102 = 5'h6 == _T_8 ? io_pushPixels_2 : _GEN_70; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_103 = 5'h7 == _T_8 ? io_pushPixels_2 : _GEN_71; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_104 = 5'h8 == _T_8 ? io_pushPixels_2 : _GEN_72; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_105 = 5'h9 == _T_8 ? io_pushPixels_2 : _GEN_73; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_106 = 5'ha == _T_8 ? io_pushPixels_2 : _GEN_74; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_107 = 5'hb == _T_8 ? io_pushPixels_2 : _GEN_75; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_108 = 5'hc == _T_8 ? io_pushPixels_2 : _GEN_76; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_109 = 5'hd == _T_8 ? io_pushPixels_2 : _GEN_77; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_110 = 5'he == _T_8 ? io_pushPixels_2 : _GEN_78; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_111 = 5'hf == _T_8 ? io_pushPixels_2 : _GEN_79; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_112 = 5'h10 == _T_8 ? io_pushPixels_2 : _GEN_80; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_113 = 5'h11 == _T_8 ? io_pushPixels_2 : _GEN_81; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_114 = 5'h12 == _T_8 ? io_pushPixels_2 : _GEN_82; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_115 = 5'h13 == _T_8 ? io_pushPixels_2 : _GEN_83; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_116 = 5'h14 == _T_8 ? io_pushPixels_2 : _GEN_84; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_117 = 5'h15 == _T_8 ? io_pushPixels_2 : _GEN_85; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_118 = 5'h16 == _T_8 ? io_pushPixels_2 : _GEN_86; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_119 = 5'h17 == _T_8 ? io_pushPixels_2 : _GEN_87; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_120 = 5'h18 == _T_8 ? io_pushPixels_2 : _GEN_88; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_121 = 5'h19 == _T_8 ? io_pushPixels_2 : _GEN_89; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_122 = 5'h1a == _T_8 ? io_pushPixels_2 : _GEN_90; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_123 = 5'h1b == _T_8 ? io_pushPixels_2 : _GEN_91; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_124 = 5'h1c == _T_8 ? io_pushPixels_2 : _GEN_92; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_125 = 5'h1d == _T_8 ? io_pushPixels_2 : _GEN_93; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_126 = 5'h1e == _T_8 ? io_pushPixels_2 : _GEN_94; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_127 = 5'h1f == _T_8 ? io_pushPixels_2 : _GEN_95; // @[PPU.scala 32:{36,36}]
  wire [4:0] _T_11 = tail + 5'h3; // @[PPU.scala 32:18]
  wire [1:0] _GEN_128 = 5'h0 == _T_11 ? io_pushPixels_3 : _GEN_96; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_129 = 5'h1 == _T_11 ? io_pushPixels_3 : _GEN_97; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_130 = 5'h2 == _T_11 ? io_pushPixels_3 : _GEN_98; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_131 = 5'h3 == _T_11 ? io_pushPixels_3 : _GEN_99; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_132 = 5'h4 == _T_11 ? io_pushPixels_3 : _GEN_100; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_133 = 5'h5 == _T_11 ? io_pushPixels_3 : _GEN_101; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_134 = 5'h6 == _T_11 ? io_pushPixels_3 : _GEN_102; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_135 = 5'h7 == _T_11 ? io_pushPixels_3 : _GEN_103; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_136 = 5'h8 == _T_11 ? io_pushPixels_3 : _GEN_104; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_137 = 5'h9 == _T_11 ? io_pushPixels_3 : _GEN_105; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_138 = 5'ha == _T_11 ? io_pushPixels_3 : _GEN_106; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_139 = 5'hb == _T_11 ? io_pushPixels_3 : _GEN_107; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_140 = 5'hc == _T_11 ? io_pushPixels_3 : _GEN_108; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_141 = 5'hd == _T_11 ? io_pushPixels_3 : _GEN_109; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_142 = 5'he == _T_11 ? io_pushPixels_3 : _GEN_110; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_143 = 5'hf == _T_11 ? io_pushPixels_3 : _GEN_111; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_144 = 5'h10 == _T_11 ? io_pushPixels_3 : _GEN_112; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_145 = 5'h11 == _T_11 ? io_pushPixels_3 : _GEN_113; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_146 = 5'h12 == _T_11 ? io_pushPixels_3 : _GEN_114; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_147 = 5'h13 == _T_11 ? io_pushPixels_3 : _GEN_115; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_148 = 5'h14 == _T_11 ? io_pushPixels_3 : _GEN_116; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_149 = 5'h15 == _T_11 ? io_pushPixels_3 : _GEN_117; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_150 = 5'h16 == _T_11 ? io_pushPixels_3 : _GEN_118; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_151 = 5'h17 == _T_11 ? io_pushPixels_3 : _GEN_119; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_152 = 5'h18 == _T_11 ? io_pushPixels_3 : _GEN_120; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_153 = 5'h19 == _T_11 ? io_pushPixels_3 : _GEN_121; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_154 = 5'h1a == _T_11 ? io_pushPixels_3 : _GEN_122; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_155 = 5'h1b == _T_11 ? io_pushPixels_3 : _GEN_123; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_156 = 5'h1c == _T_11 ? io_pushPixels_3 : _GEN_124; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_157 = 5'h1d == _T_11 ? io_pushPixels_3 : _GEN_125; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_158 = 5'h1e == _T_11 ? io_pushPixels_3 : _GEN_126; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_159 = 5'h1f == _T_11 ? io_pushPixels_3 : _GEN_127; // @[PPU.scala 32:{36,36}]
  wire [4:0] _T_14 = tail + 5'h4; // @[PPU.scala 32:18]
  wire [1:0] _GEN_160 = 5'h0 == _T_14 ? io_pushPixels_4 : _GEN_128; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_161 = 5'h1 == _T_14 ? io_pushPixels_4 : _GEN_129; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_162 = 5'h2 == _T_14 ? io_pushPixels_4 : _GEN_130; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_163 = 5'h3 == _T_14 ? io_pushPixels_4 : _GEN_131; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_164 = 5'h4 == _T_14 ? io_pushPixels_4 : _GEN_132; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_165 = 5'h5 == _T_14 ? io_pushPixels_4 : _GEN_133; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_166 = 5'h6 == _T_14 ? io_pushPixels_4 : _GEN_134; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_167 = 5'h7 == _T_14 ? io_pushPixels_4 : _GEN_135; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_168 = 5'h8 == _T_14 ? io_pushPixels_4 : _GEN_136; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_169 = 5'h9 == _T_14 ? io_pushPixels_4 : _GEN_137; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_170 = 5'ha == _T_14 ? io_pushPixels_4 : _GEN_138; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_171 = 5'hb == _T_14 ? io_pushPixels_4 : _GEN_139; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_172 = 5'hc == _T_14 ? io_pushPixels_4 : _GEN_140; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_173 = 5'hd == _T_14 ? io_pushPixels_4 : _GEN_141; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_174 = 5'he == _T_14 ? io_pushPixels_4 : _GEN_142; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_175 = 5'hf == _T_14 ? io_pushPixels_4 : _GEN_143; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_176 = 5'h10 == _T_14 ? io_pushPixels_4 : _GEN_144; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_177 = 5'h11 == _T_14 ? io_pushPixels_4 : _GEN_145; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_178 = 5'h12 == _T_14 ? io_pushPixels_4 : _GEN_146; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_179 = 5'h13 == _T_14 ? io_pushPixels_4 : _GEN_147; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_180 = 5'h14 == _T_14 ? io_pushPixels_4 : _GEN_148; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_181 = 5'h15 == _T_14 ? io_pushPixels_4 : _GEN_149; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_182 = 5'h16 == _T_14 ? io_pushPixels_4 : _GEN_150; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_183 = 5'h17 == _T_14 ? io_pushPixels_4 : _GEN_151; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_184 = 5'h18 == _T_14 ? io_pushPixels_4 : _GEN_152; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_185 = 5'h19 == _T_14 ? io_pushPixels_4 : _GEN_153; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_186 = 5'h1a == _T_14 ? io_pushPixels_4 : _GEN_154; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_187 = 5'h1b == _T_14 ? io_pushPixels_4 : _GEN_155; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_188 = 5'h1c == _T_14 ? io_pushPixels_4 : _GEN_156; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_189 = 5'h1d == _T_14 ? io_pushPixels_4 : _GEN_157; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_190 = 5'h1e == _T_14 ? io_pushPixels_4 : _GEN_158; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_191 = 5'h1f == _T_14 ? io_pushPixels_4 : _GEN_159; // @[PPU.scala 32:{36,36}]
  wire [4:0] _T_17 = tail + 5'h5; // @[PPU.scala 32:18]
  wire [1:0] _GEN_192 = 5'h0 == _T_17 ? io_pushPixels_5 : _GEN_160; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_193 = 5'h1 == _T_17 ? io_pushPixels_5 : _GEN_161; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_194 = 5'h2 == _T_17 ? io_pushPixels_5 : _GEN_162; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_195 = 5'h3 == _T_17 ? io_pushPixels_5 : _GEN_163; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_196 = 5'h4 == _T_17 ? io_pushPixels_5 : _GEN_164; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_197 = 5'h5 == _T_17 ? io_pushPixels_5 : _GEN_165; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_198 = 5'h6 == _T_17 ? io_pushPixels_5 : _GEN_166; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_199 = 5'h7 == _T_17 ? io_pushPixels_5 : _GEN_167; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_200 = 5'h8 == _T_17 ? io_pushPixels_5 : _GEN_168; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_201 = 5'h9 == _T_17 ? io_pushPixels_5 : _GEN_169; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_202 = 5'ha == _T_17 ? io_pushPixels_5 : _GEN_170; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_203 = 5'hb == _T_17 ? io_pushPixels_5 : _GEN_171; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_204 = 5'hc == _T_17 ? io_pushPixels_5 : _GEN_172; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_205 = 5'hd == _T_17 ? io_pushPixels_5 : _GEN_173; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_206 = 5'he == _T_17 ? io_pushPixels_5 : _GEN_174; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_207 = 5'hf == _T_17 ? io_pushPixels_5 : _GEN_175; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_208 = 5'h10 == _T_17 ? io_pushPixels_5 : _GEN_176; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_209 = 5'h11 == _T_17 ? io_pushPixels_5 : _GEN_177; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_210 = 5'h12 == _T_17 ? io_pushPixels_5 : _GEN_178; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_211 = 5'h13 == _T_17 ? io_pushPixels_5 : _GEN_179; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_212 = 5'h14 == _T_17 ? io_pushPixels_5 : _GEN_180; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_213 = 5'h15 == _T_17 ? io_pushPixels_5 : _GEN_181; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_214 = 5'h16 == _T_17 ? io_pushPixels_5 : _GEN_182; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_215 = 5'h17 == _T_17 ? io_pushPixels_5 : _GEN_183; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_216 = 5'h18 == _T_17 ? io_pushPixels_5 : _GEN_184; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_217 = 5'h19 == _T_17 ? io_pushPixels_5 : _GEN_185; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_218 = 5'h1a == _T_17 ? io_pushPixels_5 : _GEN_186; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_219 = 5'h1b == _T_17 ? io_pushPixels_5 : _GEN_187; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_220 = 5'h1c == _T_17 ? io_pushPixels_5 : _GEN_188; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_221 = 5'h1d == _T_17 ? io_pushPixels_5 : _GEN_189; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_222 = 5'h1e == _T_17 ? io_pushPixels_5 : _GEN_190; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_223 = 5'h1f == _T_17 ? io_pushPixels_5 : _GEN_191; // @[PPU.scala 32:{36,36}]
  wire [4:0] _T_20 = tail + 5'h6; // @[PPU.scala 32:18]
  wire [1:0] _GEN_224 = 5'h0 == _T_20 ? io_pushPixels_6 : _GEN_192; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_225 = 5'h1 == _T_20 ? io_pushPixels_6 : _GEN_193; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_226 = 5'h2 == _T_20 ? io_pushPixels_6 : _GEN_194; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_227 = 5'h3 == _T_20 ? io_pushPixels_6 : _GEN_195; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_228 = 5'h4 == _T_20 ? io_pushPixels_6 : _GEN_196; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_229 = 5'h5 == _T_20 ? io_pushPixels_6 : _GEN_197; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_230 = 5'h6 == _T_20 ? io_pushPixels_6 : _GEN_198; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_231 = 5'h7 == _T_20 ? io_pushPixels_6 : _GEN_199; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_232 = 5'h8 == _T_20 ? io_pushPixels_6 : _GEN_200; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_233 = 5'h9 == _T_20 ? io_pushPixels_6 : _GEN_201; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_234 = 5'ha == _T_20 ? io_pushPixels_6 : _GEN_202; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_235 = 5'hb == _T_20 ? io_pushPixels_6 : _GEN_203; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_236 = 5'hc == _T_20 ? io_pushPixels_6 : _GEN_204; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_237 = 5'hd == _T_20 ? io_pushPixels_6 : _GEN_205; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_238 = 5'he == _T_20 ? io_pushPixels_6 : _GEN_206; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_239 = 5'hf == _T_20 ? io_pushPixels_6 : _GEN_207; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_240 = 5'h10 == _T_20 ? io_pushPixels_6 : _GEN_208; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_241 = 5'h11 == _T_20 ? io_pushPixels_6 : _GEN_209; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_242 = 5'h12 == _T_20 ? io_pushPixels_6 : _GEN_210; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_243 = 5'h13 == _T_20 ? io_pushPixels_6 : _GEN_211; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_244 = 5'h14 == _T_20 ? io_pushPixels_6 : _GEN_212; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_245 = 5'h15 == _T_20 ? io_pushPixels_6 : _GEN_213; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_246 = 5'h16 == _T_20 ? io_pushPixels_6 : _GEN_214; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_247 = 5'h17 == _T_20 ? io_pushPixels_6 : _GEN_215; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_248 = 5'h18 == _T_20 ? io_pushPixels_6 : _GEN_216; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_249 = 5'h19 == _T_20 ? io_pushPixels_6 : _GEN_217; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_250 = 5'h1a == _T_20 ? io_pushPixels_6 : _GEN_218; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_251 = 5'h1b == _T_20 ? io_pushPixels_6 : _GEN_219; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_252 = 5'h1c == _T_20 ? io_pushPixels_6 : _GEN_220; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_253 = 5'h1d == _T_20 ? io_pushPixels_6 : _GEN_221; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_254 = 5'h1e == _T_20 ? io_pushPixels_6 : _GEN_222; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_255 = 5'h1f == _T_20 ? io_pushPixels_6 : _GEN_223; // @[PPU.scala 32:{36,36}]
  wire [4:0] _T_23 = tail + 5'h7; // @[PPU.scala 32:18]
  wire [1:0] _GEN_256 = 5'h0 == _T_23 ? io_pushPixels_7 : _GEN_224; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_257 = 5'h1 == _T_23 ? io_pushPixels_7 : _GEN_225; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_258 = 5'h2 == _T_23 ? io_pushPixels_7 : _GEN_226; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_259 = 5'h3 == _T_23 ? io_pushPixels_7 : _GEN_227; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_260 = 5'h4 == _T_23 ? io_pushPixels_7 : _GEN_228; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_261 = 5'h5 == _T_23 ? io_pushPixels_7 : _GEN_229; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_262 = 5'h6 == _T_23 ? io_pushPixels_7 : _GEN_230; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_263 = 5'h7 == _T_23 ? io_pushPixels_7 : _GEN_231; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_264 = 5'h8 == _T_23 ? io_pushPixels_7 : _GEN_232; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_265 = 5'h9 == _T_23 ? io_pushPixels_7 : _GEN_233; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_266 = 5'ha == _T_23 ? io_pushPixels_7 : _GEN_234; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_267 = 5'hb == _T_23 ? io_pushPixels_7 : _GEN_235; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_268 = 5'hc == _T_23 ? io_pushPixels_7 : _GEN_236; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_269 = 5'hd == _T_23 ? io_pushPixels_7 : _GEN_237; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_270 = 5'he == _T_23 ? io_pushPixels_7 : _GEN_238; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_271 = 5'hf == _T_23 ? io_pushPixels_7 : _GEN_239; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_272 = 5'h10 == _T_23 ? io_pushPixels_7 : _GEN_240; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_273 = 5'h11 == _T_23 ? io_pushPixels_7 : _GEN_241; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_274 = 5'h12 == _T_23 ? io_pushPixels_7 : _GEN_242; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_275 = 5'h13 == _T_23 ? io_pushPixels_7 : _GEN_243; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_276 = 5'h14 == _T_23 ? io_pushPixels_7 : _GEN_244; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_277 = 5'h15 == _T_23 ? io_pushPixels_7 : _GEN_245; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_278 = 5'h16 == _T_23 ? io_pushPixels_7 : _GEN_246; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_279 = 5'h17 == _T_23 ? io_pushPixels_7 : _GEN_247; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_280 = 5'h18 == _T_23 ? io_pushPixels_7 : _GEN_248; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_281 = 5'h19 == _T_23 ? io_pushPixels_7 : _GEN_249; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_282 = 5'h1a == _T_23 ? io_pushPixels_7 : _GEN_250; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_283 = 5'h1b == _T_23 ? io_pushPixels_7 : _GEN_251; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_284 = 5'h1c == _T_23 ? io_pushPixels_7 : _GEN_252; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_285 = 5'h1d == _T_23 ? io_pushPixels_7 : _GEN_253; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_286 = 5'h1e == _T_23 ? io_pushPixels_7 : _GEN_254; // @[PPU.scala 32:{36,36}]
  wire [1:0] _GEN_287 = 5'h1f == _T_23 ? io_pushPixels_7 : _GEN_255; // @[PPU.scala 32:{36,36}]
  wire [4:0] _tail_T_1 = tail + 5'h8; // @[PPU.scala 35:19]
  wire [4:0] _head_T_1 = head + 5'h1; // @[PPU.scala 36:19]
  wire [5:0] _count_T_1 = count + 6'h7; // @[PPU.scala 37:20]
  wire [5:0] _count_T_3 = count + 6'h8; // @[PPU.scala 43:20]
  wire [5:0] _count_T_5 = count - 6'h1; // @[PPU.scala 47:20]
  wire [4:0] _GEN_544 = io_popEnable & io_hasData ? _head_T_1 : head; // @[PPU.scala 44:42 46:10 18:21]
  wire [5:0] _GEN_545 = io_popEnable & io_hasData ? _count_T_5 : count; // @[PPU.scala 44:42 47:11 20:22]
  assign io_outPixel = 5'h1f == head ? fifo_31 : _GEN_30; // @[PPU.scala 22:{15,15}]
  assign io_hasData = count > 6'h0; // @[PPU.scala 23:24]
  assign io_size = count; // @[PPU.scala 24:15]
  always @(posedge clock) begin
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_0 <= _GEN_256;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_0 <= _GEN_256;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_1 <= _GEN_257;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_1 <= _GEN_257;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_2 <= _GEN_258;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_2 <= _GEN_258;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_3 <= _GEN_259;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_3 <= _GEN_259;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_4 <= _GEN_260;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_4 <= _GEN_260;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_5 <= _GEN_261;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_5 <= _GEN_261;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_6 <= _GEN_262;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_6 <= _GEN_262;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_7 <= _GEN_263;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_7 <= _GEN_263;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_8 <= _GEN_264;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_8 <= _GEN_264;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_9 <= _GEN_265;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_9 <= _GEN_265;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_10 <= _GEN_266;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_10 <= _GEN_266;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_11 <= _GEN_267;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_11 <= _GEN_267;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_12 <= _GEN_268;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_12 <= _GEN_268;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_13 <= _GEN_269;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_13 <= _GEN_269;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_14 <= _GEN_270;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_14 <= _GEN_270;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_15 <= _GEN_271;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_15 <= _GEN_271;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_16 <= _GEN_272;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_16 <= _GEN_272;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_17 <= _GEN_273;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_17 <= _GEN_273;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_18 <= _GEN_274;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_18 <= _GEN_274;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_19 <= _GEN_275;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_19 <= _GEN_275;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_20 <= _GEN_276;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_20 <= _GEN_276;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_21 <= _GEN_277;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_21 <= _GEN_277;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_22 <= _GEN_278;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_22 <= _GEN_278;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_23 <= _GEN_279;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_23 <= _GEN_279;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_24 <= _GEN_280;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_24 <= _GEN_280;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_25 <= _GEN_281;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_25 <= _GEN_281;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_26 <= _GEN_282;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_26 <= _GEN_282;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_27 <= _GEN_283;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_27 <= _GEN_283;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_28 <= _GEN_284;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_28 <= _GEN_284;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_29 <= _GEN_285;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_29 <= _GEN_285;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_30 <= _GEN_286;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_30 <= _GEN_286;
      end
    end
    if (!(io_clear)) begin // @[PPU.scala 26:18]
      if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
        fifo_31 <= _GEN_287;
      end else if (io_pushEnable) begin // @[PPU.scala 38:29]
        fifo_31 <= _GEN_287;
      end
    end
    if (reset) begin // @[PPU.scala 18:21]
      head <= 5'h0; // @[PPU.scala 18:21]
    end else if (io_clear) begin // @[PPU.scala 26:18]
      head <= 5'h0; // @[PPU.scala 27:10]
    end else if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
      head <= _head_T_1; // @[PPU.scala 36:10]
    end else if (!(io_pushEnable)) begin // @[PPU.scala 38:29]
      head <= _GEN_544;
    end
    if (reset) begin // @[PPU.scala 19:21]
      tail <= 5'h0; // @[PPU.scala 19:21]
    end else if (io_clear) begin // @[PPU.scala 26:18]
      tail <= 5'h0; // @[PPU.scala 28:10]
    end else if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
      tail <= _tail_T_1; // @[PPU.scala 35:10]
    end else if (io_pushEnable) begin // @[PPU.scala 38:29]
      tail <= _tail_T_1; // @[PPU.scala 42:10]
    end
    if (reset) begin // @[PPU.scala 20:22]
      count <= 6'h0; // @[PPU.scala 20:22]
    end else if (io_clear) begin // @[PPU.scala 26:18]
      count <= 6'h0; // @[PPU.scala 29:11]
    end else if (io_pushEnable & io_popEnable) begin // @[PPU.scala 30:45]
      count <= _count_T_1; // @[PPU.scala 37:11]
    end else if (io_pushEnable) begin // @[PPU.scala 38:29]
      count <= _count_T_3; // @[PPU.scala 43:11]
    end else begin
      count <= _GEN_545;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  fifo_0 = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  fifo_1 = _RAND_1[1:0];
  _RAND_2 = {1{`RANDOM}};
  fifo_2 = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  fifo_3 = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  fifo_4 = _RAND_4[1:0];
  _RAND_5 = {1{`RANDOM}};
  fifo_5 = _RAND_5[1:0];
  _RAND_6 = {1{`RANDOM}};
  fifo_6 = _RAND_6[1:0];
  _RAND_7 = {1{`RANDOM}};
  fifo_7 = _RAND_7[1:0];
  _RAND_8 = {1{`RANDOM}};
  fifo_8 = _RAND_8[1:0];
  _RAND_9 = {1{`RANDOM}};
  fifo_9 = _RAND_9[1:0];
  _RAND_10 = {1{`RANDOM}};
  fifo_10 = _RAND_10[1:0];
  _RAND_11 = {1{`RANDOM}};
  fifo_11 = _RAND_11[1:0];
  _RAND_12 = {1{`RANDOM}};
  fifo_12 = _RAND_12[1:0];
  _RAND_13 = {1{`RANDOM}};
  fifo_13 = _RAND_13[1:0];
  _RAND_14 = {1{`RANDOM}};
  fifo_14 = _RAND_14[1:0];
  _RAND_15 = {1{`RANDOM}};
  fifo_15 = _RAND_15[1:0];
  _RAND_16 = {1{`RANDOM}};
  fifo_16 = _RAND_16[1:0];
  _RAND_17 = {1{`RANDOM}};
  fifo_17 = _RAND_17[1:0];
  _RAND_18 = {1{`RANDOM}};
  fifo_18 = _RAND_18[1:0];
  _RAND_19 = {1{`RANDOM}};
  fifo_19 = _RAND_19[1:0];
  _RAND_20 = {1{`RANDOM}};
  fifo_20 = _RAND_20[1:0];
  _RAND_21 = {1{`RANDOM}};
  fifo_21 = _RAND_21[1:0];
  _RAND_22 = {1{`RANDOM}};
  fifo_22 = _RAND_22[1:0];
  _RAND_23 = {1{`RANDOM}};
  fifo_23 = _RAND_23[1:0];
  _RAND_24 = {1{`RANDOM}};
  fifo_24 = _RAND_24[1:0];
  _RAND_25 = {1{`RANDOM}};
  fifo_25 = _RAND_25[1:0];
  _RAND_26 = {1{`RANDOM}};
  fifo_26 = _RAND_26[1:0];
  _RAND_27 = {1{`RANDOM}};
  fifo_27 = _RAND_27[1:0];
  _RAND_28 = {1{`RANDOM}};
  fifo_28 = _RAND_28[1:0];
  _RAND_29 = {1{`RANDOM}};
  fifo_29 = _RAND_29[1:0];
  _RAND_30 = {1{`RANDOM}};
  fifo_30 = _RAND_30[1:0];
  _RAND_31 = {1{`RANDOM}};
  fifo_31 = _RAND_31[1:0];
  _RAND_32 = {1{`RANDOM}};
  head = _RAND_32[4:0];
  _RAND_33 = {1{`RANDOM}};
  tail = _RAND_33[4:0];
  _RAND_34 = {1{`RANDOM}};
  count = _RAND_34[5:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PPU(
  input         clock,
  input         reset,
  output [12:0] io_vramAddr,
  output        io_vramRead,
  input  [7:0]  io_lcdc,
  input  [7:0]  io_scy,
  input  [7:0]  io_scx,
  output [7:0]  io_ly,
  input  [7:0]  io_bgp,
  output        io_vblankIRQ,
  output        io_pixelValid,
  output [7:0]  io_pixelX,
  output [7:0]  io_pixelY,
  output [1:0]  io_pixelColor,
  output        io_hblank,
  output        io_vblank,
  output        io_lcdEnable
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
`endif // RANDOMIZE_REG_INIT
  wire  vram_clock; // @[PPU.scala 164:20]
  wire [12:0] vram_io_addr; // @[PPU.scala 164:20]
  wire  vram_io_read; // @[PPU.scala 164:20]
  wire [7:0] vram_io_rdata; // @[PPU.scala 164:20]
  wire  pixelFIFO_clock; // @[PPU.scala 180:25]
  wire  pixelFIFO_reset; // @[PPU.scala 180:25]
  wire  pixelFIFO_io_pushEnable; // @[PPU.scala 180:25]
  wire [1:0] pixelFIFO_io_pushPixels_0; // @[PPU.scala 180:25]
  wire [1:0] pixelFIFO_io_pushPixels_1; // @[PPU.scala 180:25]
  wire [1:0] pixelFIFO_io_pushPixels_2; // @[PPU.scala 180:25]
  wire [1:0] pixelFIFO_io_pushPixels_3; // @[PPU.scala 180:25]
  wire [1:0] pixelFIFO_io_pushPixels_4; // @[PPU.scala 180:25]
  wire [1:0] pixelFIFO_io_pushPixels_5; // @[PPU.scala 180:25]
  wire [1:0] pixelFIFO_io_pushPixels_6; // @[PPU.scala 180:25]
  wire [1:0] pixelFIFO_io_pushPixels_7; // @[PPU.scala 180:25]
  wire  pixelFIFO_io_popEnable; // @[PPU.scala 180:25]
  wire [1:0] pixelFIFO_io_outPixel; // @[PPU.scala 180:25]
  wire  pixelFIFO_io_hasData; // @[PPU.scala 180:25]
  wire [5:0] pixelFIFO_io_size; // @[PPU.scala 180:25]
  wire  pixelFIFO_io_clear; // @[PPU.scala 180:25]
  reg [8:0] dotCounter; // @[PPU.scala 101:27]
  reg [7:0] lyReg; // @[PPU.scala 102:22]
  wire  lcdEnable = io_lcdc[7]; // @[PPU.scala 104:26]
  reg  vblankIRQ; // @[PPU.scala 117:26]
  wire [8:0] _dotCounter_T_1 = dotCounter + 9'h1; // @[PPU.scala 136:30]
  wire [8:0] _T_2 = 9'h1c8 - 9'h1; // @[PPU.scala 139:44]
  wire [7:0] _lyReg_T_1 = lyReg + 8'h1; // @[PPU.scala 146:24]
  wire  _T_5 = lyReg == 8'h8f; // @[PPU.scala 149:20]
  wire  bgWindowTiles = io_lcdc[4]; // @[PPU.scala 174:31]
  wire  bgTileMap = io_lcdc[3]; // @[PPU.scala 175:31]
  reg [2:0] fetcherState; // @[PPU.scala 197:29]
  reg [7:0] fetcherX; // @[PPU.scala 198:25]
  reg [7:0] tileNum; // @[PPU.scala 200:24]
  reg [7:0] tileDataLow; // @[PPU.scala 201:28]
  reg [7:0] tileDataHigh; // @[PPU.scala 202:29]
  reg [7:0] xPos; // @[PPU.scala 203:21]
  reg [3:0] discardPixels; // @[PPU.scala 204:30]
  wire  _T_6 = dotCounter == 9'h0; // @[PPU.scala 212:19]
  wire  _T_7 = lyReg < 8'h90; // @[PPU.scala 214:34]
  wire  _T_11 = xPos < 8'ha0; // @[PPU.scala 229:19]
  wire [1:0] _GEN_12 = xPos < 8'ha0 & _T_7 ? 2'h3 : 2'h0; // @[PPU.scala 229:52 232:10 234:10]
  wire [1:0] _GEN_13 = dotCounter < 9'h50 ? 2'h2 : _GEN_12; // @[PPU.scala 227:33 228:10]
  wire [1:0] mode = lyReg >= 8'h90 ? 2'h1 : _GEN_13; // @[PPU.scala 225:31 226:10]
  wire  _T_37 = pixelFIFO_io_hasData & _T_11; // @[PPU.scala 342:31]
  wire  _GEN_134 = discardPixels > 4'h0 ? 1'h0 : 1'h1; // @[PPU.scala 206:31 343:33 352:20]
  wire  _GEN_140 = pixelFIFO_io_hasData & _T_11 & _GEN_134; // @[PPU.scala 206:31 342:48]
  wire [7:0] _discardPixels_T = io_scx & 8'h7; // @[PPU.scala 243:30]
  wire [7:0] _GEN_15 = _T_6 & _T_7 & lcdEnable ? 8'h0 : xPos; // @[PPU.scala 238:65 239:10 203:21]
  wire [7:0] _GEN_16 = _T_6 & _T_7 & lcdEnable ? 8'h0 : fetcherX; // @[PPU.scala 238:65 240:14 198:25]
  wire [2:0] _GEN_17 = _T_6 & _T_7 & lcdEnable ? 3'h0 : fetcherState; // @[PPU.scala 238:65 241:18 197:29]
  wire [7:0] _GEN_19 = _T_6 & _T_7 & lcdEnable ? _discardPixels_T : {{4'd0}, discardPixels}; // @[PPU.scala 238:65 243:19 204:30]
  wire [12:0] mapBase = bgTileMap ? 13'h1c00 : 13'h1800; // @[PPU.scala 267:29]
  wire [7:0] scrolledY = lyReg + io_scy; // @[PPU.scala 268:33]
  wire [7:0] scrolledX = fetcherX + io_scx; // @[PPU.scala 269:36]
  wire [4:0] tileY = scrolledY[7:3]; // @[PPU.scala 270:37]
  wire [4:0] tileX = scrolledX[7:3]; // @[PPU.scala 271:37]
  wire [10:0] _mapAddr_T = tileY * 6'h20; // @[PPU.scala 272:43]
  wire [12:0] _GEN_166 = {{2'd0}, _mapAddr_T}; // @[PPU.scala 272:34]
  wire [12:0] _mapAddr_T_2 = mapBase + _GEN_166; // @[PPU.scala 272:34]
  wire [12:0] _GEN_167 = {{8'd0}, tileX}; // @[PPU.scala 272:51]
  wire [12:0] mapAddr = _mapAddr_T_2 + _GEN_167; // @[PPU.scala 272:51]
  wire [11:0] tileDataBase = bgWindowTiles ? 12'h0 : 12'h800; // @[PPU.scala 285:31]
  wire [7:0] _tileIndex_T = tileNum; // @[PPU.scala 288:20]
  wire [8:0] _GEN_168 = {{1{_tileIndex_T[7]}},_tileIndex_T}; // @[PPU.scala 288:27]
  wire [8:0] _tileIndex_T_4 = $signed(_GEN_168) + 9'sh80; // @[PPU.scala 288:36]
  wire [8:0] tileIndex = bgWindowTiles ? {{1'd0}, tileNum} : _tileIndex_T_4; // @[PPU.scala 286:28]
  wire [7:0] pixelRow = scrolledY & 8'h7; // @[PPU.scala 290:35]
  wire [13:0] _tileAddr_T = tileIndex * 5'h10; // @[PPU.scala 291:50]
  wire [13:0] _GEN_169 = {{2'd0}, tileDataBase}; // @[PPU.scala 291:37]
  wire [13:0] _tileAddr_T_2 = _GEN_169 + _tileAddr_T; // @[PPU.scala 291:37]
  wire [9:0] _tileAddr_T_3 = pixelRow * 2'h2; // @[PPU.scala 291:70]
  wire [13:0] _GEN_170 = {{4'd0}, _tileAddr_T_3}; // @[PPU.scala 291:58]
  wire [13:0] tileAddr = _tileAddr_T_2 + _GEN_170; // @[PPU.scala 291:58]
  wire [13:0] tileAddr_1 = tileAddr + 14'h1; // @[PPU.scala 310:77]
  wire  _T_35 = pixelFIFO_io_size <= 6'h10; // @[PPU.scala 324:32]
  wire  lo = tileDataLow[7]; // @[PPU.scala 327:36]
  wire  hi = tileDataHigh[7]; // @[PPU.scala 328:36]
  wire [1:0] px_0 = {hi,lo}; // @[Cat.scala 33:92]
  wire [1:0] lo_1 = tileDataLow[7:6] & 2'h1; // @[PPU.scala 327:49]
  wire [1:0] hi_1 = tileDataHigh[7:6] & 2'h1; // @[PPU.scala 328:49]
  wire [3:0] _px_1_T = {hi_1,lo_1}; // @[Cat.scala 33:92]
  wire [2:0] lo_2 = tileDataLow[7:5] & 3'h1; // @[PPU.scala 327:49]
  wire [2:0] hi_2 = tileDataHigh[7:5] & 3'h1; // @[PPU.scala 328:49]
  wire [5:0] _px_2_T = {hi_2,lo_2}; // @[Cat.scala 33:92]
  wire [3:0] lo_3 = tileDataLow[7:4] & 4'h1; // @[PPU.scala 327:49]
  wire [3:0] hi_3 = tileDataHigh[7:4] & 4'h1; // @[PPU.scala 328:49]
  wire [7:0] _px_3_T = {hi_3,lo_3}; // @[Cat.scala 33:92]
  wire [4:0] lo_4 = tileDataLow[7:3] & 5'h1; // @[PPU.scala 327:49]
  wire [4:0] hi_4 = tileDataHigh[7:3] & 5'h1; // @[PPU.scala 328:49]
  wire [9:0] _px_4_T = {hi_4,lo_4}; // @[Cat.scala 33:92]
  wire [5:0] lo_5 = tileDataLow[7:2] & 6'h1; // @[PPU.scala 327:49]
  wire [5:0] hi_5 = tileDataHigh[7:2] & 6'h1; // @[PPU.scala 328:49]
  wire [11:0] _px_5_T = {hi_5,lo_5}; // @[Cat.scala 33:92]
  wire [6:0] lo_6 = tileDataLow[7:1] & 7'h1; // @[PPU.scala 327:49]
  wire [6:0] hi_6 = tileDataHigh[7:1] & 7'h1; // @[PPU.scala 328:49]
  wire [13:0] _px_6_T = {hi_6,lo_6}; // @[Cat.scala 33:92]
  wire [7:0] lo_7 = tileDataLow & 8'h1; // @[PPU.scala 327:49]
  wire [7:0] hi_7 = tileDataHigh & 8'h1; // @[PPU.scala 328:49]
  wire [15:0] _px_7_T = {hi_7,lo_7}; // @[Cat.scala 33:92]
  wire [7:0] _fetcherX_T_1 = fetcherX + 8'h8; // @[PPU.scala 335:32]
  wire [1:0] _GEN_23 = pixelFIFO_io_size <= 6'h10 ? px_0 : 2'h0; // @[PPU.scala 183:27 324:41 333:35]
  wire [1:0] px_1 = _px_1_T[1:0]; // @[PPU.scala 325:24 329:19]
  wire [1:0] _GEN_24 = pixelFIFO_io_size <= 6'h10 ? px_1 : 2'h0; // @[PPU.scala 183:27 324:41 333:35]
  wire [1:0] px_2 = _px_2_T[1:0]; // @[PPU.scala 325:24 329:19]
  wire [1:0] _GEN_25 = pixelFIFO_io_size <= 6'h10 ? px_2 : 2'h0; // @[PPU.scala 183:27 324:41 333:35]
  wire [1:0] px_3 = _px_3_T[1:0]; // @[PPU.scala 325:24 329:19]
  wire [1:0] _GEN_26 = pixelFIFO_io_size <= 6'h10 ? px_3 : 2'h0; // @[PPU.scala 183:27 324:41 333:35]
  wire [1:0] px_4 = _px_4_T[1:0]; // @[PPU.scala 325:24 329:19]
  wire [1:0] _GEN_27 = pixelFIFO_io_size <= 6'h10 ? px_4 : 2'h0; // @[PPU.scala 183:27 324:41 333:35]
  wire [1:0] px_5 = _px_5_T[1:0]; // @[PPU.scala 325:24 329:19]
  wire [1:0] _GEN_28 = pixelFIFO_io_size <= 6'h10 ? px_5 : 2'h0; // @[PPU.scala 183:27 324:41 333:35]
  wire [1:0] px_6 = _px_6_T[1:0]; // @[PPU.scala 325:24 329:19]
  wire [1:0] _GEN_29 = pixelFIFO_io_size <= 6'h10 ? px_6 : 2'h0; // @[PPU.scala 183:27 324:41 333:35]
  wire [1:0] px_7 = _px_7_T[1:0]; // @[PPU.scala 325:24 329:19]
  wire [1:0] _GEN_30 = pixelFIFO_io_size <= 6'h10 ? px_7 : 2'h0; // @[PPU.scala 183:27 324:41 333:35]
  wire [7:0] _GEN_31 = pixelFIFO_io_size <= 6'h10 ? _fetcherX_T_1 : _GEN_16; // @[PPU.scala 324:41 335:20]
  wire [2:0] _GEN_32 = pixelFIFO_io_size <= 6'h10 ? 3'h0 : _GEN_17; // @[PPU.scala 324:41 336:24]
  wire [1:0] _GEN_34 = 3'h6 == fetcherState ? _GEN_23 : 2'h0; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_35 = 3'h6 == fetcherState ? _GEN_24 : 2'h0; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_36 = 3'h6 == fetcherState ? _GEN_25 : 2'h0; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_37 = 3'h6 == fetcherState ? _GEN_26 : 2'h0; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_38 = 3'h6 == fetcherState ? _GEN_27 : 2'h0; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_39 = 3'h6 == fetcherState ? _GEN_28 : 2'h0; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_40 = 3'h6 == fetcherState ? _GEN_29 : 2'h0; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_41 = 3'h6 == fetcherState ? _GEN_30 : 2'h0; // @[PPU.scala 264:26 183:27]
  wire [7:0] _GEN_42 = 3'h6 == fetcherState ? _GEN_31 : _GEN_16; // @[PPU.scala 264:26]
  wire [2:0] _GEN_43 = 3'h6 == fetcherState ? _GEN_32 : _GEN_17; // @[PPU.scala 264:26]
  wire [7:0] _GEN_44 = 3'h5 == fetcherState ? vram_io_rdata : tileDataHigh; // @[PPU.scala 264:26 319:22 202:29]
  wire [2:0] _GEN_45 = 3'h5 == fetcherState ? 3'h6 : _GEN_43; // @[PPU.scala 264:26 320:22]
  wire  _GEN_46 = 3'h5 == fetcherState ? 1'h0 : 3'h6 == fetcherState & _T_35; // @[PPU.scala 264:26 181:27]
  wire [1:0] _GEN_47 = 3'h5 == fetcherState ? 2'h0 : _GEN_34; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_48 = 3'h5 == fetcherState ? 2'h0 : _GEN_35; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_49 = 3'h5 == fetcherState ? 2'h0 : _GEN_36; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_50 = 3'h5 == fetcherState ? 2'h0 : _GEN_37; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_51 = 3'h5 == fetcherState ? 2'h0 : _GEN_38; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_52 = 3'h5 == fetcherState ? 2'h0 : _GEN_39; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_53 = 3'h5 == fetcherState ? 2'h0 : _GEN_40; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_54 = 3'h5 == fetcherState ? 2'h0 : _GEN_41; // @[PPU.scala 264:26 183:27]
  wire [7:0] _GEN_55 = 3'h5 == fetcherState ? _GEN_16 : _GEN_42; // @[PPU.scala 264:26]
  wire [12:0] _GEN_56 = 3'h3 == fetcherState ? tileAddr_1[12:0] : 13'h0; // @[PPU.scala 218:15 264:26 312:21]
  wire [2:0] _GEN_58 = 3'h3 == fetcherState ? 3'h5 : _GEN_45; // @[PPU.scala 264:26 315:22]
  wire [7:0] _GEN_59 = 3'h3 == fetcherState ? tileDataHigh : _GEN_44; // @[PPU.scala 264:26 202:29]
  wire  _GEN_60 = 3'h3 == fetcherState ? 1'h0 : _GEN_46; // @[PPU.scala 264:26 181:27]
  wire [1:0] _GEN_61 = 3'h3 == fetcherState ? 2'h0 : _GEN_47; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_62 = 3'h3 == fetcherState ? 2'h0 : _GEN_48; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_63 = 3'h3 == fetcherState ? 2'h0 : _GEN_49; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_64 = 3'h3 == fetcherState ? 2'h0 : _GEN_50; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_65 = 3'h3 == fetcherState ? 2'h0 : _GEN_51; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_66 = 3'h3 == fetcherState ? 2'h0 : _GEN_52; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_67 = 3'h3 == fetcherState ? 2'h0 : _GEN_53; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_68 = 3'h3 == fetcherState ? 2'h0 : _GEN_54; // @[PPU.scala 264:26 183:27]
  wire [7:0] _GEN_69 = 3'h3 == fetcherState ? _GEN_16 : _GEN_55; // @[PPU.scala 264:26]
  wire [7:0] _GEN_70 = 3'h4 == fetcherState ? vram_io_rdata : tileDataLow; // @[PPU.scala 264:26 299:21 201:28]
  wire [2:0] _GEN_71 = 3'h4 == fetcherState ? 3'h3 : _GEN_58; // @[PPU.scala 264:26 300:22]
  wire [12:0] _GEN_72 = 3'h4 == fetcherState ? 13'h0 : _GEN_56; // @[PPU.scala 218:15 264:26]
  wire  _GEN_73 = 3'h4 == fetcherState ? 1'h0 : 3'h3 == fetcherState; // @[PPU.scala 219:15 264:26]
  wire [7:0] _GEN_74 = 3'h4 == fetcherState ? tileDataHigh : _GEN_59; // @[PPU.scala 264:26 202:29]
  wire  _GEN_75 = 3'h4 == fetcherState ? 1'h0 : _GEN_60; // @[PPU.scala 264:26 181:27]
  wire [1:0] _GEN_76 = 3'h4 == fetcherState ? 2'h0 : _GEN_61; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_77 = 3'h4 == fetcherState ? 2'h0 : _GEN_62; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_78 = 3'h4 == fetcherState ? 2'h0 : _GEN_63; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_79 = 3'h4 == fetcherState ? 2'h0 : _GEN_64; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_80 = 3'h4 == fetcherState ? 2'h0 : _GEN_65; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_81 = 3'h4 == fetcherState ? 2'h0 : _GEN_66; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_82 = 3'h4 == fetcherState ? 2'h0 : _GEN_67; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_83 = 3'h4 == fetcherState ? 2'h0 : _GEN_68; // @[PPU.scala 264:26 183:27]
  wire [7:0] _GEN_84 = 3'h4 == fetcherState ? _GEN_16 : _GEN_69; // @[PPU.scala 264:26]
  wire [12:0] _GEN_85 = 3'h1 == fetcherState ? tileAddr[12:0] : _GEN_72; // @[PPU.scala 264:26 293:21]
  wire  _GEN_86 = 3'h1 == fetcherState | _GEN_73; // @[PPU.scala 264:26 294:21]
  wire [2:0] _GEN_87 = 3'h1 == fetcherState ? 3'h4 : _GEN_71; // @[PPU.scala 264:26 295:22]
  wire [7:0] _GEN_88 = 3'h1 == fetcherState ? tileDataLow : _GEN_70; // @[PPU.scala 264:26 201:28]
  wire [7:0] _GEN_89 = 3'h1 == fetcherState ? tileDataHigh : _GEN_74; // @[PPU.scala 264:26 202:29]
  wire  _GEN_90 = 3'h1 == fetcherState ? 1'h0 : _GEN_75; // @[PPU.scala 264:26 181:27]
  wire [1:0] _GEN_91 = 3'h1 == fetcherState ? 2'h0 : _GEN_76; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_92 = 3'h1 == fetcherState ? 2'h0 : _GEN_77; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_93 = 3'h1 == fetcherState ? 2'h0 : _GEN_78; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_94 = 3'h1 == fetcherState ? 2'h0 : _GEN_79; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_95 = 3'h1 == fetcherState ? 2'h0 : _GEN_80; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_96 = 3'h1 == fetcherState ? 2'h0 : _GEN_81; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_97 = 3'h1 == fetcherState ? 2'h0 : _GEN_82; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_98 = 3'h1 == fetcherState ? 2'h0 : _GEN_83; // @[PPU.scala 264:26 183:27]
  wire [7:0] _GEN_99 = 3'h1 == fetcherState ? _GEN_16 : _GEN_84; // @[PPU.scala 264:26]
  wire [12:0] _GEN_102 = 3'h2 == fetcherState ? 13'h0 : _GEN_85; // @[PPU.scala 218:15 264:26]
  wire  _GEN_103 = 3'h2 == fetcherState ? 1'h0 : _GEN_86; // @[PPU.scala 219:15 264:26]
  wire  _GEN_106 = 3'h2 == fetcherState ? 1'h0 : _GEN_90; // @[PPU.scala 264:26 181:27]
  wire [1:0] _GEN_107 = 3'h2 == fetcherState ? 2'h0 : _GEN_91; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_108 = 3'h2 == fetcherState ? 2'h0 : _GEN_92; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_109 = 3'h2 == fetcherState ? 2'h0 : _GEN_93; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_110 = 3'h2 == fetcherState ? 2'h0 : _GEN_94; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_111 = 3'h2 == fetcherState ? 2'h0 : _GEN_95; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_112 = 3'h2 == fetcherState ? 2'h0 : _GEN_96; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_113 = 3'h2 == fetcherState ? 2'h0 : _GEN_97; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_114 = 3'h2 == fetcherState ? 2'h0 : _GEN_98; // @[PPU.scala 264:26 183:27]
  wire [12:0] _GEN_116 = 3'h0 == fetcherState ? mapAddr : _GEN_102; // @[PPU.scala 264:26 274:21]
  wire  _GEN_117 = 3'h0 == fetcherState | _GEN_103; // @[PPU.scala 264:26 275:21]
  wire  _GEN_122 = 3'h0 == fetcherState ? 1'h0 : _GEN_106; // @[PPU.scala 264:26 181:27]
  wire [1:0] _GEN_123 = 3'h0 == fetcherState ? 2'h0 : _GEN_107; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_124 = 3'h0 == fetcherState ? 2'h0 : _GEN_108; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_125 = 3'h0 == fetcherState ? 2'h0 : _GEN_109; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_126 = 3'h0 == fetcherState ? 2'h0 : _GEN_110; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_127 = 3'h0 == fetcherState ? 2'h0 : _GEN_111; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_128 = 3'h0 == fetcherState ? 2'h0 : _GEN_112; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_129 = 3'h0 == fetcherState ? 2'h0 : _GEN_113; // @[PPU.scala 264:26 183:27]
  wire [1:0] _GEN_130 = 3'h0 == fetcherState ? 2'h0 : _GEN_114; // @[PPU.scala 264:26 183:27]
  wire [3:0] _discardPixels_T_2 = discardPixels - 4'h1; // @[PPU.scala 345:40]
  wire [2:0] palShift = {pixelFIFO_io_outPixel, 1'h0}; // @[PPU.scala 349:28]
  wire [7:0] _palPx_T = io_bgp >> palShift; // @[PPU.scala 350:29]
  wire [7:0] palPx = _palPx_T & 8'h3; // @[PPU.scala 350:43]
  wire [7:0] _xPos_T_1 = xPos + 8'h1; // @[PPU.scala 354:22]
  wire [7:0] _GEN_133 = discardPixels > 4'h0 ? {{4'd0}, _discardPixels_T_2} : _GEN_19; // @[PPU.scala 343:33 345:23]
  wire [7:0] _GEN_135 = discardPixels > 4'h0 ? 8'h0 : palPx; // @[PPU.scala 207:31 343:33 353:20]
  wire [7:0] _GEN_139 = pixelFIFO_io_hasData & _T_11 ? _GEN_133 : _GEN_19; // @[PPU.scala 342:48]
  wire [7:0] _GEN_141 = pixelFIFO_io_hasData & _T_11 ? _GEN_135 : 8'h0; // @[PPU.scala 207:31 342:48]
  wire [7:0] _GEN_161 = mode == 2'h3 & _T_7 & lcdEnable ? _GEN_139 : _GEN_19; // @[PPU.scala 255:68]
  wire [7:0] _GEN_163 = mode == 2'h3 & _T_7 & lcdEnable ? _GEN_141 : 8'h0; // @[PPU.scala 207:31 255:68]
  wire [7:0] _GEN_174 = reset ? 8'h0 : _GEN_161; // @[PPU.scala 204:{30,30}]
  VRAM vram ( // @[PPU.scala 164:20]
    .clock(vram_clock),
    .io_addr(vram_io_addr),
    .io_read(vram_io_read),
    .io_rdata(vram_io_rdata)
  );
  PixelFIFO pixelFIFO ( // @[PPU.scala 180:25]
    .clock(pixelFIFO_clock),
    .reset(pixelFIFO_reset),
    .io_pushEnable(pixelFIFO_io_pushEnable),
    .io_pushPixels_0(pixelFIFO_io_pushPixels_0),
    .io_pushPixels_1(pixelFIFO_io_pushPixels_1),
    .io_pushPixels_2(pixelFIFO_io_pushPixels_2),
    .io_pushPixels_3(pixelFIFO_io_pushPixels_3),
    .io_pushPixels_4(pixelFIFO_io_pushPixels_4),
    .io_pushPixels_5(pixelFIFO_io_pushPixels_5),
    .io_pushPixels_6(pixelFIFO_io_pushPixels_6),
    .io_pushPixels_7(pixelFIFO_io_pushPixels_7),
    .io_popEnable(pixelFIFO_io_popEnable),
    .io_outPixel(pixelFIFO_io_outPixel),
    .io_hasData(pixelFIFO_io_hasData),
    .io_size(pixelFIFO_io_size),
    .io_clear(pixelFIFO_io_clear)
  );
  assign io_vramAddr = mode == 2'h3 & _T_7 & lcdEnable ? _GEN_116 : 13'h0; // @[PPU.scala 218:15 255:68]
  assign io_vramRead = mode == 2'h3 & _T_7 & lcdEnable & _GEN_117; // @[PPU.scala 219:15 255:68]
  assign io_ly = lyReg; // @[PPU.scala 381:9]
  assign io_vblankIRQ = vblankIRQ; // @[PPU.scala 382:16]
  assign io_pixelValid = mode == 2'h3 & _T_7 & lcdEnable & _GEN_140; // @[PPU.scala 206:31 255:68]
  assign io_pixelX = xPos; // @[PPU.scala 385:13]
  assign io_pixelY = lyReg; // @[PPU.scala 386:13]
  assign io_pixelColor = _GEN_163[1:0]; // @[PPU.scala 207:31]
  assign io_hblank = mode == 2'h0; // @[PPU.scala 390:22]
  assign io_vblank = mode == 2'h1; // @[PPU.scala 391:22]
  assign io_lcdEnable = io_lcdc[7]; // @[PPU.scala 104:26]
  assign vram_clock = clock;
  assign vram_io_addr = io_vramAddr; // @[PPU.scala 167:17]
  assign vram_io_read = io_vramRead; // @[PPU.scala 168:17]
  assign pixelFIFO_clock = clock;
  assign pixelFIFO_reset = reset;
  assign pixelFIFO_io_pushEnable = mode == 2'h3 & _T_7 & lcdEnable & _GEN_122; // @[PPU.scala 181:27 255:68]
  assign pixelFIFO_io_pushPixels_0 = mode == 2'h3 & _T_7 & lcdEnable ? _GEN_123 : 2'h0; // @[PPU.scala 183:27 255:68]
  assign pixelFIFO_io_pushPixels_1 = mode == 2'h3 & _T_7 & lcdEnable ? _GEN_124 : 2'h0; // @[PPU.scala 183:27 255:68]
  assign pixelFIFO_io_pushPixels_2 = mode == 2'h3 & _T_7 & lcdEnable ? _GEN_125 : 2'h0; // @[PPU.scala 183:27 255:68]
  assign pixelFIFO_io_pushPixels_3 = mode == 2'h3 & _T_7 & lcdEnable ? _GEN_126 : 2'h0; // @[PPU.scala 183:27 255:68]
  assign pixelFIFO_io_pushPixels_4 = mode == 2'h3 & _T_7 & lcdEnable ? _GEN_127 : 2'h0; // @[PPU.scala 183:27 255:68]
  assign pixelFIFO_io_pushPixels_5 = mode == 2'h3 & _T_7 & lcdEnable ? _GEN_128 : 2'h0; // @[PPU.scala 183:27 255:68]
  assign pixelFIFO_io_pushPixels_6 = mode == 2'h3 & _T_7 & lcdEnable ? _GEN_129 : 2'h0; // @[PPU.scala 183:27 255:68]
  assign pixelFIFO_io_pushPixels_7 = mode == 2'h3 & _T_7 & lcdEnable ? _GEN_130 : 2'h0; // @[PPU.scala 183:27 255:68]
  assign pixelFIFO_io_popEnable = mode == 2'h3 & _T_7 & lcdEnable & _T_37; // @[PPU.scala 182:27 255:68]
  assign pixelFIFO_io_clear = _T_6 & _T_7 & lcdEnable; // @[PPU.scala 238:51]
  always @(posedge clock) begin
    if (reset) begin // @[PPU.scala 101:27]
      dotCounter <= 9'h0; // @[PPU.scala 101:27]
    end else if (~lcdEnable) begin // @[PPU.scala 130:20]
      dotCounter <= 9'h0; // @[PPU.scala 131:16]
    end else if (dotCounter == _T_2) begin // @[PPU.scala 139:52]
      dotCounter <= 9'h0; // @[PPU.scala 140:18]
    end else begin
      dotCounter <= _dotCounter_T_1; // @[PPU.scala 136:16]
    end
    if (reset) begin // @[PPU.scala 102:22]
      lyReg <= 8'h0; // @[PPU.scala 102:22]
    end else if (~lcdEnable) begin // @[PPU.scala 130:20]
      lyReg <= 8'h0; // @[PPU.scala 132:16]
    end else if (dotCounter == _T_2) begin // @[PPU.scala 139:52]
      if (lyReg == 8'h99) begin // @[PPU.scala 142:29]
        lyReg <= 8'h0; // @[PPU.scala 143:15]
      end else begin
        lyReg <= _lyReg_T_1; // @[PPU.scala 146:15]
      end
    end
    if (reset) begin // @[PPU.scala 117:26]
      vblankIRQ <= 1'h0; // @[PPU.scala 117:26]
    end else if (~lcdEnable) begin // @[PPU.scala 130:20]
      vblankIRQ <= 1'h0; // @[PPU.scala 133:16]
    end else if (dotCounter == _T_2) begin // @[PPU.scala 139:52]
      if (lyReg == 8'h99) begin // @[PPU.scala 142:29]
        vblankIRQ <= 1'h0; // @[PPU.scala 144:19]
      end else begin
        vblankIRQ <= _T_5;
      end
    end
    if (reset) begin // @[PPU.scala 197:29]
      fetcherState <= 3'h0; // @[PPU.scala 197:29]
    end else if (mode == 2'h3 & _T_7 & lcdEnable) begin // @[PPU.scala 255:68]
      if (3'h0 == fetcherState) begin // @[PPU.scala 264:26]
        fetcherState <= 3'h2; // @[PPU.scala 276:22]
      end else if (3'h2 == fetcherState) begin // @[PPU.scala 264:26]
        fetcherState <= 3'h1; // @[PPU.scala 281:22]
      end else begin
        fetcherState <= _GEN_87;
      end
    end else if (_T_6 & _T_7 & lcdEnable) begin // @[PPU.scala 238:65]
      fetcherState <= 3'h0; // @[PPU.scala 241:18]
    end
    if (reset) begin // @[PPU.scala 198:25]
      fetcherX <= 8'h0; // @[PPU.scala 198:25]
    end else if (mode == 2'h3 & _T_7 & lcdEnable) begin // @[PPU.scala 255:68]
      if (3'h0 == fetcherState) begin // @[PPU.scala 264:26]
        fetcherX <= _GEN_16;
      end else if (3'h2 == fetcherState) begin // @[PPU.scala 264:26]
        fetcherX <= _GEN_16;
      end else begin
        fetcherX <= _GEN_99;
      end
    end else begin
      fetcherX <= _GEN_16;
    end
    if (reset) begin // @[PPU.scala 200:24]
      tileNum <= 8'h0; // @[PPU.scala 200:24]
    end else if (mode == 2'h3 & _T_7 & lcdEnable) begin // @[PPU.scala 255:68]
      if (!(3'h0 == fetcherState)) begin // @[PPU.scala 264:26]
        if (3'h2 == fetcherState) begin // @[PPU.scala 264:26]
          tileNum <= vram_io_rdata; // @[PPU.scala 280:17]
        end
      end
    end
    if (reset) begin // @[PPU.scala 201:28]
      tileDataLow <= 8'h0; // @[PPU.scala 201:28]
    end else if (mode == 2'h3 & _T_7 & lcdEnable) begin // @[PPU.scala 255:68]
      if (!(3'h0 == fetcherState)) begin // @[PPU.scala 264:26]
        if (!(3'h2 == fetcherState)) begin // @[PPU.scala 264:26]
          tileDataLow <= _GEN_88;
        end
      end
    end
    if (reset) begin // @[PPU.scala 202:29]
      tileDataHigh <= 8'h0; // @[PPU.scala 202:29]
    end else if (mode == 2'h3 & _T_7 & lcdEnable) begin // @[PPU.scala 255:68]
      if (!(3'h0 == fetcherState)) begin // @[PPU.scala 264:26]
        if (!(3'h2 == fetcherState)) begin // @[PPU.scala 264:26]
          tileDataHigh <= _GEN_89;
        end
      end
    end
    if (reset) begin // @[PPU.scala 203:21]
      xPos <= 8'h0; // @[PPU.scala 203:21]
    end else if (mode == 2'h3 & _T_7 & lcdEnable) begin // @[PPU.scala 255:68]
      if (pixelFIFO_io_hasData & _T_11) begin // @[PPU.scala 342:48]
        if (discardPixels > 4'h0) begin // @[PPU.scala 343:33]
          xPos <= _GEN_15;
        end else begin
          xPos <= _xPos_T_1; // @[PPU.scala 354:14]
        end
      end else begin
        xPos <= _GEN_15;
      end
    end else begin
      xPos <= _GEN_15;
    end
    discardPixels <= _GEN_174[3:0]; // @[PPU.scala 204:{30,30}]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  dotCounter = _RAND_0[8:0];
  _RAND_1 = {1{`RANDOM}};
  lyReg = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  vblankIRQ = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  fetcherState = _RAND_3[2:0];
  _RAND_4 = {1{`RANDOM}};
  fetcherX = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  tileNum = _RAND_5[7:0];
  _RAND_6 = {1{`RANDOM}};
  tileDataLow = _RAND_6[7:0];
  _RAND_7 = {1{`RANDOM}};
  tileDataHigh = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  xPos = _RAND_8[7:0];
  _RAND_9 = {1{`RANDOM}};
  discardPixels = _RAND_9[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IORegisters(
  input        clock,
  input        reset,
  input  [7:0] io_addr,
  input        io_write,
  input  [7:0] io_writeData,
  output [7:0] io_readData,
  output [7:0] io_ifReg,
  input        io_vblankIRQ,
  input        io_timerIRQ,
  output [7:0] io_ppuLcdc,
  output [7:0] io_ppuScy,
  output [7:0] io_ppuScx,
  input  [7:0] io_ppuLy,
  output [7:0] io_ppuBgp
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] regP1; // @[IORegisters.scala 52:22]
  reg [7:0] regSB; // @[IORegisters.scala 57:22]
  reg [7:0] regSC; // @[IORegisters.scala 58:22]
  reg [7:0] regIF; // @[IORegisters.scala 85:22]
  reg [7:0] regNR10; // @[IORegisters.scala 92:24]
  reg [7:0] regNR11; // @[IORegisters.scala 93:24]
  reg [7:0] regNR12; // @[IORegisters.scala 94:24]
  reg [7:0] regNR13; // @[IORegisters.scala 95:24]
  reg [7:0] regNR14; // @[IORegisters.scala 96:24]
  reg [7:0] regNR21; // @[IORegisters.scala 97:24]
  reg [7:0] regNR22; // @[IORegisters.scala 98:24]
  reg [7:0] regNR23; // @[IORegisters.scala 99:24]
  reg [7:0] regNR24; // @[IORegisters.scala 100:24]
  reg [7:0] regNR30; // @[IORegisters.scala 101:24]
  reg [7:0] regNR31; // @[IORegisters.scala 102:24]
  reg [7:0] regNR32; // @[IORegisters.scala 103:24]
  reg [7:0] regNR33; // @[IORegisters.scala 104:24]
  reg [7:0] regNR34; // @[IORegisters.scala 105:24]
  reg [7:0] regNR41; // @[IORegisters.scala 106:24]
  reg [7:0] regNR42; // @[IORegisters.scala 107:24]
  reg [7:0] regNR43; // @[IORegisters.scala 108:24]
  reg [7:0] regNR44; // @[IORegisters.scala 109:24]
  reg [7:0] regNR50; // @[IORegisters.scala 110:24]
  reg [7:0] regNR51; // @[IORegisters.scala 111:24]
  reg [7:0] regNR52; // @[IORegisters.scala 112:24]
  reg [7:0] regLCDC; // @[IORegisters.scala 117:24]
  reg [7:0] regSTAT; // @[IORegisters.scala 118:24]
  reg [7:0] regSCY; // @[IORegisters.scala 119:24]
  reg [7:0] regSCX; // @[IORegisters.scala 120:24]
  reg [7:0] regLYC; // @[IORegisters.scala 121:24]
  reg [7:0] regDMA; // @[IORegisters.scala 122:24]
  reg [7:0] regBGP; // @[IORegisters.scala 123:24]
  reg [7:0] regOBP0; // @[IORegisters.scala 124:24]
  reg [7:0] regOBP1; // @[IORegisters.scala 125:24]
  reg [7:0] regWY; // @[IORegisters.scala 126:24]
  reg [7:0] regWX; // @[IORegisters.scala 127:24]
  reg [7:0] regBOOT; // @[IORegisters.scala 132:24]
  wire  _T_1 = 8'h0 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_2 = 8'h1 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_3 = 8'h2 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_4 = 8'hf == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_5 = 8'h10 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_6 = 8'h11 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_7 = 8'h12 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_8 = 8'h13 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_9 = 8'h14 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_10 = 8'h16 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_11 = 8'h17 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_12 = 8'h18 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_13 = 8'h19 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_14 = 8'h1a == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_15 = 8'h1b == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_16 = 8'h1c == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_17 = 8'h1d == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_18 = 8'h1e == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_19 = 8'h20 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_20 = 8'h21 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_21 = 8'h22 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_22 = 8'h23 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_23 = 8'h24 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_24 = 8'h25 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_25 = 8'h26 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_26 = 8'h40 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_27 = 8'h41 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_28 = 8'h42 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_29 = 8'h43 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_30 = 8'h44 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_31 = 8'h45 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_32 = 8'h46 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_33 = 8'h47 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_34 = 8'h48 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_35 = 8'h49 == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_36 = 8'h4a == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_37 = 8'h4b == io_addr; // @[IORegisters.scala 140:19]
  wire  _T_38 = 8'h50 == io_addr; // @[IORegisters.scala 140:19]
  wire [7:0] _GEN_2 = 8'h50 == io_addr ? regBOOT : 8'hff; // @[IORegisters.scala 140:19 190:27 138:29]
  wire [7:0] _GEN_3 = 8'h4b == io_addr ? regWX : _GEN_2; // @[IORegisters.scala 140:19 187:27]
  wire [7:0] _GEN_4 = 8'h4a == io_addr ? regWY : _GEN_3; // @[IORegisters.scala 140:19 186:27]
  wire [7:0] _GEN_5 = 8'h49 == io_addr ? regOBP1 : _GEN_4; // @[IORegisters.scala 140:19 185:27]
  wire [7:0] _GEN_6 = 8'h48 == io_addr ? regOBP0 : _GEN_5; // @[IORegisters.scala 140:19 184:27]
  wire [7:0] _GEN_7 = 8'h47 == io_addr ? regBGP : _GEN_6; // @[IORegisters.scala 140:19 183:27]
  wire [7:0] _GEN_8 = 8'h46 == io_addr ? regDMA : _GEN_7; // @[IORegisters.scala 140:19 182:27]
  wire [7:0] _GEN_9 = 8'h45 == io_addr ? regLYC : _GEN_8; // @[IORegisters.scala 140:19 181:27]
  wire [7:0] _GEN_10 = 8'h44 == io_addr ? io_ppuLy : _GEN_9; // @[IORegisters.scala 140:19 180:27]
  wire [7:0] _GEN_11 = 8'h43 == io_addr ? regSCX : _GEN_10; // @[IORegisters.scala 140:19 179:27]
  wire [7:0] _GEN_12 = 8'h42 == io_addr ? regSCY : _GEN_11; // @[IORegisters.scala 140:19 178:27]
  wire [7:0] _GEN_13 = 8'h41 == io_addr ? regSTAT : _GEN_12; // @[IORegisters.scala 140:19 177:27]
  wire [7:0] _GEN_14 = 8'h40 == io_addr ? regLCDC : _GEN_13; // @[IORegisters.scala 140:19 176:27]
  wire [7:0] _GEN_15 = 8'h26 == io_addr ? regNR52 : _GEN_14; // @[IORegisters.scala 140:19 173:27]
  wire [7:0] _GEN_16 = 8'h25 == io_addr ? regNR51 : _GEN_15; // @[IORegisters.scala 140:19 172:27]
  wire [7:0] _GEN_17 = 8'h24 == io_addr ? regNR50 : _GEN_16; // @[IORegisters.scala 140:19 171:27]
  wire [7:0] _GEN_18 = 8'h23 == io_addr ? regNR44 : _GEN_17; // @[IORegisters.scala 140:19 170:27]
  wire [7:0] _GEN_19 = 8'h22 == io_addr ? regNR43 : _GEN_18; // @[IORegisters.scala 140:19 169:27]
  wire [7:0] _GEN_20 = 8'h21 == io_addr ? regNR42 : _GEN_19; // @[IORegisters.scala 140:19 168:27]
  wire [7:0] _GEN_21 = 8'h20 == io_addr ? regNR41 : _GEN_20; // @[IORegisters.scala 140:19 167:27]
  wire [7:0] _GEN_22 = 8'h1e == io_addr ? regNR34 : _GEN_21; // @[IORegisters.scala 140:19 166:27]
  wire [7:0] _GEN_23 = 8'h1d == io_addr ? regNR33 : _GEN_22; // @[IORegisters.scala 140:19 165:27]
  wire [7:0] _GEN_24 = 8'h1c == io_addr ? regNR32 : _GEN_23; // @[IORegisters.scala 140:19 164:27]
  wire [7:0] _GEN_25 = 8'h1b == io_addr ? regNR31 : _GEN_24; // @[IORegisters.scala 140:19 163:27]
  wire [7:0] _GEN_26 = 8'h1a == io_addr ? regNR30 : _GEN_25; // @[IORegisters.scala 140:19 162:27]
  wire [7:0] _GEN_27 = 8'h19 == io_addr ? regNR24 : _GEN_26; // @[IORegisters.scala 140:19 161:27]
  wire [7:0] _GEN_28 = 8'h18 == io_addr ? regNR23 : _GEN_27; // @[IORegisters.scala 140:19 160:27]
  wire [7:0] _GEN_29 = 8'h17 == io_addr ? regNR22 : _GEN_28; // @[IORegisters.scala 140:19 159:27]
  wire [7:0] _GEN_30 = 8'h16 == io_addr ? regNR21 : _GEN_29; // @[IORegisters.scala 140:19 158:27]
  wire [7:0] _GEN_31 = 8'h14 == io_addr ? regNR14 : _GEN_30; // @[IORegisters.scala 140:19 157:27]
  wire [7:0] _GEN_32 = 8'h13 == io_addr ? regNR13 : _GEN_31; // @[IORegisters.scala 140:19 156:27]
  wire [7:0] _GEN_33 = 8'h12 == io_addr ? regNR12 : _GEN_32; // @[IORegisters.scala 140:19 155:27]
  wire [7:0] _GEN_34 = 8'h11 == io_addr ? regNR11 : _GEN_33; // @[IORegisters.scala 140:19 154:27]
  wire [7:0] _GEN_35 = 8'h10 == io_addr ? regNR10 : _GEN_34; // @[IORegisters.scala 140:19 153:27]
  wire [7:0] _GEN_36 = 8'hf == io_addr ? regIF : _GEN_35; // @[IORegisters.scala 140:19 150:27]
  wire [7:0] _GEN_37 = 8'h2 == io_addr ? regSC : _GEN_36; // @[IORegisters.scala 140:19 146:27]
  wire [7:0] _GEN_38 = 8'h1 == io_addr ? regSB : _GEN_37; // @[IORegisters.scala 140:19 145:27]
  wire [7:0] _regP1_T = io_writeData | 8'hcf; // @[IORegisters.scala 201:42]
  wire [7:0] _regSC_T = io_writeData & 8'h7f; // @[IORegisters.scala 214:33]
  wire [7:0] _GEN_42 = io_writeData[7] ? _regSC_T : io_writeData; // @[IORegisters.scala 209:31 214:17 216:17]
  wire [7:0] _GEN_43 = _T_38 ? io_writeData : regBOOT; // @[IORegisters.scala 199:21 132:24 261:28]
  wire [7:0] _GEN_44 = _T_37 ? io_writeData : regWX; // @[IORegisters.scala 199:21 127:24 258:26]
  wire [7:0] _GEN_45 = _T_37 ? regBOOT : _GEN_43; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_46 = _T_36 ? io_writeData : regWY; // @[IORegisters.scala 199:21 126:24 257:26]
  wire [7:0] _GEN_47 = _T_36 ? regWX : _GEN_44; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_48 = _T_36 ? regBOOT : _GEN_45; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_49 = _T_35 ? io_writeData : regOBP1; // @[IORegisters.scala 199:21 125:24 256:28]
  wire [7:0] _GEN_50 = _T_35 ? regWY : _GEN_46; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_51 = _T_35 ? regWX : _GEN_47; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_52 = _T_35 ? regBOOT : _GEN_48; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_53 = _T_34 ? io_writeData : regOBP0; // @[IORegisters.scala 199:21 124:24 255:28]
  wire [7:0] _GEN_54 = _T_34 ? regOBP1 : _GEN_49; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_55 = _T_34 ? regWY : _GEN_50; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_56 = _T_34 ? regWX : _GEN_51; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_57 = _T_34 ? regBOOT : _GEN_52; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_58 = _T_33 ? io_writeData : regBGP; // @[IORegisters.scala 199:21 123:24 254:27]
  wire [7:0] _GEN_59 = _T_33 ? regOBP0 : _GEN_53; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_60 = _T_33 ? regOBP1 : _GEN_54; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_61 = _T_33 ? regWY : _GEN_55; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_62 = _T_33 ? regWX : _GEN_56; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_63 = _T_33 ? regBOOT : _GEN_57; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_64 = _T_32 ? io_writeData : regDMA; // @[IORegisters.scala 199:21 122:24 253:27]
  wire [7:0] _GEN_65 = _T_32 ? regBGP : _GEN_58; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_66 = _T_32 ? regOBP0 : _GEN_59; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_67 = _T_32 ? regOBP1 : _GEN_60; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_68 = _T_32 ? regWY : _GEN_61; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_69 = _T_32 ? regWX : _GEN_62; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_70 = _T_32 ? regBOOT : _GEN_63; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_71 = _T_31 ? io_writeData : regLYC; // @[IORegisters.scala 199:21 121:24 252:27]
  wire [7:0] _GEN_72 = _T_31 ? regDMA : _GEN_64; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_73 = _T_31 ? regBGP : _GEN_65; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_74 = _T_31 ? regOBP0 : _GEN_66; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_75 = _T_31 ? regOBP1 : _GEN_67; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_76 = _T_31 ? regWY : _GEN_68; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_77 = _T_31 ? regWX : _GEN_69; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_78 = _T_31 ? regBOOT : _GEN_70; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_79 = _T_30 ? regLYC : _GEN_71; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_80 = _T_30 ? regDMA : _GEN_72; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_81 = _T_30 ? regBGP : _GEN_73; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_82 = _T_30 ? regOBP0 : _GEN_74; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_83 = _T_30 ? regOBP1 : _GEN_75; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_84 = _T_30 ? regWY : _GEN_76; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_85 = _T_30 ? regWX : _GEN_77; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_86 = _T_30 ? regBOOT : _GEN_78; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_87 = _T_29 ? io_writeData : regSCX; // @[IORegisters.scala 199:21 120:24 250:27]
  wire [7:0] _GEN_88 = _T_29 ? regLYC : _GEN_79; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_89 = _T_29 ? regDMA : _GEN_80; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_90 = _T_29 ? regBGP : _GEN_81; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_91 = _T_29 ? regOBP0 : _GEN_82; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_92 = _T_29 ? regOBP1 : _GEN_83; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_93 = _T_29 ? regWY : _GEN_84; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_94 = _T_29 ? regWX : _GEN_85; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_95 = _T_29 ? regBOOT : _GEN_86; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_96 = _T_28 ? io_writeData : regSCY; // @[IORegisters.scala 199:21 119:24 249:27]
  wire [7:0] _GEN_97 = _T_28 ? regSCX : _GEN_87; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_98 = _T_28 ? regLYC : _GEN_88; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_99 = _T_28 ? regDMA : _GEN_89; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_100 = _T_28 ? regBGP : _GEN_90; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_101 = _T_28 ? regOBP0 : _GEN_91; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_102 = _T_28 ? regOBP1 : _GEN_92; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_103 = _T_28 ? regWY : _GEN_93; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_104 = _T_28 ? regWX : _GEN_94; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_105 = _T_28 ? regBOOT : _GEN_95; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_106 = _T_27 ? io_writeData : regSTAT; // @[IORegisters.scala 199:21 118:24 248:28]
  wire [7:0] _GEN_107 = _T_27 ? regSCY : _GEN_96; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_108 = _T_27 ? regSCX : _GEN_97; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_109 = _T_27 ? regLYC : _GEN_98; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_110 = _T_27 ? regDMA : _GEN_99; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_111 = _T_27 ? regBGP : _GEN_100; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_112 = _T_27 ? regOBP0 : _GEN_101; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_113 = _T_27 ? regOBP1 : _GEN_102; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_114 = _T_27 ? regWY : _GEN_103; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_115 = _T_27 ? regWX : _GEN_104; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_116 = _T_27 ? regBOOT : _GEN_105; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_117 = _T_26 ? io_writeData : regLCDC; // @[IORegisters.scala 199:21 117:24 247:28]
  wire [7:0] _GEN_118 = _T_26 ? regSTAT : _GEN_106; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_119 = _T_26 ? regSCY : _GEN_107; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_120 = _T_26 ? regSCX : _GEN_108; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_121 = _T_26 ? regLYC : _GEN_109; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_122 = _T_26 ? regDMA : _GEN_110; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_123 = _T_26 ? regBGP : _GEN_111; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_124 = _T_26 ? regOBP0 : _GEN_112; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_125 = _T_26 ? regOBP1 : _GEN_113; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_126 = _T_26 ? regWY : _GEN_114; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_127 = _T_26 ? regWX : _GEN_115; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_128 = _T_26 ? regBOOT : _GEN_116; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_129 = _T_25 ? io_writeData : regNR52; // @[IORegisters.scala 199:21 112:24 244:28]
  wire [7:0] _GEN_130 = _T_25 ? regLCDC : _GEN_117; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_131 = _T_25 ? regSTAT : _GEN_118; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_132 = _T_25 ? regSCY : _GEN_119; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_133 = _T_25 ? regSCX : _GEN_120; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_134 = _T_25 ? regLYC : _GEN_121; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_135 = _T_25 ? regDMA : _GEN_122; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_136 = _T_25 ? regBGP : _GEN_123; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_137 = _T_25 ? regOBP0 : _GEN_124; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_138 = _T_25 ? regOBP1 : _GEN_125; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_139 = _T_25 ? regWY : _GEN_126; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_140 = _T_25 ? regWX : _GEN_127; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_141 = _T_25 ? regBOOT : _GEN_128; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_142 = _T_24 ? io_writeData : regNR51; // @[IORegisters.scala 199:21 111:24 243:28]
  wire [7:0] _GEN_143 = _T_24 ? regNR52 : _GEN_129; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_144 = _T_24 ? regLCDC : _GEN_130; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_145 = _T_24 ? regSTAT : _GEN_131; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_146 = _T_24 ? regSCY : _GEN_132; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_147 = _T_24 ? regSCX : _GEN_133; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_148 = _T_24 ? regLYC : _GEN_134; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_149 = _T_24 ? regDMA : _GEN_135; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_150 = _T_24 ? regBGP : _GEN_136; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_151 = _T_24 ? regOBP0 : _GEN_137; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_152 = _T_24 ? regOBP1 : _GEN_138; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_153 = _T_24 ? regWY : _GEN_139; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_154 = _T_24 ? regWX : _GEN_140; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_155 = _T_24 ? regBOOT : _GEN_141; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_156 = _T_23 ? io_writeData : regNR50; // @[IORegisters.scala 199:21 110:24 242:28]
  wire [7:0] _GEN_157 = _T_23 ? regNR51 : _GEN_142; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_158 = _T_23 ? regNR52 : _GEN_143; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_159 = _T_23 ? regLCDC : _GEN_144; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_160 = _T_23 ? regSTAT : _GEN_145; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_161 = _T_23 ? regSCY : _GEN_146; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_162 = _T_23 ? regSCX : _GEN_147; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_163 = _T_23 ? regLYC : _GEN_148; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_164 = _T_23 ? regDMA : _GEN_149; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_165 = _T_23 ? regBGP : _GEN_150; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_166 = _T_23 ? regOBP0 : _GEN_151; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_167 = _T_23 ? regOBP1 : _GEN_152; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_168 = _T_23 ? regWY : _GEN_153; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_169 = _T_23 ? regWX : _GEN_154; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_170 = _T_23 ? regBOOT : _GEN_155; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_171 = _T_22 ? io_writeData : regNR44; // @[IORegisters.scala 199:21 109:24 241:28]
  wire [7:0] _GEN_172 = _T_22 ? regNR50 : _GEN_156; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_173 = _T_22 ? regNR51 : _GEN_157; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_174 = _T_22 ? regNR52 : _GEN_158; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_175 = _T_22 ? regLCDC : _GEN_159; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_176 = _T_22 ? regSTAT : _GEN_160; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_177 = _T_22 ? regSCY : _GEN_161; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_178 = _T_22 ? regSCX : _GEN_162; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_179 = _T_22 ? regLYC : _GEN_163; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_180 = _T_22 ? regDMA : _GEN_164; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_181 = _T_22 ? regBGP : _GEN_165; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_182 = _T_22 ? regOBP0 : _GEN_166; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_183 = _T_22 ? regOBP1 : _GEN_167; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_184 = _T_22 ? regWY : _GEN_168; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_185 = _T_22 ? regWX : _GEN_169; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_186 = _T_22 ? regBOOT : _GEN_170; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_187 = _T_21 ? io_writeData : regNR43; // @[IORegisters.scala 199:21 108:24 240:28]
  wire [7:0] _GEN_188 = _T_21 ? regNR44 : _GEN_171; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_189 = _T_21 ? regNR50 : _GEN_172; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_190 = _T_21 ? regNR51 : _GEN_173; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_191 = _T_21 ? regNR52 : _GEN_174; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_192 = _T_21 ? regLCDC : _GEN_175; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_193 = _T_21 ? regSTAT : _GEN_176; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_194 = _T_21 ? regSCY : _GEN_177; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_195 = _T_21 ? regSCX : _GEN_178; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_196 = _T_21 ? regLYC : _GEN_179; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_197 = _T_21 ? regDMA : _GEN_180; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_198 = _T_21 ? regBGP : _GEN_181; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_199 = _T_21 ? regOBP0 : _GEN_182; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_200 = _T_21 ? regOBP1 : _GEN_183; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_201 = _T_21 ? regWY : _GEN_184; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_202 = _T_21 ? regWX : _GEN_185; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_203 = _T_21 ? regBOOT : _GEN_186; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_204 = _T_20 ? io_writeData : regNR42; // @[IORegisters.scala 199:21 107:24 239:28]
  wire [7:0] _GEN_205 = _T_20 ? regNR43 : _GEN_187; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_206 = _T_20 ? regNR44 : _GEN_188; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_207 = _T_20 ? regNR50 : _GEN_189; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_208 = _T_20 ? regNR51 : _GEN_190; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_209 = _T_20 ? regNR52 : _GEN_191; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_210 = _T_20 ? regLCDC : _GEN_192; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_211 = _T_20 ? regSTAT : _GEN_193; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_212 = _T_20 ? regSCY : _GEN_194; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_213 = _T_20 ? regSCX : _GEN_195; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_214 = _T_20 ? regLYC : _GEN_196; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_215 = _T_20 ? regDMA : _GEN_197; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_216 = _T_20 ? regBGP : _GEN_198; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_217 = _T_20 ? regOBP0 : _GEN_199; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_218 = _T_20 ? regOBP1 : _GEN_200; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_219 = _T_20 ? regWY : _GEN_201; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_220 = _T_20 ? regWX : _GEN_202; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_221 = _T_20 ? regBOOT : _GEN_203; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_222 = _T_19 ? io_writeData : regNR41; // @[IORegisters.scala 199:21 106:24 238:28]
  wire [7:0] _GEN_223 = _T_19 ? regNR42 : _GEN_204; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_224 = _T_19 ? regNR43 : _GEN_205; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_225 = _T_19 ? regNR44 : _GEN_206; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_226 = _T_19 ? regNR50 : _GEN_207; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_227 = _T_19 ? regNR51 : _GEN_208; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_228 = _T_19 ? regNR52 : _GEN_209; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_229 = _T_19 ? regLCDC : _GEN_210; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_230 = _T_19 ? regSTAT : _GEN_211; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_231 = _T_19 ? regSCY : _GEN_212; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_232 = _T_19 ? regSCX : _GEN_213; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_233 = _T_19 ? regLYC : _GEN_214; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_234 = _T_19 ? regDMA : _GEN_215; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_235 = _T_19 ? regBGP : _GEN_216; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_236 = _T_19 ? regOBP0 : _GEN_217; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_237 = _T_19 ? regOBP1 : _GEN_218; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_238 = _T_19 ? regWY : _GEN_219; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_239 = _T_19 ? regWX : _GEN_220; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_240 = _T_19 ? regBOOT : _GEN_221; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_241 = _T_18 ? io_writeData : regNR34; // @[IORegisters.scala 199:21 105:24 237:28]
  wire [7:0] _GEN_242 = _T_18 ? regNR41 : _GEN_222; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_243 = _T_18 ? regNR42 : _GEN_223; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_244 = _T_18 ? regNR43 : _GEN_224; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_245 = _T_18 ? regNR44 : _GEN_225; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_246 = _T_18 ? regNR50 : _GEN_226; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_247 = _T_18 ? regNR51 : _GEN_227; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_248 = _T_18 ? regNR52 : _GEN_228; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_249 = _T_18 ? regLCDC : _GEN_229; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_250 = _T_18 ? regSTAT : _GEN_230; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_251 = _T_18 ? regSCY : _GEN_231; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_252 = _T_18 ? regSCX : _GEN_232; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_253 = _T_18 ? regLYC : _GEN_233; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_254 = _T_18 ? regDMA : _GEN_234; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_255 = _T_18 ? regBGP : _GEN_235; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_256 = _T_18 ? regOBP0 : _GEN_236; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_257 = _T_18 ? regOBP1 : _GEN_237; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_258 = _T_18 ? regWY : _GEN_238; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_259 = _T_18 ? regWX : _GEN_239; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_260 = _T_18 ? regBOOT : _GEN_240; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_261 = _T_17 ? io_writeData : regNR33; // @[IORegisters.scala 199:21 104:24 236:28]
  wire [7:0] _GEN_262 = _T_17 ? regNR34 : _GEN_241; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_263 = _T_17 ? regNR41 : _GEN_242; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_264 = _T_17 ? regNR42 : _GEN_243; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_265 = _T_17 ? regNR43 : _GEN_244; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_266 = _T_17 ? regNR44 : _GEN_245; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_267 = _T_17 ? regNR50 : _GEN_246; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_268 = _T_17 ? regNR51 : _GEN_247; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_269 = _T_17 ? regNR52 : _GEN_248; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_270 = _T_17 ? regLCDC : _GEN_249; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_271 = _T_17 ? regSTAT : _GEN_250; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_272 = _T_17 ? regSCY : _GEN_251; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_273 = _T_17 ? regSCX : _GEN_252; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_274 = _T_17 ? regLYC : _GEN_253; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_275 = _T_17 ? regDMA : _GEN_254; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_276 = _T_17 ? regBGP : _GEN_255; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_277 = _T_17 ? regOBP0 : _GEN_256; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_278 = _T_17 ? regOBP1 : _GEN_257; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_279 = _T_17 ? regWY : _GEN_258; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_280 = _T_17 ? regWX : _GEN_259; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_281 = _T_17 ? regBOOT : _GEN_260; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_282 = _T_16 ? io_writeData : regNR32; // @[IORegisters.scala 199:21 103:24 235:28]
  wire [7:0] _GEN_283 = _T_16 ? regNR33 : _GEN_261; // @[IORegisters.scala 199:21 104:24]
  wire [7:0] _GEN_284 = _T_16 ? regNR34 : _GEN_262; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_285 = _T_16 ? regNR41 : _GEN_263; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_286 = _T_16 ? regNR42 : _GEN_264; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_287 = _T_16 ? regNR43 : _GEN_265; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_288 = _T_16 ? regNR44 : _GEN_266; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_289 = _T_16 ? regNR50 : _GEN_267; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_290 = _T_16 ? regNR51 : _GEN_268; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_291 = _T_16 ? regNR52 : _GEN_269; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_292 = _T_16 ? regLCDC : _GEN_270; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_293 = _T_16 ? regSTAT : _GEN_271; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_294 = _T_16 ? regSCY : _GEN_272; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_295 = _T_16 ? regSCX : _GEN_273; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_296 = _T_16 ? regLYC : _GEN_274; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_297 = _T_16 ? regDMA : _GEN_275; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_298 = _T_16 ? regBGP : _GEN_276; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_299 = _T_16 ? regOBP0 : _GEN_277; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_300 = _T_16 ? regOBP1 : _GEN_278; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_301 = _T_16 ? regWY : _GEN_279; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_302 = _T_16 ? regWX : _GEN_280; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_303 = _T_16 ? regBOOT : _GEN_281; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_304 = _T_15 ? io_writeData : regNR31; // @[IORegisters.scala 199:21 102:24 234:28]
  wire [7:0] _GEN_305 = _T_15 ? regNR32 : _GEN_282; // @[IORegisters.scala 199:21 103:24]
  wire [7:0] _GEN_306 = _T_15 ? regNR33 : _GEN_283; // @[IORegisters.scala 199:21 104:24]
  wire [7:0] _GEN_307 = _T_15 ? regNR34 : _GEN_284; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_308 = _T_15 ? regNR41 : _GEN_285; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_309 = _T_15 ? regNR42 : _GEN_286; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_310 = _T_15 ? regNR43 : _GEN_287; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_311 = _T_15 ? regNR44 : _GEN_288; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_312 = _T_15 ? regNR50 : _GEN_289; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_313 = _T_15 ? regNR51 : _GEN_290; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_314 = _T_15 ? regNR52 : _GEN_291; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_315 = _T_15 ? regLCDC : _GEN_292; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_316 = _T_15 ? regSTAT : _GEN_293; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_317 = _T_15 ? regSCY : _GEN_294; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_318 = _T_15 ? regSCX : _GEN_295; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_319 = _T_15 ? regLYC : _GEN_296; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_320 = _T_15 ? regDMA : _GEN_297; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_321 = _T_15 ? regBGP : _GEN_298; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_322 = _T_15 ? regOBP0 : _GEN_299; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_323 = _T_15 ? regOBP1 : _GEN_300; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_324 = _T_15 ? regWY : _GEN_301; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_325 = _T_15 ? regWX : _GEN_302; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_326 = _T_15 ? regBOOT : _GEN_303; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_327 = _T_14 ? io_writeData : regNR30; // @[IORegisters.scala 199:21 101:24 233:28]
  wire [7:0] _GEN_328 = _T_14 ? regNR31 : _GEN_304; // @[IORegisters.scala 199:21 102:24]
  wire [7:0] _GEN_329 = _T_14 ? regNR32 : _GEN_305; // @[IORegisters.scala 199:21 103:24]
  wire [7:0] _GEN_330 = _T_14 ? regNR33 : _GEN_306; // @[IORegisters.scala 199:21 104:24]
  wire [7:0] _GEN_331 = _T_14 ? regNR34 : _GEN_307; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_332 = _T_14 ? regNR41 : _GEN_308; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_333 = _T_14 ? regNR42 : _GEN_309; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_334 = _T_14 ? regNR43 : _GEN_310; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_335 = _T_14 ? regNR44 : _GEN_311; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_336 = _T_14 ? regNR50 : _GEN_312; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_337 = _T_14 ? regNR51 : _GEN_313; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_338 = _T_14 ? regNR52 : _GEN_314; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_339 = _T_14 ? regLCDC : _GEN_315; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_340 = _T_14 ? regSTAT : _GEN_316; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_341 = _T_14 ? regSCY : _GEN_317; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_342 = _T_14 ? regSCX : _GEN_318; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_343 = _T_14 ? regLYC : _GEN_319; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_344 = _T_14 ? regDMA : _GEN_320; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_345 = _T_14 ? regBGP : _GEN_321; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_346 = _T_14 ? regOBP0 : _GEN_322; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_347 = _T_14 ? regOBP1 : _GEN_323; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_348 = _T_14 ? regWY : _GEN_324; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_349 = _T_14 ? regWX : _GEN_325; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_350 = _T_14 ? regBOOT : _GEN_326; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_351 = _T_13 ? io_writeData : regNR24; // @[IORegisters.scala 199:21 100:24 232:28]
  wire [7:0] _GEN_352 = _T_13 ? regNR30 : _GEN_327; // @[IORegisters.scala 199:21 101:24]
  wire [7:0] _GEN_353 = _T_13 ? regNR31 : _GEN_328; // @[IORegisters.scala 199:21 102:24]
  wire [7:0] _GEN_354 = _T_13 ? regNR32 : _GEN_329; // @[IORegisters.scala 199:21 103:24]
  wire [7:0] _GEN_355 = _T_13 ? regNR33 : _GEN_330; // @[IORegisters.scala 199:21 104:24]
  wire [7:0] _GEN_356 = _T_13 ? regNR34 : _GEN_331; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_357 = _T_13 ? regNR41 : _GEN_332; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_358 = _T_13 ? regNR42 : _GEN_333; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_359 = _T_13 ? regNR43 : _GEN_334; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_360 = _T_13 ? regNR44 : _GEN_335; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_361 = _T_13 ? regNR50 : _GEN_336; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_362 = _T_13 ? regNR51 : _GEN_337; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_363 = _T_13 ? regNR52 : _GEN_338; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_364 = _T_13 ? regLCDC : _GEN_339; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_365 = _T_13 ? regSTAT : _GEN_340; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_366 = _T_13 ? regSCY : _GEN_341; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_367 = _T_13 ? regSCX : _GEN_342; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_368 = _T_13 ? regLYC : _GEN_343; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_369 = _T_13 ? regDMA : _GEN_344; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_370 = _T_13 ? regBGP : _GEN_345; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_371 = _T_13 ? regOBP0 : _GEN_346; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_372 = _T_13 ? regOBP1 : _GEN_347; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_373 = _T_13 ? regWY : _GEN_348; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_374 = _T_13 ? regWX : _GEN_349; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_375 = _T_13 ? regBOOT : _GEN_350; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_376 = _T_12 ? io_writeData : regNR23; // @[IORegisters.scala 199:21 231:28 99:24]
  wire [7:0] _GEN_377 = _T_12 ? regNR24 : _GEN_351; // @[IORegisters.scala 199:21 100:24]
  wire [7:0] _GEN_378 = _T_12 ? regNR30 : _GEN_352; // @[IORegisters.scala 199:21 101:24]
  wire [7:0] _GEN_379 = _T_12 ? regNR31 : _GEN_353; // @[IORegisters.scala 199:21 102:24]
  wire [7:0] _GEN_380 = _T_12 ? regNR32 : _GEN_354; // @[IORegisters.scala 199:21 103:24]
  wire [7:0] _GEN_381 = _T_12 ? regNR33 : _GEN_355; // @[IORegisters.scala 199:21 104:24]
  wire [7:0] _GEN_382 = _T_12 ? regNR34 : _GEN_356; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_383 = _T_12 ? regNR41 : _GEN_357; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_384 = _T_12 ? regNR42 : _GEN_358; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_385 = _T_12 ? regNR43 : _GEN_359; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_386 = _T_12 ? regNR44 : _GEN_360; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_387 = _T_12 ? regNR50 : _GEN_361; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_388 = _T_12 ? regNR51 : _GEN_362; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_389 = _T_12 ? regNR52 : _GEN_363; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_390 = _T_12 ? regLCDC : _GEN_364; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_391 = _T_12 ? regSTAT : _GEN_365; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_392 = _T_12 ? regSCY : _GEN_366; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_393 = _T_12 ? regSCX : _GEN_367; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_394 = _T_12 ? regLYC : _GEN_368; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_395 = _T_12 ? regDMA : _GEN_369; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_396 = _T_12 ? regBGP : _GEN_370; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_397 = _T_12 ? regOBP0 : _GEN_371; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_398 = _T_12 ? regOBP1 : _GEN_372; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_399 = _T_12 ? regWY : _GEN_373; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_400 = _T_12 ? regWX : _GEN_374; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_401 = _T_12 ? regBOOT : _GEN_375; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_402 = _T_11 ? io_writeData : regNR22; // @[IORegisters.scala 199:21 230:28 98:24]
  wire [7:0] _GEN_403 = _T_11 ? regNR23 : _GEN_376; // @[IORegisters.scala 199:21 99:24]
  wire [7:0] _GEN_404 = _T_11 ? regNR24 : _GEN_377; // @[IORegisters.scala 199:21 100:24]
  wire [7:0] _GEN_405 = _T_11 ? regNR30 : _GEN_378; // @[IORegisters.scala 199:21 101:24]
  wire [7:0] _GEN_406 = _T_11 ? regNR31 : _GEN_379; // @[IORegisters.scala 199:21 102:24]
  wire [7:0] _GEN_407 = _T_11 ? regNR32 : _GEN_380; // @[IORegisters.scala 199:21 103:24]
  wire [7:0] _GEN_408 = _T_11 ? regNR33 : _GEN_381; // @[IORegisters.scala 199:21 104:24]
  wire [7:0] _GEN_409 = _T_11 ? regNR34 : _GEN_382; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_410 = _T_11 ? regNR41 : _GEN_383; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_411 = _T_11 ? regNR42 : _GEN_384; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_412 = _T_11 ? regNR43 : _GEN_385; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_413 = _T_11 ? regNR44 : _GEN_386; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_414 = _T_11 ? regNR50 : _GEN_387; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_415 = _T_11 ? regNR51 : _GEN_388; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_416 = _T_11 ? regNR52 : _GEN_389; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_417 = _T_11 ? regLCDC : _GEN_390; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_418 = _T_11 ? regSTAT : _GEN_391; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_419 = _T_11 ? regSCY : _GEN_392; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_420 = _T_11 ? regSCX : _GEN_393; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_421 = _T_11 ? regLYC : _GEN_394; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_422 = _T_11 ? regDMA : _GEN_395; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_423 = _T_11 ? regBGP : _GEN_396; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_424 = _T_11 ? regOBP0 : _GEN_397; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_425 = _T_11 ? regOBP1 : _GEN_398; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_426 = _T_11 ? regWY : _GEN_399; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_427 = _T_11 ? regWX : _GEN_400; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_428 = _T_11 ? regBOOT : _GEN_401; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_429 = _T_10 ? io_writeData : regNR21; // @[IORegisters.scala 199:21 229:28 97:24]
  wire [7:0] _GEN_430 = _T_10 ? regNR22 : _GEN_402; // @[IORegisters.scala 199:21 98:24]
  wire [7:0] _GEN_431 = _T_10 ? regNR23 : _GEN_403; // @[IORegisters.scala 199:21 99:24]
  wire [7:0] _GEN_432 = _T_10 ? regNR24 : _GEN_404; // @[IORegisters.scala 199:21 100:24]
  wire [7:0] _GEN_433 = _T_10 ? regNR30 : _GEN_405; // @[IORegisters.scala 199:21 101:24]
  wire [7:0] _GEN_434 = _T_10 ? regNR31 : _GEN_406; // @[IORegisters.scala 199:21 102:24]
  wire [7:0] _GEN_435 = _T_10 ? regNR32 : _GEN_407; // @[IORegisters.scala 199:21 103:24]
  wire [7:0] _GEN_436 = _T_10 ? regNR33 : _GEN_408; // @[IORegisters.scala 199:21 104:24]
  wire [7:0] _GEN_437 = _T_10 ? regNR34 : _GEN_409; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_438 = _T_10 ? regNR41 : _GEN_410; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_439 = _T_10 ? regNR42 : _GEN_411; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_440 = _T_10 ? regNR43 : _GEN_412; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_441 = _T_10 ? regNR44 : _GEN_413; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_442 = _T_10 ? regNR50 : _GEN_414; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_443 = _T_10 ? regNR51 : _GEN_415; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_444 = _T_10 ? regNR52 : _GEN_416; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_445 = _T_10 ? regLCDC : _GEN_417; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_446 = _T_10 ? regSTAT : _GEN_418; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_447 = _T_10 ? regSCY : _GEN_419; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_448 = _T_10 ? regSCX : _GEN_420; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_449 = _T_10 ? regLYC : _GEN_421; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_450 = _T_10 ? regDMA : _GEN_422; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_451 = _T_10 ? regBGP : _GEN_423; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_452 = _T_10 ? regOBP0 : _GEN_424; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_453 = _T_10 ? regOBP1 : _GEN_425; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_454 = _T_10 ? regWY : _GEN_426; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_455 = _T_10 ? regWX : _GEN_427; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_456 = _T_10 ? regBOOT : _GEN_428; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_457 = _T_9 ? io_writeData : regNR14; // @[IORegisters.scala 199:21 228:28 96:24]
  wire [7:0] _GEN_458 = _T_9 ? regNR21 : _GEN_429; // @[IORegisters.scala 199:21 97:24]
  wire [7:0] _GEN_459 = _T_9 ? regNR22 : _GEN_430; // @[IORegisters.scala 199:21 98:24]
  wire [7:0] _GEN_460 = _T_9 ? regNR23 : _GEN_431; // @[IORegisters.scala 199:21 99:24]
  wire [7:0] _GEN_461 = _T_9 ? regNR24 : _GEN_432; // @[IORegisters.scala 199:21 100:24]
  wire [7:0] _GEN_462 = _T_9 ? regNR30 : _GEN_433; // @[IORegisters.scala 199:21 101:24]
  wire [7:0] _GEN_463 = _T_9 ? regNR31 : _GEN_434; // @[IORegisters.scala 199:21 102:24]
  wire [7:0] _GEN_464 = _T_9 ? regNR32 : _GEN_435; // @[IORegisters.scala 199:21 103:24]
  wire [7:0] _GEN_465 = _T_9 ? regNR33 : _GEN_436; // @[IORegisters.scala 199:21 104:24]
  wire [7:0] _GEN_466 = _T_9 ? regNR34 : _GEN_437; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_467 = _T_9 ? regNR41 : _GEN_438; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_468 = _T_9 ? regNR42 : _GEN_439; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_469 = _T_9 ? regNR43 : _GEN_440; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_470 = _T_9 ? regNR44 : _GEN_441; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_471 = _T_9 ? regNR50 : _GEN_442; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_472 = _T_9 ? regNR51 : _GEN_443; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_473 = _T_9 ? regNR52 : _GEN_444; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_474 = _T_9 ? regLCDC : _GEN_445; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_475 = _T_9 ? regSTAT : _GEN_446; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_476 = _T_9 ? regSCY : _GEN_447; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_477 = _T_9 ? regSCX : _GEN_448; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_478 = _T_9 ? regLYC : _GEN_449; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_479 = _T_9 ? regDMA : _GEN_450; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_480 = _T_9 ? regBGP : _GEN_451; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_481 = _T_9 ? regOBP0 : _GEN_452; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_482 = _T_9 ? regOBP1 : _GEN_453; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_483 = _T_9 ? regWY : _GEN_454; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_484 = _T_9 ? regWX : _GEN_455; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_485 = _T_9 ? regBOOT : _GEN_456; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_486 = _T_8 ? io_writeData : regNR13; // @[IORegisters.scala 199:21 227:28 95:24]
  wire [7:0] _GEN_487 = _T_8 ? regNR14 : _GEN_457; // @[IORegisters.scala 199:21 96:24]
  wire [7:0] _GEN_488 = _T_8 ? regNR21 : _GEN_458; // @[IORegisters.scala 199:21 97:24]
  wire [7:0] _GEN_489 = _T_8 ? regNR22 : _GEN_459; // @[IORegisters.scala 199:21 98:24]
  wire [7:0] _GEN_490 = _T_8 ? regNR23 : _GEN_460; // @[IORegisters.scala 199:21 99:24]
  wire [7:0] _GEN_491 = _T_8 ? regNR24 : _GEN_461; // @[IORegisters.scala 199:21 100:24]
  wire [7:0] _GEN_492 = _T_8 ? regNR30 : _GEN_462; // @[IORegisters.scala 199:21 101:24]
  wire [7:0] _GEN_493 = _T_8 ? regNR31 : _GEN_463; // @[IORegisters.scala 199:21 102:24]
  wire [7:0] _GEN_494 = _T_8 ? regNR32 : _GEN_464; // @[IORegisters.scala 199:21 103:24]
  wire [7:0] _GEN_495 = _T_8 ? regNR33 : _GEN_465; // @[IORegisters.scala 199:21 104:24]
  wire [7:0] _GEN_496 = _T_8 ? regNR34 : _GEN_466; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_497 = _T_8 ? regNR41 : _GEN_467; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_498 = _T_8 ? regNR42 : _GEN_468; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_499 = _T_8 ? regNR43 : _GEN_469; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_500 = _T_8 ? regNR44 : _GEN_470; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_501 = _T_8 ? regNR50 : _GEN_471; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_502 = _T_8 ? regNR51 : _GEN_472; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_503 = _T_8 ? regNR52 : _GEN_473; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_504 = _T_8 ? regLCDC : _GEN_474; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_505 = _T_8 ? regSTAT : _GEN_475; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_506 = _T_8 ? regSCY : _GEN_476; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_507 = _T_8 ? regSCX : _GEN_477; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_508 = _T_8 ? regLYC : _GEN_478; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_509 = _T_8 ? regDMA : _GEN_479; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_510 = _T_8 ? regBGP : _GEN_480; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_511 = _T_8 ? regOBP0 : _GEN_481; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_512 = _T_8 ? regOBP1 : _GEN_482; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_513 = _T_8 ? regWY : _GEN_483; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_514 = _T_8 ? regWX : _GEN_484; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_515 = _T_8 ? regBOOT : _GEN_485; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_516 = _T_7 ? io_writeData : regNR12; // @[IORegisters.scala 199:21 226:28 94:24]
  wire [7:0] _GEN_517 = _T_7 ? regNR13 : _GEN_486; // @[IORegisters.scala 199:21 95:24]
  wire [7:0] _GEN_518 = _T_7 ? regNR14 : _GEN_487; // @[IORegisters.scala 199:21 96:24]
  wire [7:0] _GEN_519 = _T_7 ? regNR21 : _GEN_488; // @[IORegisters.scala 199:21 97:24]
  wire [7:0] _GEN_520 = _T_7 ? regNR22 : _GEN_489; // @[IORegisters.scala 199:21 98:24]
  wire [7:0] _GEN_521 = _T_7 ? regNR23 : _GEN_490; // @[IORegisters.scala 199:21 99:24]
  wire [7:0] _GEN_522 = _T_7 ? regNR24 : _GEN_491; // @[IORegisters.scala 199:21 100:24]
  wire [7:0] _GEN_523 = _T_7 ? regNR30 : _GEN_492; // @[IORegisters.scala 199:21 101:24]
  wire [7:0] _GEN_524 = _T_7 ? regNR31 : _GEN_493; // @[IORegisters.scala 199:21 102:24]
  wire [7:0] _GEN_525 = _T_7 ? regNR32 : _GEN_494; // @[IORegisters.scala 199:21 103:24]
  wire [7:0] _GEN_526 = _T_7 ? regNR33 : _GEN_495; // @[IORegisters.scala 199:21 104:24]
  wire [7:0] _GEN_527 = _T_7 ? regNR34 : _GEN_496; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_528 = _T_7 ? regNR41 : _GEN_497; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_529 = _T_7 ? regNR42 : _GEN_498; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_530 = _T_7 ? regNR43 : _GEN_499; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_531 = _T_7 ? regNR44 : _GEN_500; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_532 = _T_7 ? regNR50 : _GEN_501; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_533 = _T_7 ? regNR51 : _GEN_502; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_534 = _T_7 ? regNR52 : _GEN_503; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_535 = _T_7 ? regLCDC : _GEN_504; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_536 = _T_7 ? regSTAT : _GEN_505; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_537 = _T_7 ? regSCY : _GEN_506; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_538 = _T_7 ? regSCX : _GEN_507; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_539 = _T_7 ? regLYC : _GEN_508; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_540 = _T_7 ? regDMA : _GEN_509; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_541 = _T_7 ? regBGP : _GEN_510; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_542 = _T_7 ? regOBP0 : _GEN_511; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_543 = _T_7 ? regOBP1 : _GEN_512; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_544 = _T_7 ? regWY : _GEN_513; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_545 = _T_7 ? regWX : _GEN_514; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_546 = _T_7 ? regBOOT : _GEN_515; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_547 = _T_6 ? io_writeData : regNR11; // @[IORegisters.scala 199:21 225:28 93:24]
  wire [7:0] _GEN_548 = _T_6 ? regNR12 : _GEN_516; // @[IORegisters.scala 199:21 94:24]
  wire [7:0] _GEN_549 = _T_6 ? regNR13 : _GEN_517; // @[IORegisters.scala 199:21 95:24]
  wire [7:0] _GEN_550 = _T_6 ? regNR14 : _GEN_518; // @[IORegisters.scala 199:21 96:24]
  wire [7:0] _GEN_551 = _T_6 ? regNR21 : _GEN_519; // @[IORegisters.scala 199:21 97:24]
  wire [7:0] _GEN_552 = _T_6 ? regNR22 : _GEN_520; // @[IORegisters.scala 199:21 98:24]
  wire [7:0] _GEN_553 = _T_6 ? regNR23 : _GEN_521; // @[IORegisters.scala 199:21 99:24]
  wire [7:0] _GEN_554 = _T_6 ? regNR24 : _GEN_522; // @[IORegisters.scala 199:21 100:24]
  wire [7:0] _GEN_555 = _T_6 ? regNR30 : _GEN_523; // @[IORegisters.scala 199:21 101:24]
  wire [7:0] _GEN_556 = _T_6 ? regNR31 : _GEN_524; // @[IORegisters.scala 199:21 102:24]
  wire [7:0] _GEN_557 = _T_6 ? regNR32 : _GEN_525; // @[IORegisters.scala 199:21 103:24]
  wire [7:0] _GEN_558 = _T_6 ? regNR33 : _GEN_526; // @[IORegisters.scala 199:21 104:24]
  wire [7:0] _GEN_559 = _T_6 ? regNR34 : _GEN_527; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_560 = _T_6 ? regNR41 : _GEN_528; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_561 = _T_6 ? regNR42 : _GEN_529; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_562 = _T_6 ? regNR43 : _GEN_530; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_563 = _T_6 ? regNR44 : _GEN_531; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_564 = _T_6 ? regNR50 : _GEN_532; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_565 = _T_6 ? regNR51 : _GEN_533; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_566 = _T_6 ? regNR52 : _GEN_534; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_567 = _T_6 ? regLCDC : _GEN_535; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_568 = _T_6 ? regSTAT : _GEN_536; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_569 = _T_6 ? regSCY : _GEN_537; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_570 = _T_6 ? regSCX : _GEN_538; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_571 = _T_6 ? regLYC : _GEN_539; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_572 = _T_6 ? regDMA : _GEN_540; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_573 = _T_6 ? regBGP : _GEN_541; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_574 = _T_6 ? regOBP0 : _GEN_542; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_575 = _T_6 ? regOBP1 : _GEN_543; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_576 = _T_6 ? regWY : _GEN_544; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_577 = _T_6 ? regWX : _GEN_545; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_578 = _T_6 ? regBOOT : _GEN_546; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_579 = _T_5 ? io_writeData : regNR10; // @[IORegisters.scala 199:21 224:28 92:24]
  wire [7:0] _GEN_580 = _T_5 ? regNR11 : _GEN_547; // @[IORegisters.scala 199:21 93:24]
  wire [7:0] _GEN_581 = _T_5 ? regNR12 : _GEN_548; // @[IORegisters.scala 199:21 94:24]
  wire [7:0] _GEN_582 = _T_5 ? regNR13 : _GEN_549; // @[IORegisters.scala 199:21 95:24]
  wire [7:0] _GEN_583 = _T_5 ? regNR14 : _GEN_550; // @[IORegisters.scala 199:21 96:24]
  wire [7:0] _GEN_584 = _T_5 ? regNR21 : _GEN_551; // @[IORegisters.scala 199:21 97:24]
  wire [7:0] _GEN_585 = _T_5 ? regNR22 : _GEN_552; // @[IORegisters.scala 199:21 98:24]
  wire [7:0] _GEN_586 = _T_5 ? regNR23 : _GEN_553; // @[IORegisters.scala 199:21 99:24]
  wire [7:0] _GEN_587 = _T_5 ? regNR24 : _GEN_554; // @[IORegisters.scala 199:21 100:24]
  wire [7:0] _GEN_588 = _T_5 ? regNR30 : _GEN_555; // @[IORegisters.scala 199:21 101:24]
  wire [7:0] _GEN_589 = _T_5 ? regNR31 : _GEN_556; // @[IORegisters.scala 199:21 102:24]
  wire [7:0] _GEN_590 = _T_5 ? regNR32 : _GEN_557; // @[IORegisters.scala 199:21 103:24]
  wire [7:0] _GEN_591 = _T_5 ? regNR33 : _GEN_558; // @[IORegisters.scala 199:21 104:24]
  wire [7:0] _GEN_592 = _T_5 ? regNR34 : _GEN_559; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_593 = _T_5 ? regNR41 : _GEN_560; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_594 = _T_5 ? regNR42 : _GEN_561; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_595 = _T_5 ? regNR43 : _GEN_562; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_596 = _T_5 ? regNR44 : _GEN_563; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_597 = _T_5 ? regNR50 : _GEN_564; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_598 = _T_5 ? regNR51 : _GEN_565; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_599 = _T_5 ? regNR52 : _GEN_566; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_600 = _T_5 ? regLCDC : _GEN_567; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_601 = _T_5 ? regSTAT : _GEN_568; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_602 = _T_5 ? regSCY : _GEN_569; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_603 = _T_5 ? regSCX : _GEN_570; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_604 = _T_5 ? regLYC : _GEN_571; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_605 = _T_5 ? regDMA : _GEN_572; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_606 = _T_5 ? regBGP : _GEN_573; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_607 = _T_5 ? regOBP0 : _GEN_574; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_608 = _T_5 ? regOBP1 : _GEN_575; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_609 = _T_5 ? regWY : _GEN_576; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_610 = _T_5 ? regWX : _GEN_577; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_611 = _T_5 ? regBOOT : _GEN_578; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_612 = _T_4 ? io_writeData : regIF; // @[IORegisters.scala 199:21 221:26 85:22]
  wire [7:0] _GEN_613 = _T_4 ? regNR10 : _GEN_579; // @[IORegisters.scala 199:21 92:24]
  wire [7:0] _GEN_614 = _T_4 ? regNR11 : _GEN_580; // @[IORegisters.scala 199:21 93:24]
  wire [7:0] _GEN_615 = _T_4 ? regNR12 : _GEN_581; // @[IORegisters.scala 199:21 94:24]
  wire [7:0] _GEN_616 = _T_4 ? regNR13 : _GEN_582; // @[IORegisters.scala 199:21 95:24]
  wire [7:0] _GEN_617 = _T_4 ? regNR14 : _GEN_583; // @[IORegisters.scala 199:21 96:24]
  wire [7:0] _GEN_618 = _T_4 ? regNR21 : _GEN_584; // @[IORegisters.scala 199:21 97:24]
  wire [7:0] _GEN_619 = _T_4 ? regNR22 : _GEN_585; // @[IORegisters.scala 199:21 98:24]
  wire [7:0] _GEN_620 = _T_4 ? regNR23 : _GEN_586; // @[IORegisters.scala 199:21 99:24]
  wire [7:0] _GEN_621 = _T_4 ? regNR24 : _GEN_587; // @[IORegisters.scala 199:21 100:24]
  wire [7:0] _GEN_622 = _T_4 ? regNR30 : _GEN_588; // @[IORegisters.scala 199:21 101:24]
  wire [7:0] _GEN_623 = _T_4 ? regNR31 : _GEN_589; // @[IORegisters.scala 199:21 102:24]
  wire [7:0] _GEN_624 = _T_4 ? regNR32 : _GEN_590; // @[IORegisters.scala 199:21 103:24]
  wire [7:0] _GEN_625 = _T_4 ? regNR33 : _GEN_591; // @[IORegisters.scala 199:21 104:24]
  wire [7:0] _GEN_626 = _T_4 ? regNR34 : _GEN_592; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_627 = _T_4 ? regNR41 : _GEN_593; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_628 = _T_4 ? regNR42 : _GEN_594; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_629 = _T_4 ? regNR43 : _GEN_595; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_630 = _T_4 ? regNR44 : _GEN_596; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_631 = _T_4 ? regNR50 : _GEN_597; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_632 = _T_4 ? regNR51 : _GEN_598; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_633 = _T_4 ? regNR52 : _GEN_599; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_634 = _T_4 ? regLCDC : _GEN_600; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_635 = _T_4 ? regSTAT : _GEN_601; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_636 = _T_4 ? regSCY : _GEN_602; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_637 = _T_4 ? regSCX : _GEN_603; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_638 = _T_4 ? regLYC : _GEN_604; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_639 = _T_4 ? regDMA : _GEN_605; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_640 = _T_4 ? regBGP : _GEN_606; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_641 = _T_4 ? regOBP0 : _GEN_607; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_642 = _T_4 ? regOBP1 : _GEN_608; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_643 = _T_4 ? regWY : _GEN_609; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_644 = _T_4 ? regWX : _GEN_610; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_645 = _T_4 ? regBOOT : _GEN_611; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_648 = _T_3 ? _GEN_42 : regSC; // @[IORegisters.scala 199:21 58:22]
  wire [7:0] _GEN_649 = _T_3 ? regIF : _GEN_612; // @[IORegisters.scala 199:21 85:22]
  wire [7:0] _GEN_650 = _T_3 ? regNR10 : _GEN_613; // @[IORegisters.scala 199:21 92:24]
  wire [7:0] _GEN_651 = _T_3 ? regNR11 : _GEN_614; // @[IORegisters.scala 199:21 93:24]
  wire [7:0] _GEN_652 = _T_3 ? regNR12 : _GEN_615; // @[IORegisters.scala 199:21 94:24]
  wire [7:0] _GEN_653 = _T_3 ? regNR13 : _GEN_616; // @[IORegisters.scala 199:21 95:24]
  wire [7:0] _GEN_654 = _T_3 ? regNR14 : _GEN_617; // @[IORegisters.scala 199:21 96:24]
  wire [7:0] _GEN_655 = _T_3 ? regNR21 : _GEN_618; // @[IORegisters.scala 199:21 97:24]
  wire [7:0] _GEN_656 = _T_3 ? regNR22 : _GEN_619; // @[IORegisters.scala 199:21 98:24]
  wire [7:0] _GEN_657 = _T_3 ? regNR23 : _GEN_620; // @[IORegisters.scala 199:21 99:24]
  wire [7:0] _GEN_658 = _T_3 ? regNR24 : _GEN_621; // @[IORegisters.scala 199:21 100:24]
  wire [7:0] _GEN_659 = _T_3 ? regNR30 : _GEN_622; // @[IORegisters.scala 199:21 101:24]
  wire [7:0] _GEN_660 = _T_3 ? regNR31 : _GEN_623; // @[IORegisters.scala 199:21 102:24]
  wire [7:0] _GEN_661 = _T_3 ? regNR32 : _GEN_624; // @[IORegisters.scala 199:21 103:24]
  wire [7:0] _GEN_662 = _T_3 ? regNR33 : _GEN_625; // @[IORegisters.scala 199:21 104:24]
  wire [7:0] _GEN_663 = _T_3 ? regNR34 : _GEN_626; // @[IORegisters.scala 199:21 105:24]
  wire [7:0] _GEN_664 = _T_3 ? regNR41 : _GEN_627; // @[IORegisters.scala 199:21 106:24]
  wire [7:0] _GEN_665 = _T_3 ? regNR42 : _GEN_628; // @[IORegisters.scala 199:21 107:24]
  wire [7:0] _GEN_666 = _T_3 ? regNR43 : _GEN_629; // @[IORegisters.scala 199:21 108:24]
  wire [7:0] _GEN_667 = _T_3 ? regNR44 : _GEN_630; // @[IORegisters.scala 199:21 109:24]
  wire [7:0] _GEN_668 = _T_3 ? regNR50 : _GEN_631; // @[IORegisters.scala 199:21 110:24]
  wire [7:0] _GEN_669 = _T_3 ? regNR51 : _GEN_632; // @[IORegisters.scala 199:21 111:24]
  wire [7:0] _GEN_670 = _T_3 ? regNR52 : _GEN_633; // @[IORegisters.scala 199:21 112:24]
  wire [7:0] _GEN_671 = _T_3 ? regLCDC : _GEN_634; // @[IORegisters.scala 199:21 117:24]
  wire [7:0] _GEN_672 = _T_3 ? regSTAT : _GEN_635; // @[IORegisters.scala 199:21 118:24]
  wire [7:0] _GEN_673 = _T_3 ? regSCY : _GEN_636; // @[IORegisters.scala 199:21 119:24]
  wire [7:0] _GEN_674 = _T_3 ? regSCX : _GEN_637; // @[IORegisters.scala 199:21 120:24]
  wire [7:0] _GEN_675 = _T_3 ? regLYC : _GEN_638; // @[IORegisters.scala 199:21 121:24]
  wire [7:0] _GEN_676 = _T_3 ? regDMA : _GEN_639; // @[IORegisters.scala 199:21 122:24]
  wire [7:0] _GEN_677 = _T_3 ? regBGP : _GEN_640; // @[IORegisters.scala 199:21 123:24]
  wire [7:0] _GEN_678 = _T_3 ? regOBP0 : _GEN_641; // @[IORegisters.scala 199:21 124:24]
  wire [7:0] _GEN_679 = _T_3 ? regOBP1 : _GEN_642; // @[IORegisters.scala 199:21 125:24]
  wire [7:0] _GEN_680 = _T_3 ? regWY : _GEN_643; // @[IORegisters.scala 199:21 126:24]
  wire [7:0] _GEN_681 = _T_3 ? regWX : _GEN_644; // @[IORegisters.scala 199:21 127:24]
  wire [7:0] _GEN_682 = _T_3 ? regBOOT : _GEN_645; // @[IORegisters.scala 199:21 132:24]
  wire [7:0] _GEN_687 = _T_2 ? regIF : _GEN_649; // @[IORegisters.scala 199:21 85:22]
  wire [7:0] _GEN_726 = _T_1 ? regIF : _GEN_687; // @[IORegisters.scala 199:21 85:22]
  wire [7:0] _regIF_T = regIF | 8'h1; // @[IORegisters.scala 287:20]
  wire [7:0] _regIF_T_2 = regIF | 8'h4; // @[IORegisters.scala 293:20]
  assign io_readData = 8'h0 == io_addr ? regP1 : _GEN_38; // @[IORegisters.scala 140:19 142:27]
  assign io_ifReg = regIF; // @[IORegisters.scala 87:12]
  assign io_ppuLcdc = regLCDC; // @[IORegisters.scala 270:14]
  assign io_ppuScy = regSCY; // @[IORegisters.scala 272:14]
  assign io_ppuScx = regSCX; // @[IORegisters.scala 273:14]
  assign io_ppuBgp = regBGP; // @[IORegisters.scala 275:14]
  always @(posedge clock) begin
    if (reset) begin // @[IORegisters.scala 52:22]
      regP1 <= 8'hff; // @[IORegisters.scala 52:22]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (_T_1) begin // @[IORegisters.scala 199:21]
        regP1 <= _regP1_T; // @[IORegisters.scala 201:26]
      end
    end
    if (reset) begin // @[IORegisters.scala 57:22]
      regSB <= 8'h0; // @[IORegisters.scala 57:22]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (_T_2) begin // @[IORegisters.scala 199:21]
          regSB <= io_writeData; // @[IORegisters.scala 205:15]
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 58:22]
      regSC <= 8'h7e; // @[IORegisters.scala 58:22]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regSC <= _GEN_648;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 85:22]
      regIF <= 8'he1; // @[IORegisters.scala 85:22]
    end else if (io_timerIRQ) begin // @[IORegisters.scala 292:21]
      regIF <= _regIF_T_2; // @[IORegisters.scala 293:11]
    end else if (io_vblankIRQ) begin // @[IORegisters.scala 286:22]
      regIF <= _regIF_T; // @[IORegisters.scala 287:11]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      regIF <= _GEN_726;
    end
    if (reset) begin // @[IORegisters.scala 92:24]
      regNR10 <= 8'h80; // @[IORegisters.scala 92:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR10 <= _GEN_650;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 93:24]
      regNR11 <= 8'hbf; // @[IORegisters.scala 93:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR11 <= _GEN_651;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 94:24]
      regNR12 <= 8'hf3; // @[IORegisters.scala 94:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR12 <= _GEN_652;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 95:24]
      regNR13 <= 8'hff; // @[IORegisters.scala 95:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR13 <= _GEN_653;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 96:24]
      regNR14 <= 8'hbf; // @[IORegisters.scala 96:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR14 <= _GEN_654;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 97:24]
      regNR21 <= 8'h3f; // @[IORegisters.scala 97:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR21 <= _GEN_655;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 98:24]
      regNR22 <= 8'h0; // @[IORegisters.scala 98:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR22 <= _GEN_656;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 99:24]
      regNR23 <= 8'hff; // @[IORegisters.scala 99:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR23 <= _GEN_657;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 100:24]
      regNR24 <= 8'hbf; // @[IORegisters.scala 100:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR24 <= _GEN_658;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 101:24]
      regNR30 <= 8'h7f; // @[IORegisters.scala 101:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR30 <= _GEN_659;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 102:24]
      regNR31 <= 8'hff; // @[IORegisters.scala 102:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR31 <= _GEN_660;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 103:24]
      regNR32 <= 8'h9f; // @[IORegisters.scala 103:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR32 <= _GEN_661;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 104:24]
      regNR33 <= 8'hff; // @[IORegisters.scala 104:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR33 <= _GEN_662;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 105:24]
      regNR34 <= 8'hbf; // @[IORegisters.scala 105:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR34 <= _GEN_663;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 106:24]
      regNR41 <= 8'hff; // @[IORegisters.scala 106:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR41 <= _GEN_664;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 107:24]
      regNR42 <= 8'h0; // @[IORegisters.scala 107:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR42 <= _GEN_665;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 108:24]
      regNR43 <= 8'h0; // @[IORegisters.scala 108:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR43 <= _GEN_666;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 109:24]
      regNR44 <= 8'hbf; // @[IORegisters.scala 109:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR44 <= _GEN_667;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 110:24]
      regNR50 <= 8'h77; // @[IORegisters.scala 110:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR50 <= _GEN_668;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 111:24]
      regNR51 <= 8'hf3; // @[IORegisters.scala 111:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR51 <= _GEN_669;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 112:24]
      regNR52 <= 8'hf1; // @[IORegisters.scala 112:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regNR52 <= _GEN_670;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 117:24]
      regLCDC <= 8'h91; // @[IORegisters.scala 117:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regLCDC <= _GEN_671;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 118:24]
      regSTAT <= 8'h85; // @[IORegisters.scala 118:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regSTAT <= _GEN_672;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 119:24]
      regSCY <= 8'h0; // @[IORegisters.scala 119:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regSCY <= _GEN_673;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 120:24]
      regSCX <= 8'h0; // @[IORegisters.scala 120:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regSCX <= _GEN_674;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 121:24]
      regLYC <= 8'h0; // @[IORegisters.scala 121:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regLYC <= _GEN_675;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 122:24]
      regDMA <= 8'hff; // @[IORegisters.scala 122:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regDMA <= _GEN_676;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 123:24]
      regBGP <= 8'hfc; // @[IORegisters.scala 123:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regBGP <= _GEN_677;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 124:24]
      regOBP0 <= 8'h0; // @[IORegisters.scala 124:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regOBP0 <= _GEN_678;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 125:24]
      regOBP1 <= 8'h0; // @[IORegisters.scala 125:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regOBP1 <= _GEN_679;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 126:24]
      regWY <= 8'h0; // @[IORegisters.scala 126:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regWY <= _GEN_680;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 127:24]
      regWX <= 8'h0; // @[IORegisters.scala 127:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regWX <= _GEN_681;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 132:24]
      regBOOT <= 8'hff; // @[IORegisters.scala 132:24]
    end else if (io_write) begin // @[IORegisters.scala 198:18]
      if (!(_T_1)) begin // @[IORegisters.scala 199:21]
        if (!(_T_2)) begin // @[IORegisters.scala 199:21]
          regBOOT <= _GEN_682;
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  regP1 = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  regSB = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  regSC = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  regIF = _RAND_3[7:0];
  _RAND_4 = {1{`RANDOM}};
  regNR10 = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  regNR11 = _RAND_5[7:0];
  _RAND_6 = {1{`RANDOM}};
  regNR12 = _RAND_6[7:0];
  _RAND_7 = {1{`RANDOM}};
  regNR13 = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  regNR14 = _RAND_8[7:0];
  _RAND_9 = {1{`RANDOM}};
  regNR21 = _RAND_9[7:0];
  _RAND_10 = {1{`RANDOM}};
  regNR22 = _RAND_10[7:0];
  _RAND_11 = {1{`RANDOM}};
  regNR23 = _RAND_11[7:0];
  _RAND_12 = {1{`RANDOM}};
  regNR24 = _RAND_12[7:0];
  _RAND_13 = {1{`RANDOM}};
  regNR30 = _RAND_13[7:0];
  _RAND_14 = {1{`RANDOM}};
  regNR31 = _RAND_14[7:0];
  _RAND_15 = {1{`RANDOM}};
  regNR32 = _RAND_15[7:0];
  _RAND_16 = {1{`RANDOM}};
  regNR33 = _RAND_16[7:0];
  _RAND_17 = {1{`RANDOM}};
  regNR34 = _RAND_17[7:0];
  _RAND_18 = {1{`RANDOM}};
  regNR41 = _RAND_18[7:0];
  _RAND_19 = {1{`RANDOM}};
  regNR42 = _RAND_19[7:0];
  _RAND_20 = {1{`RANDOM}};
  regNR43 = _RAND_20[7:0];
  _RAND_21 = {1{`RANDOM}};
  regNR44 = _RAND_21[7:0];
  _RAND_22 = {1{`RANDOM}};
  regNR50 = _RAND_22[7:0];
  _RAND_23 = {1{`RANDOM}};
  regNR51 = _RAND_23[7:0];
  _RAND_24 = {1{`RANDOM}};
  regNR52 = _RAND_24[7:0];
  _RAND_25 = {1{`RANDOM}};
  regLCDC = _RAND_25[7:0];
  _RAND_26 = {1{`RANDOM}};
  regSTAT = _RAND_26[7:0];
  _RAND_27 = {1{`RANDOM}};
  regSCY = _RAND_27[7:0];
  _RAND_28 = {1{`RANDOM}};
  regSCX = _RAND_28[7:0];
  _RAND_29 = {1{`RANDOM}};
  regLYC = _RAND_29[7:0];
  _RAND_30 = {1{`RANDOM}};
  regDMA = _RAND_30[7:0];
  _RAND_31 = {1{`RANDOM}};
  regBGP = _RAND_31[7:0];
  _RAND_32 = {1{`RANDOM}};
  regOBP0 = _RAND_32[7:0];
  _RAND_33 = {1{`RANDOM}};
  regOBP1 = _RAND_33[7:0];
  _RAND_34 = {1{`RANDOM}};
  regWY = _RAND_34[7:0];
  _RAND_35 = {1{`RANDOM}};
  regWX = _RAND_35[7:0];
  _RAND_36 = {1{`RANDOM}};
  regBOOT = _RAND_36[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Timer(
  input        clock,
  input        reset,
  input        io_enable,
  input  [1:0] io_addr,
  input        io_write,
  input  [7:0] io_wdata,
  output [7:0] io_rdata,
  output       io_irq
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [15:0] div; // @[Timer.scala 24:21]
  reg [7:0] tima; // @[Timer.scala 25:21]
  reg [7:0] tma; // @[Timer.scala 26:21]
  reg [2:0] tac; // @[Timer.scala 27:21]
  wire [15:0] _div_T_1 = div + 16'h1; // @[Timer.scala 33:16]
  wire [3:0] _freqBit_T_2 = 2'h1 == tac[1:0] ? 4'h3 : 4'h9; // @[Mux.scala 81:58]
  wire [3:0] _freqBit_T_4 = 2'h2 == tac[1:0] ? 4'h5 : _freqBit_T_2; // @[Mux.scala 81:58]
  wire [3:0] freqBit = 2'h3 == tac[1:0] ? 4'h7 : _freqBit_T_4; // @[Mux.scala 81:58]
  wire [15:0] _prev_T = div >> freqBit; // @[Timer.scala 44:25]
  reg  prev; // @[Timer.scala 44:21]
  wire  edge_ = prev & ~_prev_T[0]; // @[Timer.scala 45:19]
  wire  _T_3 = tima == 8'hff; // @[Timer.scala 48:15]
  wire [7:0] _tima_T_1 = tima + 8'h1; // @[Timer.scala 52:20]
  wire [7:0] _GEN_1 = tima == 8'hff ? tma : _tima_T_1; // @[Timer.scala 48:28 49:12 52:12]
  wire [7:0] _GEN_3 = tac[2] & edge_ ? _GEN_1 : tima; // @[Timer.scala 25:21 47:35]
  wire  _T_6 = 2'h1 == io_addr; // @[Timer.scala 58:21]
  wire  _T_7 = 2'h2 == io_addr; // @[Timer.scala 58:21]
  wire  _T_8 = 2'h3 == io_addr; // @[Timer.scala 58:21]
  wire [2:0] _GEN_5 = 2'h3 == io_addr ? io_wdata[2:0] : tac; // @[Timer.scala 27:21 58:21 62:22]
  wire [7:0] _GEN_6 = 2'h2 == io_addr ? io_wdata : tma; // @[Timer.scala 26:21 58:21 61:22]
  wire [2:0] _GEN_7 = 2'h2 == io_addr ? tac : _GEN_5; // @[Timer.scala 27:21 58:21]
  wire [7:0] _io_rdata_T_1 = {5'h1f,tac}; // @[Cat.scala 33:92]
  wire [7:0] _io_rdata_T_3 = _T_6 ? tima : div[15:8]; // @[Mux.scala 81:58]
  wire [7:0] _io_rdata_T_5 = _T_7 ? tma : _io_rdata_T_3; // @[Mux.scala 81:58]
  assign io_rdata = _T_8 ? _io_rdata_T_1 : _io_rdata_T_5; // @[Mux.scala 81:58]
  assign io_irq = tac[2] & edge_ & _T_3; // @[Timer.scala 29:10 47:35]
  always @(posedge clock) begin
    if (reset) begin // @[Timer.scala 24:21]
      div <= 16'h0; // @[Timer.scala 24:21]
    end else if (io_enable & io_write) begin // @[Timer.scala 57:31]
      if (2'h0 == io_addr) begin // @[Timer.scala 58:21]
        div <= 16'h0; // @[Timer.scala 59:21]
      end else begin
        div <= _div_T_1;
      end
    end else begin
      div <= _div_T_1;
    end
    if (reset) begin // @[Timer.scala 25:21]
      tima <= 8'h0; // @[Timer.scala 25:21]
    end else if (io_enable & io_write) begin // @[Timer.scala 57:31]
      if (2'h0 == io_addr) begin // @[Timer.scala 58:21]
        tima <= _GEN_3;
      end else if (2'h1 == io_addr) begin // @[Timer.scala 58:21]
        tima <= io_wdata; // @[Timer.scala 60:22]
      end else begin
        tima <= _GEN_3;
      end
    end else begin
      tima <= _GEN_3;
    end
    if (reset) begin // @[Timer.scala 26:21]
      tma <= 8'h0; // @[Timer.scala 26:21]
    end else if (io_enable & io_write) begin // @[Timer.scala 57:31]
      if (!(2'h0 == io_addr)) begin // @[Timer.scala 58:21]
        if (!(2'h1 == io_addr)) begin // @[Timer.scala 58:21]
          tma <= _GEN_6;
        end
      end
    end
    if (reset) begin // @[Timer.scala 27:21]
      tac <= 3'h0; // @[Timer.scala 27:21]
    end else if (io_enable & io_write) begin // @[Timer.scala 57:31]
      if (!(2'h0 == io_addr)) begin // @[Timer.scala 58:21]
        if (!(2'h1 == io_addr)) begin // @[Timer.scala 58:21]
          tac <= _GEN_7;
        end
      end
    end
    if (reset) begin // @[Timer.scala 44:21]
      prev <= 1'h0; // @[Timer.scala 44:21]
    end else begin
      prev <= _prev_T[0]; // @[Timer.scala 44:21]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  div = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  tima = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  tma = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  tac = _RAND_3[2:0];
  _RAND_4 = {1{`RANDOM}};
  prev = _RAND_4[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MemoryMap(
  input         clock,
  input         reset,
  input  [15:0] io_cpuAddress,
  input         io_cpuWrite,
  input  [7:0]  io_cpuWriteData,
  output [7:0]  io_cpuReadData,
  input  [15:0] io_dbgAddr,
  output [7:0]  io_dbgReadData_0,
  output [7:0]  io_dbgReadData_1,
  output [7:0]  io_dbgReadData_2,
  output [7:0]  io_dbgReadData_3,
  output [7:0]  io_ieReg,
  output [7:0]  io_ifReg,
  input  [7:0]  io_ppuLY,
  input         io_ppuVblankIRQ,
  output [7:0]  io_ppuLcdc,
  output [7:0]  io_ppuScy,
  output [7:0]  io_ppuScx,
  output [7:0]  io_ppuBgp,
  input  [31:0] io_extRomLoadAddr,
  input  [7:0]  io_extRomLoadData,
  input         io_extRomLoadEn
);
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_7;
`endif // RANDOMIZE_REG_INIT
  wire  ioRegs_clock; // @[MemoryMap.scala 72:22]
  wire  ioRegs_reset; // @[MemoryMap.scala 72:22]
  wire [7:0] ioRegs_io_addr; // @[MemoryMap.scala 72:22]
  wire  ioRegs_io_write; // @[MemoryMap.scala 72:22]
  wire [7:0] ioRegs_io_writeData; // @[MemoryMap.scala 72:22]
  wire [7:0] ioRegs_io_readData; // @[MemoryMap.scala 72:22]
  wire [7:0] ioRegs_io_ifReg; // @[MemoryMap.scala 72:22]
  wire  ioRegs_io_vblankIRQ; // @[MemoryMap.scala 72:22]
  wire  ioRegs_io_timerIRQ; // @[MemoryMap.scala 72:22]
  wire [7:0] ioRegs_io_ppuLcdc; // @[MemoryMap.scala 72:22]
  wire [7:0] ioRegs_io_ppuScy; // @[MemoryMap.scala 72:22]
  wire [7:0] ioRegs_io_ppuScx; // @[MemoryMap.scala 72:22]
  wire [7:0] ioRegs_io_ppuLy; // @[MemoryMap.scala 72:22]
  wire [7:0] ioRegs_io_ppuBgp; // @[MemoryMap.scala 72:22]
  wire  timer_clock; // @[MemoryMap.scala 85:21]
  wire  timer_reset; // @[MemoryMap.scala 85:21]
  wire  timer_io_enable; // @[MemoryMap.scala 85:21]
  wire [1:0] timer_io_addr; // @[MemoryMap.scala 85:21]
  wire  timer_io_write; // @[MemoryMap.scala 85:21]
  wire [7:0] timer_io_wdata; // @[MemoryMap.scala 85:21]
  wire [7:0] timer_io_rdata; // @[MemoryMap.scala 85:21]
  wire  timer_io_irq; // @[MemoryMap.scala 85:21]
  reg [7:0] rom [0:65535]; // @[MemoryMap.scala 99:16]
  wire  rom_cartRomOut_en; // @[MemoryMap.scala 99:16]
  wire [15:0] rom_cartRomOut_addr; // @[MemoryMap.scala 99:16]
  wire [7:0] rom_cartRomOut_data; // @[MemoryMap.scala 99:16]
  wire  rom_io_dbgReadData_0_MPORT_en; // @[MemoryMap.scala 99:16]
  wire [15:0] rom_io_dbgReadData_0_MPORT_addr; // @[MemoryMap.scala 99:16]
  wire [7:0] rom_io_dbgReadData_0_MPORT_data; // @[MemoryMap.scala 99:16]
  wire  rom_io_dbgReadData_0_MPORT_1_en; // @[MemoryMap.scala 99:16]
  wire [15:0] rom_io_dbgReadData_0_MPORT_1_addr; // @[MemoryMap.scala 99:16]
  wire [7:0] rom_io_dbgReadData_0_MPORT_1_data; // @[MemoryMap.scala 99:16]
  wire  rom_io_dbgReadData_1_MPORT_en; // @[MemoryMap.scala 99:16]
  wire [15:0] rom_io_dbgReadData_1_MPORT_addr; // @[MemoryMap.scala 99:16]
  wire [7:0] rom_io_dbgReadData_1_MPORT_data; // @[MemoryMap.scala 99:16]
  wire  rom_io_dbgReadData_1_MPORT_1_en; // @[MemoryMap.scala 99:16]
  wire [15:0] rom_io_dbgReadData_1_MPORT_1_addr; // @[MemoryMap.scala 99:16]
  wire [7:0] rom_io_dbgReadData_1_MPORT_1_data; // @[MemoryMap.scala 99:16]
  wire  rom_io_dbgReadData_2_MPORT_en; // @[MemoryMap.scala 99:16]
  wire [15:0] rom_io_dbgReadData_2_MPORT_addr; // @[MemoryMap.scala 99:16]
  wire [7:0] rom_io_dbgReadData_2_MPORT_data; // @[MemoryMap.scala 99:16]
  wire  rom_io_dbgReadData_2_MPORT_1_en; // @[MemoryMap.scala 99:16]
  wire [15:0] rom_io_dbgReadData_2_MPORT_1_addr; // @[MemoryMap.scala 99:16]
  wire [7:0] rom_io_dbgReadData_2_MPORT_1_data; // @[MemoryMap.scala 99:16]
  wire  rom_io_dbgReadData_3_MPORT_en; // @[MemoryMap.scala 99:16]
  wire [15:0] rom_io_dbgReadData_3_MPORT_addr; // @[MemoryMap.scala 99:16]
  wire [7:0] rom_io_dbgReadData_3_MPORT_data; // @[MemoryMap.scala 99:16]
  wire  rom_io_dbgReadData_3_MPORT_1_en; // @[MemoryMap.scala 99:16]
  wire [15:0] rom_io_dbgReadData_3_MPORT_1_addr; // @[MemoryMap.scala 99:16]
  wire [7:0] rom_io_dbgReadData_3_MPORT_1_data; // @[MemoryMap.scala 99:16]
  wire  rom_rdata_MPORT_en; // @[MemoryMap.scala 99:16]
  wire [15:0] rom_rdata_MPORT_addr; // @[MemoryMap.scala 99:16]
  wire [7:0] rom_rdata_MPORT_data; // @[MemoryMap.scala 99:16]
  wire [7:0] rom_MPORT_data; // @[MemoryMap.scala 99:16]
  wire [15:0] rom_MPORT_addr; // @[MemoryMap.scala 99:16]
  wire  rom_MPORT_mask; // @[MemoryMap.scala 99:16]
  wire  rom_MPORT_en; // @[MemoryMap.scala 99:16]
  reg [7:0] wram [0:8191]; // @[MemoryMap.scala 115:19]
  wire  wram_io_dbgReadData_0_MPORT_2_en; // @[MemoryMap.scala 115:19]
  wire [12:0] wram_io_dbgReadData_0_MPORT_2_addr; // @[MemoryMap.scala 115:19]
  wire [7:0] wram_io_dbgReadData_0_MPORT_2_data; // @[MemoryMap.scala 115:19]
  wire  wram_io_dbgReadData_0_MPORT_3_en; // @[MemoryMap.scala 115:19]
  wire [12:0] wram_io_dbgReadData_0_MPORT_3_addr; // @[MemoryMap.scala 115:19]
  wire [7:0] wram_io_dbgReadData_0_MPORT_3_data; // @[MemoryMap.scala 115:19]
  wire  wram_io_dbgReadData_1_MPORT_2_en; // @[MemoryMap.scala 115:19]
  wire [12:0] wram_io_dbgReadData_1_MPORT_2_addr; // @[MemoryMap.scala 115:19]
  wire [7:0] wram_io_dbgReadData_1_MPORT_2_data; // @[MemoryMap.scala 115:19]
  wire  wram_io_dbgReadData_1_MPORT_3_en; // @[MemoryMap.scala 115:19]
  wire [12:0] wram_io_dbgReadData_1_MPORT_3_addr; // @[MemoryMap.scala 115:19]
  wire [7:0] wram_io_dbgReadData_1_MPORT_3_data; // @[MemoryMap.scala 115:19]
  wire  wram_io_dbgReadData_2_MPORT_2_en; // @[MemoryMap.scala 115:19]
  wire [12:0] wram_io_dbgReadData_2_MPORT_2_addr; // @[MemoryMap.scala 115:19]
  wire [7:0] wram_io_dbgReadData_2_MPORT_2_data; // @[MemoryMap.scala 115:19]
  wire  wram_io_dbgReadData_2_MPORT_3_en; // @[MemoryMap.scala 115:19]
  wire [12:0] wram_io_dbgReadData_2_MPORT_3_addr; // @[MemoryMap.scala 115:19]
  wire [7:0] wram_io_dbgReadData_2_MPORT_3_data; // @[MemoryMap.scala 115:19]
  wire  wram_io_dbgReadData_3_MPORT_2_en; // @[MemoryMap.scala 115:19]
  wire [12:0] wram_io_dbgReadData_3_MPORT_2_addr; // @[MemoryMap.scala 115:19]
  wire [7:0] wram_io_dbgReadData_3_MPORT_2_data; // @[MemoryMap.scala 115:19]
  wire  wram_io_dbgReadData_3_MPORT_3_en; // @[MemoryMap.scala 115:19]
  wire [12:0] wram_io_dbgReadData_3_MPORT_3_addr; // @[MemoryMap.scala 115:19]
  wire [7:0] wram_io_dbgReadData_3_MPORT_3_data; // @[MemoryMap.scala 115:19]
  wire  wram_rdata_MPORT_1_en; // @[MemoryMap.scala 115:19]
  wire [12:0] wram_rdata_MPORT_1_addr; // @[MemoryMap.scala 115:19]
  wire [7:0] wram_rdata_MPORT_1_data; // @[MemoryMap.scala 115:19]
  wire  wram_rdata_MPORT_2_en; // @[MemoryMap.scala 115:19]
  wire [12:0] wram_rdata_MPORT_2_addr; // @[MemoryMap.scala 115:19]
  wire [7:0] wram_rdata_MPORT_2_data; // @[MemoryMap.scala 115:19]
  wire [7:0] wram_MPORT_3_data; // @[MemoryMap.scala 115:19]
  wire [12:0] wram_MPORT_3_addr; // @[MemoryMap.scala 115:19]
  wire  wram_MPORT_3_mask; // @[MemoryMap.scala 115:19]
  wire  wram_MPORT_3_en; // @[MemoryMap.scala 115:19]
  wire [7:0] wram_MPORT_4_data; // @[MemoryMap.scala 115:19]
  wire [12:0] wram_MPORT_4_addr; // @[MemoryMap.scala 115:19]
  wire  wram_MPORT_4_mask; // @[MemoryMap.scala 115:19]
  wire  wram_MPORT_4_en; // @[MemoryMap.scala 115:19]
  reg [7:0] oam [0:159]; // @[MemoryMap.scala 116:19]
  wire  oam_rdata_MPORT_3_en; // @[MemoryMap.scala 116:19]
  wire [7:0] oam_rdata_MPORT_3_addr; // @[MemoryMap.scala 116:19]
  wire [7:0] oam_rdata_MPORT_3_data; // @[MemoryMap.scala 116:19]
  wire  oam_io_ppuOamData_MPORT_en; // @[MemoryMap.scala 116:19]
  wire [7:0] oam_io_ppuOamData_MPORT_addr; // @[MemoryMap.scala 116:19]
  wire [7:0] oam_io_ppuOamData_MPORT_data; // @[MemoryMap.scala 116:19]
  wire [7:0] oam_MPORT_5_data; // @[MemoryMap.scala 116:19]
  wire [7:0] oam_MPORT_5_addr; // @[MemoryMap.scala 116:19]
  wire  oam_MPORT_5_mask; // @[MemoryMap.scala 116:19]
  wire  oam_MPORT_5_en; // @[MemoryMap.scala 116:19]
  reg [7:0] hram [0:126]; // @[MemoryMap.scala 117:19]
  wire  hram_rdata_MPORT_4_en; // @[MemoryMap.scala 117:19]
  wire [6:0] hram_rdata_MPORT_4_addr; // @[MemoryMap.scala 117:19]
  wire [7:0] hram_rdata_MPORT_4_data; // @[MemoryMap.scala 117:19]
  wire [7:0] hram_MPORT_6_data; // @[MemoryMap.scala 117:19]
  wire [6:0] hram_MPORT_6_addr; // @[MemoryMap.scala 117:19]
  wire  hram_MPORT_6_mask; // @[MemoryMap.scala 117:19]
  wire  hram_MPORT_6_en; // @[MemoryMap.scala 117:19]
  reg [7:0] regIE; // @[MemoryMap.scala 120:27]
  wire [16:0] _a_T = {{1'd0}, io_dbgAddr}; // @[MemoryMap.scala 127:24]
  wire [15:0] a = _a_T[15:0]; // @[MemoryMap.scala 127:24]
  wire  _T_1 = a < 16'h8000; // @[MemoryMap.scala 129:12]
  wire  _T_4 = a >= 16'hc000 & a < 16'hd000; // @[MemoryMap.scala 136:31]
  wire [15:0] _io_dbgReadData_0_T_1 = a - 16'hc000; // @[MemoryMap.scala 138:37]
  wire  _T_7 = a >= 16'hd000 & a < 16'he000; // @[MemoryMap.scala 140:33]
  wire  _T_10 = a >= 16'he000 & a < 16'hfe00; // @[MemoryMap.scala 144:32]
  wire [15:0] _io_dbgReadData_0_T_8 = a - 16'he000; // @[MemoryMap.scala 146:35]
  wire [7:0] _GEN_8 = a >= 16'he000 & a < 16'hfe00 ? wram_io_dbgReadData_0_MPORT_3_data : 8'h0; // @[MemoryMap.scala 144:50 146:25 150:25]
  wire [7:0] _GEN_12 = a >= 16'hd000 & a < 16'he000 ? wram_io_dbgReadData_0_MPORT_2_data : _GEN_8; // @[MemoryMap.scala 140:51 142:27]
  wire  _GEN_15 = a >= 16'hd000 & a < 16'he000 ? 1'h0 : _T_10; // @[MemoryMap.scala 115:19 140:51]
  wire [7:0] _GEN_19 = a >= 16'hc000 & a < 16'hd000 ? rom_io_dbgReadData_0_MPORT_1_data : _GEN_12; // @[MemoryMap.scala 136:49 138:27]
  wire  _GEN_22 = a >= 16'hc000 & a < 16'hd000 ? 1'h0 : _T_7; // @[MemoryMap.scala 115:19 136:49]
  wire  _GEN_25 = a >= 16'hc000 & a < 16'hd000 ? 1'h0 : _GEN_15; // @[MemoryMap.scala 115:19 136:49]
  wire [15:0] a_1 = io_dbgAddr + 16'h1; // @[MemoryMap.scala 127:24]
  wire  _T_11 = a_1 < 16'h8000; // @[MemoryMap.scala 129:12]
  wire  _T_14 = a_1 >= 16'hc000 & a_1 < 16'hd000; // @[MemoryMap.scala 136:31]
  wire [15:0] _io_dbgReadData_1_T_1 = a_1 - 16'hc000; // @[MemoryMap.scala 138:37]
  wire  _T_17 = a_1 >= 16'hd000 & a_1 < 16'he000; // @[MemoryMap.scala 140:33]
  wire  _T_20 = a_1 >= 16'he000 & a_1 < 16'hfe00; // @[MemoryMap.scala 144:32]
  wire [15:0] _io_dbgReadData_1_T_8 = a_1 - 16'he000; // @[MemoryMap.scala 146:35]
  wire [7:0] _GEN_42 = a_1 >= 16'he000 & a_1 < 16'hfe00 ? wram_io_dbgReadData_1_MPORT_3_data : 8'h0; // @[MemoryMap.scala 144:50 146:25 150:25]
  wire [7:0] _GEN_46 = a_1 >= 16'hd000 & a_1 < 16'he000 ? wram_io_dbgReadData_1_MPORT_2_data : _GEN_42; // @[MemoryMap.scala 140:51 142:27]
  wire  _GEN_49 = a_1 >= 16'hd000 & a_1 < 16'he000 ? 1'h0 : _T_20; // @[MemoryMap.scala 115:19 140:51]
  wire [7:0] _GEN_53 = a_1 >= 16'hc000 & a_1 < 16'hd000 ? rom_io_dbgReadData_1_MPORT_1_data : _GEN_46; // @[MemoryMap.scala 136:49 138:27]
  wire  _GEN_56 = a_1 >= 16'hc000 & a_1 < 16'hd000 ? 1'h0 : _T_17; // @[MemoryMap.scala 115:19 136:49]
  wire  _GEN_59 = a_1 >= 16'hc000 & a_1 < 16'hd000 ? 1'h0 : _GEN_49; // @[MemoryMap.scala 115:19 136:49]
  wire [15:0] a_2 = io_dbgAddr + 16'h2; // @[MemoryMap.scala 127:24]
  wire  _T_21 = a_2 < 16'h8000; // @[MemoryMap.scala 129:12]
  wire  _T_24 = a_2 >= 16'hc000 & a_2 < 16'hd000; // @[MemoryMap.scala 136:31]
  wire [15:0] _io_dbgReadData_2_T_1 = a_2 - 16'hc000; // @[MemoryMap.scala 138:37]
  wire  _T_27 = a_2 >= 16'hd000 & a_2 < 16'he000; // @[MemoryMap.scala 140:33]
  wire  _T_30 = a_2 >= 16'he000 & a_2 < 16'hfe00; // @[MemoryMap.scala 144:32]
  wire [15:0] _io_dbgReadData_2_T_8 = a_2 - 16'he000; // @[MemoryMap.scala 146:35]
  wire [7:0] _GEN_76 = a_2 >= 16'he000 & a_2 < 16'hfe00 ? wram_io_dbgReadData_2_MPORT_3_data : 8'h0; // @[MemoryMap.scala 144:50 146:25 150:25]
  wire [7:0] _GEN_80 = a_2 >= 16'hd000 & a_2 < 16'he000 ? wram_io_dbgReadData_2_MPORT_2_data : _GEN_76; // @[MemoryMap.scala 140:51 142:27]
  wire  _GEN_83 = a_2 >= 16'hd000 & a_2 < 16'he000 ? 1'h0 : _T_30; // @[MemoryMap.scala 115:19 140:51]
  wire [7:0] _GEN_87 = a_2 >= 16'hc000 & a_2 < 16'hd000 ? rom_io_dbgReadData_2_MPORT_1_data : _GEN_80; // @[MemoryMap.scala 136:49 138:27]
  wire  _GEN_90 = a_2 >= 16'hc000 & a_2 < 16'hd000 ? 1'h0 : _T_27; // @[MemoryMap.scala 115:19 136:49]
  wire  _GEN_93 = a_2 >= 16'hc000 & a_2 < 16'hd000 ? 1'h0 : _GEN_83; // @[MemoryMap.scala 115:19 136:49]
  wire [15:0] a_3 = io_dbgAddr + 16'h3; // @[MemoryMap.scala 127:24]
  wire  _T_31 = a_3 < 16'h8000; // @[MemoryMap.scala 129:12]
  wire  _T_34 = a_3 >= 16'hc000 & a_3 < 16'hd000; // @[MemoryMap.scala 136:31]
  wire [15:0] _io_dbgReadData_3_T_1 = a_3 - 16'hc000; // @[MemoryMap.scala 138:37]
  wire  _T_37 = a_3 >= 16'hd000 & a_3 < 16'he000; // @[MemoryMap.scala 140:33]
  wire  _T_40 = a_3 >= 16'he000 & a_3 < 16'hfe00; // @[MemoryMap.scala 144:32]
  wire [15:0] _io_dbgReadData_3_T_8 = a_3 - 16'he000; // @[MemoryMap.scala 146:35]
  wire [7:0] _GEN_110 = a_3 >= 16'he000 & a_3 < 16'hfe00 ? wram_io_dbgReadData_3_MPORT_3_data : 8'h0; // @[MemoryMap.scala 144:50 146:25 150:25]
  wire [7:0] _GEN_114 = a_3 >= 16'hd000 & a_3 < 16'he000 ? wram_io_dbgReadData_3_MPORT_2_data : _GEN_110; // @[MemoryMap.scala 140:51 142:27]
  wire  _GEN_117 = a_3 >= 16'hd000 & a_3 < 16'he000 ? 1'h0 : _T_40; // @[MemoryMap.scala 115:19 140:51]
  wire [7:0] _GEN_121 = a_3 >= 16'hc000 & a_3 < 16'hd000 ? rom_io_dbgReadData_3_MPORT_1_data : _GEN_114; // @[MemoryMap.scala 136:49 138:27]
  wire  _GEN_124 = a_3 >= 16'hc000 & a_3 < 16'hd000 ? 1'h0 : _T_37; // @[MemoryMap.scala 115:19 136:49]
  wire  _GEN_127 = a_3 >= 16'hc000 & a_3 < 16'hd000 ? 1'h0 : _GEN_117; // @[MemoryMap.scala 115:19 136:49]
  wire  _T_41 = io_cpuAddress < 16'h8000; // @[MemoryMap.scala 163:19]
  wire  _T_44 = io_cpuAddress >= 16'hc000 & io_cpuAddress < 16'hd000; // @[MemoryMap.scala 168:32]
  wire [15:0] _rdata_T_1 = io_cpuAddress - 16'hc000; // @[MemoryMap.scala 169:24]
  wire  _T_45 = io_cpuAddress < 16'he000; // @[MemoryMap.scala 172:19]
  wire  _T_46 = io_cpuAddress < 16'hfe00; // @[MemoryMap.scala 175:19]
  wire [15:0] _rdata_T_8 = io_cpuAddress - 16'he000; // @[MemoryMap.scala 176:24]
  wire  _T_47 = io_cpuAddress < 16'hfea0; // @[MemoryMap.scala 178:19]
  wire [15:0] _rdata_T_11 = io_cpuAddress - 16'hfe00; // @[MemoryMap.scala 179:23]
  wire  _T_48 = io_cpuAddress < 16'hff00; // @[MemoryMap.scala 181:19]
  wire  _T_49 = io_cpuAddress < 16'hff80; // @[MemoryMap.scala 184:19]
  wire [15:0] ioAddr = io_cpuAddress - 16'hff00; // @[MemoryMap.scala 185:23]
  wire  _T_52 = ioAddr >= 16'h4 & ioAddr <= 16'h7; // @[MemoryMap.scala 187:28]
  wire [15:0] _timer_io_addr_T_1 = ioAddr - 16'h4; // @[MemoryMap.scala 189:31]
  wire  _T_54 = ioAddr == 16'h50; // @[MemoryMap.scala 195:23]
  wire [7:0] _GEN_141 = ioAddr == 16'h50 ? 8'h1 : ioRegs_io_readData; // @[MemoryMap.scala 195:36 196:13 198:13]
  wire [7:0] _GEN_142 = ioAddr == 16'h44 ? 8'h90 : _GEN_141; // @[MemoryMap.scala 192:36 193:13]
  wire [15:0] _GEN_144 = ioAddr >= 16'h4 & ioAddr <= 16'h7 ? _timer_io_addr_T_1 : 16'h0; // @[MemoryMap.scala 187:50 189:21 87:17]
  wire [7:0] _GEN_145 = ioAddr >= 16'h4 & ioAddr <= 16'h7 ? timer_io_rdata : _GEN_142; // @[MemoryMap.scala 187:50 191:13]
  wire  _T_55 = io_cpuAddress < 16'hffff; // @[MemoryMap.scala 201:19]
  wire [15:0] _rdata_T_15 = io_cpuAddress - 16'hff80; // @[MemoryMap.scala 202:24]
  wire [7:0] _GEN_149 = io_cpuAddress < 16'hffff ? hram_rdata_MPORT_4_data : regIE; // @[MemoryMap.scala 201:32 202:11 205:11]
  wire [15:0] _GEN_150 = io_cpuAddress < 16'hff80 ? ioAddr : 16'h0; // @[MemoryMap.scala 184:32 186:20 78:23]
  wire  _GEN_151 = io_cpuAddress < 16'hff80 & _T_52; // @[MemoryMap.scala 184:32 86:19]
  wire [15:0] _GEN_152 = io_cpuAddress < 16'hff80 ? _GEN_144 : 16'h0; // @[MemoryMap.scala 184:32 87:17]
  wire [7:0] _GEN_153 = io_cpuAddress < 16'hff80 ? _GEN_145 : _GEN_149; // @[MemoryMap.scala 184:32]
  wire  _GEN_156 = io_cpuAddress < 16'hff80 ? 1'h0 : _T_55; // @[MemoryMap.scala 117:19 184:32]
  wire [7:0] _GEN_157 = io_cpuAddress < 16'hff00 ? 8'hff : _GEN_153; // @[MemoryMap.scala 181:32 182:11]
  wire [15:0] _GEN_158 = io_cpuAddress < 16'hff00 ? 16'h0 : _GEN_150; // @[MemoryMap.scala 181:32 78:23]
  wire  _GEN_159 = io_cpuAddress < 16'hff00 ? 1'h0 : _GEN_151; // @[MemoryMap.scala 181:32 86:19]
  wire [15:0] _GEN_160 = io_cpuAddress < 16'hff00 ? 16'h0 : _GEN_152; // @[MemoryMap.scala 181:32 87:17]
  wire  _GEN_163 = io_cpuAddress < 16'hff00 ? 1'h0 : _GEN_156; // @[MemoryMap.scala 117:19 181:32]
  wire [7:0] _GEN_167 = io_cpuAddress < 16'hfea0 ? oam_rdata_MPORT_3_data : _GEN_157; // @[MemoryMap.scala 178:32 179:11]
  wire [15:0] _GEN_168 = io_cpuAddress < 16'hfea0 ? 16'h0 : _GEN_158; // @[MemoryMap.scala 178:32 78:23]
  wire  _GEN_169 = io_cpuAddress < 16'hfea0 ? 1'h0 : _GEN_159; // @[MemoryMap.scala 178:32 86:19]
  wire [15:0] _GEN_170 = io_cpuAddress < 16'hfea0 ? 16'h0 : _GEN_160; // @[MemoryMap.scala 178:32 87:17]
  wire  _GEN_173 = io_cpuAddress < 16'hfea0 ? 1'h0 : _GEN_163; // @[MemoryMap.scala 117:19 178:32]
  wire [7:0] _GEN_177 = io_cpuAddress < 16'hfe00 ? wram_rdata_MPORT_2_data : _GEN_167; // @[MemoryMap.scala 175:32 176:11]
  wire  _GEN_180 = io_cpuAddress < 16'hfe00 ? 1'h0 : _T_47; // @[MemoryMap.scala 116:19 175:32]
  wire [15:0] _GEN_181 = io_cpuAddress < 16'hfe00 ? 16'h0 : _GEN_168; // @[MemoryMap.scala 175:32 78:23]
  wire  _GEN_182 = io_cpuAddress < 16'hfe00 ? 1'h0 : _GEN_169; // @[MemoryMap.scala 175:32 86:19]
  wire [15:0] _GEN_183 = io_cpuAddress < 16'hfe00 ? 16'h0 : _GEN_170; // @[MemoryMap.scala 175:32 87:17]
  wire  _GEN_186 = io_cpuAddress < 16'hfe00 ? 1'h0 : _GEN_173; // @[MemoryMap.scala 117:19 175:32]
  wire [7:0] _GEN_190 = io_cpuAddress < 16'he000 ? wram_rdata_MPORT_1_data : _GEN_177; // @[MemoryMap.scala 172:32 173:11]
  wire  _GEN_193 = io_cpuAddress < 16'he000 ? 1'h0 : _T_46; // @[MemoryMap.scala 115:19 172:32]
  wire  _GEN_196 = io_cpuAddress < 16'he000 ? 1'h0 : _GEN_180; // @[MemoryMap.scala 116:19 172:32]
  wire [15:0] _GEN_197 = io_cpuAddress < 16'he000 ? 16'h0 : _GEN_181; // @[MemoryMap.scala 172:32 78:23]
  wire  _GEN_198 = io_cpuAddress < 16'he000 ? 1'h0 : _GEN_182; // @[MemoryMap.scala 172:32 86:19]
  wire [15:0] _GEN_199 = io_cpuAddress < 16'he000 ? 16'h0 : _GEN_183; // @[MemoryMap.scala 172:32 87:17]
  wire  _GEN_202 = io_cpuAddress < 16'he000 ? 1'h0 : _GEN_186; // @[MemoryMap.scala 117:19 172:32]
  wire [7:0] _GEN_206 = io_cpuAddress >= 16'hc000 & io_cpuAddress < 16'hd000 ? rom_rdata_MPORT_data : _GEN_190; // @[MemoryMap.scala 168:53 169:11]
  wire  _GEN_209 = io_cpuAddress >= 16'hc000 & io_cpuAddress < 16'hd000 ? 1'h0 : _T_45; // @[MemoryMap.scala 115:19 168:53]
  wire  _GEN_212 = io_cpuAddress >= 16'hc000 & io_cpuAddress < 16'hd000 ? 1'h0 : _GEN_193; // @[MemoryMap.scala 115:19 168:53]
  wire  _GEN_215 = io_cpuAddress >= 16'hc000 & io_cpuAddress < 16'hd000 ? 1'h0 : _GEN_196; // @[MemoryMap.scala 116:19 168:53]
  wire [15:0] _GEN_216 = io_cpuAddress >= 16'hc000 & io_cpuAddress < 16'hd000 ? 16'h0 : _GEN_197; // @[MemoryMap.scala 168:53 78:23]
  wire  _GEN_217 = io_cpuAddress >= 16'hc000 & io_cpuAddress < 16'hd000 ? 1'h0 : _GEN_198; // @[MemoryMap.scala 168:53 86:19]
  wire [15:0] _GEN_218 = io_cpuAddress >= 16'hc000 & io_cpuAddress < 16'hd000 ? 16'h0 : _GEN_199; // @[MemoryMap.scala 168:53 87:17]
  wire  _GEN_221 = io_cpuAddress >= 16'hc000 & io_cpuAddress < 16'hd000 ? 1'h0 : _GEN_202; // @[MemoryMap.scala 117:19 168:53]
  wire [15:0] _GEN_235 = io_cpuAddress < 16'h8000 ? 16'h0 : _GEN_216; // @[MemoryMap.scala 163:32 78:23]
  wire  _GEN_236 = io_cpuAddress < 16'h8000 ? 1'h0 : _GEN_217; // @[MemoryMap.scala 163:32 86:19]
  wire [15:0] _GEN_237 = io_cpuAddress < 16'h8000 ? 16'h0 : _GEN_218; // @[MemoryMap.scala 163:32 87:17]
  wire [15:0] _GEN_267 = _T_54 ? _GEN_235 : ioAddr; // @[MemoryMap.scala 254:38 259:24]
  wire  _GEN_268 = _T_54 ? 1'h0 : 1'h1; // @[MemoryMap.scala 254:38 79:23 260:25]
  wire [7:0] _GEN_269 = _T_54 ? 8'h0 : io_cpuWriteData; // @[MemoryMap.scala 254:38 80:23 261:29]
  wire  _GEN_270 = _T_52 | _GEN_236; // @[MemoryMap.scala 249:52 250:25]
  wire [15:0] _GEN_271 = _T_52 ? _timer_io_addr_T_1 : _GEN_237; // @[MemoryMap.scala 249:52 251:23]
  wire [7:0] _GEN_273 = _T_52 ? io_cpuWriteData : 8'h0; // @[MemoryMap.scala 249:52 253:24 90:18]
  wire [15:0] _GEN_275 = _T_52 ? _GEN_235 : _GEN_267; // @[MemoryMap.scala 249:52]
  wire  _GEN_276 = _T_52 ? 1'h0 : _GEN_268; // @[MemoryMap.scala 249:52 79:23]
  wire [7:0] _GEN_277 = _T_52 ? 8'h0 : _GEN_269; // @[MemoryMap.scala 249:52 80:23]
  wire [7:0] _GEN_283 = _T_55 ? regIE : io_cpuWriteData; // @[MemoryMap.scala 120:27 264:34 268:13]
  wire  _GEN_284 = _T_49 ? _GEN_270 : _GEN_236; // @[MemoryMap.scala 246:34]
  wire [15:0] _GEN_285 = _T_49 ? _GEN_271 : _GEN_237; // @[MemoryMap.scala 246:34]
  wire [7:0] _GEN_287 = _T_49 ? _GEN_273 : 8'h0; // @[MemoryMap.scala 246:34 90:18]
  wire [15:0] _GEN_289 = _T_49 ? _GEN_275 : _GEN_235; // @[MemoryMap.scala 246:34]
  wire  _GEN_290 = _T_49 & _GEN_276; // @[MemoryMap.scala 246:34 79:23]
  wire [7:0] _GEN_291 = _T_49 ? _GEN_277 : 8'h0; // @[MemoryMap.scala 246:34 80:23]
  wire [7:0] _GEN_297 = _T_49 ? regIE : _GEN_283; // @[MemoryMap.scala 120:27 246:34]
  wire  _GEN_298 = _T_48 ? _GEN_236 : _GEN_284; // @[MemoryMap.scala 243:34]
  wire [15:0] _GEN_299 = _T_48 ? _GEN_237 : _GEN_285; // @[MemoryMap.scala 243:34]
  wire [7:0] _GEN_301 = _T_48 ? 8'h0 : _GEN_287; // @[MemoryMap.scala 243:34 90:18]
  wire [15:0] _GEN_303 = _T_48 ? _GEN_235 : _GEN_289; // @[MemoryMap.scala 243:34]
  wire  _GEN_304 = _T_48 ? 1'h0 : _GEN_290; // @[MemoryMap.scala 243:34 79:23]
  wire [7:0] _GEN_305 = _T_48 ? 8'h0 : _GEN_291; // @[MemoryMap.scala 243:34 80:23]
  wire [7:0] _GEN_311 = _T_48 ? regIE : _GEN_297; // @[MemoryMap.scala 120:27 243:34]
  wire  _GEN_317 = _T_47 ? _GEN_236 : _GEN_298; // @[MemoryMap.scala 240:34]
  wire [15:0] _GEN_318 = _T_47 ? _GEN_237 : _GEN_299; // @[MemoryMap.scala 240:34]
  wire [7:0] _GEN_320 = _T_47 ? 8'h0 : _GEN_301; // @[MemoryMap.scala 240:34 90:18]
  wire [15:0] _GEN_322 = _T_47 ? _GEN_235 : _GEN_303; // @[MemoryMap.scala 240:34]
  wire  _GEN_323 = _T_47 ? 1'h0 : _GEN_304; // @[MemoryMap.scala 240:34 79:23]
  wire [7:0] _GEN_324 = _T_47 ? 8'h0 : _GEN_305; // @[MemoryMap.scala 240:34 80:23]
  wire [7:0] _GEN_330 = _T_47 ? regIE : _GEN_311; // @[MemoryMap.scala 120:27 240:34]
  wire  _GEN_341 = _T_46 ? _GEN_236 : _GEN_317; // @[MemoryMap.scala 237:34]
  wire [15:0] _GEN_342 = _T_46 ? _GEN_237 : _GEN_318; // @[MemoryMap.scala 237:34]
  wire [7:0] _GEN_344 = _T_46 ? 8'h0 : _GEN_320; // @[MemoryMap.scala 237:34 90:18]
  wire [15:0] _GEN_346 = _T_46 ? _GEN_235 : _GEN_322; // @[MemoryMap.scala 237:34]
  wire  _GEN_347 = _T_46 ? 1'h0 : _GEN_323; // @[MemoryMap.scala 237:34 79:23]
  wire [7:0] _GEN_348 = _T_46 ? 8'h0 : _GEN_324; // @[MemoryMap.scala 237:34 80:23]
  wire [7:0] _GEN_354 = _T_46 ? regIE : _GEN_330; // @[MemoryMap.scala 120:27 237:34]
  wire  _GEN_370 = _T_45 ? _GEN_236 : _GEN_341; // @[MemoryMap.scala 234:34]
  wire [15:0] _GEN_371 = _T_45 ? _GEN_237 : _GEN_342; // @[MemoryMap.scala 234:34]
  wire [7:0] _GEN_373 = _T_45 ? 8'h0 : _GEN_344; // @[MemoryMap.scala 234:34 90:18]
  wire [15:0] _GEN_375 = _T_45 ? _GEN_235 : _GEN_346; // @[MemoryMap.scala 234:34]
  wire  _GEN_376 = _T_45 ? 1'h0 : _GEN_347; // @[MemoryMap.scala 234:34 79:23]
  wire [7:0] _GEN_377 = _T_45 ? 8'h0 : _GEN_348; // @[MemoryMap.scala 234:34 80:23]
  wire [7:0] _GEN_383 = _T_45 ? regIE : _GEN_354; // @[MemoryMap.scala 120:27 234:34]
  wire  _GEN_391 = io_cpuAddress < 16'hc000 ? 1'h0 : _T_45; // @[MemoryMap.scala 115:19 229:34]
  wire  _GEN_396 = io_cpuAddress < 16'hc000 ? 1'h0 : _GEN_193; // @[MemoryMap.scala 115:19 229:34]
  wire  _GEN_401 = io_cpuAddress < 16'hc000 ? 1'h0 : _GEN_196; // @[MemoryMap.scala 116:19 229:34]
  wire  _GEN_404 = io_cpuAddress < 16'hc000 ? _GEN_236 : _GEN_370; // @[MemoryMap.scala 229:34]
  wire [15:0] _GEN_405 = io_cpuAddress < 16'hc000 ? _GEN_237 : _GEN_371; // @[MemoryMap.scala 229:34]
  wire  _GEN_406 = io_cpuAddress < 16'hc000 ? 1'h0 : _GEN_198; // @[MemoryMap.scala 229:34 89:18]
  wire [7:0] _GEN_407 = io_cpuAddress < 16'hc000 ? 8'h0 : _GEN_373; // @[MemoryMap.scala 229:34 90:18]
  wire [15:0] _GEN_409 = io_cpuAddress < 16'hc000 ? _GEN_235 : _GEN_375; // @[MemoryMap.scala 229:34]
  wire  _GEN_410 = io_cpuAddress < 16'hc000 ? 1'h0 : _GEN_376; // @[MemoryMap.scala 229:34 79:23]
  wire [7:0] _GEN_411 = io_cpuAddress < 16'hc000 ? 8'h0 : _GEN_377; // @[MemoryMap.scala 229:34 80:23]
  wire  _GEN_414 = io_cpuAddress < 16'hc000 ? 1'h0 : _GEN_202; // @[MemoryMap.scala 117:19 229:34]
  wire [7:0] _GEN_417 = io_cpuAddress < 16'hc000 ? regIE : _GEN_383; // @[MemoryMap.scala 120:27 229:34]
  wire  _GEN_430 = io_cpuAddress < 16'ha000 ? 1'h0 : _GEN_391; // @[MemoryMap.scala 115:19 226:34]
  wire  _GEN_435 = io_cpuAddress < 16'ha000 ? 1'h0 : _GEN_396; // @[MemoryMap.scala 115:19 226:34]
  wire  _GEN_440 = io_cpuAddress < 16'ha000 ? 1'h0 : _GEN_401; // @[MemoryMap.scala 116:19 226:34]
  wire  _GEN_443 = io_cpuAddress < 16'ha000 ? _GEN_236 : _GEN_404; // @[MemoryMap.scala 226:34]
  wire [15:0] _GEN_444 = io_cpuAddress < 16'ha000 ? _GEN_237 : _GEN_405; // @[MemoryMap.scala 226:34]
  wire  _GEN_445 = io_cpuAddress < 16'ha000 ? 1'h0 : _GEN_406; // @[MemoryMap.scala 226:34 89:18]
  wire [7:0] _GEN_446 = io_cpuAddress < 16'ha000 ? 8'h0 : _GEN_407; // @[MemoryMap.scala 226:34 90:18]
  wire [15:0] _GEN_448 = io_cpuAddress < 16'ha000 ? _GEN_235 : _GEN_409; // @[MemoryMap.scala 226:34]
  wire  _GEN_449 = io_cpuAddress < 16'ha000 ? 1'h0 : _GEN_410; // @[MemoryMap.scala 226:34 79:23]
  wire [7:0] _GEN_450 = io_cpuAddress < 16'ha000 ? 8'h0 : _GEN_411; // @[MemoryMap.scala 226:34 80:23]
  wire  _GEN_453 = io_cpuAddress < 16'ha000 ? 1'h0 : _GEN_414; // @[MemoryMap.scala 117:19 226:34]
  wire [7:0] _GEN_456 = io_cpuAddress < 16'ha000 ? regIE : _GEN_417; // @[MemoryMap.scala 120:27 226:34]
  wire  _GEN_469 = _T_41 ? 1'h0 : _GEN_430; // @[MemoryMap.scala 115:19 223:34]
  wire  _GEN_474 = _T_41 ? 1'h0 : _GEN_435; // @[MemoryMap.scala 115:19 223:34]
  wire  _GEN_479 = _T_41 ? 1'h0 : _GEN_440; // @[MemoryMap.scala 116:19 223:34]
  wire  _GEN_482 = _T_41 ? _GEN_236 : _GEN_443; // @[MemoryMap.scala 223:34]
  wire [15:0] _GEN_483 = _T_41 ? _GEN_237 : _GEN_444; // @[MemoryMap.scala 223:34]
  wire  _GEN_484 = _T_41 ? 1'h0 : _GEN_445; // @[MemoryMap.scala 223:34 89:18]
  wire [7:0] _GEN_485 = _T_41 ? 8'h0 : _GEN_446; // @[MemoryMap.scala 223:34 90:18]
  wire [15:0] _GEN_487 = _T_41 ? _GEN_235 : _GEN_448; // @[MemoryMap.scala 223:34]
  wire  _GEN_488 = _T_41 ? 1'h0 : _GEN_449; // @[MemoryMap.scala 223:34 79:23]
  wire [7:0] _GEN_489 = _T_41 ? 8'h0 : _GEN_450; // @[MemoryMap.scala 223:34 80:23]
  wire  _GEN_492 = _T_41 ? 1'h0 : _GEN_453; // @[MemoryMap.scala 117:19 223:34]
  wire [7:0] _GEN_495 = _T_41 ? regIE : _GEN_456; // @[MemoryMap.scala 120:27 223:34]
  wire  _GEN_508 = io_cpuAddress < 16'h6000 ? 1'h0 : _GEN_469; // @[MemoryMap.scala 115:19 220:34]
  wire  _GEN_513 = io_cpuAddress < 16'h6000 ? 1'h0 : _GEN_474; // @[MemoryMap.scala 115:19 220:34]
  wire  _GEN_518 = io_cpuAddress < 16'h6000 ? 1'h0 : _GEN_479; // @[MemoryMap.scala 116:19 220:34]
  wire  _GEN_521 = io_cpuAddress < 16'h6000 ? _GEN_236 : _GEN_482; // @[MemoryMap.scala 220:34]
  wire [15:0] _GEN_522 = io_cpuAddress < 16'h6000 ? _GEN_237 : _GEN_483; // @[MemoryMap.scala 220:34]
  wire  _GEN_523 = io_cpuAddress < 16'h6000 ? 1'h0 : _GEN_484; // @[MemoryMap.scala 220:34 89:18]
  wire [7:0] _GEN_524 = io_cpuAddress < 16'h6000 ? 8'h0 : _GEN_485; // @[MemoryMap.scala 220:34 90:18]
  wire [15:0] _GEN_526 = io_cpuAddress < 16'h6000 ? _GEN_235 : _GEN_487; // @[MemoryMap.scala 220:34]
  wire  _GEN_527 = io_cpuAddress < 16'h6000 ? 1'h0 : _GEN_488; // @[MemoryMap.scala 220:34 79:23]
  wire [7:0] _GEN_528 = io_cpuAddress < 16'h6000 ? 8'h0 : _GEN_489; // @[MemoryMap.scala 220:34 80:23]
  wire  _GEN_531 = io_cpuAddress < 16'h6000 ? 1'h0 : _GEN_492; // @[MemoryMap.scala 117:19 220:34]
  wire [7:0] _GEN_534 = io_cpuAddress < 16'h6000 ? regIE : _GEN_495; // @[MemoryMap.scala 120:27 220:34]
  wire  _GEN_547 = io_cpuAddress < 16'h4000 ? 1'h0 : _GEN_508; // @[MemoryMap.scala 115:19 217:34]
  wire  _GEN_552 = io_cpuAddress < 16'h4000 ? 1'h0 : _GEN_513; // @[MemoryMap.scala 115:19 217:34]
  wire  _GEN_557 = io_cpuAddress < 16'h4000 ? 1'h0 : _GEN_518; // @[MemoryMap.scala 116:19 217:34]
  wire  _GEN_560 = io_cpuAddress < 16'h4000 ? _GEN_236 : _GEN_521; // @[MemoryMap.scala 217:34]
  wire [15:0] _GEN_561 = io_cpuAddress < 16'h4000 ? _GEN_237 : _GEN_522; // @[MemoryMap.scala 217:34]
  wire  _GEN_562 = io_cpuAddress < 16'h4000 ? 1'h0 : _GEN_523; // @[MemoryMap.scala 217:34 89:18]
  wire [7:0] _GEN_563 = io_cpuAddress < 16'h4000 ? 8'h0 : _GEN_524; // @[MemoryMap.scala 217:34 90:18]
  wire [15:0] _GEN_565 = io_cpuAddress < 16'h4000 ? _GEN_235 : _GEN_526; // @[MemoryMap.scala 217:34]
  wire  _GEN_566 = io_cpuAddress < 16'h4000 ? 1'h0 : _GEN_527; // @[MemoryMap.scala 217:34 79:23]
  wire [7:0] _GEN_567 = io_cpuAddress < 16'h4000 ? 8'h0 : _GEN_528; // @[MemoryMap.scala 217:34 80:23]
  wire  _GEN_570 = io_cpuAddress < 16'h4000 ? 1'h0 : _GEN_531; // @[MemoryMap.scala 117:19 217:34]
  wire  _GEN_587 = io_cpuAddress < 16'h2000 ? 1'h0 : _GEN_547; // @[MemoryMap.scala 115:19 214:28]
  wire  _GEN_592 = io_cpuAddress < 16'h2000 ? 1'h0 : _GEN_552; // @[MemoryMap.scala 115:19 214:28]
  wire  _GEN_597 = io_cpuAddress < 16'h2000 ? 1'h0 : _GEN_557; // @[MemoryMap.scala 116:19 214:28]
  wire  _GEN_600 = io_cpuAddress < 16'h2000 ? _GEN_236 : _GEN_560; // @[MemoryMap.scala 214:28]
  wire [15:0] _GEN_601 = io_cpuAddress < 16'h2000 ? _GEN_237 : _GEN_561; // @[MemoryMap.scala 214:28]
  wire  _GEN_602 = io_cpuAddress < 16'h2000 ? 1'h0 : _GEN_562; // @[MemoryMap.scala 214:28 89:18]
  wire [7:0] _GEN_603 = io_cpuAddress < 16'h2000 ? 8'h0 : _GEN_563; // @[MemoryMap.scala 214:28 90:18]
  wire [15:0] _GEN_605 = io_cpuAddress < 16'h2000 ? _GEN_235 : _GEN_565; // @[MemoryMap.scala 214:28]
  wire  _GEN_606 = io_cpuAddress < 16'h2000 ? 1'h0 : _GEN_566; // @[MemoryMap.scala 214:28 79:23]
  wire [7:0] _GEN_607 = io_cpuAddress < 16'h2000 ? 8'h0 : _GEN_567; // @[MemoryMap.scala 214:28 80:23]
  wire  _GEN_610 = io_cpuAddress < 16'h2000 ? 1'h0 : _GEN_570; // @[MemoryMap.scala 117:19 214:28]
  wire [15:0] _GEN_641 = io_cpuWrite ? _GEN_601 : _GEN_237; // @[MemoryMap.scala 213:21]
  wire [15:0] _GEN_645 = io_cpuWrite ? _GEN_605 : _GEN_235; // @[MemoryMap.scala 213:21]
  IORegisters ioRegs ( // @[MemoryMap.scala 72:22]
    .clock(ioRegs_clock),
    .reset(ioRegs_reset),
    .io_addr(ioRegs_io_addr),
    .io_write(ioRegs_io_write),
    .io_writeData(ioRegs_io_writeData),
    .io_readData(ioRegs_io_readData),
    .io_ifReg(ioRegs_io_ifReg),
    .io_vblankIRQ(ioRegs_io_vblankIRQ),
    .io_timerIRQ(ioRegs_io_timerIRQ),
    .io_ppuLcdc(ioRegs_io_ppuLcdc),
    .io_ppuScy(ioRegs_io_ppuScy),
    .io_ppuScx(ioRegs_io_ppuScx),
    .io_ppuLy(ioRegs_io_ppuLy),
    .io_ppuBgp(ioRegs_io_ppuBgp)
  );
  Timer timer ( // @[MemoryMap.scala 85:21]
    .clock(timer_clock),
    .reset(timer_reset),
    .io_enable(timer_io_enable),
    .io_addr(timer_io_addr),
    .io_write(timer_io_write),
    .io_wdata(timer_io_wdata),
    .io_rdata(timer_io_rdata),
    .io_irq(timer_io_irq)
  );
  assign rom_cartRomOut_en = 1'h1;
  assign rom_cartRomOut_addr = io_cpuAddress;
  assign rom_cartRomOut_data = rom[rom_cartRomOut_addr]; // @[MemoryMap.scala 99:16]
  assign rom_io_dbgReadData_0_MPORT_en = a < 16'h8000;
  assign rom_io_dbgReadData_0_MPORT_addr = _a_T[15:0];
  assign rom_io_dbgReadData_0_MPORT_data = rom[rom_io_dbgReadData_0_MPORT_addr]; // @[MemoryMap.scala 99:16]
  assign rom_io_dbgReadData_0_MPORT_1_en = _T_1 ? 1'h0 : _T_4;
  assign rom_io_dbgReadData_0_MPORT_1_addr = _io_dbgReadData_0_T_1 + 16'h4000;
  assign rom_io_dbgReadData_0_MPORT_1_data = rom[rom_io_dbgReadData_0_MPORT_1_addr]; // @[MemoryMap.scala 99:16]
  assign rom_io_dbgReadData_1_MPORT_en = a_1 < 16'h8000;
  assign rom_io_dbgReadData_1_MPORT_addr = io_dbgAddr + 16'h1;
  assign rom_io_dbgReadData_1_MPORT_data = rom[rom_io_dbgReadData_1_MPORT_addr]; // @[MemoryMap.scala 99:16]
  assign rom_io_dbgReadData_1_MPORT_1_en = _T_11 ? 1'h0 : _T_14;
  assign rom_io_dbgReadData_1_MPORT_1_addr = _io_dbgReadData_1_T_1 + 16'h4000;
  assign rom_io_dbgReadData_1_MPORT_1_data = rom[rom_io_dbgReadData_1_MPORT_1_addr]; // @[MemoryMap.scala 99:16]
  assign rom_io_dbgReadData_2_MPORT_en = a_2 < 16'h8000;
  assign rom_io_dbgReadData_2_MPORT_addr = io_dbgAddr + 16'h2;
  assign rom_io_dbgReadData_2_MPORT_data = rom[rom_io_dbgReadData_2_MPORT_addr]; // @[MemoryMap.scala 99:16]
  assign rom_io_dbgReadData_2_MPORT_1_en = _T_21 ? 1'h0 : _T_24;
  assign rom_io_dbgReadData_2_MPORT_1_addr = _io_dbgReadData_2_T_1 + 16'h4000;
  assign rom_io_dbgReadData_2_MPORT_1_data = rom[rom_io_dbgReadData_2_MPORT_1_addr]; // @[MemoryMap.scala 99:16]
  assign rom_io_dbgReadData_3_MPORT_en = a_3 < 16'h8000;
  assign rom_io_dbgReadData_3_MPORT_addr = io_dbgAddr + 16'h3;
  assign rom_io_dbgReadData_3_MPORT_data = rom[rom_io_dbgReadData_3_MPORT_addr]; // @[MemoryMap.scala 99:16]
  assign rom_io_dbgReadData_3_MPORT_1_en = _T_31 ? 1'h0 : _T_34;
  assign rom_io_dbgReadData_3_MPORT_1_addr = _io_dbgReadData_3_T_1 + 16'h4000;
  assign rom_io_dbgReadData_3_MPORT_1_data = rom[rom_io_dbgReadData_3_MPORT_1_addr]; // @[MemoryMap.scala 99:16]
  assign rom_rdata_MPORT_en = _T_41 ? 1'h0 : _T_44;
  assign rom_rdata_MPORT_addr = _rdata_T_1 + 16'h4000;
  assign rom_rdata_MPORT_data = rom[rom_rdata_MPORT_addr]; // @[MemoryMap.scala 99:16]
  assign rom_MPORT_data = io_extRomLoadData;
  assign rom_MPORT_addr = io_extRomLoadAddr[15:0];
  assign rom_MPORT_mask = 1'h1;
  assign rom_MPORT_en = io_extRomLoadEn;
  assign wram_io_dbgReadData_0_MPORT_2_en = _T_1 ? 1'h0 : _GEN_22;
  assign wram_io_dbgReadData_0_MPORT_2_addr = _io_dbgReadData_0_T_1[12:0];
  assign wram_io_dbgReadData_0_MPORT_2_data = wram[wram_io_dbgReadData_0_MPORT_2_addr]; // @[MemoryMap.scala 115:19]
  assign wram_io_dbgReadData_0_MPORT_3_en = _T_1 ? 1'h0 : _GEN_25;
  assign wram_io_dbgReadData_0_MPORT_3_addr = _io_dbgReadData_0_T_8[12:0];
  assign wram_io_dbgReadData_0_MPORT_3_data = wram[wram_io_dbgReadData_0_MPORT_3_addr]; // @[MemoryMap.scala 115:19]
  assign wram_io_dbgReadData_1_MPORT_2_en = _T_11 ? 1'h0 : _GEN_56;
  assign wram_io_dbgReadData_1_MPORT_2_addr = _io_dbgReadData_1_T_1[12:0];
  assign wram_io_dbgReadData_1_MPORT_2_data = wram[wram_io_dbgReadData_1_MPORT_2_addr]; // @[MemoryMap.scala 115:19]
  assign wram_io_dbgReadData_1_MPORT_3_en = _T_11 ? 1'h0 : _GEN_59;
  assign wram_io_dbgReadData_1_MPORT_3_addr = _io_dbgReadData_1_T_8[12:0];
  assign wram_io_dbgReadData_1_MPORT_3_data = wram[wram_io_dbgReadData_1_MPORT_3_addr]; // @[MemoryMap.scala 115:19]
  assign wram_io_dbgReadData_2_MPORT_2_en = _T_21 ? 1'h0 : _GEN_90;
  assign wram_io_dbgReadData_2_MPORT_2_addr = _io_dbgReadData_2_T_1[12:0];
  assign wram_io_dbgReadData_2_MPORT_2_data = wram[wram_io_dbgReadData_2_MPORT_2_addr]; // @[MemoryMap.scala 115:19]
  assign wram_io_dbgReadData_2_MPORT_3_en = _T_21 ? 1'h0 : _GEN_93;
  assign wram_io_dbgReadData_2_MPORT_3_addr = _io_dbgReadData_2_T_8[12:0];
  assign wram_io_dbgReadData_2_MPORT_3_data = wram[wram_io_dbgReadData_2_MPORT_3_addr]; // @[MemoryMap.scala 115:19]
  assign wram_io_dbgReadData_3_MPORT_2_en = _T_31 ? 1'h0 : _GEN_124;
  assign wram_io_dbgReadData_3_MPORT_2_addr = _io_dbgReadData_3_T_1[12:0];
  assign wram_io_dbgReadData_3_MPORT_2_data = wram[wram_io_dbgReadData_3_MPORT_2_addr]; // @[MemoryMap.scala 115:19]
  assign wram_io_dbgReadData_3_MPORT_3_en = _T_31 ? 1'h0 : _GEN_127;
  assign wram_io_dbgReadData_3_MPORT_3_addr = _io_dbgReadData_3_T_8[12:0];
  assign wram_io_dbgReadData_3_MPORT_3_data = wram[wram_io_dbgReadData_3_MPORT_3_addr]; // @[MemoryMap.scala 115:19]
  assign wram_rdata_MPORT_1_en = _T_41 ? 1'h0 : _GEN_209;
  assign wram_rdata_MPORT_1_addr = _rdata_T_1[12:0];
  assign wram_rdata_MPORT_1_data = wram[wram_rdata_MPORT_1_addr]; // @[MemoryMap.scala 115:19]
  assign wram_rdata_MPORT_2_en = _T_41 ? 1'h0 : _GEN_212;
  assign wram_rdata_MPORT_2_addr = _rdata_T_8[12:0];
  assign wram_rdata_MPORT_2_data = wram[wram_rdata_MPORT_2_addr]; // @[MemoryMap.scala 115:19]
  assign wram_MPORT_3_data = io_cpuWriteData;
  assign wram_MPORT_3_addr = _rdata_T_1[12:0];
  assign wram_MPORT_3_mask = 1'h1;
  assign wram_MPORT_3_en = io_cpuWrite & _GEN_587;
  assign wram_MPORT_4_data = io_cpuWriteData;
  assign wram_MPORT_4_addr = _rdata_T_8[12:0];
  assign wram_MPORT_4_mask = 1'h1;
  assign wram_MPORT_4_en = io_cpuWrite & _GEN_592;
  assign oam_rdata_MPORT_3_en = _T_41 ? 1'h0 : _GEN_215;
  assign oam_rdata_MPORT_3_addr = _rdata_T_11[7:0];
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign oam_rdata_MPORT_3_data = oam[oam_rdata_MPORT_3_addr]; // @[MemoryMap.scala 116:19]
  `else
  assign oam_rdata_MPORT_3_data = oam_rdata_MPORT_3_addr >= 8'ha0 ? _RAND_3[7:0] : oam[oam_rdata_MPORT_3_addr]; // @[MemoryMap.scala 116:19]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign oam_io_ppuOamData_MPORT_en = 1'h1;
  assign oam_io_ppuOamData_MPORT_addr = 8'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign oam_io_ppuOamData_MPORT_data = oam[oam_io_ppuOamData_MPORT_addr]; // @[MemoryMap.scala 116:19]
  `else
  assign oam_io_ppuOamData_MPORT_data = oam_io_ppuOamData_MPORT_addr >= 8'ha0 ? _RAND_4[7:0] :
    oam[oam_io_ppuOamData_MPORT_addr]; // @[MemoryMap.scala 116:19]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign oam_MPORT_5_data = io_cpuWriteData;
  assign oam_MPORT_5_addr = _rdata_T_11[7:0];
  assign oam_MPORT_5_mask = 1'h1;
  assign oam_MPORT_5_en = io_cpuWrite & _GEN_597;
  assign hram_rdata_MPORT_4_en = _T_41 ? 1'h0 : _GEN_221;
  assign hram_rdata_MPORT_4_addr = _rdata_T_15[6:0];
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign hram_rdata_MPORT_4_data = hram[hram_rdata_MPORT_4_addr]; // @[MemoryMap.scala 117:19]
  `else
  assign hram_rdata_MPORT_4_data = hram_rdata_MPORT_4_addr >= 7'h7f ? _RAND_6[7:0] : hram[hram_rdata_MPORT_4_addr]; // @[MemoryMap.scala 117:19]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign hram_MPORT_6_data = io_cpuWriteData;
  assign hram_MPORT_6_addr = _rdata_T_15[6:0];
  assign hram_MPORT_6_mask = 1'h1;
  assign hram_MPORT_6_en = io_cpuWrite & _GEN_610;
  assign io_cpuReadData = io_cpuAddress < 16'h8000 ? rom_cartRomOut_data : _GEN_206; // @[MemoryMap.scala 163:32 164:11]
  assign io_dbgReadData_0 = a < 16'h8000 ? rom_io_dbgReadData_0_MPORT_data : _GEN_19; // @[MemoryMap.scala 129:25 134:25]
  assign io_dbgReadData_1 = a_1 < 16'h8000 ? rom_io_dbgReadData_1_MPORT_data : _GEN_53; // @[MemoryMap.scala 129:25 134:25]
  assign io_dbgReadData_2 = a_2 < 16'h8000 ? rom_io_dbgReadData_2_MPORT_data : _GEN_87; // @[MemoryMap.scala 129:25 134:25]
  assign io_dbgReadData_3 = a_3 < 16'h8000 ? rom_io_dbgReadData_3_MPORT_data : _GEN_121; // @[MemoryMap.scala 129:25 134:25]
  assign io_ieReg = regIE; // @[MemoryMap.scala 281:12]
  assign io_ifReg = ioRegs_io_ifReg; // @[MemoryMap.scala 282:12]
  assign io_ppuLcdc = ioRegs_io_ppuLcdc; // @[MemoryMap.scala 284:14]
  assign io_ppuScy = ioRegs_io_ppuScy; // @[MemoryMap.scala 286:14]
  assign io_ppuScx = ioRegs_io_ppuScx; // @[MemoryMap.scala 287:14]
  assign io_ppuBgp = ioRegs_io_ppuBgp; // @[MemoryMap.scala 289:14]
  assign ioRegs_clock = clock;
  assign ioRegs_reset = reset;
  assign ioRegs_io_addr = _GEN_645[7:0];
  assign ioRegs_io_write = io_cpuWrite & _GEN_606; // @[MemoryMap.scala 213:21 79:23]
  assign ioRegs_io_writeData = io_cpuWrite ? _GEN_607 : 8'h0; // @[MemoryMap.scala 213:21 80:23]
  assign ioRegs_io_vblankIRQ = io_ppuVblankIRQ; // @[MemoryMap.scala 73:24]
  assign ioRegs_io_timerIRQ = timer_io_irq; // @[MemoryMap.scala 94:22]
  assign ioRegs_io_ppuLy = io_ppuLY; // @[MemoryMap.scala 76:24]
  assign timer_clock = clock;
  assign timer_reset = reset;
  assign timer_io_enable = io_cpuWrite ? _GEN_600 : _GEN_236; // @[MemoryMap.scala 213:21]
  assign timer_io_addr = _GEN_641[1:0];
  assign timer_io_write = io_cpuWrite & _GEN_602; // @[MemoryMap.scala 213:21 89:18]
  assign timer_io_wdata = io_cpuWrite ? _GEN_603 : 8'h0; // @[MemoryMap.scala 213:21 90:18]
  always @(posedge clock) begin
    if (rom_MPORT_en & rom_MPORT_mask) begin
      rom[rom_MPORT_addr] <= rom_MPORT_data; // @[MemoryMap.scala 99:16]
    end
    if (wram_MPORT_3_en & wram_MPORT_3_mask) begin
      wram[wram_MPORT_3_addr] <= wram_MPORT_3_data; // @[MemoryMap.scala 115:19]
    end
    if (wram_MPORT_4_en & wram_MPORT_4_mask) begin
      wram[wram_MPORT_4_addr] <= wram_MPORT_4_data; // @[MemoryMap.scala 115:19]
    end
    if (oam_MPORT_5_en & oam_MPORT_5_mask) begin
      oam[oam_MPORT_5_addr] <= oam_MPORT_5_data; // @[MemoryMap.scala 116:19]
    end
    if (hram_MPORT_6_en & hram_MPORT_6_mask) begin
      hram[hram_MPORT_6_addr] <= hram_MPORT_6_data; // @[MemoryMap.scala 117:19]
    end
    if (reset) begin // @[MemoryMap.scala 120:27]
      regIE <= 8'h0; // @[MemoryMap.scala 120:27]
    end else if (io_cpuWrite) begin // @[MemoryMap.scala 213:21]
      if (!(io_cpuAddress < 16'h2000)) begin // @[MemoryMap.scala 214:28]
        if (!(io_cpuAddress < 16'h4000)) begin // @[MemoryMap.scala 217:34]
          regIE <= _GEN_534;
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  _RAND_3 = {1{`RANDOM}};
  _RAND_4 = {1{`RANDOM}};
  _RAND_6 = {1{`RANDOM}};
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 65536; initvar = initvar+1)
    rom[initvar] = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    wram[initvar] = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 160; initvar = initvar+1)
    oam[initvar] = _RAND_2[7:0];
  _RAND_5 = {1{`RANDOM}};
  for (initvar = 0; initvar < 127; initvar = initvar+1)
    hram[initvar] = _RAND_5[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  regIE = _RAND_7[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module GameBoySoC(
  input         clock,
  input         reset,
  output [15:0] io_dbg_pc,
  output [7:0]  io_dbg_opcode,
  output [7:0]  io_dbg_a,
  output [7:0]  io_dbg_f,
  output [7:0]  io_dbg_b,
  output [7:0]  io_dbg_c,
  output [7:0]  io_dbg_d,
  output [7:0]  io_dbg_e,
  output [7:0]  io_dbg_h,
  output [7:0]  io_dbg_l,
  output [7:0]  io_dbg_state,
  output [7:0]  io_dbg_tcycle,
  output [7:0]  io_dbg_mcycle,
  output [7:0]  io_dbg_IR,
  output [7:0]  io_dbg_ly,
  input  [31:0] io_extRomLoadAddr,
  input  [7:0]  io_extRomLoadData,
  input         io_extRomLoadEn,
  output        io_pixelValid,
  output [7:0]  io_pixelX,
  output [7:0]  io_pixelY,
  output [1:0]  io_pixelColor,
  output        io_hblank,
  output        io_vblank,
  output        io_lcdEnable
);
  wire  cpu_clock; // @[GameBoySoC.scala 52:19]
  wire  cpu_reset; // @[GameBoySoC.scala 52:19]
  wire [15:0] cpu_io_memAddr; // @[GameBoySoC.scala 52:19]
  wire  cpu_io_memWrite; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_memWriteData; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_memReadData; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_ieReg; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_ifReg; // @[GameBoySoC.scala 52:19]
  wire [15:0] cpu_io_dbg_pc; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbg_opcode; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbg_a; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbg_f; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbg_b; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbg_c; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbg_d; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbg_e; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbg_h; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbg_l; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbgBytes_0; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbgBytes_1; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbgBytes_2; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbgBytes_3; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbg_state; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbg_tcycle; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbg_mcycle; // @[GameBoySoC.scala 52:19]
  wire [7:0] cpu_io_dbg_IR; // @[GameBoySoC.scala 52:19]
  wire  ppu_clock; // @[GameBoySoC.scala 57:19]
  wire  ppu_reset; // @[GameBoySoC.scala 57:19]
  wire [12:0] ppu_io_vramAddr; // @[GameBoySoC.scala 57:19]
  wire  ppu_io_vramRead; // @[GameBoySoC.scala 57:19]
  wire [7:0] ppu_io_lcdc; // @[GameBoySoC.scala 57:19]
  wire [7:0] ppu_io_scy; // @[GameBoySoC.scala 57:19]
  wire [7:0] ppu_io_scx; // @[GameBoySoC.scala 57:19]
  wire [7:0] ppu_io_ly; // @[GameBoySoC.scala 57:19]
  wire [7:0] ppu_io_bgp; // @[GameBoySoC.scala 57:19]
  wire  ppu_io_vblankIRQ; // @[GameBoySoC.scala 57:19]
  wire  ppu_io_pixelValid; // @[GameBoySoC.scala 57:19]
  wire [7:0] ppu_io_pixelX; // @[GameBoySoC.scala 57:19]
  wire [7:0] ppu_io_pixelY; // @[GameBoySoC.scala 57:19]
  wire [1:0] ppu_io_pixelColor; // @[GameBoySoC.scala 57:19]
  wire  ppu_io_hblank; // @[GameBoySoC.scala 57:19]
  wire  ppu_io_vblank; // @[GameBoySoC.scala 57:19]
  wire  ppu_io_lcdEnable; // @[GameBoySoC.scala 57:19]
  wire  memory_clock; // @[GameBoySoC.scala 62:22]
  wire  memory_reset; // @[GameBoySoC.scala 62:22]
  wire [15:0] memory_io_cpuAddress; // @[GameBoySoC.scala 62:22]
  wire  memory_io_cpuWrite; // @[GameBoySoC.scala 62:22]
  wire [7:0] memory_io_cpuWriteData; // @[GameBoySoC.scala 62:22]
  wire [7:0] memory_io_cpuReadData; // @[GameBoySoC.scala 62:22]
  wire [15:0] memory_io_dbgAddr; // @[GameBoySoC.scala 62:22]
  wire [7:0] memory_io_dbgReadData_0; // @[GameBoySoC.scala 62:22]
  wire [7:0] memory_io_dbgReadData_1; // @[GameBoySoC.scala 62:22]
  wire [7:0] memory_io_dbgReadData_2; // @[GameBoySoC.scala 62:22]
  wire [7:0] memory_io_dbgReadData_3; // @[GameBoySoC.scala 62:22]
  wire [7:0] memory_io_ieReg; // @[GameBoySoC.scala 62:22]
  wire [7:0] memory_io_ifReg; // @[GameBoySoC.scala 62:22]
  wire [7:0] memory_io_ppuLY; // @[GameBoySoC.scala 62:22]
  wire  memory_io_ppuVblankIRQ; // @[GameBoySoC.scala 62:22]
  wire [7:0] memory_io_ppuLcdc; // @[GameBoySoC.scala 62:22]
  wire [7:0] memory_io_ppuScy; // @[GameBoySoC.scala 62:22]
  wire [7:0] memory_io_ppuScx; // @[GameBoySoC.scala 62:22]
  wire [7:0] memory_io_ppuBgp; // @[GameBoySoC.scala 62:22]
  wire [31:0] memory_io_extRomLoadAddr; // @[GameBoySoC.scala 62:22]
  wire [7:0] memory_io_extRomLoadData; // @[GameBoySoC.scala 62:22]
  wire  memory_io_extRomLoadEn; // @[GameBoySoC.scala 62:22]
  LR35902_Core cpu ( // @[GameBoySoC.scala 52:19]
    .clock(cpu_clock),
    .reset(cpu_reset),
    .io_memAddr(cpu_io_memAddr),
    .io_memWrite(cpu_io_memWrite),
    .io_memWriteData(cpu_io_memWriteData),
    .io_memReadData(cpu_io_memReadData),
    .io_ieReg(cpu_io_ieReg),
    .io_ifReg(cpu_io_ifReg),
    .io_dbg_pc(cpu_io_dbg_pc),
    .io_dbg_opcode(cpu_io_dbg_opcode),
    .io_dbg_a(cpu_io_dbg_a),
    .io_dbg_f(cpu_io_dbg_f),
    .io_dbg_b(cpu_io_dbg_b),
    .io_dbg_c(cpu_io_dbg_c),
    .io_dbg_d(cpu_io_dbg_d),
    .io_dbg_e(cpu_io_dbg_e),
    .io_dbg_h(cpu_io_dbg_h),
    .io_dbg_l(cpu_io_dbg_l),
    .io_dbgBytes_0(cpu_io_dbgBytes_0),
    .io_dbgBytes_1(cpu_io_dbgBytes_1),
    .io_dbgBytes_2(cpu_io_dbgBytes_2),
    .io_dbgBytes_3(cpu_io_dbgBytes_3),
    .io_dbg_state(cpu_io_dbg_state),
    .io_dbg_tcycle(cpu_io_dbg_tcycle),
    .io_dbg_mcycle(cpu_io_dbg_mcycle),
    .io_dbg_IR(cpu_io_dbg_IR)
  );
  PPU ppu ( // @[GameBoySoC.scala 57:19]
    .clock(ppu_clock),
    .reset(ppu_reset),
    .io_vramAddr(ppu_io_vramAddr),
    .io_vramRead(ppu_io_vramRead),
    .io_lcdc(ppu_io_lcdc),
    .io_scy(ppu_io_scy),
    .io_scx(ppu_io_scx),
    .io_ly(ppu_io_ly),
    .io_bgp(ppu_io_bgp),
    .io_vblankIRQ(ppu_io_vblankIRQ),
    .io_pixelValid(ppu_io_pixelValid),
    .io_pixelX(ppu_io_pixelX),
    .io_pixelY(ppu_io_pixelY),
    .io_pixelColor(ppu_io_pixelColor),
    .io_hblank(ppu_io_hblank),
    .io_vblank(ppu_io_vblank),
    .io_lcdEnable(ppu_io_lcdEnable)
  );
  MemoryMap memory ( // @[GameBoySoC.scala 62:22]
    .clock(memory_clock),
    .reset(memory_reset),
    .io_cpuAddress(memory_io_cpuAddress),
    .io_cpuWrite(memory_io_cpuWrite),
    .io_cpuWriteData(memory_io_cpuWriteData),
    .io_cpuReadData(memory_io_cpuReadData),
    .io_dbgAddr(memory_io_dbgAddr),
    .io_dbgReadData_0(memory_io_dbgReadData_0),
    .io_dbgReadData_1(memory_io_dbgReadData_1),
    .io_dbgReadData_2(memory_io_dbgReadData_2),
    .io_dbgReadData_3(memory_io_dbgReadData_3),
    .io_ieReg(memory_io_ieReg),
    .io_ifReg(memory_io_ifReg),
    .io_ppuLY(memory_io_ppuLY),
    .io_ppuVblankIRQ(memory_io_ppuVblankIRQ),
    .io_ppuLcdc(memory_io_ppuLcdc),
    .io_ppuScy(memory_io_ppuScy),
    .io_ppuScx(memory_io_ppuScx),
    .io_ppuBgp(memory_io_ppuBgp),
    .io_extRomLoadAddr(memory_io_extRomLoadAddr),
    .io_extRomLoadData(memory_io_extRomLoadData),
    .io_extRomLoadEn(memory_io_extRomLoadEn)
  );
  assign io_dbg_pc = cpu_io_dbg_pc; // @[GameBoySoC.scala 137:17]
  assign io_dbg_opcode = cpu_io_dbg_opcode; // @[GameBoySoC.scala 138:17]
  assign io_dbg_a = cpu_io_dbg_a; // @[GameBoySoC.scala 139:17]
  assign io_dbg_f = cpu_io_dbg_f; // @[GameBoySoC.scala 140:17]
  assign io_dbg_b = cpu_io_dbg_b; // @[GameBoySoC.scala 141:17]
  assign io_dbg_c = cpu_io_dbg_c; // @[GameBoySoC.scala 142:17]
  assign io_dbg_d = cpu_io_dbg_d; // @[GameBoySoC.scala 143:17]
  assign io_dbg_e = cpu_io_dbg_e; // @[GameBoySoC.scala 144:17]
  assign io_dbg_h = cpu_io_dbg_h; // @[GameBoySoC.scala 145:17]
  assign io_dbg_l = cpu_io_dbg_l; // @[GameBoySoC.scala 146:17]
  assign io_dbg_state = cpu_io_dbg_state; // @[GameBoySoC.scala 147:17]
  assign io_dbg_tcycle = cpu_io_dbg_tcycle; // @[GameBoySoC.scala 148:17]
  assign io_dbg_mcycle = cpu_io_dbg_mcycle; // @[GameBoySoC.scala 149:17]
  assign io_dbg_IR = cpu_io_dbg_IR; // @[GameBoySoC.scala 150:17]
  assign io_dbg_ly = ppu_io_ly; // @[GameBoySoC.scala 151:17]
  assign io_pixelValid = ppu_io_pixelValid; // @[GameBoySoC.scala 124:17]
  assign io_pixelX = ppu_io_pixelX; // @[GameBoySoC.scala 125:17]
  assign io_pixelY = ppu_io_pixelY; // @[GameBoySoC.scala 126:17]
  assign io_pixelColor = ppu_io_pixelColor; // @[GameBoySoC.scala 127:17]
  assign io_hblank = ppu_io_hblank; // @[GameBoySoC.scala 130:17]
  assign io_vblank = ppu_io_vblank; // @[GameBoySoC.scala 131:17]
  assign io_lcdEnable = ppu_io_lcdEnable; // @[GameBoySoC.scala 132:17]
  assign cpu_clock = clock;
  assign cpu_reset = reset;
  assign cpu_io_memReadData = memory_io_cpuReadData; // @[GameBoySoC.scala 77:26]
  assign cpu_io_ieReg = memory_io_ieReg; // @[GameBoySoC.scala 83:16]
  assign cpu_io_ifReg = memory_io_ifReg; // @[GameBoySoC.scala 84:16]
  assign cpu_io_dbgBytes_0 = memory_io_dbgReadData_0; // @[GameBoySoC.scala 68:21]
  assign cpu_io_dbgBytes_1 = memory_io_dbgReadData_1; // @[GameBoySoC.scala 68:21]
  assign cpu_io_dbgBytes_2 = memory_io_dbgReadData_2; // @[GameBoySoC.scala 68:21]
  assign cpu_io_dbgBytes_3 = memory_io_dbgReadData_3; // @[GameBoySoC.scala 68:21]
  assign ppu_clock = clock;
  assign ppu_reset = reset;
  assign ppu_io_lcdc = memory_io_ppuLcdc; // @[GameBoySoC.scala 98:15]
  assign ppu_io_scy = memory_io_ppuScy; // @[GameBoySoC.scala 100:15]
  assign ppu_io_scx = memory_io_ppuScx; // @[GameBoySoC.scala 101:15]
  assign ppu_io_bgp = memory_io_ppuBgp; // @[GameBoySoC.scala 103:15]
  assign memory_clock = clock;
  assign memory_reset = reset;
  assign memory_io_cpuAddress = cpu_io_memAddr; // @[GameBoySoC.scala 73:26]
  assign memory_io_cpuWrite = cpu_io_memWrite; // @[GameBoySoC.scala 75:26]
  assign memory_io_cpuWriteData = cpu_io_memWriteData; // @[GameBoySoC.scala 76:26]
  assign memory_io_dbgAddr = cpu_io_dbg_pc; // @[GameBoySoC.scala 67:21]
  assign memory_io_ppuLY = ppu_io_ly; // @[GameBoySoC.scala 110:26]
  assign memory_io_ppuVblankIRQ = ppu_io_vblankIRQ; // @[GameBoySoC.scala 111:26]
  assign memory_io_extRomLoadAddr = io_extRomLoadAddr; // @[GameBoySoC.scala 117:28]
  assign memory_io_extRomLoadData = io_extRomLoadData; // @[GameBoySoC.scala 118:28]
  assign memory_io_extRomLoadEn = io_extRomLoadEn; // @[GameBoySoC.scala 119:28]
endmodule
