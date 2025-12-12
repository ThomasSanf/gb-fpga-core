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
  wire [7:0] sum = io_a + io_b; // @[LR35902_ALU.scala 32:19]
  wire [7:0] _GEN_50 = {{7'd0}, io_carryIn}; // @[LR35902_ALU.scala 33:26]
  wire [7:0] sumc = sum + _GEN_50; // @[LR35902_ALU.scala 33:26]
  wire [7:0] diff = io_a - io_b; // @[LR35902_ALU.scala 35:20]
  wire [7:0] diffc = diff - _GEN_50; // @[LR35902_ALU.scala 36:27]
  wire [7:0] _io_flagH_T = io_a & 8'hf; // @[LR35902_ALU.scala 40:9]
  wire [7:0] _io_flagH_T_1 = io_b & 8'hf; // @[LR35902_ALU.scala 40:23]
  wire [7:0] _io_flagH_T_3 = _io_flagH_T + _io_flagH_T_1; // @[LR35902_ALU.scala 40:18]
  wire [8:0] _io_flagH_T_4 = {{1'd0}, _io_flagH_T_3}; // @[LR35902_ALU.scala 40:32]
  wire  _io_flagH_T_6 = _io_flagH_T_4[7:0] > 8'hf; // @[LR35902_ALU.scala 40:37]
  wire [7:0] _io_flagH_T_12 = _io_flagH_T_3 + _GEN_50; // @[LR35902_ALU.scala 40:32]
  wire  _io_flagH_T_13 = _io_flagH_T_12 > 8'hf; // @[LR35902_ALU.scala 40:37]
  wire  _io_flagZ_T_2 = diff == 8'h0; // @[LR35902_ALU.scala 77:24]
  wire  _io_flagC_T_2 = io_a < io_b; // @[LR35902_ALU.scala 80:24]
  wire [7:0] _io_flagC_T_4 = io_b + _GEN_50; // @[LR35902_ALU.scala 91:32]
  wire [7:0] r = io_a & io_b; // @[LR35902_ALU.scala 98:20]
  wire [7:0] r_1 = io_a | io_b; // @[LR35902_ALU.scala 110:20]
  wire [7:0] r_2 = io_a ^ io_b; // @[LR35902_ALU.scala 122:20]
  wire [7:0] r_3 = io_a + 8'h1; // @[LR35902_ALU.scala 146:20]
  wire [7:0] r_4 = io_a - 8'h1; // @[LR35902_ALU.scala 158:20]
  wire [7:0] _GEN_0 = 4'h9 == io_op ? r_4 : io_a; // @[LR35902_ALU.scala 159:16 26:12 48:17]
  wire  _GEN_1 = 4'h9 == io_op & r_4 == 8'h0; // @[LR35902_ALU.scala 160:16 27:12 48:17]
  wire  _GEN_3 = 4'h9 == io_op & _io_flagH_T == 8'h0; // @[LR35902_ALU.scala 162:16 29:12 48:17]
  wire [7:0] _GEN_5 = 4'h8 == io_op ? r_3 : _GEN_0; // @[LR35902_ALU.scala 147:16 48:17]
  wire  _GEN_6 = 4'h8 == io_op ? r_3 == 8'h0 : _GEN_1; // @[LR35902_ALU.scala 148:16 48:17]
  wire  _GEN_7 = 4'h8 == io_op ? 1'h0 : 4'h9 == io_op; // @[LR35902_ALU.scala 149:16 48:17]
  wire  _GEN_8 = 4'h8 == io_op ? _io_flagH_T == 8'hf : _GEN_3; // @[LR35902_ALU.scala 150:16 48:17]
  wire [7:0] _GEN_10 = 4'h7 == io_op ? io_a : _GEN_5; // @[LR35902_ALU.scala 135:16 48:17]
  wire  _GEN_11 = 4'h7 == io_op ? _io_flagZ_T_2 : _GEN_6; // @[LR35902_ALU.scala 136:16 48:17]
  wire  _GEN_12 = 4'h7 == io_op | _GEN_7; // @[LR35902_ALU.scala 137:16 48:17]
  wire  _GEN_13 = 4'h7 == io_op ? 1'h0 : _GEN_8; // @[LR35902_ALU.scala 138:16 48:17]
  wire  _GEN_14 = 4'h7 == io_op & _io_flagC_T_2; // @[LR35902_ALU.scala 139:16 48:17]
  wire [7:0] _GEN_15 = 4'h6 == io_op ? r_2 : _GEN_10; // @[LR35902_ALU.scala 123:16 48:17]
  wire  _GEN_16 = 4'h6 == io_op ? r_2 == 8'h0 : _GEN_11; // @[LR35902_ALU.scala 124:16 48:17]
  wire  _GEN_17 = 4'h6 == io_op ? 1'h0 : _GEN_12; // @[LR35902_ALU.scala 125:16 48:17]
  wire  _GEN_18 = 4'h6 == io_op ? 1'h0 : _GEN_13; // @[LR35902_ALU.scala 126:16 48:17]
  wire  _GEN_19 = 4'h6 == io_op ? 1'h0 : _GEN_14; // @[LR35902_ALU.scala 127:16 48:17]
  wire [7:0] _GEN_20 = 4'h5 == io_op ? r_1 : _GEN_15; // @[LR35902_ALU.scala 111:16 48:17]
  wire  _GEN_21 = 4'h5 == io_op ? r_1 == 8'h0 : _GEN_16; // @[LR35902_ALU.scala 112:16 48:17]
  wire  _GEN_22 = 4'h5 == io_op ? 1'h0 : _GEN_17; // @[LR35902_ALU.scala 113:16 48:17]
  wire  _GEN_23 = 4'h5 == io_op ? 1'h0 : _GEN_18; // @[LR35902_ALU.scala 114:16 48:17]
  wire  _GEN_24 = 4'h5 == io_op ? 1'h0 : _GEN_19; // @[LR35902_ALU.scala 115:16 48:17]
  wire [7:0] _GEN_25 = 4'h4 == io_op ? r : _GEN_20; // @[LR35902_ALU.scala 48:17 99:16]
  wire  _GEN_26 = 4'h4 == io_op ? r == 8'h0 : _GEN_21; // @[LR35902_ALU.scala 100:16 48:17]
  wire  _GEN_27 = 4'h4 == io_op ? 1'h0 : _GEN_22; // @[LR35902_ALU.scala 101:16 48:17]
  wire  _GEN_28 = 4'h4 == io_op | _GEN_23; // @[LR35902_ALU.scala 102:16 48:17]
  wire  _GEN_29 = 4'h4 == io_op ? 1'h0 : _GEN_24; // @[LR35902_ALU.scala 103:16 48:17]
  wire [7:0] _GEN_30 = 4'h3 == io_op ? diffc : _GEN_25; // @[LR35902_ALU.scala 48:17 87:16]
  wire  _GEN_31 = 4'h3 == io_op ? diffc == 8'h0 : _GEN_26; // @[LR35902_ALU.scala 48:17 88:16]
  wire  _GEN_32 = 4'h3 == io_op | _GEN_27; // @[LR35902_ALU.scala 48:17 89:16]
  wire  _GEN_33 = 4'h3 == io_op ? 1'h0 : _GEN_28; // @[LR35902_ALU.scala 48:17 90:16]
  wire  _GEN_34 = 4'h3 == io_op ? io_a < _io_flagC_T_4 : _GEN_29; // @[LR35902_ALU.scala 48:17 91:16]
  wire [7:0] _GEN_35 = 4'h2 == io_op ? diff : _GEN_30; // @[LR35902_ALU.scala 48:17 76:16]
  wire  _GEN_36 = 4'h2 == io_op ? diff == 8'h0 : _GEN_31; // @[LR35902_ALU.scala 48:17 77:16]
  wire  _GEN_37 = 4'h2 == io_op | _GEN_32; // @[LR35902_ALU.scala 48:17 78:16]
  wire  _GEN_38 = 4'h2 == io_op ? 1'h0 : _GEN_33; // @[LR35902_ALU.scala 48:17 79:16]
  wire  _GEN_39 = 4'h2 == io_op ? io_a < io_b : _GEN_34; // @[LR35902_ALU.scala 48:17 80:16]
  wire [7:0] _GEN_40 = 4'h1 == io_op ? sumc : _GEN_35; // @[LR35902_ALU.scala 48:17 65:16]
  wire  _GEN_41 = 4'h1 == io_op ? sumc == 8'h0 : _GEN_36; // @[LR35902_ALU.scala 48:17 66:16]
  wire  _GEN_42 = 4'h1 == io_op ? 1'h0 : _GEN_37; // @[LR35902_ALU.scala 48:17 67:16]
  wire  _GEN_43 = 4'h1 == io_op ? _io_flagH_T_13 : _GEN_38; // @[LR35902_ALU.scala 48:17 68:16]
  wire  _GEN_44 = 4'h1 == io_op ? 1'h0 : _GEN_39; // @[LR35902_ALU.scala 48:17 69:16]
  assign io_out = 4'h0 == io_op ? sum : _GEN_40; // @[LR35902_ALU.scala 48:17 54:16]
  assign io_flagZ = 4'h0 == io_op ? sum == 8'h0 : _GEN_41; // @[LR35902_ALU.scala 48:17 55:16]
  assign io_flagN = 4'h0 == io_op ? 1'h0 : _GEN_42; // @[LR35902_ALU.scala 48:17 56:16]
  assign io_flagH = 4'h0 == io_op ? _io_flagH_T_6 : _GEN_43; // @[LR35902_ALU.scala 48:17 57:16]
  assign io_flagC = 4'h0 == io_op ? 1'h0 : _GEN_44; // @[LR35902_ALU.scala 48:17 58:16]
endmodule
module LR35902_Core(
  input         clock,
  input         reset,
  output [15:0] io_memAddr,
  output        io_memRead,
  output        io_memWrite,
  output [7:0]  io_memWriteData,
  input  [7:0]  io_memReadData,
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
`endif // RANDOMIZE_REG_INIT
  wire [3:0] u_alu_io_op; // @[Microcode.scala 105:21]
  wire [7:0] u_alu_io_a; // @[Microcode.scala 105:21]
  wire [7:0] u_alu_io_b; // @[Microcode.scala 105:21]
  wire  u_alu_io_carryIn; // @[Microcode.scala 105:21]
  wire [7:0] u_alu_io_out; // @[Microcode.scala 105:21]
  wire  u_alu_io_flagZ; // @[Microcode.scala 105:21]
  wire  u_alu_io_flagN; // @[Microcode.scala 105:21]
  wire  u_alu_io_flagH; // @[Microcode.scala 105:21]
  wire  u_alu_io_flagC; // @[Microcode.scala 105:21]
  reg [7:0] A; // @[LR35902_Core.scala 44:18]
  reg [7:0] F; // @[LR35902_Core.scala 45:18]
  reg [7:0] B; // @[LR35902_Core.scala 46:18]
  reg [7:0] C; // @[LR35902_Core.scala 47:18]
  reg [7:0] D; // @[LR35902_Core.scala 48:18]
  reg [7:0] E; // @[LR35902_Core.scala 49:18]
  reg [7:0] H; // @[LR35902_Core.scala 50:18]
  reg [7:0] L; // @[LR35902_Core.scala 51:18]
  reg [15:0] PC; // @[LR35902_Core.scala 53:19]
  reg [15:0] SP; // @[LR35902_Core.scala 54:19]
  reg [7:0] IR; // @[LR35902_Core.scala 56:22]
  reg [7:0] IR2; // @[LR35902_Core.scala 57:22]
  reg [7:0] imm8; // @[LR35902_Core.scala 58:22]
  reg [15:0] imm16; // @[LR35902_Core.scala 59:22]
  reg [7:0] CB_imm8; // @[LR35902_Core.scala 60:24]
  reg [15:0] PC_sampled; // @[LR35902_Core.scala 68:27]
  reg [15:0] SP_sampled; // @[LR35902_Core.scala 69:27]
  reg [7:0] A_sampled; // @[LR35902_Core.scala 70:27]
  reg [7:0] F_sampled; // @[LR35902_Core.scala 71:27]
  reg [7:0] B_sampled; // @[LR35902_Core.scala 72:27]
  reg [7:0] C_sampled; // @[LR35902_Core.scala 73:27]
  reg [7:0] D_sampled; // @[LR35902_Core.scala 74:27]
  reg [7:0] E_sampled; // @[LR35902_Core.scala 75:27]
  reg [7:0] H_sampled; // @[LR35902_Core.scala 76:27]
  reg [7:0] L_sampled; // @[LR35902_Core.scala 77:27]
  reg [2:0] state; // @[LR35902_Core.scala 85:23]
  reg [1:0] tcycle; // @[LR35902_Core.scala 86:23]
  reg [2:0] mcycle; // @[LR35902_Core.scala 87:23]
  wire [15:0] u_HL = {H_sampled,L_sampled}; // @[Cat.scala 33:92]
  wire  _u_T_1 = tcycle == 2'h3; // @[Microcode.scala 119:19]
  wire [7:0] _u_T_4 = IR & 8'hcf; // @[Microcode.scala 131:20]
  wire [3:0] u_rr = IR[7:4] & 4'h3; // @[Microcode.scala 132:26]
  wire  _u_T_6 = 4'h0 == u_rr; // @[Microcode.scala 134:18]
  wire  _u_T_7 = 4'h1 == u_rr; // @[Microcode.scala 134:18]
  wire  _u_T_8 = 4'h2 == u_rr; // @[Microcode.scala 134:18]
  wire  _u_T_9 = 4'h3 == u_rr; // @[Microcode.scala 134:18]
  wire [15:0] _GEN_2 = 4'h3 == u_rr ? imm16 : SP_sampled; // @[Microcode.scala 134:18 148:18 60:15]
  wire [7:0] _GEN_3 = 4'h2 == u_rr ? imm16[7:0] : L_sampled; // @[Microcode.scala 134:18 144:17 68:15]
  wire [7:0] _GEN_4 = 4'h2 == u_rr ? imm16[15:8] : H_sampled; // @[Microcode.scala 134:18 145:17 67:15]
  wire [15:0] _GEN_5 = 4'h2 == u_rr ? SP_sampled : _GEN_2; // @[Microcode.scala 134:18 60:15]
  wire [7:0] _GEN_6 = 4'h1 == u_rr ? imm16[7:0] : E_sampled; // @[Microcode.scala 134:18 140:17 66:15]
  wire [7:0] _GEN_7 = 4'h1 == u_rr ? imm16[15:8] : D_sampled; // @[Microcode.scala 134:18 141:17 65:15]
  wire [7:0] _GEN_8 = 4'h1 == u_rr ? L_sampled : _GEN_3; // @[Microcode.scala 134:18 68:15]
  wire [7:0] _GEN_9 = 4'h1 == u_rr ? H_sampled : _GEN_4; // @[Microcode.scala 134:18 67:15]
  wire [15:0] _GEN_10 = 4'h1 == u_rr ? SP_sampled : _GEN_5; // @[Microcode.scala 134:18 60:15]
  wire [7:0] _GEN_11 = 4'h0 == u_rr ? imm16[7:0] : C_sampled; // @[Microcode.scala 134:18 136:17 64:15]
  wire [7:0] _GEN_12 = 4'h0 == u_rr ? imm16[15:8] : B_sampled; // @[Microcode.scala 134:18 137:17 63:15]
  wire [7:0] _GEN_13 = 4'h0 == u_rr ? E_sampled : _GEN_6; // @[Microcode.scala 134:18 66:15]
  wire [7:0] _GEN_14 = 4'h0 == u_rr ? D_sampled : _GEN_7; // @[Microcode.scala 134:18 65:15]
  wire [7:0] _GEN_15 = 4'h0 == u_rr ? L_sampled : _GEN_8; // @[Microcode.scala 134:18 68:15]
  wire [7:0] _GEN_16 = 4'h0 == u_rr ? H_sampled : _GEN_9; // @[Microcode.scala 134:18 67:15]
  wire [15:0] _GEN_17 = 4'h0 == u_rr ? SP_sampled : _GEN_10; // @[Microcode.scala 134:18 60:15]
  wire [15:0] _u_result_T = {B_sampled,C_sampled}; // @[Cat.scala 33:92]
  wire [15:0] _u_result_T_2 = _u_result_T + 16'h1; // @[Microcode.scala 159:33]
  wire [15:0] _u_result_T_3 = {D_sampled,E_sampled}; // @[Cat.scala 33:92]
  wire [15:0] _u_result_T_5 = _u_result_T_3 + 16'h1; // @[Microcode.scala 160:33]
  wire [15:0] _u_result_T_8 = u_HL + 16'h1; // @[Microcode.scala 161:33]
  wire [15:0] _u_result_T_10 = SP_sampled + 16'h1; // @[Microcode.scala 162:23]
  wire [15:0] _u_result_T_12 = _u_T_6 ? _u_result_T_2 : 16'h0; // @[Mux.scala 81:58]
  wire [15:0] _u_result_T_14 = _u_T_7 ? _u_result_T_5 : _u_result_T_12; // @[Mux.scala 81:58]
  wire [15:0] _u_result_T_16 = _u_T_8 ? _u_result_T_8 : _u_result_T_14; // @[Mux.scala 81:58]
  wire [15:0] u_result = _u_T_9 ? _u_result_T_10 : _u_result_T_16; // @[Mux.scala 81:58]
  wire [15:0] _GEN_19 = _u_T_9 ? u_result : SP_sampled; // @[Microcode.scala 165:18 169:26 60:15]
  wire [7:0] _GEN_20 = _u_T_8 ? u_result[15:8] : H_sampled; // @[Microcode.scala 165:18 168:25 67:15]
  wire [7:0] _GEN_21 = _u_T_8 ? u_result[7:0] : L_sampled; // @[Microcode.scala 165:18 168:49 68:15]
  wire [15:0] _GEN_22 = _u_T_8 ? SP_sampled : _GEN_19; // @[Microcode.scala 165:18 60:15]
  wire [7:0] _GEN_23 = _u_T_7 ? u_result[15:8] : D_sampled; // @[Microcode.scala 165:18 167:25 65:15]
  wire [7:0] _GEN_24 = _u_T_7 ? u_result[7:0] : E_sampled; // @[Microcode.scala 165:18 167:49 66:15]
  wire [7:0] _GEN_25 = _u_T_7 ? H_sampled : _GEN_20; // @[Microcode.scala 165:18 67:15]
  wire [7:0] _GEN_26 = _u_T_7 ? L_sampled : _GEN_21; // @[Microcode.scala 165:18 68:15]
  wire [15:0] _GEN_27 = _u_T_7 ? SP_sampled : _GEN_22; // @[Microcode.scala 165:18 60:15]
  wire [7:0] _GEN_28 = _u_T_6 ? u_result[15:8] : B_sampled; // @[Microcode.scala 165:18 166:25 63:15]
  wire [7:0] _GEN_29 = _u_T_6 ? u_result[7:0] : C_sampled; // @[Microcode.scala 165:18 166:49 64:15]
  wire [7:0] _GEN_30 = _u_T_6 ? D_sampled : _GEN_23; // @[Microcode.scala 165:18 65:15]
  wire [7:0] _GEN_31 = _u_T_6 ? E_sampled : _GEN_24; // @[Microcode.scala 165:18 66:15]
  wire [7:0] _GEN_32 = _u_T_6 ? H_sampled : _GEN_25; // @[Microcode.scala 165:18 67:15]
  wire [7:0] _GEN_33 = _u_T_6 ? L_sampled : _GEN_26; // @[Microcode.scala 165:18 68:15]
  wire [15:0] _GEN_34 = _u_T_6 ? SP_sampled : _GEN_27; // @[Microcode.scala 165:18 60:15]
  wire [15:0] _u_result_T_20 = _u_result_T - 16'h1; // @[Microcode.scala 179:33]
  wire [15:0] _u_result_T_23 = _u_result_T_3 - 16'h1; // @[Microcode.scala 180:33]
  wire [15:0] _u_result_T_26 = u_HL - 16'h1; // @[Microcode.scala 181:33]
  wire [15:0] _u_result_T_28 = SP_sampled - 16'h1; // @[Microcode.scala 182:23]
  wire [15:0] _u_result_T_30 = _u_T_6 ? _u_result_T_20 : 16'h0; // @[Mux.scala 81:58]
  wire [15:0] _u_result_T_32 = _u_T_7 ? _u_result_T_23 : _u_result_T_30; // @[Mux.scala 81:58]
  wire [15:0] _u_result_T_34 = _u_T_8 ? _u_result_T_26 : _u_result_T_32; // @[Mux.scala 81:58]
  wire [15:0] u_result_1 = _u_T_9 ? _u_result_T_28 : _u_result_T_34; // @[Mux.scala 81:58]
  wire [15:0] _GEN_36 = _u_T_9 ? u_result_1 : SP_sampled; // @[Microcode.scala 185:18 189:26 60:15]
  wire [7:0] _GEN_37 = _u_T_8 ? u_result_1[15:8] : H_sampled; // @[Microcode.scala 185:18 188:25 67:15]
  wire [7:0] _GEN_38 = _u_T_8 ? u_result_1[7:0] : L_sampled; // @[Microcode.scala 185:18 188:49 68:15]
  wire [15:0] _GEN_39 = _u_T_8 ? SP_sampled : _GEN_36; // @[Microcode.scala 185:18 60:15]
  wire [7:0] _GEN_40 = _u_T_7 ? u_result_1[15:8] : D_sampled; // @[Microcode.scala 185:18 187:25 65:15]
  wire [7:0] _GEN_41 = _u_T_7 ? u_result_1[7:0] : E_sampled; // @[Microcode.scala 185:18 187:49 66:15]
  wire [7:0] _GEN_42 = _u_T_7 ? H_sampled : _GEN_37; // @[Microcode.scala 185:18 67:15]
  wire [7:0] _GEN_43 = _u_T_7 ? L_sampled : _GEN_38; // @[Microcode.scala 185:18 68:15]
  wire [15:0] _GEN_44 = _u_T_7 ? SP_sampled : _GEN_39; // @[Microcode.scala 185:18 60:15]
  wire [7:0] _GEN_45 = _u_T_6 ? u_result_1[15:8] : B_sampled; // @[Microcode.scala 185:18 186:25 63:15]
  wire [7:0] _GEN_46 = _u_T_6 ? u_result_1[7:0] : C_sampled; // @[Microcode.scala 185:18 186:49 64:15]
  wire [7:0] _GEN_47 = _u_T_6 ? D_sampled : _GEN_40; // @[Microcode.scala 185:18 65:15]
  wire [7:0] _GEN_48 = _u_T_6 ? E_sampled : _GEN_41; // @[Microcode.scala 185:18 66:15]
  wire [7:0] _GEN_49 = _u_T_6 ? H_sampled : _GEN_42; // @[Microcode.scala 185:18 67:15]
  wire [7:0] _GEN_50 = _u_T_6 ? L_sampled : _GEN_43; // @[Microcode.scala 185:18 68:15]
  wire [15:0] _GEN_51 = _u_T_6 ? SP_sampled : _GEN_44; // @[Microcode.scala 185:18 60:15]
  wire [15:0] _u_operand_T_4 = _u_T_6 ? _u_result_T : 16'h0; // @[Mux.scala 81:58]
  wire [15:0] _u_operand_T_6 = _u_T_7 ? _u_result_T_3 : _u_operand_T_4; // @[Mux.scala 81:58]
  wire [15:0] _u_operand_T_8 = _u_T_8 ? u_HL : _u_operand_T_6; // @[Mux.scala 81:58]
  wire [15:0] u_operand = _u_T_9 ? SP_sampled : _u_operand_T_8; // @[Mux.scala 81:58]
  wire [15:0] u_result_2 = u_HL + u_operand; // @[Microcode.scala 206:23]
  wire [15:0] _u_halfCarry_T = u_HL & 16'hfff; // @[Microcode.scala 211:28]
  wire [15:0] _u_halfCarry_T_1 = u_operand & 16'hfff; // @[Microcode.scala 211:52]
  wire [15:0] _u_halfCarry_T_3 = _u_halfCarry_T + _u_halfCarry_T_1; // @[Microcode.scala 211:41]
  wire  u_halfCarry = _u_halfCarry_T_3 > 16'hfff; // @[Microcode.scala 211:66]
  wire [7:0] _u_out_F_T = {F_sampled[7],1'h0,u_halfCarry,5'h0}; // @[Cat.scala 33:92]
  wire [7:0] _u_T_29 = IR & 8'hc7; // @[Microcode.scala 220:20]
  wire [4:0] _u_T_32 = IR[7:3] & 5'h7; // @[Microcode.scala 220:57]
  wire  _u_T_33 = _u_T_32 != 5'h6; // @[Microcode.scala 220:64]
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
  wire [7:0] _GEN_54 = _u_oldVal_T_12 ? u_alu_io_out : A_sampled; // @[Microcode.scala 61:15 91:17 98:25]
  wire [7:0] _GEN_55 = _u_oldVal_T_10 ? u_alu_io_out : L_sampled; // @[Microcode.scala 68:15 91:17 97:25]
  wire [7:0] _GEN_56 = _u_oldVal_T_10 ? A_sampled : _GEN_54; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_57 = _u_oldVal_T_8 ? u_alu_io_out : H_sampled; // @[Microcode.scala 67:15 91:17 96:25]
  wire [7:0] _GEN_58 = _u_oldVal_T_8 ? L_sampled : _GEN_55; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_59 = _u_oldVal_T_8 ? A_sampled : _GEN_56; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_60 = _u_oldVal_T_6 ? u_alu_io_out : E_sampled; // @[Microcode.scala 66:15 91:17 95:25]
  wire [7:0] _GEN_61 = _u_oldVal_T_6 ? H_sampled : _GEN_57; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_62 = _u_oldVal_T_6 ? L_sampled : _GEN_58; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_63 = _u_oldVal_T_6 ? A_sampled : _GEN_59; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_64 = _u_oldVal_T_4 ? u_alu_io_out : D_sampled; // @[Microcode.scala 65:15 91:17 94:25]
  wire [7:0] _GEN_65 = _u_oldVal_T_4 ? E_sampled : _GEN_60; // @[Microcode.scala 66:15 91:17]
  wire [7:0] _GEN_66 = _u_oldVal_T_4 ? H_sampled : _GEN_61; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_67 = _u_oldVal_T_4 ? L_sampled : _GEN_62; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_68 = _u_oldVal_T_4 ? A_sampled : _GEN_63; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_69 = _u_oldVal_T_2 ? u_alu_io_out : C_sampled; // @[Microcode.scala 64:15 91:17 93:25]
  wire [7:0] _GEN_70 = _u_oldVal_T_2 ? D_sampled : _GEN_64; // @[Microcode.scala 65:15 91:17]
  wire [7:0] _GEN_71 = _u_oldVal_T_2 ? E_sampled : _GEN_65; // @[Microcode.scala 66:15 91:17]
  wire [7:0] _GEN_72 = _u_oldVal_T_2 ? H_sampled : _GEN_66; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_73 = _u_oldVal_T_2 ? L_sampled : _GEN_67; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_74 = _u_oldVal_T_2 ? A_sampled : _GEN_68; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_75 = _u_oldVal_T ? u_alu_io_out : B_sampled; // @[Microcode.scala 63:15 91:17 92:25]
  wire [7:0] _GEN_76 = _u_oldVal_T ? C_sampled : _GEN_69; // @[Microcode.scala 64:15 91:17]
  wire [7:0] _GEN_77 = _u_oldVal_T ? D_sampled : _GEN_70; // @[Microcode.scala 65:15 91:17]
  wire [7:0] _GEN_78 = _u_oldVal_T ? E_sampled : _GEN_71; // @[Microcode.scala 66:15 91:17]
  wire [7:0] _GEN_79 = _u_oldVal_T ? H_sampled : _GEN_72; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_80 = _u_oldVal_T ? L_sampled : _GEN_73; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_81 = _u_oldVal_T ? A_sampled : _GEN_74; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _u_out_F_T_1 = {u_alu_io_flagZ,u_alu_io_flagN,u_alu_io_flagH,F_sampled[4],4'h0}; // @[Cat.scala 33:92]
  wire  _u_T_60 = 3'h0 == mcycle; // @[Microcode.scala 251:22]
  wire  _u_T_61 = tcycle == 2'h2; // @[Microcode.scala 255:23]
  wire [7:0] _GEN_112 = tcycle == 2'h2 ? io_memReadData : imm8; // @[Microcode.scala 255:{32,43} 69:15]
  wire [2:0] _GEN_113 = _u_T_1 ? 3'h1 : mcycle; // @[Microcode.scala 256:{32,50} 75:21]
  wire  _u_T_63 = 3'h1 == mcycle; // @[Microcode.scala 251:22]
  wire [7:0] _GEN_114 = _u_T_61 ? u_alu_io_out : imm8; // @[Microcode.scala 263:{32,43} 69:15]
  wire [2:0] _GEN_115 = _u_T_1 ? 3'h2 : mcycle; // @[Microcode.scala 264:{32,50} 75:21]
  wire  _u_T_67 = 3'h2 == mcycle; // @[Microcode.scala 251:22]
  wire [15:0] _GEN_117 = 3'h2 == mcycle ? u_HL : 16'h0; // @[Microcode.scala 251:22 267:27 78:21]
  wire [7:0] _GEN_119 = 3'h2 == mcycle ? imm8 : 8'h0; // @[Microcode.scala 251:22 269:27 81:21]
  wire [3:0] _GEN_121 = 3'h1 == mcycle ? 4'h8 : 4'h0; // @[Microcode.scala 108:21 251:22 259:21]
  wire [7:0] _GEN_122 = 3'h1 == mcycle ? imm8 : 8'h0; // @[Microcode.scala 106:21 251:22 260:21]
  wire [7:0] _GEN_124 = 3'h1 == mcycle ? _u_out_F_T_1 : F_sampled; // @[Microcode.scala 103:13 251:22 62:15]
  wire [7:0] _GEN_125 = 3'h1 == mcycle ? _GEN_114 : imm8; // @[Microcode.scala 251:22 69:15]
  wire [2:0] _GEN_126 = 3'h1 == mcycle ? _GEN_115 : mcycle; // @[Microcode.scala 251:22 75:21]
  wire [15:0] _GEN_127 = 3'h1 == mcycle ? 16'h0 : _GEN_117; // @[Microcode.scala 251:22 78:21]
  wire  _GEN_128 = 3'h1 == mcycle ? 1'h0 : 3'h2 == mcycle; // @[Microcode.scala 251:22 80:21]
  wire [7:0] _GEN_129 = 3'h1 == mcycle ? 8'h0 : _GEN_119; // @[Microcode.scala 251:22 81:21]
  wire  _GEN_130 = 3'h1 == mcycle ? 1'h0 : 3'h2 == mcycle & _u_T_1; // @[Microcode.scala 251:22 76:21]
  wire [15:0] _GEN_131 = 3'h0 == mcycle ? u_HL : _GEN_127; // @[Microcode.scala 251:22 253:22]
  wire [7:0] _GEN_133 = 3'h0 == mcycle ? _GEN_112 : _GEN_125; // @[Microcode.scala 251:22]
  wire [2:0] _GEN_134 = 3'h0 == mcycle ? _GEN_113 : _GEN_126; // @[Microcode.scala 251:22]
  wire [3:0] _GEN_135 = 3'h0 == mcycle ? 4'h0 : _GEN_121; // @[Microcode.scala 108:21 251:22]
  wire [7:0] _GEN_136 = 3'h0 == mcycle ? 8'h0 : _GEN_122; // @[Microcode.scala 106:21 251:22]
  wire [7:0] _GEN_138 = 3'h0 == mcycle ? F_sampled : _GEN_124; // @[Microcode.scala 251:22 62:15]
  wire  _GEN_139 = 3'h0 == mcycle ? 1'h0 : _GEN_128; // @[Microcode.scala 251:22 80:21]
  wire [7:0] _GEN_140 = 3'h0 == mcycle ? 8'h0 : _GEN_129; // @[Microcode.scala 251:22 81:21]
  wire  _GEN_141 = 3'h0 == mcycle ? 1'h0 : _GEN_130; // @[Microcode.scala 251:22 76:21]
  wire [3:0] _GEN_151 = _u_T_63 ? 4'h9 : 4'h0; // @[Microcode.scala 108:21 278:22 286:21]
  wire [3:0] _GEN_165 = _u_T_60 ? 4'h0 : _GEN_151; // @[Microcode.scala 108:21 278:22]
  wire  _u_T_82 = IR != 8'h76; // @[Microcode.scala 305:11]
  wire  _u_T_83 = IR >= 8'h40 & IR <= 8'h7f & _u_T_82; // @[Microcode.scala 304:49]
  wire [7:0] _u_T_84 = IR & 8'h7; // @[Microcode.scala 306:12]
  wire  _u_T_85 = _u_T_84 != 8'h6; // @[Microcode.scala 306:23]
  wire  _u_T_86 = _u_T_83 & _u_T_85; // @[Microcode.scala 305:24]
  wire [7:0] _u_T_87 = IR & 8'hf8; // @[Microcode.scala 307:12]
  wire  _u_T_88 = _u_T_87 != 8'h70; // @[Microcode.scala 307:23]
  wire  _u_T_89 = _u_T_86 & _u_T_88; // @[Microcode.scala 306:36]
  wire [7:0] _u_T_91 = 8'h0 == _u_T_84 ? B_sampled : 8'h0; // @[Mux.scala 81:58]
  wire [7:0] _u_T_93 = 8'h1 == _u_T_84 ? C_sampled : _u_T_91; // @[Mux.scala 81:58]
  wire [7:0] _u_T_95 = 8'h2 == _u_T_84 ? D_sampled : _u_T_93; // @[Mux.scala 81:58]
  wire [7:0] _u_T_97 = 8'h3 == _u_T_84 ? E_sampled : _u_T_95; // @[Mux.scala 81:58]
  wire [7:0] _u_T_99 = 8'h4 == _u_T_84 ? H_sampled : _u_T_97; // @[Mux.scala 81:58]
  wire [7:0] _u_T_101 = 8'h5 == _u_T_84 ? L_sampled : _u_T_99; // @[Mux.scala 81:58]
  wire [7:0] _u_T_103 = 8'h7 == _u_T_84 ? A_sampled : _u_T_101; // @[Mux.scala 81:58]
  wire [7:0] _GEN_172 = _u_oldVal_T_12 ? _u_T_103 : A_sampled; // @[Microcode.scala 61:15 91:17 98:25]
  wire [7:0] _GEN_173 = _u_oldVal_T_10 ? _u_T_103 : L_sampled; // @[Microcode.scala 68:15 91:17 97:25]
  wire [7:0] _GEN_174 = _u_oldVal_T_10 ? A_sampled : _GEN_172; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_175 = _u_oldVal_T_8 ? _u_T_103 : H_sampled; // @[Microcode.scala 67:15 91:17 96:25]
  wire [7:0] _GEN_176 = _u_oldVal_T_8 ? L_sampled : _GEN_173; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_177 = _u_oldVal_T_8 ? A_sampled : _GEN_174; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_178 = _u_oldVal_T_6 ? _u_T_103 : E_sampled; // @[Microcode.scala 66:15 91:17 95:25]
  wire [7:0] _GEN_179 = _u_oldVal_T_6 ? H_sampled : _GEN_175; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_180 = _u_oldVal_T_6 ? L_sampled : _GEN_176; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_181 = _u_oldVal_T_6 ? A_sampled : _GEN_177; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_182 = _u_oldVal_T_4 ? _u_T_103 : D_sampled; // @[Microcode.scala 65:15 91:17 94:25]
  wire [7:0] _GEN_183 = _u_oldVal_T_4 ? E_sampled : _GEN_178; // @[Microcode.scala 66:15 91:17]
  wire [7:0] _GEN_184 = _u_oldVal_T_4 ? H_sampled : _GEN_179; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_185 = _u_oldVal_T_4 ? L_sampled : _GEN_180; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_186 = _u_oldVal_T_4 ? A_sampled : _GEN_181; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_187 = _u_oldVal_T_2 ? _u_T_103 : C_sampled; // @[Microcode.scala 64:15 91:17 93:25]
  wire [7:0] _GEN_188 = _u_oldVal_T_2 ? D_sampled : _GEN_182; // @[Microcode.scala 65:15 91:17]
  wire [7:0] _GEN_189 = _u_oldVal_T_2 ? E_sampled : _GEN_183; // @[Microcode.scala 66:15 91:17]
  wire [7:0] _GEN_190 = _u_oldVal_T_2 ? H_sampled : _GEN_184; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_191 = _u_oldVal_T_2 ? L_sampled : _GEN_185; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_192 = _u_oldVal_T_2 ? A_sampled : _GEN_186; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_193 = _u_oldVal_T ? _u_T_103 : B_sampled; // @[Microcode.scala 63:15 91:17 92:25]
  wire [7:0] _GEN_194 = _u_oldVal_T ? C_sampled : _GEN_187; // @[Microcode.scala 64:15 91:17]
  wire [7:0] _GEN_195 = _u_oldVal_T ? D_sampled : _GEN_188; // @[Microcode.scala 65:15 91:17]
  wire [7:0] _GEN_196 = _u_oldVal_T ? E_sampled : _GEN_189; // @[Microcode.scala 66:15 91:17]
  wire [7:0] _GEN_197 = _u_oldVal_T ? H_sampled : _GEN_190; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_198 = _u_oldVal_T ? L_sampled : _GEN_191; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_199 = _u_oldVal_T ? A_sampled : _GEN_192; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_201 = _u_oldVal_T_12 ? imm8 : A_sampled; // @[Microcode.scala 61:15 91:17 98:25]
  wire [7:0] _GEN_202 = _u_oldVal_T_10 ? imm8 : L_sampled; // @[Microcode.scala 68:15 91:17 97:25]
  wire [7:0] _GEN_203 = _u_oldVal_T_10 ? A_sampled : _GEN_201; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_204 = _u_oldVal_T_8 ? imm8 : H_sampled; // @[Microcode.scala 67:15 91:17 96:25]
  wire [7:0] _GEN_205 = _u_oldVal_T_8 ? L_sampled : _GEN_202; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_206 = _u_oldVal_T_8 ? A_sampled : _GEN_203; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_207 = _u_oldVal_T_6 ? imm8 : E_sampled; // @[Microcode.scala 66:15 91:17 95:25]
  wire [7:0] _GEN_208 = _u_oldVal_T_6 ? H_sampled : _GEN_204; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_209 = _u_oldVal_T_6 ? L_sampled : _GEN_205; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_210 = _u_oldVal_T_6 ? A_sampled : _GEN_206; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_211 = _u_oldVal_T_4 ? imm8 : D_sampled; // @[Microcode.scala 65:15 91:17 94:25]
  wire [7:0] _GEN_212 = _u_oldVal_T_4 ? E_sampled : _GEN_207; // @[Microcode.scala 66:15 91:17]
  wire [7:0] _GEN_213 = _u_oldVal_T_4 ? H_sampled : _GEN_208; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_214 = _u_oldVal_T_4 ? L_sampled : _GEN_209; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_215 = _u_oldVal_T_4 ? A_sampled : _GEN_210; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_216 = _u_oldVal_T_2 ? imm8 : C_sampled; // @[Microcode.scala 64:15 91:17 93:25]
  wire [7:0] _GEN_217 = _u_oldVal_T_2 ? D_sampled : _GEN_211; // @[Microcode.scala 65:15 91:17]
  wire [7:0] _GEN_218 = _u_oldVal_T_2 ? E_sampled : _GEN_212; // @[Microcode.scala 66:15 91:17]
  wire [7:0] _GEN_219 = _u_oldVal_T_2 ? H_sampled : _GEN_213; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_220 = _u_oldVal_T_2 ? L_sampled : _GEN_214; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_221 = _u_oldVal_T_2 ? A_sampled : _GEN_215; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_222 = _u_oldVal_T ? imm8 : B_sampled; // @[Microcode.scala 63:15 91:17 92:25]
  wire [7:0] _GEN_223 = _u_oldVal_T ? C_sampled : _GEN_216; // @[Microcode.scala 64:15 91:17]
  wire [7:0] _GEN_224 = _u_oldVal_T ? D_sampled : _GEN_217; // @[Microcode.scala 65:15 91:17]
  wire [7:0] _GEN_225 = _u_oldVal_T ? E_sampled : _GEN_218; // @[Microcode.scala 66:15 91:17]
  wire [7:0] _GEN_226 = _u_oldVal_T ? H_sampled : _GEN_219; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_227 = _u_oldVal_T ? L_sampled : _GEN_220; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_228 = _u_oldVal_T ? A_sampled : _GEN_221; // @[Microcode.scala 61:15 91:17]
  wire  _u_T_133 = mcycle == 3'h0; // @[Microcode.scala 343:19]
  wire [15:0] _GEN_232 = mcycle == 3'h0 ? u_HL : 16'h0; // @[Microcode.scala 343:28 344:20 78:21]
  wire [7:0] _GEN_234 = mcycle == 3'h0 ? imm8 : 8'h0; // @[Microcode.scala 343:28 346:25 81:21]
  wire  _GEN_235 = mcycle == 3'h0 & _u_T_1; // @[Microcode.scala 343:28 76:21]
  wire  _u_T_136 = 2'h0 == tcycle; // @[Microcode.scala 357:22]
  wire  _u_T_137 = 2'h1 == tcycle; // @[Microcode.scala 357:22]
  wire  _u_T_138 = 2'h2 == tcycle; // @[Microcode.scala 357:22]
  wire [7:0] _GEN_237 = 2'h2 == tcycle ? io_memReadData : A_sampled; // @[Microcode.scala 357:22 361:17 61:15]
  wire [7:0] _GEN_238 = 2'h2 == tcycle ? _u_result_T_8[15:8] : H_sampled; // @[Microcode.scala 357:22 363:17 67:15]
  wire [7:0] _GEN_239 = 2'h2 == tcycle ? _u_result_T_8[7:0] : L_sampled; // @[Microcode.scala 357:22 364:17 68:15]
  wire  _GEN_240 = 2'h2 == tcycle ? 1'h0 : 2'h3 == tcycle; // @[Microcode.scala 357:22 76:21]
  wire [7:0] _GEN_242 = 2'h1 == tcycle ? A_sampled : _GEN_237; // @[Microcode.scala 357:22 61:15]
  wire [7:0] _GEN_243 = 2'h1 == tcycle ? H_sampled : _GEN_238; // @[Microcode.scala 357:22 67:15]
  wire [7:0] _GEN_244 = 2'h1 == tcycle ? L_sampled : _GEN_239; // @[Microcode.scala 357:22 68:15]
  wire  _GEN_245 = 2'h1 == tcycle ? 1'h0 : _GEN_240; // @[Microcode.scala 357:22 76:21]
  wire [15:0] _GEN_246 = 2'h0 == tcycle ? u_HL : 16'h0; // @[Microcode.scala 357:22 358:30 78:21]
  wire  _GEN_247 = 2'h0 == tcycle | 2'h1 == tcycle; // @[Microcode.scala 357:22 358:48]
  wire [7:0] _GEN_248 = 2'h0 == tcycle ? A_sampled : _GEN_242; // @[Microcode.scala 357:22 61:15]
  wire [7:0] _GEN_249 = 2'h0 == tcycle ? H_sampled : _GEN_243; // @[Microcode.scala 357:22 67:15]
  wire [7:0] _GEN_250 = 2'h0 == tcycle ? L_sampled : _GEN_244; // @[Microcode.scala 357:22 68:15]
  wire  _GEN_251 = 2'h0 == tcycle ? 1'h0 : _GEN_245; // @[Microcode.scala 357:22 76:21]
  wire [7:0] _GEN_254 = _u_T_138 ? _u_result_T_26[15:8] : H_sampled; // @[Microcode.scala 373:22 379:17 67:15]
  wire [7:0] _GEN_255 = _u_T_138 ? _u_result_T_26[7:0] : L_sampled; // @[Microcode.scala 373:22 380:17 68:15]
  wire [7:0] _GEN_259 = _u_T_137 ? H_sampled : _GEN_254; // @[Microcode.scala 373:22 67:15]
  wire [7:0] _GEN_260 = _u_T_137 ? L_sampled : _GEN_255; // @[Microcode.scala 373:22 68:15]
  wire [7:0] _GEN_265 = _u_T_136 ? H_sampled : _GEN_259; // @[Microcode.scala 373:22 67:15]
  wire [7:0] _GEN_266 = _u_T_136 ? L_sampled : _GEN_260; // @[Microcode.scala 373:22 68:15]
  wire  _u_T_146 = tcycle == 2'h0; // @[Microcode.scala 394:19]
  wire [15:0] _GEN_268 = tcycle == 2'h0 ? u_HL : 16'h0; // @[Microcode.scala 394:28 395:25 78:21]
  wire [7:0] _GEN_270 = tcycle == 2'h0 ? A_sampled : 8'h0; // @[Microcode.scala 394:28 397:25 81:21]
  wire [15:0] _u_mcBus_memAddr_T = {8'hff,C_sampled}; // @[Cat.scala 33:92]
  wire [15:0] _GEN_282 = _u_T_136 ? _u_mcBus_memAddr_T : 16'h0; // @[Microcode.scala 421:22 423:22 78:21]
  wire [15:0] _GEN_286 = _u_T_146 ? _u_mcBus_memAddr_T : 16'h0; // @[Microcode.scala 435:28 436:25 78:21]
  wire [15:0] _u_mcBus_memAddr_T_2 = {8'hff,imm8}; // @[Cat.scala 33:92]
  wire [15:0] _GEN_290 = _u_T_146 ? _u_mcBus_memAddr_T_2 : 16'h0; // @[Microcode.scala 446:28 447:25 78:21]
  wire [15:0] _GEN_300 = _u_T_136 ? _u_mcBus_memAddr_T_2 : 16'h0; // @[Microcode.scala 457:22 459:22 78:21]
  wire  _u_T_172 = IR == 8'h5e; // @[Microcode.scala 472:10]
  wire  _u_T_173 = IR == 8'h46 | IR == 8'h4e | IR == 8'h56 | _u_T_172; // @[Microcode.scala 471:67]
  wire [7:0] _GEN_304 = _u_oldVal_T_12 ? io_memReadData : A_sampled; // @[Microcode.scala 61:15 91:17 98:25]
  wire [7:0] _GEN_305 = _u_oldVal_T_10 ? io_memReadData : L_sampled; // @[Microcode.scala 68:15 91:17 97:25]
  wire [7:0] _GEN_306 = _u_oldVal_T_10 ? A_sampled : _GEN_304; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_307 = _u_oldVal_T_8 ? io_memReadData : H_sampled; // @[Microcode.scala 67:15 91:17 96:25]
  wire [7:0] _GEN_308 = _u_oldVal_T_8 ? L_sampled : _GEN_305; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_309 = _u_oldVal_T_8 ? A_sampled : _GEN_306; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_310 = _u_oldVal_T_6 ? io_memReadData : E_sampled; // @[Microcode.scala 66:15 91:17 95:25]
  wire [7:0] _GEN_311 = _u_oldVal_T_6 ? H_sampled : _GEN_307; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_312 = _u_oldVal_T_6 ? L_sampled : _GEN_308; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_313 = _u_oldVal_T_6 ? A_sampled : _GEN_309; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_314 = _u_oldVal_T_4 ? io_memReadData : D_sampled; // @[Microcode.scala 65:15 91:17 94:25]
  wire [7:0] _GEN_315 = _u_oldVal_T_4 ? E_sampled : _GEN_310; // @[Microcode.scala 66:15 91:17]
  wire [7:0] _GEN_316 = _u_oldVal_T_4 ? H_sampled : _GEN_311; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_317 = _u_oldVal_T_4 ? L_sampled : _GEN_312; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_318 = _u_oldVal_T_4 ? A_sampled : _GEN_313; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_319 = _u_oldVal_T_2 ? io_memReadData : C_sampled; // @[Microcode.scala 64:15 91:17 93:25]
  wire [7:0] _GEN_320 = _u_oldVal_T_2 ? D_sampled : _GEN_314; // @[Microcode.scala 65:15 91:17]
  wire [7:0] _GEN_321 = _u_oldVal_T_2 ? E_sampled : _GEN_315; // @[Microcode.scala 66:15 91:17]
  wire [7:0] _GEN_322 = _u_oldVal_T_2 ? H_sampled : _GEN_316; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_323 = _u_oldVal_T_2 ? L_sampled : _GEN_317; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_324 = _u_oldVal_T_2 ? A_sampled : _GEN_318; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _GEN_325 = _u_oldVal_T ? io_memReadData : B_sampled; // @[Microcode.scala 63:15 91:17 92:25]
  wire [7:0] _GEN_326 = _u_oldVal_T ? C_sampled : _GEN_319; // @[Microcode.scala 64:15 91:17]
  wire [7:0] _GEN_327 = _u_oldVal_T ? D_sampled : _GEN_320; // @[Microcode.scala 65:15 91:17]
  wire [7:0] _GEN_328 = _u_oldVal_T ? E_sampled : _GEN_321; // @[Microcode.scala 66:15 91:17]
  wire [7:0] _GEN_329 = _u_oldVal_T ? H_sampled : _GEN_322; // @[Microcode.scala 67:15 91:17]
  wire [7:0] _GEN_330 = _u_oldVal_T ? L_sampled : _GEN_323; // @[Microcode.scala 68:15 91:17]
  wire [7:0] _GEN_331 = _u_oldVal_T ? A_sampled : _GEN_324; // @[Microcode.scala 61:15 91:17]
  wire [7:0] _u_out_F_T_5 = {u_alu_io_flagZ,u_alu_io_flagN,u_alu_io_flagH,u_alu_io_flagC,4'h0}; // @[Cat.scala 33:92]
  wire [8:0] u_off = {imm8[7],imm8}; // @[Microcode.scala 647:42]
  wire [15:0] _GEN_2229 = {{7{u_off[8]}},u_off}; // @[Microcode.scala 648:32]
  wire [15:0] _u_out_PC_T_4 = $signed(PC_sampled) + $signed(_GEN_2229); // @[Microcode.scala 648:39]
  wire [15:0] _u_regPair_T_3 = {A_sampled,F_sampled}; // @[Cat.scala 33:92]
  wire [15:0] u_regPair = _u_T_9 ? _u_regPair_T_3 : _u_operand_T_8; // @[Mux.scala 81:58]
  wire [15:0] _GEN_351 = _u_T_63 ? _u_result_T_28 : 16'h0; // @[Microcode.scala 670:22 683:27 78:21]
  wire [7:0] _GEN_353 = _u_T_63 ? u_regPair[7:0] : 8'h0; // @[Microcode.scala 670:22 685:27 81:21]
  wire [15:0] _GEN_354 = _u_T_63 ? _u_result_T_28 : SP_sampled; // @[Microcode.scala 60:15 670:22 686:18]
  wire [15:0] _GEN_356 = _u_T_60 ? _u_result_T_28 : _GEN_351; // @[Microcode.scala 670:22 673:27]
  wire  _GEN_357 = _u_T_60 | _u_T_63; // @[Microcode.scala 670:22 674:27]
  wire [7:0] _GEN_358 = _u_T_60 ? u_regPair[15:8] : _GEN_353; // @[Microcode.scala 670:22 675:27]
  wire [15:0] _GEN_359 = _u_T_60 ? _u_result_T_28 : _GEN_354; // @[Microcode.scala 670:22 676:18]
  wire [2:0] _GEN_360 = _u_T_60 ? _GEN_113 : mcycle; // @[Microcode.scala 670:22 75:21]
  wire  _GEN_361 = _u_T_60 ? 1'h0 : _u_T_63 & _u_T_1; // @[Microcode.scala 670:22 76:21]
  wire [7:0] _GEN_363 = _u_T_9 ? io_memReadData : A_sampled; // @[Microcode.scala 61:15 716:22 720:29]
  wire [7:0] _GEN_364 = _u_T_9 ? imm8 : F_sampled; // @[Microcode.scala 62:15 716:22 720:44]
  wire [7:0] _GEN_365 = _u_T_8 ? io_memReadData : H_sampled; // @[Microcode.scala 67:15 716:22 719:29]
  wire [7:0] _GEN_366 = _u_T_8 ? imm8 : L_sampled; // @[Microcode.scala 68:15 716:22 719:44]
  wire [7:0] _GEN_367 = _u_T_8 ? A_sampled : _GEN_363; // @[Microcode.scala 61:15 716:22]
  wire [7:0] _GEN_368 = _u_T_8 ? F_sampled : _GEN_364; // @[Microcode.scala 62:15 716:22]
  wire [7:0] _GEN_369 = _u_T_7 ? io_memReadData : D_sampled; // @[Microcode.scala 65:15 716:22 718:29]
  wire [7:0] _GEN_370 = _u_T_7 ? imm8 : E_sampled; // @[Microcode.scala 66:15 716:22 718:44]
  wire [7:0] _GEN_371 = _u_T_7 ? H_sampled : _GEN_365; // @[Microcode.scala 67:15 716:22]
  wire [7:0] _GEN_372 = _u_T_7 ? L_sampled : _GEN_366; // @[Microcode.scala 68:15 716:22]
  wire [7:0] _GEN_373 = _u_T_7 ? A_sampled : _GEN_367; // @[Microcode.scala 61:15 716:22]
  wire [7:0] _GEN_374 = _u_T_7 ? F_sampled : _GEN_368; // @[Microcode.scala 62:15 716:22]
  wire [7:0] _GEN_375 = _u_T_6 ? io_memReadData : B_sampled; // @[Microcode.scala 63:15 716:22 717:29]
  wire [7:0] _GEN_376 = _u_T_6 ? imm8 : C_sampled; // @[Microcode.scala 64:15 716:22 717:44]
  wire [7:0] _GEN_377 = _u_T_6 ? D_sampled : _GEN_369; // @[Microcode.scala 65:15 716:22]
  wire [7:0] _GEN_378 = _u_T_6 ? E_sampled : _GEN_370; // @[Microcode.scala 66:15 716:22]
  wire [7:0] _GEN_379 = _u_T_6 ? H_sampled : _GEN_371; // @[Microcode.scala 67:15 716:22]
  wire [7:0] _GEN_380 = _u_T_6 ? L_sampled : _GEN_372; // @[Microcode.scala 68:15 716:22]
  wire [7:0] _GEN_381 = _u_T_6 ? A_sampled : _GEN_373; // @[Microcode.scala 61:15 716:22]
  wire [7:0] _GEN_382 = _u_T_6 ? F_sampled : _GEN_374; // @[Microcode.scala 62:15 716:22]
  wire [15:0] _GEN_384 = _u_T_63 ? SP_sampled : 16'h0; // @[Microcode.scala 700:22 711:22 78:21]
  wire [7:0] _GEN_386 = _u_T_63 ? _GEN_375 : B_sampled; // @[Microcode.scala 63:15 700:22]
  wire [7:0] _GEN_387 = _u_T_63 ? _GEN_376 : C_sampled; // @[Microcode.scala 64:15 700:22]
  wire [7:0] _GEN_388 = _u_T_63 ? _GEN_377 : D_sampled; // @[Microcode.scala 65:15 700:22]
  wire [7:0] _GEN_389 = _u_T_63 ? _GEN_378 : E_sampled; // @[Microcode.scala 66:15 700:22]
  wire [7:0] _GEN_390 = _u_T_63 ? _GEN_379 : H_sampled; // @[Microcode.scala 67:15 700:22]
  wire [7:0] _GEN_391 = _u_T_63 ? _GEN_380 : L_sampled; // @[Microcode.scala 68:15 700:22]
  wire [7:0] _GEN_392 = _u_T_63 ? _GEN_381 : A_sampled; // @[Microcode.scala 61:15 700:22]
  wire [7:0] _GEN_393 = _u_T_63 ? _GEN_382 : F_sampled; // @[Microcode.scala 62:15 700:22]
  wire [15:0] _GEN_394 = _u_T_63 ? _u_result_T_10 : SP_sampled; // @[Microcode.scala 60:15 700:22 722:18]
  wire [15:0] _GEN_396 = _u_T_60 ? SP_sampled : _GEN_384; // @[Microcode.scala 700:22 702:22]
  wire [7:0] _GEN_398 = _u_T_60 ? io_memReadData : imm8; // @[Microcode.scala 69:15 700:22 704:20]
  wire [15:0] _GEN_399 = _u_T_60 ? _u_result_T_10 : _GEN_394; // @[Microcode.scala 700:22 705:18]
  wire [7:0] _GEN_401 = _u_T_60 ? B_sampled : _GEN_386; // @[Microcode.scala 63:15 700:22]
  wire [7:0] _GEN_402 = _u_T_60 ? C_sampled : _GEN_387; // @[Microcode.scala 64:15 700:22]
  wire [7:0] _GEN_403 = _u_T_60 ? D_sampled : _GEN_388; // @[Microcode.scala 65:15 700:22]
  wire [7:0] _GEN_404 = _u_T_60 ? E_sampled : _GEN_389; // @[Microcode.scala 66:15 700:22]
  wire [7:0] _GEN_405 = _u_T_60 ? H_sampled : _GEN_390; // @[Microcode.scala 67:15 700:22]
  wire [7:0] _GEN_406 = _u_T_60 ? L_sampled : _GEN_391; // @[Microcode.scala 68:15 700:22]
  wire [7:0] _GEN_407 = _u_T_60 ? A_sampled : _GEN_392; // @[Microcode.scala 61:15 700:22]
  wire [7:0] _GEN_408 = _u_T_60 ? F_sampled : _GEN_393; // @[Microcode.scala 62:15 700:22]
  wire  _u_T_252 = IR == 8'hcd; // @[Microcode.scala 733:19]
  wire [15:0] _GEN_413 = _u_T_67 ? imm16 : PC_sampled; // @[Microcode.scala 59:15 734:22 752:18]
  wire [7:0] _GEN_417 = _u_T_63 ? PC_sampled[7:0] : 8'h0; // @[Microcode.scala 734:22 747:27 81:21]
  wire [15:0] _GEN_420 = _u_T_63 ? PC_sampled : _GEN_413; // @[Microcode.scala 59:15 734:22]
  wire [7:0] _GEN_424 = _u_T_60 ? PC_sampled[15:8] : _GEN_417; // @[Microcode.scala 734:22 739:27]
  wire [15:0] _GEN_427 = _u_T_60 ? PC_sampled : _GEN_420; // @[Microcode.scala 59:15 734:22]
  wire  _u_T_259 = IR == 8'hc9; // @[Microcode.scala 760:19]
  wire [15:0] _GEN_429 = _u_T_1 ? _u_result_T_10 : SP_sampled; // @[Microcode.scala 60:15 766:32 767:20]
  wire [15:0] _u_out_PC_T_5 = {io_memReadData,imm8}; // @[Cat.scala 33:92]
  wire [15:0] _GEN_435 = _u_T_63 ? _u_out_PC_T_5 : PC_sampled; // @[Microcode.scala 59:15 761:22 775:18]
  wire [15:0] _GEN_436 = _u_T_63 ? _GEN_429 : SP_sampled; // @[Microcode.scala 60:15 761:22]
  wire [15:0] _GEN_441 = _u_T_60 ? _GEN_429 : _GEN_436; // @[Microcode.scala 761:22]
  wire [15:0] _GEN_443 = _u_T_60 ? PC_sampled : _GEN_435; // @[Microcode.scala 59:15 761:22]
  wire [7:0] u_vec = IR & 8'h38; // @[Microcode.scala 817:21]
  wire [15:0] _GEN_468 = _u_T_63 ? {{8'd0}, u_vec} : PC_sampled; // @[Microcode.scala 59:15 818:22 832:18]
  wire [15:0] _GEN_476 = _u_T_60 ? PC_sampled : _GEN_468; // @[Microcode.scala 59:15 818:22]
  wire [7:0] _u_T_279 = IR & 8'he7; // @[Microcode.scala 856:20]
  wire [4:0] u_cc = IR[7:3] & 5'h3; // @[Microcode.scala 857:26]
  wire  _u_condition_T = ~F_sampled[7]; // @[Microcode.scala 862:16]
  wire  _u_condition_T_1 = ~F_sampled[4]; // @[Microcode.scala 864:16]
  wire  _u_condition_T_5 = 5'h1 == u_cc ? F_sampled[7] : 5'h0 == u_cc & _u_condition_T; // @[Mux.scala 81:58]
  wire  _u_condition_T_7 = 5'h2 == u_cc ? _u_condition_T_1 : _u_condition_T_5; // @[Mux.scala 81:58]
  wire  u_condition = 5'h3 == u_cc ? F_sampled[4] : _u_condition_T_7; // @[Mux.scala 81:58]
  wire [15:0] _GEN_480 = u_condition ? _u_out_PC_T_4 : PC_sampled; // @[Microcode.scala 59:15 868:23 870:16]
  wire [15:0] _GEN_482 = u_condition ? imm16 : PC_sampled; // @[Microcode.scala 59:15 889:23 890:16]
  wire [15:0] _GEN_489 = _u_T_63 ? imm16 : PC_sampled; // @[Microcode.scala 59:15 911:24 925:20]
  wire [15:0] _GEN_497 = _u_T_60 ? PC_sampled : _GEN_489; // @[Microcode.scala 59:15 911:24]
  wire [15:0] _GEN_500 = u_condition ? _GEN_356 : 16'h0; // @[Microcode.scala 78:21 910:23]
  wire  _GEN_501 = u_condition & _GEN_357; // @[Microcode.scala 80:21 910:23]
  wire [7:0] _GEN_502 = u_condition ? _GEN_424 : 8'h0; // @[Microcode.scala 81:21 910:23]
  wire [15:0] _GEN_503 = u_condition ? _GEN_359 : SP_sampled; // @[Microcode.scala 60:15 910:23]
  wire [2:0] _GEN_504 = u_condition ? _GEN_360 : mcycle; // @[Microcode.scala 75:21 910:23]
  wire [15:0] _GEN_505 = u_condition ? _GEN_497 : PC_sampled; // @[Microcode.scala 59:15 910:23]
  wire  _GEN_506 = u_condition ? _GEN_361 : _u_T_1; // @[Microcode.scala 910:23]
  wire [15:0] _GEN_524 = u_condition ? _GEN_396 : 16'h0; // @[Microcode.scala 78:21 950:23]
  wire [7:0] _GEN_526 = u_condition ? _GEN_398 : imm8; // @[Microcode.scala 69:15 950:23]
  wire [15:0] _GEN_527 = u_condition ? _GEN_441 : SP_sampled; // @[Microcode.scala 60:15 950:23]
  wire [15:0] _GEN_529 = u_condition ? _GEN_443 : PC_sampled; // @[Microcode.scala 59:15 950:23]
  wire [7:0] _u_out_F_T_20 = {F_sampled[7],1'h0,1'h0,5'h10}; // @[Cat.scala 33:92]
  wire [7:0] _u_out_F_T_24 = {F_sampled[7],1'h0,1'h0,_u_condition_T_1,4'h0}; // @[Cat.scala 33:92]
  wire [7:0] _u_out_A_T = ~A_sampled; // @[Microcode.scala 995:16]
  wire [7:0] _u_out_F_T_27 = {F_sampled[7],1'h1,1'h1,F_sampled[4],4'h0}; // @[Cat.scala 33:92]
  wire  u_N = F_sampled[6]; // @[Microcode.scala 1002:19]
  wire  u_H = F_sampled[5]; // @[Microcode.scala 1003:19]
  wire [6:0] _GEN_535 = F_sampled[4] | A_sampled > 8'h99 ? 7'h60 : 7'h0; // @[Microcode.scala 1019:22 1023:36 1024:24]
  wire  _GEN_536 = F_sampled[4] | A_sampled > 8'h99 | F_sampled[4]; // @[Microcode.scala 1012:16 1023:36 1025:20]
  wire [7:0] _u_T_311 = A_sampled & 8'hf; // @[Microcode.scala 1029:26]
  wire [2:0] _GEN_537 = u_H | _u_T_311 > 8'h9 ? 3'h6 : 3'h0; // @[Microcode.scala 1020:22 1029:47 1030:24]
  wire [7:0] u_upperCorrect = {{1'd0}, _GEN_535}; // @[Microcode.scala 1016:32]
  wire [7:0] u_lowerCorrect = {{5'd0}, _GEN_537}; // @[Microcode.scala 1017:32]
  wire [7:0] _u_correction_T_1 = u_upperCorrect + u_lowerCorrect; // @[Microcode.scala 1033:36]
  wire [6:0] _GEN_538 = F_sampled[4] ? 7'h60 : 7'h0; // @[Microcode.scala 1044:17 1041:22 1045:24]
  wire [7:0] u_upperCorrect_1 = {{1'd0}, _GEN_538}; // @[Microcode.scala 1038:32]
  wire [2:0] _GEN_539 = u_H ? 3'h6 : 3'h0; // @[Microcode.scala 1047:17 1042:22 1048:24]
  wire [7:0] u_lowerCorrect_1 = {{5'd0}, _GEN_539}; // @[Microcode.scala 1039:32]
  wire [7:0] _u_correction_T_3 = u_upperCorrect_1 + u_lowerCorrect_1; // @[Microcode.scala 1051:36]
  wire [7:0] u_correction = ~u_N ? _u_correction_T_1 : _u_correction_T_3; // @[Microcode.scala 1014:16 1033:20 1051:20]
  wire [7:0] _u_adjusted_T_1 = A_sampled + u_correction; // @[Microcode.scala 1034:26]
  wire [7:0] _u_adjusted_T_3 = A_sampled - u_correction; // @[Microcode.scala 1052:26]
  wire  u_newCarry = ~u_N ? _GEN_536 : F_sampled[4]; // @[Microcode.scala 1014:16 1053:18]
  wire [7:0] u_adjusted = ~u_N ? _u_adjusted_T_1 : _u_adjusted_T_3; // @[Microcode.scala 1014:16 1034:18 1052:18]
  wire  _u_T_314 = u_adjusted == 8'h0; // @[Microcode.scala 1057:25]
  wire [7:0] _u_out_F_T_28 = {_u_T_314,u_N,1'h0,u_newCarry,4'h0}; // @[Cat.scala 33:92]
  wire [7:0] _GEN_544 = _u_T_1 ? io_memReadData : A_sampled; // @[Microcode.scala 1070:30 1071:17 61:15]
  wire [15:0] _GEN_546 = _u_T_133 ? imm16 : 16'h0; // @[Microcode.scala 1066:28 1067:20 78:21]
  wire [7:0] _GEN_548 = _u_T_133 ? _GEN_544 : A_sampled; // @[Microcode.scala 1066:28 61:15]
  wire  _GEN_552 = _u_T_133 & _u_T_61; // @[Microcode.scala 1082:28 1084:21 80:21]
  wire [7:0] _GEN_553 = _u_T_133 ? A_sampled : 8'h0; // @[Microcode.scala 1082:28 1085:25 81:21]
  wire  _u_T_325 = mcycle == 3'h1; // @[Microcode.scala 1107:25]
  wire [15:0] _u_mcBus_memAddr_T_5 = imm16 + 16'h1; // @[Microcode.scala 1108:32]
  wire [15:0] _GEN_557 = mcycle == 3'h1 ? _u_mcBus_memAddr_T_5 : 16'h0; // @[Microcode.scala 1107:34 1108:20 78:21]
  wire  _GEN_558 = mcycle == 3'h1 & _u_T_61; // @[Microcode.scala 1107:34 1109:21 80:21]
  wire [7:0] _GEN_559 = mcycle == 3'h1 ? SP_sampled[15:8] : 8'h0; // @[Microcode.scala 1107:34 1110:25 81:21]
  wire  _GEN_560 = mcycle == 3'h1 & _u_T_1; // @[Microcode.scala 1107:34 76:21]
  wire [15:0] _GEN_561 = _u_T_133 ? imm16 : _GEN_557; // @[Microcode.scala 1099:28 1100:20]
  wire  _GEN_562 = _u_T_133 ? _u_T_61 : _GEN_558; // @[Microcode.scala 1099:28 1101:21]
  wire [7:0] _GEN_563 = _u_T_133 ? SP_sampled[7:0] : _GEN_559; // @[Microcode.scala 1099:28 1102:25]
  wire [2:0] _GEN_564 = _u_T_133 ? _GEN_113 : mcycle; // @[Microcode.scala 1099:28 75:21]
  wire  _GEN_565 = _u_T_133 ? 1'h0 : _GEN_560; // @[Microcode.scala 1099:28 76:21]
  wire [7:0] _u_offset_signed_T_2 = imm8[7] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [15:0] u_offset_signed = {_u_offset_signed_T_2,imm8}; // @[Microcode.scala 1127:61]
  wire [8:0] u_lower_sum = SP_sampled[7:0] + imm8; // @[Microcode.scala 1132:35]
  wire [4:0] _u_hc_T_2 = SP_sampled[3:0] + imm8[3:0]; // @[Microcode.scala 1133:30]
  wire  u_hc = _u_hc_T_2[4]; // @[Microcode.scala 1133:47]
  wire  u_cy = u_lower_sum[8]; // @[Microcode.scala 1134:25]
  wire [15:0] _u_out_H_T_8 = $signed(SP_sampled) + $signed(u_offset_signed); // @[Microcode.scala 1136:23]
  wire [7:0] _u_out_F_T_29 = {2'h0,u_hc,u_cy,4'h0}; // @[Cat.scala 33:92]
  wire [15:0] _GEN_570 = IR == 8'he8 ? _u_out_H_T_8 : SP_sampled; // @[Microcode.scala 1143:32 1153:14 60:15]
  wire [7:0] _GEN_571 = IR == 8'he8 ? _u_out_F_T_29 : F_sampled; // @[Microcode.scala 1143:32 1154:13 62:15]
  wire  _GEN_572 = IR == 8'he8 ? _u_T_1 : _u_T_1; // @[Microcode.scala 1143:32]
  wire [7:0] _GEN_573 = IR == 8'hf8 ? _u_out_H_T_8[15:8] : H_sampled; // @[Microcode.scala 1126:32 1136:13 67:15]
  wire [7:0] _GEN_574 = IR == 8'hf8 ? _u_out_H_T_8[7:0] : L_sampled; // @[Microcode.scala 1126:32 1137:13 68:15]
  wire [7:0] _GEN_575 = IR == 8'hf8 ? _u_out_F_T_29 : _GEN_571; // @[Microcode.scala 1126:32 1138:13]
  wire  _GEN_576 = IR == 8'hf8 ? _u_T_1 : _GEN_572; // @[Microcode.scala 1126:32]
  wire [15:0] _GEN_577 = IR == 8'hf8 ? SP_sampled : _GEN_570; // @[Microcode.scala 1126:32 60:15]
  wire [15:0] _GEN_578 = IR == 8'hf9 ? u_HL : _GEN_577; // @[Microcode.scala 1121:32 1122:14]
  wire  _GEN_579 = IR == 8'hf9 ? _u_T_1 : _GEN_576; // @[Microcode.scala 1121:32]
  wire [7:0] _GEN_580 = IR == 8'hf9 ? H_sampled : _GEN_573; // @[Microcode.scala 1121:32 67:15]
  wire [7:0] _GEN_581 = IR == 8'hf9 ? L_sampled : _GEN_574; // @[Microcode.scala 1121:32 68:15]
  wire [7:0] _GEN_582 = IR == 8'hf9 ? F_sampled : _GEN_575; // @[Microcode.scala 1121:32 62:15]
  wire [15:0] _GEN_583 = IR == 8'h8 ? _GEN_561 : 16'h0; // @[Microcode.scala 1098:32 78:21]
  wire  _GEN_584 = IR == 8'h8 & _GEN_562; // @[Microcode.scala 1098:32 80:21]
  wire [7:0] _GEN_585 = IR == 8'h8 ? _GEN_563 : 8'h0; // @[Microcode.scala 1098:32 81:21]
  wire [2:0] _GEN_586 = IR == 8'h8 ? _GEN_564 : mcycle; // @[Microcode.scala 1098:32 75:21]
  wire  _GEN_587 = IR == 8'h8 ? _GEN_565 : _GEN_579; // @[Microcode.scala 1098:32]
  wire [15:0] _GEN_588 = IR == 8'h8 ? SP_sampled : _GEN_578; // @[Microcode.scala 1098:32 60:15]
  wire [7:0] _GEN_589 = IR == 8'h8 ? H_sampled : _GEN_580; // @[Microcode.scala 1098:32 67:15]
  wire [7:0] _GEN_590 = IR == 8'h8 ? L_sampled : _GEN_581; // @[Microcode.scala 1098:32 68:15]
  wire [7:0] _GEN_591 = IR == 8'h8 ? F_sampled : _GEN_582; // @[Microcode.scala 1098:32 62:15]
  wire [15:0] _GEN_592 = IR == 8'hea ? _GEN_546 : _GEN_583; // @[Microcode.scala 1081:32]
  wire  _GEN_593 = IR == 8'hea ? _GEN_552 : _GEN_584; // @[Microcode.scala 1081:32]
  wire [7:0] _GEN_594 = IR == 8'hea ? _GEN_553 : _GEN_585; // @[Microcode.scala 1081:32]
  wire  _GEN_595 = IR == 8'hea ? _GEN_235 : _GEN_587; // @[Microcode.scala 1081:32]
  wire [2:0] _GEN_596 = IR == 8'hea ? mcycle : _GEN_586; // @[Microcode.scala 1081:32 75:21]
  wire [15:0] _GEN_597 = IR == 8'hea ? SP_sampled : _GEN_588; // @[Microcode.scala 1081:32 60:15]
  wire [7:0] _GEN_598 = IR == 8'hea ? H_sampled : _GEN_589; // @[Microcode.scala 1081:32 67:15]
  wire [7:0] _GEN_599 = IR == 8'hea ? L_sampled : _GEN_590; // @[Microcode.scala 1081:32 68:15]
  wire [7:0] _GEN_600 = IR == 8'hea ? F_sampled : _GEN_591; // @[Microcode.scala 1081:32 62:15]
  wire [15:0] _GEN_601 = IR == 8'hfa ? _GEN_546 : _GEN_592; // @[Microcode.scala 1065:32]
  wire  _GEN_602 = IR == 8'hfa & _u_T_133; // @[Microcode.scala 1065:32 79:21]
  wire [7:0] _GEN_603 = IR == 8'hfa ? _GEN_548 : A_sampled; // @[Microcode.scala 1065:32 61:15]
  wire  _GEN_604 = IR == 8'hfa ? _GEN_235 : _GEN_595; // @[Microcode.scala 1065:32]
  wire  _GEN_605 = IR == 8'hfa ? 1'h0 : _GEN_593; // @[Microcode.scala 1065:32 80:21]
  wire [7:0] _GEN_606 = IR == 8'hfa ? 8'h0 : _GEN_594; // @[Microcode.scala 1065:32 81:21]
  wire [2:0] _GEN_607 = IR == 8'hfa ? mcycle : _GEN_596; // @[Microcode.scala 1065:32 75:21]
  wire [15:0] _GEN_608 = IR == 8'hfa ? SP_sampled : _GEN_597; // @[Microcode.scala 1065:32 60:15]
  wire [7:0] _GEN_609 = IR == 8'hfa ? H_sampled : _GEN_598; // @[Microcode.scala 1065:32 67:15]
  wire [7:0] _GEN_610 = IR == 8'hfa ? L_sampled : _GEN_599; // @[Microcode.scala 1065:32 68:15]
  wire [7:0] _GEN_611 = IR == 8'hfa ? F_sampled : _GEN_600; // @[Microcode.scala 1065:32 62:15]
  wire [7:0] _GEN_612 = IR == 8'h27 ? u_adjusted : _GEN_603; // @[Microcode.scala 1001:32 1056:13]
  wire [7:0] _GEN_613 = IR == 8'h27 ? _u_out_F_T_28 : _GEN_611; // @[Microcode.scala 1001:32 103:13]
  wire  _GEN_614 = IR == 8'h27 ? _u_T_1 : _GEN_604; // @[Microcode.scala 1001:32]
  wire [15:0] _GEN_615 = IR == 8'h27 ? 16'h0 : _GEN_601; // @[Microcode.scala 1001:32 78:21]
  wire  _GEN_616 = IR == 8'h27 ? 1'h0 : _GEN_602; // @[Microcode.scala 1001:32 79:21]
  wire  _GEN_617 = IR == 8'h27 ? 1'h0 : _GEN_605; // @[Microcode.scala 1001:32 80:21]
  wire [7:0] _GEN_618 = IR == 8'h27 ? 8'h0 : _GEN_606; // @[Microcode.scala 1001:32 81:21]
  wire [2:0] _GEN_619 = IR == 8'h27 ? mcycle : _GEN_607; // @[Microcode.scala 1001:32 75:21]
  wire [15:0] _GEN_620 = IR == 8'h27 ? SP_sampled : _GEN_608; // @[Microcode.scala 1001:32 60:15]
  wire [7:0] _GEN_621 = IR == 8'h27 ? H_sampled : _GEN_609; // @[Microcode.scala 1001:32 67:15]
  wire [7:0] _GEN_622 = IR == 8'h27 ? L_sampled : _GEN_610; // @[Microcode.scala 1001:32 68:15]
  wire [7:0] _GEN_623 = IR == 8'h2f ? _u_out_A_T : _GEN_612; // @[Microcode.scala 994:32 995:13]
  wire [7:0] _GEN_624 = IR == 8'h2f ? _u_out_F_T_27 : _GEN_613; // @[Microcode.scala 994:32 996:13]
  wire  _GEN_625 = IR == 8'h2f ? _u_T_1 : _GEN_614; // @[Microcode.scala 994:32]
  wire [15:0] _GEN_626 = IR == 8'h2f ? 16'h0 : _GEN_615; // @[Microcode.scala 78:21 994:32]
  wire  _GEN_627 = IR == 8'h2f ? 1'h0 : _GEN_616; // @[Microcode.scala 79:21 994:32]
  wire  _GEN_628 = IR == 8'h2f ? 1'h0 : _GEN_617; // @[Microcode.scala 80:21 994:32]
  wire [7:0] _GEN_629 = IR == 8'h2f ? 8'h0 : _GEN_618; // @[Microcode.scala 81:21 994:32]
  wire [2:0] _GEN_630 = IR == 8'h2f ? mcycle : _GEN_619; // @[Microcode.scala 75:21 994:32]
  wire [15:0] _GEN_631 = IR == 8'h2f ? SP_sampled : _GEN_620; // @[Microcode.scala 60:15 994:32]
  wire [7:0] _GEN_632 = IR == 8'h2f ? H_sampled : _GEN_621; // @[Microcode.scala 67:15 994:32]
  wire [7:0] _GEN_633 = IR == 8'h2f ? L_sampled : _GEN_622; // @[Microcode.scala 68:15 994:32]
  wire [7:0] _GEN_634 = IR == 8'h3f ? _u_out_F_T_24 : _GEN_624; // @[Microcode.scala 989:32 990:13]
  wire  _GEN_635 = IR == 8'h3f ? _u_T_1 : _GEN_625; // @[Microcode.scala 989:32]
  wire [7:0] _GEN_636 = IR == 8'h3f ? A_sampled : _GEN_623; // @[Microcode.scala 61:15 989:32]
  wire [15:0] _GEN_637 = IR == 8'h3f ? 16'h0 : _GEN_626; // @[Microcode.scala 78:21 989:32]
  wire  _GEN_638 = IR == 8'h3f ? 1'h0 : _GEN_627; // @[Microcode.scala 79:21 989:32]
  wire  _GEN_639 = IR == 8'h3f ? 1'h0 : _GEN_628; // @[Microcode.scala 80:21 989:32]
  wire [7:0] _GEN_640 = IR == 8'h3f ? 8'h0 : _GEN_629; // @[Microcode.scala 81:21 989:32]
  wire [2:0] _GEN_641 = IR == 8'h3f ? mcycle : _GEN_630; // @[Microcode.scala 75:21 989:32]
  wire [15:0] _GEN_642 = IR == 8'h3f ? SP_sampled : _GEN_631; // @[Microcode.scala 60:15 989:32]
  wire [7:0] _GEN_643 = IR == 8'h3f ? H_sampled : _GEN_632; // @[Microcode.scala 67:15 989:32]
  wire [7:0] _GEN_644 = IR == 8'h3f ? L_sampled : _GEN_633; // @[Microcode.scala 68:15 989:32]
  wire [7:0] _GEN_645 = IR == 8'h37 ? _u_out_F_T_20 : _GEN_634; // @[Microcode.scala 984:32 985:13]
  wire  _GEN_646 = IR == 8'h37 ? _u_T_1 : _GEN_635; // @[Microcode.scala 984:32]
  wire [7:0] _GEN_647 = IR == 8'h37 ? A_sampled : _GEN_636; // @[Microcode.scala 61:15 984:32]
  wire [15:0] _GEN_648 = IR == 8'h37 ? 16'h0 : _GEN_637; // @[Microcode.scala 78:21 984:32]
  wire  _GEN_649 = IR == 8'h37 ? 1'h0 : _GEN_638; // @[Microcode.scala 79:21 984:32]
  wire  _GEN_650 = IR == 8'h37 ? 1'h0 : _GEN_639; // @[Microcode.scala 80:21 984:32]
  wire [7:0] _GEN_651 = IR == 8'h37 ? 8'h0 : _GEN_640; // @[Microcode.scala 81:21 984:32]
  wire [2:0] _GEN_652 = IR == 8'h37 ? mcycle : _GEN_641; // @[Microcode.scala 75:21 984:32]
  wire [15:0] _GEN_653 = IR == 8'h37 ? SP_sampled : _GEN_642; // @[Microcode.scala 60:15 984:32]
  wire [7:0] _GEN_654 = IR == 8'h37 ? H_sampled : _GEN_643; // @[Microcode.scala 67:15 984:32]
  wire [7:0] _GEN_655 = IR == 8'h37 ? L_sampled : _GEN_644; // @[Microcode.scala 68:15 984:32]
  wire [15:0] _GEN_656 = IR == 8'hc3 ? imm16 : PC_sampled; // @[Microcode.scala 979:32 980:14 59:15]
  wire  _GEN_657 = IR == 8'hc3 ? _u_T_1 : _GEN_646; // @[Microcode.scala 979:32]
  wire [7:0] _GEN_658 = IR == 8'hc3 ? F_sampled : _GEN_645; // @[Microcode.scala 62:15 979:32]
  wire [7:0] _GEN_659 = IR == 8'hc3 ? A_sampled : _GEN_647; // @[Microcode.scala 61:15 979:32]
  wire [15:0] _GEN_660 = IR == 8'hc3 ? 16'h0 : _GEN_648; // @[Microcode.scala 78:21 979:32]
  wire  _GEN_661 = IR == 8'hc3 ? 1'h0 : _GEN_649; // @[Microcode.scala 79:21 979:32]
  wire  _GEN_662 = IR == 8'hc3 ? 1'h0 : _GEN_650; // @[Microcode.scala 80:21 979:32]
  wire [7:0] _GEN_663 = IR == 8'hc3 ? 8'h0 : _GEN_651; // @[Microcode.scala 81:21 979:32]
  wire [2:0] _GEN_664 = IR == 8'hc3 ? mcycle : _GEN_652; // @[Microcode.scala 75:21 979:32]
  wire [15:0] _GEN_665 = IR == 8'hc3 ? SP_sampled : _GEN_653; // @[Microcode.scala 60:15 979:32]
  wire [7:0] _GEN_666 = IR == 8'hc3 ? H_sampled : _GEN_654; // @[Microcode.scala 67:15 979:32]
  wire [7:0] _GEN_667 = IR == 8'hc3 ? L_sampled : _GEN_655; // @[Microcode.scala 68:15 979:32]
  wire [15:0] _GEN_668 = _u_T_279 == 8'hc0 ? _GEN_524 : _GEN_660; // @[Microcode.scala 938:44]
  wire  _GEN_669 = _u_T_279 == 8'hc0 ? _GEN_501 : _GEN_661; // @[Microcode.scala 938:44]
  wire [7:0] _GEN_670 = _u_T_279 == 8'hc0 ? _GEN_526 : imm8; // @[Microcode.scala 69:15 938:44]
  wire [15:0] _GEN_671 = _u_T_279 == 8'hc0 ? _GEN_527 : _GEN_665; // @[Microcode.scala 938:44]
  wire [2:0] _GEN_672 = _u_T_279 == 8'hc0 ? _GEN_504 : _GEN_664; // @[Microcode.scala 938:44]
  wire [15:0] _GEN_673 = _u_T_279 == 8'hc0 ? _GEN_529 : _GEN_656; // @[Microcode.scala 938:44]
  wire  _GEN_674 = _u_T_279 == 8'hc0 ? _GEN_506 : _GEN_657; // @[Microcode.scala 938:44]
  wire [7:0] _GEN_675 = _u_T_279 == 8'hc0 ? F_sampled : _GEN_658; // @[Microcode.scala 62:15 938:44]
  wire [7:0] _GEN_676 = _u_T_279 == 8'hc0 ? A_sampled : _GEN_659; // @[Microcode.scala 61:15 938:44]
  wire  _GEN_677 = _u_T_279 == 8'hc0 ? 1'h0 : _GEN_662; // @[Microcode.scala 80:21 938:44]
  wire [7:0] _GEN_678 = _u_T_279 == 8'hc0 ? 8'h0 : _GEN_663; // @[Microcode.scala 81:21 938:44]
  wire [7:0] _GEN_679 = _u_T_279 == 8'hc0 ? H_sampled : _GEN_666; // @[Microcode.scala 67:15 938:44]
  wire [7:0] _GEN_680 = _u_T_279 == 8'hc0 ? L_sampled : _GEN_667; // @[Microcode.scala 68:15 938:44]
  wire [15:0] _GEN_681 = _u_T_279 == 8'hc4 ? _GEN_500 : _GEN_668; // @[Microcode.scala 898:44]
  wire  _GEN_682 = _u_T_279 == 8'hc4 ? _GEN_501 : _GEN_677; // @[Microcode.scala 898:44]
  wire [7:0] _GEN_683 = _u_T_279 == 8'hc4 ? _GEN_502 : _GEN_678; // @[Microcode.scala 898:44]
  wire [15:0] _GEN_684 = _u_T_279 == 8'hc4 ? _GEN_503 : _GEN_671; // @[Microcode.scala 898:44]
  wire [2:0] _GEN_685 = _u_T_279 == 8'hc4 ? _GEN_504 : _GEN_672; // @[Microcode.scala 898:44]
  wire [15:0] _GEN_686 = _u_T_279 == 8'hc4 ? _GEN_505 : _GEN_673; // @[Microcode.scala 898:44]
  wire  _GEN_687 = _u_T_279 == 8'hc4 ? _GEN_506 : _GEN_674; // @[Microcode.scala 898:44]
  wire  _GEN_688 = _u_T_279 == 8'hc4 ? 1'h0 : _GEN_669; // @[Microcode.scala 79:21 898:44]
  wire [7:0] _GEN_689 = _u_T_279 == 8'hc4 ? imm8 : _GEN_670; // @[Microcode.scala 69:15 898:44]
  wire [7:0] _GEN_690 = _u_T_279 == 8'hc4 ? F_sampled : _GEN_675; // @[Microcode.scala 62:15 898:44]
  wire [7:0] _GEN_691 = _u_T_279 == 8'hc4 ? A_sampled : _GEN_676; // @[Microcode.scala 61:15 898:44]
  wire [7:0] _GEN_692 = _u_T_279 == 8'hc4 ? H_sampled : _GEN_679; // @[Microcode.scala 67:15 898:44]
  wire [7:0] _GEN_693 = _u_T_279 == 8'hc4 ? L_sampled : _GEN_680; // @[Microcode.scala 68:15 898:44]
  wire [15:0] _GEN_694 = _u_T_279 == 8'hc2 ? _GEN_482 : _GEN_686; // @[Microcode.scala 877:44]
  wire  _GEN_695 = _u_T_279 == 8'hc2 ? _u_T_1 : _GEN_687; // @[Microcode.scala 877:44]
  wire [15:0] _GEN_696 = _u_T_279 == 8'hc2 ? 16'h0 : _GEN_681; // @[Microcode.scala 78:21 877:44]
  wire  _GEN_697 = _u_T_279 == 8'hc2 ? 1'h0 : _GEN_682; // @[Microcode.scala 80:21 877:44]
  wire [7:0] _GEN_698 = _u_T_279 == 8'hc2 ? 8'h0 : _GEN_683; // @[Microcode.scala 81:21 877:44]
  wire [15:0] _GEN_699 = _u_T_279 == 8'hc2 ? SP_sampled : _GEN_684; // @[Microcode.scala 60:15 877:44]
  wire [2:0] _GEN_700 = _u_T_279 == 8'hc2 ? mcycle : _GEN_685; // @[Microcode.scala 75:21 877:44]
  wire  _GEN_701 = _u_T_279 == 8'hc2 ? 1'h0 : _GEN_688; // @[Microcode.scala 79:21 877:44]
  wire [7:0] _GEN_702 = _u_T_279 == 8'hc2 ? imm8 : _GEN_689; // @[Microcode.scala 69:15 877:44]
  wire [7:0] _GEN_703 = _u_T_279 == 8'hc2 ? F_sampled : _GEN_690; // @[Microcode.scala 62:15 877:44]
  wire [7:0] _GEN_704 = _u_T_279 == 8'hc2 ? A_sampled : _GEN_691; // @[Microcode.scala 61:15 877:44]
  wire [7:0] _GEN_705 = _u_T_279 == 8'hc2 ? H_sampled : _GEN_692; // @[Microcode.scala 67:15 877:44]
  wire [7:0] _GEN_706 = _u_T_279 == 8'hc2 ? L_sampled : _GEN_693; // @[Microcode.scala 68:15 877:44]
  wire [15:0] _GEN_707 = _u_T_279 == 8'h20 ? _GEN_480 : _GEN_694; // @[Microcode.scala 856:44]
  wire  _GEN_708 = _u_T_279 == 8'h20 ? _u_T_1 : _GEN_695; // @[Microcode.scala 856:44]
  wire [15:0] _GEN_709 = _u_T_279 == 8'h20 ? 16'h0 : _GEN_696; // @[Microcode.scala 78:21 856:44]
  wire  _GEN_710 = _u_T_279 == 8'h20 ? 1'h0 : _GEN_697; // @[Microcode.scala 80:21 856:44]
  wire [7:0] _GEN_711 = _u_T_279 == 8'h20 ? 8'h0 : _GEN_698; // @[Microcode.scala 81:21 856:44]
  wire [15:0] _GEN_712 = _u_T_279 == 8'h20 ? SP_sampled : _GEN_699; // @[Microcode.scala 60:15 856:44]
  wire [2:0] _GEN_713 = _u_T_279 == 8'h20 ? mcycle : _GEN_700; // @[Microcode.scala 75:21 856:44]
  wire  _GEN_714 = _u_T_279 == 8'h20 ? 1'h0 : _GEN_701; // @[Microcode.scala 79:21 856:44]
  wire [7:0] _GEN_715 = _u_T_279 == 8'h20 ? imm8 : _GEN_702; // @[Microcode.scala 69:15 856:44]
  wire [7:0] _GEN_716 = _u_T_279 == 8'h20 ? F_sampled : _GEN_703; // @[Microcode.scala 62:15 856:44]
  wire [7:0] _GEN_717 = _u_T_279 == 8'h20 ? A_sampled : _GEN_704; // @[Microcode.scala 61:15 856:44]
  wire [7:0] _GEN_718 = _u_T_279 == 8'h20 ? H_sampled : _GEN_705; // @[Microcode.scala 67:15 856:44]
  wire [7:0] _GEN_719 = _u_T_279 == 8'h20 ? L_sampled : _GEN_706; // @[Microcode.scala 68:15 856:44]
  wire  _GEN_722 = IR == 8'hf3 ? _u_T_1 : _GEN_708; // @[Microcode.scala 848:32]
  wire [15:0] _GEN_723 = IR == 8'hf3 ? PC_sampled : _GEN_707; // @[Microcode.scala 59:15 848:32]
  wire [15:0] _GEN_724 = IR == 8'hf3 ? 16'h0 : _GEN_709; // @[Microcode.scala 78:21 848:32]
  wire  _GEN_725 = IR == 8'hf3 ? 1'h0 : _GEN_710; // @[Microcode.scala 80:21 848:32]
  wire [7:0] _GEN_726 = IR == 8'hf3 ? 8'h0 : _GEN_711; // @[Microcode.scala 81:21 848:32]
  wire [15:0] _GEN_727 = IR == 8'hf3 ? SP_sampled : _GEN_712; // @[Microcode.scala 60:15 848:32]
  wire [2:0] _GEN_728 = IR == 8'hf3 ? mcycle : _GEN_713; // @[Microcode.scala 75:21 848:32]
  wire  _GEN_729 = IR == 8'hf3 ? 1'h0 : _GEN_714; // @[Microcode.scala 79:21 848:32]
  wire [7:0] _GEN_730 = IR == 8'hf3 ? imm8 : _GEN_715; // @[Microcode.scala 69:15 848:32]
  wire [7:0] _GEN_731 = IR == 8'hf3 ? F_sampled : _GEN_716; // @[Microcode.scala 62:15 848:32]
  wire [7:0] _GEN_732 = IR == 8'hf3 ? A_sampled : _GEN_717; // @[Microcode.scala 61:15 848:32]
  wire [7:0] _GEN_733 = IR == 8'hf3 ? H_sampled : _GEN_718; // @[Microcode.scala 67:15 848:32]
  wire [7:0] _GEN_734 = IR == 8'hf3 ? L_sampled : _GEN_719; // @[Microcode.scala 68:15 848:32]
  wire  _GEN_736 = IR == 8'hfb ? _u_T_1 : _GEN_722; // @[Microcode.scala 841:32]
  wire [15:0] _GEN_738 = IR == 8'hfb ? PC_sampled : _GEN_723; // @[Microcode.scala 59:15 841:32]
  wire [15:0] _GEN_739 = IR == 8'hfb ? 16'h0 : _GEN_724; // @[Microcode.scala 78:21 841:32]
  wire  _GEN_740 = IR == 8'hfb ? 1'h0 : _GEN_725; // @[Microcode.scala 80:21 841:32]
  wire [7:0] _GEN_741 = IR == 8'hfb ? 8'h0 : _GEN_726; // @[Microcode.scala 81:21 841:32]
  wire [15:0] _GEN_742 = IR == 8'hfb ? SP_sampled : _GEN_727; // @[Microcode.scala 60:15 841:32]
  wire [2:0] _GEN_743 = IR == 8'hfb ? mcycle : _GEN_728; // @[Microcode.scala 75:21 841:32]
  wire  _GEN_744 = IR == 8'hfb ? 1'h0 : _GEN_729; // @[Microcode.scala 79:21 841:32]
  wire [7:0] _GEN_745 = IR == 8'hfb ? imm8 : _GEN_730; // @[Microcode.scala 69:15 841:32]
  wire [7:0] _GEN_746 = IR == 8'hfb ? F_sampled : _GEN_731; // @[Microcode.scala 62:15 841:32]
  wire [7:0] _GEN_747 = IR == 8'hfb ? A_sampled : _GEN_732; // @[Microcode.scala 61:15 841:32]
  wire [7:0] _GEN_748 = IR == 8'hfb ? H_sampled : _GEN_733; // @[Microcode.scala 67:15 841:32]
  wire [7:0] _GEN_749 = IR == 8'hfb ? L_sampled : _GEN_734; // @[Microcode.scala 68:15 841:32]
  wire [15:0] _GEN_750 = _u_T_29 == 8'hc7 ? _GEN_356 : _GEN_739; // @[Microcode.scala 816:44]
  wire  _GEN_751 = _u_T_29 == 8'hc7 ? _GEN_357 : _GEN_740; // @[Microcode.scala 816:44]
  wire [7:0] _GEN_752 = _u_T_29 == 8'hc7 ? _GEN_424 : _GEN_741; // @[Microcode.scala 816:44]
  wire [15:0] _GEN_753 = _u_T_29 == 8'hc7 ? _GEN_359 : _GEN_742; // @[Microcode.scala 816:44]
  wire [2:0] _GEN_754 = _u_T_29 == 8'hc7 ? _GEN_360 : _GEN_743; // @[Microcode.scala 816:44]
  wire [15:0] _GEN_755 = _u_T_29 == 8'hc7 ? _GEN_476 : _GEN_738; // @[Microcode.scala 816:44]
  wire  _GEN_756 = _u_T_29 == 8'hc7 ? _GEN_361 : _GEN_736; // @[Microcode.scala 816:44]
  wire  _GEN_759 = _u_T_29 == 8'hc7 ? 1'h0 : _GEN_744; // @[Microcode.scala 79:21 816:44]
  wire [7:0] _GEN_760 = _u_T_29 == 8'hc7 ? imm8 : _GEN_745; // @[Microcode.scala 69:15 816:44]
  wire [7:0] _GEN_761 = _u_T_29 == 8'hc7 ? F_sampled : _GEN_746; // @[Microcode.scala 62:15 816:44]
  wire [7:0] _GEN_762 = _u_T_29 == 8'hc7 ? A_sampled : _GEN_747; // @[Microcode.scala 61:15 816:44]
  wire [7:0] _GEN_763 = _u_T_29 == 8'hc7 ? H_sampled : _GEN_748; // @[Microcode.scala 67:15 816:44]
  wire [7:0] _GEN_764 = _u_T_29 == 8'hc7 ? L_sampled : _GEN_749; // @[Microcode.scala 68:15 816:44]
  wire [15:0] _GEN_765 = IR == 8'hd9 ? _GEN_396 : _GEN_750; // @[Microcode.scala 788:32]
  wire  _GEN_766 = IR == 8'hd9 ? _GEN_357 : _GEN_759; // @[Microcode.scala 788:32]
  wire [7:0] _GEN_767 = IR == 8'hd9 ? _GEN_398 : _GEN_760; // @[Microcode.scala 788:32]
  wire [15:0] _GEN_768 = IR == 8'hd9 ? _GEN_441 : _GEN_753; // @[Microcode.scala 788:32]
  wire [2:0] _GEN_769 = IR == 8'hd9 ? _GEN_360 : _GEN_754; // @[Microcode.scala 788:32]
  wire [15:0] _GEN_770 = IR == 8'hd9 ? _GEN_443 : _GEN_755; // @[Microcode.scala 788:32]
  wire  _GEN_772 = IR == 8'hd9 ? _GEN_361 : _GEN_756; // @[Microcode.scala 788:32]
  wire  _GEN_773 = IR == 8'hd9 ? 1'h0 : _GEN_751; // @[Microcode.scala 788:32 80:21]
  wire [7:0] _GEN_774 = IR == 8'hd9 ? 8'h0 : _GEN_752; // @[Microcode.scala 788:32 81:21]
  wire [7:0] _GEN_776 = IR == 8'hd9 ? F_sampled : _GEN_761; // @[Microcode.scala 62:15 788:32]
  wire [7:0] _GEN_777 = IR == 8'hd9 ? A_sampled : _GEN_762; // @[Microcode.scala 61:15 788:32]
  wire [7:0] _GEN_778 = IR == 8'hd9 ? H_sampled : _GEN_763; // @[Microcode.scala 67:15 788:32]
  wire [7:0] _GEN_779 = IR == 8'hd9 ? L_sampled : _GEN_764; // @[Microcode.scala 68:15 788:32]
  wire [15:0] _GEN_780 = IR == 8'hc9 ? _GEN_396 : _GEN_765; // @[Microcode.scala 760:32]
  wire  _GEN_781 = IR == 8'hc9 ? _GEN_357 : _GEN_766; // @[Microcode.scala 760:32]
  wire [7:0] _GEN_782 = IR == 8'hc9 ? _GEN_398 : _GEN_767; // @[Microcode.scala 760:32]
  wire [15:0] _GEN_783 = IR == 8'hc9 ? _GEN_441 : _GEN_768; // @[Microcode.scala 760:32]
  wire [2:0] _GEN_784 = IR == 8'hc9 ? _GEN_360 : _GEN_769; // @[Microcode.scala 760:32]
  wire [15:0] _GEN_785 = IR == 8'hc9 ? _GEN_443 : _GEN_770; // @[Microcode.scala 760:32]
  wire  _GEN_786 = IR == 8'hc9 ? _GEN_361 : _GEN_772; // @[Microcode.scala 760:32]
  wire  _GEN_788 = IR == 8'hc9 ? 1'h0 : _GEN_773; // @[Microcode.scala 760:32 80:21]
  wire [7:0] _GEN_789 = IR == 8'hc9 ? 8'h0 : _GEN_774; // @[Microcode.scala 760:32 81:21]
  wire [7:0] _GEN_791 = IR == 8'hc9 ? F_sampled : _GEN_776; // @[Microcode.scala 62:15 760:32]
  wire [7:0] _GEN_792 = IR == 8'hc9 ? A_sampled : _GEN_777; // @[Microcode.scala 61:15 760:32]
  wire [7:0] _GEN_793 = IR == 8'hc9 ? H_sampled : _GEN_778; // @[Microcode.scala 67:15 760:32]
  wire [7:0] _GEN_794 = IR == 8'hc9 ? L_sampled : _GEN_779; // @[Microcode.scala 68:15 760:32]
  wire [15:0] _GEN_795 = IR == 8'hcd ? _GEN_356 : _GEN_780; // @[Microcode.scala 733:32]
  wire  _GEN_796 = IR == 8'hcd ? _GEN_357 : _GEN_788; // @[Microcode.scala 733:32]
  wire [7:0] _GEN_797 = IR == 8'hcd ? _GEN_424 : _GEN_789; // @[Microcode.scala 733:32]
  wire [15:0] _GEN_798 = IR == 8'hcd ? _GEN_359 : _GEN_783; // @[Microcode.scala 733:32]
  wire [2:0] _GEN_799 = IR == 8'hcd ? _GEN_134 : _GEN_784; // @[Microcode.scala 733:32]
  wire [15:0] _GEN_800 = IR == 8'hcd ? _GEN_427 : _GEN_785; // @[Microcode.scala 733:32]
  wire  _GEN_801 = IR == 8'hcd ? _GEN_141 : _GEN_786; // @[Microcode.scala 733:32]
  wire  _GEN_802 = IR == 8'hcd ? 1'h0 : _GEN_781; // @[Microcode.scala 733:32 79:21]
  wire [7:0] _GEN_803 = IR == 8'hcd ? imm8 : _GEN_782; // @[Microcode.scala 69:15 733:32]
  wire [7:0] _GEN_806 = IR == 8'hcd ? F_sampled : _GEN_791; // @[Microcode.scala 62:15 733:32]
  wire [7:0] _GEN_807 = IR == 8'hcd ? A_sampled : _GEN_792; // @[Microcode.scala 61:15 733:32]
  wire [7:0] _GEN_808 = IR == 8'hcd ? H_sampled : _GEN_793; // @[Microcode.scala 67:15 733:32]
  wire [7:0] _GEN_809 = IR == 8'hcd ? L_sampled : _GEN_794; // @[Microcode.scala 68:15 733:32]
  wire [15:0] _GEN_810 = _u_T_4 == 8'hc1 ? _GEN_396 : _GEN_795; // @[Microcode.scala 697:44]
  wire  _GEN_811 = _u_T_4 == 8'hc1 ? _GEN_357 : _GEN_802; // @[Microcode.scala 697:44]
  wire [7:0] _GEN_812 = _u_T_4 == 8'hc1 ? _GEN_398 : _GEN_803; // @[Microcode.scala 697:44]
  wire [15:0] _GEN_813 = _u_T_4 == 8'hc1 ? _GEN_399 : _GEN_798; // @[Microcode.scala 697:44]
  wire [2:0] _GEN_814 = _u_T_4 == 8'hc1 ? _GEN_360 : _GEN_799; // @[Microcode.scala 697:44]
  wire [7:0] _GEN_815 = _u_T_4 == 8'hc1 ? _GEN_401 : B_sampled; // @[Microcode.scala 63:15 697:44]
  wire [7:0] _GEN_816 = _u_T_4 == 8'hc1 ? _GEN_402 : C_sampled; // @[Microcode.scala 64:15 697:44]
  wire [7:0] _GEN_817 = _u_T_4 == 8'hc1 ? _GEN_403 : D_sampled; // @[Microcode.scala 65:15 697:44]
  wire [7:0] _GEN_818 = _u_T_4 == 8'hc1 ? _GEN_404 : E_sampled; // @[Microcode.scala 66:15 697:44]
  wire [7:0] _GEN_819 = _u_T_4 == 8'hc1 ? _GEN_405 : _GEN_808; // @[Microcode.scala 697:44]
  wire [7:0] _GEN_820 = _u_T_4 == 8'hc1 ? _GEN_406 : _GEN_809; // @[Microcode.scala 697:44]
  wire [7:0] _GEN_821 = _u_T_4 == 8'hc1 ? _GEN_407 : _GEN_807; // @[Microcode.scala 697:44]
  wire [7:0] _GEN_822 = _u_T_4 == 8'hc1 ? _GEN_408 : _GEN_806; // @[Microcode.scala 697:44]
  wire  _GEN_823 = _u_T_4 == 8'hc1 ? _GEN_361 : _GEN_801; // @[Microcode.scala 697:44]
  wire  _GEN_824 = _u_T_4 == 8'hc1 ? 1'h0 : _GEN_796; // @[Microcode.scala 697:44 80:21]
  wire [7:0] _GEN_825 = _u_T_4 == 8'hc1 ? 8'h0 : _GEN_797; // @[Microcode.scala 697:44 81:21]
  wire [15:0] _GEN_826 = _u_T_4 == 8'hc1 ? PC_sampled : _GEN_800; // @[Microcode.scala 59:15 697:44]
  wire [15:0] _GEN_829 = _u_T_4 == 8'hc5 ? _GEN_356 : _GEN_810; // @[Microcode.scala 661:44]
  wire  _GEN_830 = _u_T_4 == 8'hc5 ? _GEN_357 : _GEN_824; // @[Microcode.scala 661:44]
  wire [7:0] _GEN_831 = _u_T_4 == 8'hc5 ? _GEN_358 : _GEN_825; // @[Microcode.scala 661:44]
  wire [15:0] _GEN_832 = _u_T_4 == 8'hc5 ? _GEN_359 : _GEN_813; // @[Microcode.scala 661:44]
  wire [2:0] _GEN_833 = _u_T_4 == 8'hc5 ? _GEN_360 : _GEN_814; // @[Microcode.scala 661:44]
  wire  _GEN_834 = _u_T_4 == 8'hc5 ? _GEN_361 : _GEN_823; // @[Microcode.scala 661:44]
  wire  _GEN_835 = _u_T_4 == 8'hc5 ? 1'h0 : _GEN_811; // @[Microcode.scala 661:44 79:21]
  wire [7:0] _GEN_836 = _u_T_4 == 8'hc5 ? imm8 : _GEN_812; // @[Microcode.scala 661:44 69:15]
  wire [7:0] _GEN_837 = _u_T_4 == 8'hc5 ? B_sampled : _GEN_815; // @[Microcode.scala 63:15 661:44]
  wire [7:0] _GEN_838 = _u_T_4 == 8'hc5 ? C_sampled : _GEN_816; // @[Microcode.scala 64:15 661:44]
  wire [7:0] _GEN_839 = _u_T_4 == 8'hc5 ? D_sampled : _GEN_817; // @[Microcode.scala 65:15 661:44]
  wire [7:0] _GEN_840 = _u_T_4 == 8'hc5 ? E_sampled : _GEN_818; // @[Microcode.scala 66:15 661:44]
  wire [7:0] _GEN_841 = _u_T_4 == 8'hc5 ? H_sampled : _GEN_819; // @[Microcode.scala 661:44 67:15]
  wire [7:0] _GEN_842 = _u_T_4 == 8'hc5 ? L_sampled : _GEN_820; // @[Microcode.scala 661:44 68:15]
  wire [7:0] _GEN_843 = _u_T_4 == 8'hc5 ? A_sampled : _GEN_821; // @[Microcode.scala 61:15 661:44]
  wire [7:0] _GEN_844 = _u_T_4 == 8'hc5 ? F_sampled : _GEN_822; // @[Microcode.scala 62:15 661:44]
  wire [15:0] _GEN_845 = _u_T_4 == 8'hc5 ? PC_sampled : _GEN_826; // @[Microcode.scala 59:15 661:44]
  wire  _GEN_848 = IR == 8'h10 ? _u_T_1 : _GEN_834; // @[Microcode.scala 654:32]
  wire [15:0] _GEN_849 = IR == 8'h10 ? 16'h0 : _GEN_829; // @[Microcode.scala 654:32 78:21]
  wire  _GEN_850 = IR == 8'h10 ? 1'h0 : _GEN_830; // @[Microcode.scala 654:32 80:21]
  wire [7:0] _GEN_851 = IR == 8'h10 ? 8'h0 : _GEN_831; // @[Microcode.scala 654:32 81:21]
  wire [15:0] _GEN_852 = IR == 8'h10 ? SP_sampled : _GEN_832; // @[Microcode.scala 60:15 654:32]
  wire [2:0] _GEN_853 = IR == 8'h10 ? mcycle : _GEN_833; // @[Microcode.scala 654:32 75:21]
  wire  _GEN_854 = IR == 8'h10 ? 1'h0 : _GEN_835; // @[Microcode.scala 654:32 79:21]
  wire [7:0] _GEN_855 = IR == 8'h10 ? imm8 : _GEN_836; // @[Microcode.scala 654:32 69:15]
  wire [7:0] _GEN_856 = IR == 8'h10 ? B_sampled : _GEN_837; // @[Microcode.scala 63:15 654:32]
  wire [7:0] _GEN_857 = IR == 8'h10 ? C_sampled : _GEN_838; // @[Microcode.scala 64:15 654:32]
  wire [7:0] _GEN_858 = IR == 8'h10 ? D_sampled : _GEN_839; // @[Microcode.scala 65:15 654:32]
  wire [7:0] _GEN_859 = IR == 8'h10 ? E_sampled : _GEN_840; // @[Microcode.scala 654:32 66:15]
  wire [7:0] _GEN_860 = IR == 8'h10 ? H_sampled : _GEN_841; // @[Microcode.scala 654:32 67:15]
  wire [7:0] _GEN_861 = IR == 8'h10 ? L_sampled : _GEN_842; // @[Microcode.scala 654:32 68:15]
  wire [7:0] _GEN_862 = IR == 8'h10 ? A_sampled : _GEN_843; // @[Microcode.scala 61:15 654:32]
  wire [7:0] _GEN_863 = IR == 8'h10 ? F_sampled : _GEN_844; // @[Microcode.scala 62:15 654:32]
  wire [15:0] _GEN_864 = IR == 8'h10 ? PC_sampled : _GEN_845; // @[Microcode.scala 59:15 654:32]
  wire [15:0] _GEN_867 = IR == 8'h18 ? _u_out_PC_T_4 : _GEN_864; // @[Microcode.scala 646:32 648:15]
  wire  _GEN_868 = IR == 8'h18 ? _u_T_1 : _GEN_848; // @[Microcode.scala 646:32]
  wire [15:0] _GEN_869 = IR == 8'h18 ? 16'h0 : _GEN_849; // @[Microcode.scala 646:32 78:21]
  wire  _GEN_870 = IR == 8'h18 ? 1'h0 : _GEN_850; // @[Microcode.scala 646:32 80:21]
  wire [7:0] _GEN_871 = IR == 8'h18 ? 8'h0 : _GEN_851; // @[Microcode.scala 646:32 81:21]
  wire [15:0] _GEN_872 = IR == 8'h18 ? SP_sampled : _GEN_852; // @[Microcode.scala 60:15 646:32]
  wire [2:0] _GEN_873 = IR == 8'h18 ? mcycle : _GEN_853; // @[Microcode.scala 646:32 75:21]
  wire  _GEN_874 = IR == 8'h18 ? 1'h0 : _GEN_854; // @[Microcode.scala 646:32 79:21]
  wire [7:0] _GEN_875 = IR == 8'h18 ? imm8 : _GEN_855; // @[Microcode.scala 646:32 69:15]
  wire [7:0] _GEN_876 = IR == 8'h18 ? B_sampled : _GEN_856; // @[Microcode.scala 63:15 646:32]
  wire [7:0] _GEN_877 = IR == 8'h18 ? C_sampled : _GEN_857; // @[Microcode.scala 64:15 646:32]
  wire [7:0] _GEN_878 = IR == 8'h18 ? D_sampled : _GEN_858; // @[Microcode.scala 646:32 65:15]
  wire [7:0] _GEN_879 = IR == 8'h18 ? E_sampled : _GEN_859; // @[Microcode.scala 646:32 66:15]
  wire [7:0] _GEN_880 = IR == 8'h18 ? H_sampled : _GEN_860; // @[Microcode.scala 646:32 67:15]
  wire [7:0] _GEN_881 = IR == 8'h18 ? L_sampled : _GEN_861; // @[Microcode.scala 646:32 68:15]
  wire [7:0] _GEN_882 = IR == 8'h18 ? A_sampled : _GEN_862; // @[Microcode.scala 61:15 646:32]
  wire [7:0] _GEN_883 = IR == 8'h18 ? F_sampled : _GEN_863; // @[Microcode.scala 62:15 646:32]
  wire [3:0] _GEN_886 = IR == 8'hfe ? 4'h2 : 4'h0; // @[Microcode.scala 635:32 636:17 108:21]
  wire [7:0] _GEN_887 = IR == 8'hfe ? A_sampled : 8'h0; // @[Microcode.scala 635:32 637:17 106:21]
  wire [7:0] _GEN_888 = IR == 8'hfe ? imm8 : 8'h0; // @[Microcode.scala 635:32 638:17 107:21]
  wire [7:0] _GEN_889 = IR == 8'hfe ? _u_out_F_T_5 : _GEN_883; // @[Microcode.scala 103:13 635:32]
  wire  _GEN_890 = IR == 8'hfe ? _u_T_1 : _GEN_868; // @[Microcode.scala 635:32]
  wire [15:0] _GEN_891 = IR == 8'hfe ? PC_sampled : _GEN_867; // @[Microcode.scala 59:15 635:32]
  wire [15:0] _GEN_892 = IR == 8'hfe ? 16'h0 : _GEN_869; // @[Microcode.scala 635:32 78:21]
  wire  _GEN_893 = IR == 8'hfe ? 1'h0 : _GEN_870; // @[Microcode.scala 635:32 80:21]
  wire [7:0] _GEN_894 = IR == 8'hfe ? 8'h0 : _GEN_871; // @[Microcode.scala 635:32 81:21]
  wire [15:0] _GEN_895 = IR == 8'hfe ? SP_sampled : _GEN_872; // @[Microcode.scala 60:15 635:32]
  wire [2:0] _GEN_896 = IR == 8'hfe ? mcycle : _GEN_873; // @[Microcode.scala 635:32 75:21]
  wire  _GEN_897 = IR == 8'hfe ? 1'h0 : _GEN_874; // @[Microcode.scala 635:32 79:21]
  wire [7:0] _GEN_898 = IR == 8'hfe ? imm8 : _GEN_875; // @[Microcode.scala 635:32 69:15]
  wire [7:0] _GEN_899 = IR == 8'hfe ? B_sampled : _GEN_876; // @[Microcode.scala 63:15 635:32]
  wire [7:0] _GEN_900 = IR == 8'hfe ? C_sampled : _GEN_877; // @[Microcode.scala 635:32 64:15]
  wire [7:0] _GEN_901 = IR == 8'hfe ? D_sampled : _GEN_878; // @[Microcode.scala 635:32 65:15]
  wire [7:0] _GEN_902 = IR == 8'hfe ? E_sampled : _GEN_879; // @[Microcode.scala 635:32 66:15]
  wire [7:0] _GEN_903 = IR == 8'hfe ? H_sampled : _GEN_880; // @[Microcode.scala 635:32 67:15]
  wire [7:0] _GEN_904 = IR == 8'hfe ? L_sampled : _GEN_881; // @[Microcode.scala 635:32 68:15]
  wire [7:0] _GEN_905 = IR == 8'hfe ? A_sampled : _GEN_882; // @[Microcode.scala 61:15 635:32]
  wire [3:0] _GEN_908 = IR == 8'hf6 ? 4'h5 : _GEN_886; // @[Microcode.scala 624:32 625:17]
  wire [7:0] _GEN_909 = IR == 8'hf6 ? A_sampled : _GEN_887; // @[Microcode.scala 624:32 626:17]
  wire [7:0] _GEN_910 = IR == 8'hf6 ? imm8 : _GEN_888; // @[Microcode.scala 624:32 627:17]
  wire [7:0] _GEN_911 = IR == 8'hf6 ? u_alu_io_out : _GEN_905; // @[Microcode.scala 624:32 628:17]
  wire [7:0] _GEN_912 = IR == 8'hf6 ? _u_out_F_T_5 : _GEN_889; // @[Microcode.scala 103:13 624:32]
  wire  _GEN_913 = IR == 8'hf6 ? _u_T_1 : _GEN_890; // @[Microcode.scala 624:32]
  wire [15:0] _GEN_914 = IR == 8'hf6 ? PC_sampled : _GEN_891; // @[Microcode.scala 59:15 624:32]
  wire [15:0] _GEN_915 = IR == 8'hf6 ? 16'h0 : _GEN_892; // @[Microcode.scala 624:32 78:21]
  wire  _GEN_916 = IR == 8'hf6 ? 1'h0 : _GEN_893; // @[Microcode.scala 624:32 80:21]
  wire [7:0] _GEN_917 = IR == 8'hf6 ? 8'h0 : _GEN_894; // @[Microcode.scala 624:32 81:21]
  wire [15:0] _GEN_918 = IR == 8'hf6 ? SP_sampled : _GEN_895; // @[Microcode.scala 60:15 624:32]
  wire [2:0] _GEN_919 = IR == 8'hf6 ? mcycle : _GEN_896; // @[Microcode.scala 624:32 75:21]
  wire  _GEN_920 = IR == 8'hf6 ? 1'h0 : _GEN_897; // @[Microcode.scala 624:32 79:21]
  wire [7:0] _GEN_921 = IR == 8'hf6 ? imm8 : _GEN_898; // @[Microcode.scala 624:32 69:15]
  wire [7:0] _GEN_922 = IR == 8'hf6 ? B_sampled : _GEN_899; // @[Microcode.scala 624:32 63:15]
  wire [7:0] _GEN_923 = IR == 8'hf6 ? C_sampled : _GEN_900; // @[Microcode.scala 624:32 64:15]
  wire [7:0] _GEN_924 = IR == 8'hf6 ? D_sampled : _GEN_901; // @[Microcode.scala 624:32 65:15]
  wire [7:0] _GEN_925 = IR == 8'hf6 ? E_sampled : _GEN_902; // @[Microcode.scala 624:32 66:15]
  wire [7:0] _GEN_926 = IR == 8'hf6 ? H_sampled : _GEN_903; // @[Microcode.scala 624:32 67:15]
  wire [7:0] _GEN_927 = IR == 8'hf6 ? L_sampled : _GEN_904; // @[Microcode.scala 624:32 68:15]
  wire [3:0] _GEN_930 = IR == 8'hee ? 4'h6 : _GEN_908; // @[Microcode.scala 613:32 614:17]
  wire [7:0] _GEN_931 = IR == 8'hee ? A_sampled : _GEN_909; // @[Microcode.scala 613:32 615:17]
  wire [7:0] _GEN_932 = IR == 8'hee ? imm8 : _GEN_910; // @[Microcode.scala 613:32 616:17]
  wire [7:0] _GEN_933 = IR == 8'hee ? u_alu_io_out : _GEN_911; // @[Microcode.scala 613:32 617:17]
  wire [7:0] _GEN_934 = IR == 8'hee ? _u_out_F_T_5 : _GEN_912; // @[Microcode.scala 103:13 613:32]
  wire  _GEN_935 = IR == 8'hee ? _u_T_1 : _GEN_913; // @[Microcode.scala 613:32]
  wire [15:0] _GEN_936 = IR == 8'hee ? PC_sampled : _GEN_914; // @[Microcode.scala 59:15 613:32]
  wire [15:0] _GEN_937 = IR == 8'hee ? 16'h0 : _GEN_915; // @[Microcode.scala 613:32 78:21]
  wire  _GEN_938 = IR == 8'hee ? 1'h0 : _GEN_916; // @[Microcode.scala 613:32 80:21]
  wire [7:0] _GEN_939 = IR == 8'hee ? 8'h0 : _GEN_917; // @[Microcode.scala 613:32 81:21]
  wire [15:0] _GEN_940 = IR == 8'hee ? SP_sampled : _GEN_918; // @[Microcode.scala 60:15 613:32]
  wire [2:0] _GEN_941 = IR == 8'hee ? mcycle : _GEN_919; // @[Microcode.scala 613:32 75:21]
  wire  _GEN_942 = IR == 8'hee ? 1'h0 : _GEN_920; // @[Microcode.scala 613:32 79:21]
  wire [7:0] _GEN_943 = IR == 8'hee ? imm8 : _GEN_921; // @[Microcode.scala 613:32 69:15]
  wire [7:0] _GEN_944 = IR == 8'hee ? B_sampled : _GEN_922; // @[Microcode.scala 613:32 63:15]
  wire [7:0] _GEN_945 = IR == 8'hee ? C_sampled : _GEN_923; // @[Microcode.scala 613:32 64:15]
  wire [7:0] _GEN_946 = IR == 8'hee ? D_sampled : _GEN_924; // @[Microcode.scala 613:32 65:15]
  wire [7:0] _GEN_947 = IR == 8'hee ? E_sampled : _GEN_925; // @[Microcode.scala 613:32 66:15]
  wire [7:0] _GEN_948 = IR == 8'hee ? H_sampled : _GEN_926; // @[Microcode.scala 613:32 67:15]
  wire [7:0] _GEN_949 = IR == 8'hee ? L_sampled : _GEN_927; // @[Microcode.scala 613:32 68:15]
  wire [3:0] _GEN_952 = IR == 8'he6 ? 4'h4 : _GEN_930; // @[Microcode.scala 602:32 603:17]
  wire [7:0] _GEN_953 = IR == 8'he6 ? A_sampled : _GEN_931; // @[Microcode.scala 602:32 604:17]
  wire [7:0] _GEN_954 = IR == 8'he6 ? imm8 : _GEN_932; // @[Microcode.scala 602:32 605:17]
  wire [7:0] _GEN_955 = IR == 8'he6 ? u_alu_io_out : _GEN_933; // @[Microcode.scala 602:32 606:17]
  wire [7:0] _GEN_956 = IR == 8'he6 ? _u_out_F_T_5 : _GEN_934; // @[Microcode.scala 103:13 602:32]
  wire  _GEN_957 = IR == 8'he6 ? _u_T_1 : _GEN_935; // @[Microcode.scala 602:32]
  wire [15:0] _GEN_958 = IR == 8'he6 ? PC_sampled : _GEN_936; // @[Microcode.scala 59:15 602:32]
  wire [15:0] _GEN_959 = IR == 8'he6 ? 16'h0 : _GEN_937; // @[Microcode.scala 602:32 78:21]
  wire  _GEN_960 = IR == 8'he6 ? 1'h0 : _GEN_938; // @[Microcode.scala 602:32 80:21]
  wire [7:0] _GEN_961 = IR == 8'he6 ? 8'h0 : _GEN_939; // @[Microcode.scala 602:32 81:21]
  wire [15:0] _GEN_962 = IR == 8'he6 ? SP_sampled : _GEN_940; // @[Microcode.scala 60:15 602:32]
  wire [2:0] _GEN_963 = IR == 8'he6 ? mcycle : _GEN_941; // @[Microcode.scala 602:32 75:21]
  wire  _GEN_964 = IR == 8'he6 ? 1'h0 : _GEN_942; // @[Microcode.scala 602:32 79:21]
  wire [7:0] _GEN_965 = IR == 8'he6 ? imm8 : _GEN_943; // @[Microcode.scala 602:32 69:15]
  wire [7:0] _GEN_966 = IR == 8'he6 ? B_sampled : _GEN_944; // @[Microcode.scala 602:32 63:15]
  wire [7:0] _GEN_967 = IR == 8'he6 ? C_sampled : _GEN_945; // @[Microcode.scala 602:32 64:15]
  wire [7:0] _GEN_968 = IR == 8'he6 ? D_sampled : _GEN_946; // @[Microcode.scala 602:32 65:15]
  wire [7:0] _GEN_969 = IR == 8'he6 ? E_sampled : _GEN_947; // @[Microcode.scala 602:32 66:15]
  wire [7:0] _GEN_970 = IR == 8'he6 ? H_sampled : _GEN_948; // @[Microcode.scala 602:32 67:15]
  wire [7:0] _GEN_971 = IR == 8'he6 ? L_sampled : _GEN_949; // @[Microcode.scala 602:32 68:15]
  wire [3:0] _GEN_974 = IR == 8'hd6 ? 4'h2 : _GEN_952; // @[Microcode.scala 591:32 592:17]
  wire [7:0] _GEN_975 = IR == 8'hd6 ? A_sampled : _GEN_953; // @[Microcode.scala 591:32 593:17]
  wire [7:0] _GEN_976 = IR == 8'hd6 ? imm8 : _GEN_954; // @[Microcode.scala 591:32 594:17]
  wire [7:0] _GEN_977 = IR == 8'hd6 ? u_alu_io_out : _GEN_955; // @[Microcode.scala 591:32 595:17]
  wire [7:0] _GEN_978 = IR == 8'hd6 ? _u_out_F_T_5 : _GEN_956; // @[Microcode.scala 103:13 591:32]
  wire  _GEN_979 = IR == 8'hd6 ? _u_T_1 : _GEN_957; // @[Microcode.scala 591:32]
  wire [15:0] _GEN_980 = IR == 8'hd6 ? PC_sampled : _GEN_958; // @[Microcode.scala 59:15 591:32]
  wire [15:0] _GEN_981 = IR == 8'hd6 ? 16'h0 : _GEN_959; // @[Microcode.scala 591:32 78:21]
  wire  _GEN_982 = IR == 8'hd6 ? 1'h0 : _GEN_960; // @[Microcode.scala 591:32 80:21]
  wire [7:0] _GEN_983 = IR == 8'hd6 ? 8'h0 : _GEN_961; // @[Microcode.scala 591:32 81:21]
  wire [15:0] _GEN_984 = IR == 8'hd6 ? SP_sampled : _GEN_962; // @[Microcode.scala 591:32 60:15]
  wire [2:0] _GEN_985 = IR == 8'hd6 ? mcycle : _GEN_963; // @[Microcode.scala 591:32 75:21]
  wire  _GEN_986 = IR == 8'hd6 ? 1'h0 : _GEN_964; // @[Microcode.scala 591:32 79:21]
  wire [7:0] _GEN_987 = IR == 8'hd6 ? imm8 : _GEN_965; // @[Microcode.scala 591:32 69:15]
  wire [7:0] _GEN_988 = IR == 8'hd6 ? B_sampled : _GEN_966; // @[Microcode.scala 591:32 63:15]
  wire [7:0] _GEN_989 = IR == 8'hd6 ? C_sampled : _GEN_967; // @[Microcode.scala 591:32 64:15]
  wire [7:0] _GEN_990 = IR == 8'hd6 ? D_sampled : _GEN_968; // @[Microcode.scala 591:32 65:15]
  wire [7:0] _GEN_991 = IR == 8'hd6 ? E_sampled : _GEN_969; // @[Microcode.scala 591:32 66:15]
  wire [7:0] _GEN_992 = IR == 8'hd6 ? H_sampled : _GEN_970; // @[Microcode.scala 591:32 67:15]
  wire [7:0] _GEN_993 = IR == 8'hd6 ? L_sampled : _GEN_971; // @[Microcode.scala 591:32 68:15]
  wire [3:0] _GEN_996 = IR == 8'hc6 ? 4'h0 : _GEN_974; // @[Microcode.scala 580:32 581:17]
  wire [7:0] _GEN_997 = IR == 8'hc6 ? A_sampled : _GEN_975; // @[Microcode.scala 580:32 582:17]
  wire [7:0] _GEN_998 = IR == 8'hc6 ? imm8 : _GEN_976; // @[Microcode.scala 580:32 583:17]
  wire [7:0] _GEN_999 = IR == 8'hc6 ? u_alu_io_out : _GEN_977; // @[Microcode.scala 580:32 584:17]
  wire [7:0] _GEN_1000 = IR == 8'hc6 ? _u_out_F_T_5 : _GEN_978; // @[Microcode.scala 103:13 580:32]
  wire  _GEN_1001 = IR == 8'hc6 ? _u_T_1 : _GEN_979; // @[Microcode.scala 580:32]
  wire [15:0] _GEN_1002 = IR == 8'hc6 ? PC_sampled : _GEN_980; // @[Microcode.scala 580:32 59:15]
  wire [15:0] _GEN_1003 = IR == 8'hc6 ? 16'h0 : _GEN_981; // @[Microcode.scala 580:32 78:21]
  wire  _GEN_1004 = IR == 8'hc6 ? 1'h0 : _GEN_982; // @[Microcode.scala 580:32 80:21]
  wire [7:0] _GEN_1005 = IR == 8'hc6 ? 8'h0 : _GEN_983; // @[Microcode.scala 580:32 81:21]
  wire [15:0] _GEN_1006 = IR == 8'hc6 ? SP_sampled : _GEN_984; // @[Microcode.scala 580:32 60:15]
  wire [2:0] _GEN_1007 = IR == 8'hc6 ? mcycle : _GEN_985; // @[Microcode.scala 580:32 75:21]
  wire  _GEN_1008 = IR == 8'hc6 ? 1'h0 : _GEN_986; // @[Microcode.scala 580:32 79:21]
  wire [7:0] _GEN_1009 = IR == 8'hc6 ? imm8 : _GEN_987; // @[Microcode.scala 580:32 69:15]
  wire [7:0] _GEN_1010 = IR == 8'hc6 ? B_sampled : _GEN_988; // @[Microcode.scala 580:32 63:15]
  wire [7:0] _GEN_1011 = IR == 8'hc6 ? C_sampled : _GEN_989; // @[Microcode.scala 580:32 64:15]
  wire [7:0] _GEN_1012 = IR == 8'hc6 ? D_sampled : _GEN_990; // @[Microcode.scala 580:32 65:15]
  wire [7:0] _GEN_1013 = IR == 8'hc6 ? E_sampled : _GEN_991; // @[Microcode.scala 580:32 66:15]
  wire [7:0] _GEN_1014 = IR == 8'hc6 ? H_sampled : _GEN_992; // @[Microcode.scala 580:32 67:15]
  wire [7:0] _GEN_1015 = IR == 8'hc6 ? L_sampled : _GEN_993; // @[Microcode.scala 580:32 68:15]
  wire [3:0] _GEN_1018 = IR >= 8'hb8 & IR <= 8'hbf ? 4'h2 : _GEN_996; // @[Microcode.scala 568:48 570:17]
  wire [7:0] _GEN_1019 = IR >= 8'hb8 & IR <= 8'hbf ? A_sampled : _GEN_997; // @[Microcode.scala 568:48 571:17]
  wire [7:0] _GEN_1020 = IR >= 8'hb8 & IR <= 8'hbf ? _u_T_103 : _GEN_998; // @[Microcode.scala 568:48 572:17]
  wire [7:0] _GEN_1021 = IR >= 8'hb8 & IR <= 8'hbf ? _u_out_F_T_5 : _GEN_1000; // @[Microcode.scala 103:13 568:48]
  wire  _GEN_1022 = IR >= 8'hb8 & IR <= 8'hbf ? _u_T_1 : _GEN_1001; // @[Microcode.scala 568:48]
  wire [7:0] _GEN_1023 = IR >= 8'hb8 & IR <= 8'hbf ? A_sampled : _GEN_999; // @[Microcode.scala 568:48 61:15]
  wire [15:0] _GEN_1024 = IR >= 8'hb8 & IR <= 8'hbf ? PC_sampled : _GEN_1002; // @[Microcode.scala 568:48 59:15]
  wire [15:0] _GEN_1025 = IR >= 8'hb8 & IR <= 8'hbf ? 16'h0 : _GEN_1003; // @[Microcode.scala 568:48 78:21]
  wire  _GEN_1026 = IR >= 8'hb8 & IR <= 8'hbf ? 1'h0 : _GEN_1004; // @[Microcode.scala 568:48 80:21]
  wire [7:0] _GEN_1027 = IR >= 8'hb8 & IR <= 8'hbf ? 8'h0 : _GEN_1005; // @[Microcode.scala 568:48 81:21]
  wire [15:0] _GEN_1028 = IR >= 8'hb8 & IR <= 8'hbf ? SP_sampled : _GEN_1006; // @[Microcode.scala 568:48 60:15]
  wire [2:0] _GEN_1029 = IR >= 8'hb8 & IR <= 8'hbf ? mcycle : _GEN_1007; // @[Microcode.scala 568:48 75:21]
  wire  _GEN_1030 = IR >= 8'hb8 & IR <= 8'hbf ? 1'h0 : _GEN_1008; // @[Microcode.scala 568:48 79:21]
  wire [7:0] _GEN_1031 = IR >= 8'hb8 & IR <= 8'hbf ? imm8 : _GEN_1009; // @[Microcode.scala 568:48 69:15]
  wire [7:0] _GEN_1032 = IR >= 8'hb8 & IR <= 8'hbf ? B_sampled : _GEN_1010; // @[Microcode.scala 568:48 63:15]
  wire [7:0] _GEN_1033 = IR >= 8'hb8 & IR <= 8'hbf ? C_sampled : _GEN_1011; // @[Microcode.scala 568:48 64:15]
  wire [7:0] _GEN_1034 = IR >= 8'hb8 & IR <= 8'hbf ? D_sampled : _GEN_1012; // @[Microcode.scala 568:48 65:15]
  wire [7:0] _GEN_1035 = IR >= 8'hb8 & IR <= 8'hbf ? E_sampled : _GEN_1013; // @[Microcode.scala 568:48 66:15]
  wire [7:0] _GEN_1036 = IR >= 8'hb8 & IR <= 8'hbf ? H_sampled : _GEN_1014; // @[Microcode.scala 568:48 67:15]
  wire [7:0] _GEN_1037 = IR >= 8'hb8 & IR <= 8'hbf ? L_sampled : _GEN_1015; // @[Microcode.scala 568:48 68:15]
  wire [3:0] _GEN_1040 = IR >= 8'hb0 & IR <= 8'hb7 ? 4'h5 : _GEN_1018; // @[Microcode.scala 556:48 558:17]
  wire [7:0] _GEN_1041 = IR >= 8'hb0 & IR <= 8'hb7 ? A_sampled : _GEN_1019; // @[Microcode.scala 556:48 559:17]
  wire [7:0] _GEN_1042 = IR >= 8'hb0 & IR <= 8'hb7 ? _u_T_103 : _GEN_1020; // @[Microcode.scala 556:48 560:17]
  wire [7:0] _GEN_1043 = IR >= 8'hb0 & IR <= 8'hb7 ? u_alu_io_out : _GEN_1023; // @[Microcode.scala 556:48 561:17]
  wire [7:0] _GEN_1044 = IR >= 8'hb0 & IR <= 8'hb7 ? _u_out_F_T_5 : _GEN_1021; // @[Microcode.scala 103:13 556:48]
  wire  _GEN_1045 = IR >= 8'hb0 & IR <= 8'hb7 ? _u_T_1 : _GEN_1022; // @[Microcode.scala 556:48]
  wire [15:0] _GEN_1046 = IR >= 8'hb0 & IR <= 8'hb7 ? PC_sampled : _GEN_1024; // @[Microcode.scala 556:48 59:15]
  wire [15:0] _GEN_1047 = IR >= 8'hb0 & IR <= 8'hb7 ? 16'h0 : _GEN_1025; // @[Microcode.scala 556:48 78:21]
  wire  _GEN_1048 = IR >= 8'hb0 & IR <= 8'hb7 ? 1'h0 : _GEN_1026; // @[Microcode.scala 556:48 80:21]
  wire [7:0] _GEN_1049 = IR >= 8'hb0 & IR <= 8'hb7 ? 8'h0 : _GEN_1027; // @[Microcode.scala 556:48 81:21]
  wire [15:0] _GEN_1050 = IR >= 8'hb0 & IR <= 8'hb7 ? SP_sampled : _GEN_1028; // @[Microcode.scala 556:48 60:15]
  wire [2:0] _GEN_1051 = IR >= 8'hb0 & IR <= 8'hb7 ? mcycle : _GEN_1029; // @[Microcode.scala 556:48 75:21]
  wire  _GEN_1052 = IR >= 8'hb0 & IR <= 8'hb7 ? 1'h0 : _GEN_1030; // @[Microcode.scala 556:48 79:21]
  wire [7:0] _GEN_1053 = IR >= 8'hb0 & IR <= 8'hb7 ? imm8 : _GEN_1031; // @[Microcode.scala 556:48 69:15]
  wire [7:0] _GEN_1054 = IR >= 8'hb0 & IR <= 8'hb7 ? B_sampled : _GEN_1032; // @[Microcode.scala 556:48 63:15]
  wire [7:0] _GEN_1055 = IR >= 8'hb0 & IR <= 8'hb7 ? C_sampled : _GEN_1033; // @[Microcode.scala 556:48 64:15]
  wire [7:0] _GEN_1056 = IR >= 8'hb0 & IR <= 8'hb7 ? D_sampled : _GEN_1034; // @[Microcode.scala 556:48 65:15]
  wire [7:0] _GEN_1057 = IR >= 8'hb0 & IR <= 8'hb7 ? E_sampled : _GEN_1035; // @[Microcode.scala 556:48 66:15]
  wire [7:0] _GEN_1058 = IR >= 8'hb0 & IR <= 8'hb7 ? H_sampled : _GEN_1036; // @[Microcode.scala 556:48 67:15]
  wire [7:0] _GEN_1059 = IR >= 8'hb0 & IR <= 8'hb7 ? L_sampled : _GEN_1037; // @[Microcode.scala 556:48 68:15]
  wire [3:0] _GEN_1062 = IR >= 8'ha8 & IR <= 8'haf ? 4'h6 : _GEN_1040; // @[Microcode.scala 544:48 546:17]
  wire [7:0] _GEN_1063 = IR >= 8'ha8 & IR <= 8'haf ? A_sampled : _GEN_1041; // @[Microcode.scala 544:48 547:17]
  wire [7:0] _GEN_1064 = IR >= 8'ha8 & IR <= 8'haf ? _u_T_103 : _GEN_1042; // @[Microcode.scala 544:48 548:17]
  wire [7:0] _GEN_1065 = IR >= 8'ha8 & IR <= 8'haf ? u_alu_io_out : _GEN_1043; // @[Microcode.scala 544:48 549:17]
  wire [7:0] _GEN_1066 = IR >= 8'ha8 & IR <= 8'haf ? _u_out_F_T_5 : _GEN_1044; // @[Microcode.scala 103:13 544:48]
  wire  _GEN_1067 = IR >= 8'ha8 & IR <= 8'haf ? _u_T_1 : _GEN_1045; // @[Microcode.scala 544:48]
  wire [15:0] _GEN_1068 = IR >= 8'ha8 & IR <= 8'haf ? PC_sampled : _GEN_1046; // @[Microcode.scala 544:48 59:15]
  wire [15:0] _GEN_1069 = IR >= 8'ha8 & IR <= 8'haf ? 16'h0 : _GEN_1047; // @[Microcode.scala 544:48 78:21]
  wire  _GEN_1070 = IR >= 8'ha8 & IR <= 8'haf ? 1'h0 : _GEN_1048; // @[Microcode.scala 544:48 80:21]
  wire [7:0] _GEN_1071 = IR >= 8'ha8 & IR <= 8'haf ? 8'h0 : _GEN_1049; // @[Microcode.scala 544:48 81:21]
  wire [15:0] _GEN_1072 = IR >= 8'ha8 & IR <= 8'haf ? SP_sampled : _GEN_1050; // @[Microcode.scala 544:48 60:15]
  wire [2:0] _GEN_1073 = IR >= 8'ha8 & IR <= 8'haf ? mcycle : _GEN_1051; // @[Microcode.scala 544:48 75:21]
  wire  _GEN_1074 = IR >= 8'ha8 & IR <= 8'haf ? 1'h0 : _GEN_1052; // @[Microcode.scala 544:48 79:21]
  wire [7:0] _GEN_1075 = IR >= 8'ha8 & IR <= 8'haf ? imm8 : _GEN_1053; // @[Microcode.scala 544:48 69:15]
  wire [7:0] _GEN_1076 = IR >= 8'ha8 & IR <= 8'haf ? B_sampled : _GEN_1054; // @[Microcode.scala 544:48 63:15]
  wire [7:0] _GEN_1077 = IR >= 8'ha8 & IR <= 8'haf ? C_sampled : _GEN_1055; // @[Microcode.scala 544:48 64:15]
  wire [7:0] _GEN_1078 = IR >= 8'ha8 & IR <= 8'haf ? D_sampled : _GEN_1056; // @[Microcode.scala 544:48 65:15]
  wire [7:0] _GEN_1079 = IR >= 8'ha8 & IR <= 8'haf ? E_sampled : _GEN_1057; // @[Microcode.scala 544:48 66:15]
  wire [7:0] _GEN_1080 = IR >= 8'ha8 & IR <= 8'haf ? H_sampled : _GEN_1058; // @[Microcode.scala 544:48 67:15]
  wire [7:0] _GEN_1081 = IR >= 8'ha8 & IR <= 8'haf ? L_sampled : _GEN_1059; // @[Microcode.scala 544:48 68:15]
  wire [3:0] _GEN_1084 = IR >= 8'ha0 & IR <= 8'ha7 ? 4'h4 : _GEN_1062; // @[Microcode.scala 532:48 534:17]
  wire [7:0] _GEN_1085 = IR >= 8'ha0 & IR <= 8'ha7 ? A_sampled : _GEN_1063; // @[Microcode.scala 532:48 535:17]
  wire [7:0] _GEN_1086 = IR >= 8'ha0 & IR <= 8'ha7 ? _u_T_103 : _GEN_1064; // @[Microcode.scala 532:48 536:17]
  wire [7:0] _GEN_1087 = IR >= 8'ha0 & IR <= 8'ha7 ? u_alu_io_out : _GEN_1065; // @[Microcode.scala 532:48 537:17]
  wire [7:0] _GEN_1088 = IR >= 8'ha0 & IR <= 8'ha7 ? _u_out_F_T_5 : _GEN_1066; // @[Microcode.scala 103:13 532:48]
  wire  _GEN_1089 = IR >= 8'ha0 & IR <= 8'ha7 ? _u_T_1 : _GEN_1067; // @[Microcode.scala 532:48]
  wire [15:0] _GEN_1090 = IR >= 8'ha0 & IR <= 8'ha7 ? PC_sampled : _GEN_1068; // @[Microcode.scala 532:48 59:15]
  wire [15:0] _GEN_1091 = IR >= 8'ha0 & IR <= 8'ha7 ? 16'h0 : _GEN_1069; // @[Microcode.scala 532:48 78:21]
  wire  _GEN_1092 = IR >= 8'ha0 & IR <= 8'ha7 ? 1'h0 : _GEN_1070; // @[Microcode.scala 532:48 80:21]
  wire [7:0] _GEN_1093 = IR >= 8'ha0 & IR <= 8'ha7 ? 8'h0 : _GEN_1071; // @[Microcode.scala 532:48 81:21]
  wire [15:0] _GEN_1094 = IR >= 8'ha0 & IR <= 8'ha7 ? SP_sampled : _GEN_1072; // @[Microcode.scala 532:48 60:15]
  wire [2:0] _GEN_1095 = IR >= 8'ha0 & IR <= 8'ha7 ? mcycle : _GEN_1073; // @[Microcode.scala 532:48 75:21]
  wire  _GEN_1096 = IR >= 8'ha0 & IR <= 8'ha7 ? 1'h0 : _GEN_1074; // @[Microcode.scala 532:48 79:21]
  wire [7:0] _GEN_1097 = IR >= 8'ha0 & IR <= 8'ha7 ? imm8 : _GEN_1075; // @[Microcode.scala 532:48 69:15]
  wire [7:0] _GEN_1098 = IR >= 8'ha0 & IR <= 8'ha7 ? B_sampled : _GEN_1076; // @[Microcode.scala 532:48 63:15]
  wire [7:0] _GEN_1099 = IR >= 8'ha0 & IR <= 8'ha7 ? C_sampled : _GEN_1077; // @[Microcode.scala 532:48 64:15]
  wire [7:0] _GEN_1100 = IR >= 8'ha0 & IR <= 8'ha7 ? D_sampled : _GEN_1078; // @[Microcode.scala 532:48 65:15]
  wire [7:0] _GEN_1101 = IR >= 8'ha0 & IR <= 8'ha7 ? E_sampled : _GEN_1079; // @[Microcode.scala 532:48 66:15]
  wire [7:0] _GEN_1102 = IR >= 8'ha0 & IR <= 8'ha7 ? H_sampled : _GEN_1080; // @[Microcode.scala 532:48 67:15]
  wire [7:0] _GEN_1103 = IR >= 8'ha0 & IR <= 8'ha7 ? L_sampled : _GEN_1081; // @[Microcode.scala 532:48 68:15]
  wire [3:0] _GEN_1106 = IR >= 8'h98 & IR <= 8'h9f ? 4'h3 : _GEN_1084; // @[Microcode.scala 520:48 522:17]
  wire [7:0] _GEN_1107 = IR >= 8'h98 & IR <= 8'h9f ? A_sampled : _GEN_1085; // @[Microcode.scala 520:48 523:17]
  wire [7:0] _GEN_1108 = IR >= 8'h98 & IR <= 8'h9f ? _u_T_103 : _GEN_1086; // @[Microcode.scala 520:48 524:17]
  wire [7:0] _GEN_1109 = IR >= 8'h98 & IR <= 8'h9f ? u_alu_io_out : _GEN_1087; // @[Microcode.scala 520:48 525:17]
  wire [7:0] _GEN_1110 = IR >= 8'h98 & IR <= 8'h9f ? _u_out_F_T_5 : _GEN_1088; // @[Microcode.scala 103:13 520:48]
  wire  _GEN_1111 = IR >= 8'h98 & IR <= 8'h9f ? _u_T_1 : _GEN_1089; // @[Microcode.scala 520:48]
  wire [15:0] _GEN_1112 = IR >= 8'h98 & IR <= 8'h9f ? PC_sampled : _GEN_1090; // @[Microcode.scala 520:48 59:15]
  wire [15:0] _GEN_1113 = IR >= 8'h98 & IR <= 8'h9f ? 16'h0 : _GEN_1091; // @[Microcode.scala 520:48 78:21]
  wire  _GEN_1114 = IR >= 8'h98 & IR <= 8'h9f ? 1'h0 : _GEN_1092; // @[Microcode.scala 520:48 80:21]
  wire [7:0] _GEN_1115 = IR >= 8'h98 & IR <= 8'h9f ? 8'h0 : _GEN_1093; // @[Microcode.scala 520:48 81:21]
  wire [15:0] _GEN_1116 = IR >= 8'h98 & IR <= 8'h9f ? SP_sampled : _GEN_1094; // @[Microcode.scala 520:48 60:15]
  wire [2:0] _GEN_1117 = IR >= 8'h98 & IR <= 8'h9f ? mcycle : _GEN_1095; // @[Microcode.scala 520:48 75:21]
  wire  _GEN_1118 = IR >= 8'h98 & IR <= 8'h9f ? 1'h0 : _GEN_1096; // @[Microcode.scala 520:48 79:21]
  wire [7:0] _GEN_1119 = IR >= 8'h98 & IR <= 8'h9f ? imm8 : _GEN_1097; // @[Microcode.scala 520:48 69:15]
  wire [7:0] _GEN_1120 = IR >= 8'h98 & IR <= 8'h9f ? B_sampled : _GEN_1098; // @[Microcode.scala 520:48 63:15]
  wire [7:0] _GEN_1121 = IR >= 8'h98 & IR <= 8'h9f ? C_sampled : _GEN_1099; // @[Microcode.scala 520:48 64:15]
  wire [7:0] _GEN_1122 = IR >= 8'h98 & IR <= 8'h9f ? D_sampled : _GEN_1100; // @[Microcode.scala 520:48 65:15]
  wire [7:0] _GEN_1123 = IR >= 8'h98 & IR <= 8'h9f ? E_sampled : _GEN_1101; // @[Microcode.scala 520:48 66:15]
  wire [7:0] _GEN_1124 = IR >= 8'h98 & IR <= 8'h9f ? H_sampled : _GEN_1102; // @[Microcode.scala 520:48 67:15]
  wire [7:0] _GEN_1125 = IR >= 8'h98 & IR <= 8'h9f ? L_sampled : _GEN_1103; // @[Microcode.scala 520:48 68:15]
  wire [3:0] _GEN_1128 = IR >= 8'h90 & IR <= 8'h97 ? 4'h2 : _GEN_1106; // @[Microcode.scala 508:48 510:17]
  wire [7:0] _GEN_1129 = IR >= 8'h90 & IR <= 8'h97 ? A_sampled : _GEN_1107; // @[Microcode.scala 508:48 511:17]
  wire [7:0] _GEN_1130 = IR >= 8'h90 & IR <= 8'h97 ? _u_T_103 : _GEN_1108; // @[Microcode.scala 508:48 512:17]
  wire [7:0] _GEN_1131 = IR >= 8'h90 & IR <= 8'h97 ? u_alu_io_out : _GEN_1109; // @[Microcode.scala 508:48 513:17]
  wire [7:0] _GEN_1132 = IR >= 8'h90 & IR <= 8'h97 ? _u_out_F_T_5 : _GEN_1110; // @[Microcode.scala 103:13 508:48]
  wire  _GEN_1133 = IR >= 8'h90 & IR <= 8'h97 ? _u_T_1 : _GEN_1111; // @[Microcode.scala 508:48]
  wire [15:0] _GEN_1134 = IR >= 8'h90 & IR <= 8'h97 ? PC_sampled : _GEN_1112; // @[Microcode.scala 508:48 59:15]
  wire [15:0] _GEN_1135 = IR >= 8'h90 & IR <= 8'h97 ? 16'h0 : _GEN_1113; // @[Microcode.scala 508:48 78:21]
  wire  _GEN_1136 = IR >= 8'h90 & IR <= 8'h97 ? 1'h0 : _GEN_1114; // @[Microcode.scala 508:48 80:21]
  wire [7:0] _GEN_1137 = IR >= 8'h90 & IR <= 8'h97 ? 8'h0 : _GEN_1115; // @[Microcode.scala 508:48 81:21]
  wire [15:0] _GEN_1138 = IR >= 8'h90 & IR <= 8'h97 ? SP_sampled : _GEN_1116; // @[Microcode.scala 508:48 60:15]
  wire [2:0] _GEN_1139 = IR >= 8'h90 & IR <= 8'h97 ? mcycle : _GEN_1117; // @[Microcode.scala 508:48 75:21]
  wire  _GEN_1140 = IR >= 8'h90 & IR <= 8'h97 ? 1'h0 : _GEN_1118; // @[Microcode.scala 508:48 79:21]
  wire [7:0] _GEN_1141 = IR >= 8'h90 & IR <= 8'h97 ? imm8 : _GEN_1119; // @[Microcode.scala 508:48 69:15]
  wire [7:0] _GEN_1142 = IR >= 8'h90 & IR <= 8'h97 ? B_sampled : _GEN_1120; // @[Microcode.scala 508:48 63:15]
  wire [7:0] _GEN_1143 = IR >= 8'h90 & IR <= 8'h97 ? C_sampled : _GEN_1121; // @[Microcode.scala 508:48 64:15]
  wire [7:0] _GEN_1144 = IR >= 8'h90 & IR <= 8'h97 ? D_sampled : _GEN_1122; // @[Microcode.scala 508:48 65:15]
  wire [7:0] _GEN_1145 = IR >= 8'h90 & IR <= 8'h97 ? E_sampled : _GEN_1123; // @[Microcode.scala 508:48 66:15]
  wire [7:0] _GEN_1146 = IR >= 8'h90 & IR <= 8'h97 ? H_sampled : _GEN_1124; // @[Microcode.scala 508:48 67:15]
  wire [7:0] _GEN_1147 = IR >= 8'h90 & IR <= 8'h97 ? L_sampled : _GEN_1125; // @[Microcode.scala 508:48 68:15]
  wire [3:0] _GEN_1150 = IR >= 8'h88 & IR <= 8'h8f ? 4'h1 : _GEN_1128; // @[Microcode.scala 496:48 498:17]
  wire [7:0] _GEN_1151 = IR >= 8'h88 & IR <= 8'h8f ? A_sampled : _GEN_1129; // @[Microcode.scala 496:48 499:17]
  wire [7:0] _GEN_1152 = IR >= 8'h88 & IR <= 8'h8f ? _u_T_103 : _GEN_1130; // @[Microcode.scala 496:48 500:17]
  wire [7:0] _GEN_1153 = IR >= 8'h88 & IR <= 8'h8f ? u_alu_io_out : _GEN_1131; // @[Microcode.scala 496:48 501:17]
  wire [7:0] _GEN_1154 = IR >= 8'h88 & IR <= 8'h8f ? _u_out_F_T_5 : _GEN_1132; // @[Microcode.scala 103:13 496:48]
  wire  _GEN_1155 = IR >= 8'h88 & IR <= 8'h8f ? _u_T_1 : _GEN_1133; // @[Microcode.scala 496:48]
  wire [15:0] _GEN_1156 = IR >= 8'h88 & IR <= 8'h8f ? PC_sampled : _GEN_1134; // @[Microcode.scala 496:48 59:15]
  wire [15:0] _GEN_1157 = IR >= 8'h88 & IR <= 8'h8f ? 16'h0 : _GEN_1135; // @[Microcode.scala 496:48 78:21]
  wire  _GEN_1158 = IR >= 8'h88 & IR <= 8'h8f ? 1'h0 : _GEN_1136; // @[Microcode.scala 496:48 80:21]
  wire [7:0] _GEN_1159 = IR >= 8'h88 & IR <= 8'h8f ? 8'h0 : _GEN_1137; // @[Microcode.scala 496:48 81:21]
  wire [15:0] _GEN_1160 = IR >= 8'h88 & IR <= 8'h8f ? SP_sampled : _GEN_1138; // @[Microcode.scala 496:48 60:15]
  wire [2:0] _GEN_1161 = IR >= 8'h88 & IR <= 8'h8f ? mcycle : _GEN_1139; // @[Microcode.scala 496:48 75:21]
  wire  _GEN_1162 = IR >= 8'h88 & IR <= 8'h8f ? 1'h0 : _GEN_1140; // @[Microcode.scala 496:48 79:21]
  wire [7:0] _GEN_1163 = IR >= 8'h88 & IR <= 8'h8f ? imm8 : _GEN_1141; // @[Microcode.scala 496:48 69:15]
  wire [7:0] _GEN_1164 = IR >= 8'h88 & IR <= 8'h8f ? B_sampled : _GEN_1142; // @[Microcode.scala 496:48 63:15]
  wire [7:0] _GEN_1165 = IR >= 8'h88 & IR <= 8'h8f ? C_sampled : _GEN_1143; // @[Microcode.scala 496:48 64:15]
  wire [7:0] _GEN_1166 = IR >= 8'h88 & IR <= 8'h8f ? D_sampled : _GEN_1144; // @[Microcode.scala 496:48 65:15]
  wire [7:0] _GEN_1167 = IR >= 8'h88 & IR <= 8'h8f ? E_sampled : _GEN_1145; // @[Microcode.scala 496:48 66:15]
  wire [7:0] _GEN_1168 = IR >= 8'h88 & IR <= 8'h8f ? H_sampled : _GEN_1146; // @[Microcode.scala 496:48 67:15]
  wire [7:0] _GEN_1169 = IR >= 8'h88 & IR <= 8'h8f ? L_sampled : _GEN_1147; // @[Microcode.scala 496:48 68:15]
  wire [3:0] _GEN_1172 = IR >= 8'h80 & IR <= 8'h87 ? 4'h0 : _GEN_1150; // @[Microcode.scala 484:48 486:17]
  wire [7:0] _GEN_1173 = IR >= 8'h80 & IR <= 8'h87 ? A_sampled : _GEN_1151; // @[Microcode.scala 484:48 487:17]
  wire [7:0] _GEN_1174 = IR >= 8'h80 & IR <= 8'h87 ? _u_T_103 : _GEN_1152; // @[Microcode.scala 484:48 488:17]
  wire [7:0] _GEN_1175 = IR >= 8'h80 & IR <= 8'h87 ? u_alu_io_out : _GEN_1153; // @[Microcode.scala 484:48 489:17]
  wire [7:0] _GEN_1176 = IR >= 8'h80 & IR <= 8'h87 ? _u_out_F_T_5 : _GEN_1154; // @[Microcode.scala 103:13 484:48]
  wire  _GEN_1177 = IR >= 8'h80 & IR <= 8'h87 ? _u_T_1 : _GEN_1155; // @[Microcode.scala 484:48]
  wire [15:0] _GEN_1178 = IR >= 8'h80 & IR <= 8'h87 ? PC_sampled : _GEN_1156; // @[Microcode.scala 484:48 59:15]
  wire [15:0] _GEN_1179 = IR >= 8'h80 & IR <= 8'h87 ? 16'h0 : _GEN_1157; // @[Microcode.scala 484:48 78:21]
  wire  _GEN_1180 = IR >= 8'h80 & IR <= 8'h87 ? 1'h0 : _GEN_1158; // @[Microcode.scala 484:48 80:21]
  wire [7:0] _GEN_1181 = IR >= 8'h80 & IR <= 8'h87 ? 8'h0 : _GEN_1159; // @[Microcode.scala 484:48 81:21]
  wire [15:0] _GEN_1182 = IR >= 8'h80 & IR <= 8'h87 ? SP_sampled : _GEN_1160; // @[Microcode.scala 484:48 60:15]
  wire [2:0] _GEN_1183 = IR >= 8'h80 & IR <= 8'h87 ? mcycle : _GEN_1161; // @[Microcode.scala 484:48 75:21]
  wire  _GEN_1184 = IR >= 8'h80 & IR <= 8'h87 ? 1'h0 : _GEN_1162; // @[Microcode.scala 484:48 79:21]
  wire [7:0] _GEN_1185 = IR >= 8'h80 & IR <= 8'h87 ? imm8 : _GEN_1163; // @[Microcode.scala 484:48 69:15]
  wire [7:0] _GEN_1186 = IR >= 8'h80 & IR <= 8'h87 ? B_sampled : _GEN_1164; // @[Microcode.scala 484:48 63:15]
  wire [7:0] _GEN_1187 = IR >= 8'h80 & IR <= 8'h87 ? C_sampled : _GEN_1165; // @[Microcode.scala 484:48 64:15]
  wire [7:0] _GEN_1188 = IR >= 8'h80 & IR <= 8'h87 ? D_sampled : _GEN_1166; // @[Microcode.scala 484:48 65:15]
  wire [7:0] _GEN_1189 = IR >= 8'h80 & IR <= 8'h87 ? E_sampled : _GEN_1167; // @[Microcode.scala 484:48 66:15]
  wire [7:0] _GEN_1190 = IR >= 8'h80 & IR <= 8'h87 ? H_sampled : _GEN_1168; // @[Microcode.scala 484:48 67:15]
  wire [7:0] _GEN_1191 = IR >= 8'h80 & IR <= 8'h87 ? L_sampled : _GEN_1169; // @[Microcode.scala 484:48 68:15]
  wire [15:0] _GEN_1194 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? u_HL : _GEN_1179; // @[Microcode.scala 472:77 475:18]
  wire  _GEN_1195 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e | _GEN_1184; // @[Microcode.scala 472:77 476:18]
  wire [7:0] _GEN_1196 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _GEN_325 : _GEN_1186; // @[Microcode.scala 472:77]
  wire [7:0] _GEN_1197 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _GEN_326 : _GEN_1187; // @[Microcode.scala 472:77]
  wire [7:0] _GEN_1198 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _GEN_327 : _GEN_1188; // @[Microcode.scala 472:77]
  wire [7:0] _GEN_1199 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _GEN_328 : _GEN_1189; // @[Microcode.scala 472:77]
  wire [7:0] _GEN_1200 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _GEN_329 : _GEN_1190; // @[Microcode.scala 472:77]
  wire [7:0] _GEN_1201 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _GEN_330 : _GEN_1191; // @[Microcode.scala 472:77]
  wire [7:0] _GEN_1202 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _GEN_331 : _GEN_1175; // @[Microcode.scala 472:77]
  wire  _GEN_1203 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? _u_T_1 : _GEN_1177; // @[Microcode.scala 472:77]
  wire [3:0] _GEN_1204 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? 4'h0 : _GEN_1172; // @[Microcode.scala 108:21 472:77]
  wire [7:0] _GEN_1205 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? 8'h0 : _GEN_1173; // @[Microcode.scala 106:21 472:77]
  wire [7:0] _GEN_1206 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? 8'h0 : _GEN_1174; // @[Microcode.scala 107:21 472:77]
  wire [7:0] _GEN_1207 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? F_sampled : _GEN_1176; // @[Microcode.scala 472:77 62:15]
  wire [15:0] _GEN_1208 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? PC_sampled : _GEN_1178; // @[Microcode.scala 472:77 59:15]
  wire  _GEN_1209 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? 1'h0 : _GEN_1180; // @[Microcode.scala 472:77 80:21]
  wire [7:0] _GEN_1210 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? 8'h0 : _GEN_1181; // @[Microcode.scala 472:77 81:21]
  wire [15:0] _GEN_1211 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? SP_sampled : _GEN_1182; // @[Microcode.scala 472:77 60:15]
  wire [2:0] _GEN_1212 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? mcycle : _GEN_1183; // @[Microcode.scala 472:77 75:21]
  wire [7:0] _GEN_1213 = _u_T_173 | IR == 8'h66 | IR == 8'h6e | IR == 8'h7e ? imm8 : _GEN_1185; // @[Microcode.scala 472:77 69:15]
  wire [15:0] _GEN_1216 = IR == 8'hf0 ? _GEN_300 : _GEN_1194; // @[Microcode.scala 456:32]
  wire  _GEN_1217 = IR == 8'hf0 ? _GEN_247 : _GEN_1195; // @[Microcode.scala 456:32]
  wire [7:0] _GEN_1218 = IR == 8'hf0 ? _GEN_248 : _GEN_1202; // @[Microcode.scala 456:32]
  wire  _GEN_1219 = IR == 8'hf0 ? _GEN_251 : _GEN_1203; // @[Microcode.scala 456:32]
  wire [7:0] _GEN_1220 = IR == 8'hf0 ? B_sampled : _GEN_1196; // @[Microcode.scala 456:32 63:15]
  wire [7:0] _GEN_1221 = IR == 8'hf0 ? C_sampled : _GEN_1197; // @[Microcode.scala 456:32 64:15]
  wire [7:0] _GEN_1222 = IR == 8'hf0 ? D_sampled : _GEN_1198; // @[Microcode.scala 456:32 65:15]
  wire [7:0] _GEN_1223 = IR == 8'hf0 ? E_sampled : _GEN_1199; // @[Microcode.scala 456:32 66:15]
  wire [7:0] _GEN_1224 = IR == 8'hf0 ? H_sampled : _GEN_1200; // @[Microcode.scala 456:32 67:15]
  wire [7:0] _GEN_1225 = IR == 8'hf0 ? L_sampled : _GEN_1201; // @[Microcode.scala 456:32 68:15]
  wire [3:0] _GEN_1226 = IR == 8'hf0 ? 4'h0 : _GEN_1204; // @[Microcode.scala 108:21 456:32]
  wire [7:0] _GEN_1227 = IR == 8'hf0 ? 8'h0 : _GEN_1205; // @[Microcode.scala 106:21 456:32]
  wire [7:0] _GEN_1228 = IR == 8'hf0 ? 8'h0 : _GEN_1206; // @[Microcode.scala 107:21 456:32]
  wire [7:0] _GEN_1229 = IR == 8'hf0 ? F_sampled : _GEN_1207; // @[Microcode.scala 456:32 62:15]
  wire [15:0] _GEN_1230 = IR == 8'hf0 ? PC_sampled : _GEN_1208; // @[Microcode.scala 456:32 59:15]
  wire  _GEN_1231 = IR == 8'hf0 ? 1'h0 : _GEN_1209; // @[Microcode.scala 456:32 80:21]
  wire [7:0] _GEN_1232 = IR == 8'hf0 ? 8'h0 : _GEN_1210; // @[Microcode.scala 456:32 81:21]
  wire [15:0] _GEN_1233 = IR == 8'hf0 ? SP_sampled : _GEN_1211; // @[Microcode.scala 456:32 60:15]
  wire [2:0] _GEN_1234 = IR == 8'hf0 ? mcycle : _GEN_1212; // @[Microcode.scala 456:32 75:21]
  wire [7:0] _GEN_1235 = IR == 8'hf0 ? imm8 : _GEN_1213; // @[Microcode.scala 456:32 69:15]
  wire [15:0] _GEN_1238 = IR == 8'he0 ? _GEN_290 : _GEN_1216; // @[Microcode.scala 445:32]
  wire  _GEN_1239 = IR == 8'he0 ? _u_T_146 : _GEN_1231; // @[Microcode.scala 445:32]
  wire [7:0] _GEN_1240 = IR == 8'he0 ? _GEN_270 : _GEN_1232; // @[Microcode.scala 445:32]
  wire  _GEN_1241 = IR == 8'he0 ? _u_T_1 : _GEN_1219; // @[Microcode.scala 445:32]
  wire  _GEN_1242 = IR == 8'he0 ? 1'h0 : _GEN_1217; // @[Microcode.scala 445:32 79:21]
  wire [7:0] _GEN_1243 = IR == 8'he0 ? A_sampled : _GEN_1218; // @[Microcode.scala 445:32 61:15]
  wire [7:0] _GEN_1244 = IR == 8'he0 ? B_sampled : _GEN_1220; // @[Microcode.scala 445:32 63:15]
  wire [7:0] _GEN_1245 = IR == 8'he0 ? C_sampled : _GEN_1221; // @[Microcode.scala 445:32 64:15]
  wire [7:0] _GEN_1246 = IR == 8'he0 ? D_sampled : _GEN_1222; // @[Microcode.scala 445:32 65:15]
  wire [7:0] _GEN_1247 = IR == 8'he0 ? E_sampled : _GEN_1223; // @[Microcode.scala 445:32 66:15]
  wire [7:0] _GEN_1248 = IR == 8'he0 ? H_sampled : _GEN_1224; // @[Microcode.scala 445:32 67:15]
  wire [7:0] _GEN_1249 = IR == 8'he0 ? L_sampled : _GEN_1225; // @[Microcode.scala 445:32 68:15]
  wire [3:0] _GEN_1250 = IR == 8'he0 ? 4'h0 : _GEN_1226; // @[Microcode.scala 108:21 445:32]
  wire [7:0] _GEN_1251 = IR == 8'he0 ? 8'h0 : _GEN_1227; // @[Microcode.scala 106:21 445:32]
  wire [7:0] _GEN_1252 = IR == 8'he0 ? 8'h0 : _GEN_1228; // @[Microcode.scala 107:21 445:32]
  wire [7:0] _GEN_1253 = IR == 8'he0 ? F_sampled : _GEN_1229; // @[Microcode.scala 445:32 62:15]
  wire [15:0] _GEN_1254 = IR == 8'he0 ? PC_sampled : _GEN_1230; // @[Microcode.scala 445:32 59:15]
  wire [15:0] _GEN_1255 = IR == 8'he0 ? SP_sampled : _GEN_1233; // @[Microcode.scala 445:32 60:15]
  wire [2:0] _GEN_1256 = IR == 8'he0 ? mcycle : _GEN_1234; // @[Microcode.scala 445:32 75:21]
  wire [7:0] _GEN_1257 = IR == 8'he0 ? imm8 : _GEN_1235; // @[Microcode.scala 445:32 69:15]
  wire [15:0] _GEN_1260 = IR == 8'he2 ? _GEN_286 : _GEN_1238; // @[Microcode.scala 434:32]
  wire  _GEN_1261 = IR == 8'he2 ? _u_T_146 : _GEN_1239; // @[Microcode.scala 434:32]
  wire [7:0] _GEN_1262 = IR == 8'he2 ? _GEN_270 : _GEN_1240; // @[Microcode.scala 434:32]
  wire  _GEN_1263 = IR == 8'he2 ? _u_T_1 : _GEN_1241; // @[Microcode.scala 434:32]
  wire  _GEN_1264 = IR == 8'he2 ? 1'h0 : _GEN_1242; // @[Microcode.scala 434:32 79:21]
  wire [7:0] _GEN_1265 = IR == 8'he2 ? A_sampled : _GEN_1243; // @[Microcode.scala 434:32 61:15]
  wire [7:0] _GEN_1266 = IR == 8'he2 ? B_sampled : _GEN_1244; // @[Microcode.scala 434:32 63:15]
  wire [7:0] _GEN_1267 = IR == 8'he2 ? C_sampled : _GEN_1245; // @[Microcode.scala 434:32 64:15]
  wire [7:0] _GEN_1268 = IR == 8'he2 ? D_sampled : _GEN_1246; // @[Microcode.scala 434:32 65:15]
  wire [7:0] _GEN_1269 = IR == 8'he2 ? E_sampled : _GEN_1247; // @[Microcode.scala 434:32 66:15]
  wire [7:0] _GEN_1270 = IR == 8'he2 ? H_sampled : _GEN_1248; // @[Microcode.scala 434:32 67:15]
  wire [7:0] _GEN_1271 = IR == 8'he2 ? L_sampled : _GEN_1249; // @[Microcode.scala 434:32 68:15]
  wire [3:0] _GEN_1272 = IR == 8'he2 ? 4'h0 : _GEN_1250; // @[Microcode.scala 108:21 434:32]
  wire [7:0] _GEN_1273 = IR == 8'he2 ? 8'h0 : _GEN_1251; // @[Microcode.scala 106:21 434:32]
  wire [7:0] _GEN_1274 = IR == 8'he2 ? 8'h0 : _GEN_1252; // @[Microcode.scala 107:21 434:32]
  wire [7:0] _GEN_1275 = IR == 8'he2 ? F_sampled : _GEN_1253; // @[Microcode.scala 434:32 62:15]
  wire [15:0] _GEN_1276 = IR == 8'he2 ? PC_sampled : _GEN_1254; // @[Microcode.scala 434:32 59:15]
  wire [15:0] _GEN_1277 = IR == 8'he2 ? SP_sampled : _GEN_1255; // @[Microcode.scala 434:32 60:15]
  wire [2:0] _GEN_1278 = IR == 8'he2 ? mcycle : _GEN_1256; // @[Microcode.scala 434:32 75:21]
  wire [7:0] _GEN_1279 = IR == 8'he2 ? imm8 : _GEN_1257; // @[Microcode.scala 434:32 69:15]
  wire [15:0] _GEN_1282 = IR == 8'hf2 ? _GEN_282 : _GEN_1260; // @[Microcode.scala 420:32]
  wire  _GEN_1283 = IR == 8'hf2 ? _GEN_247 : _GEN_1264; // @[Microcode.scala 420:32]
  wire [7:0] _GEN_1284 = IR == 8'hf2 ? _GEN_248 : _GEN_1265; // @[Microcode.scala 420:32]
  wire  _GEN_1285 = IR == 8'hf2 ? _GEN_251 : _GEN_1263; // @[Microcode.scala 420:32]
  wire  _GEN_1286 = IR == 8'hf2 ? 1'h0 : _GEN_1261; // @[Microcode.scala 420:32 80:21]
  wire [7:0] _GEN_1287 = IR == 8'hf2 ? 8'h0 : _GEN_1262; // @[Microcode.scala 420:32 81:21]
  wire [7:0] _GEN_1288 = IR == 8'hf2 ? B_sampled : _GEN_1266; // @[Microcode.scala 420:32 63:15]
  wire [7:0] _GEN_1289 = IR == 8'hf2 ? C_sampled : _GEN_1267; // @[Microcode.scala 420:32 64:15]
  wire [7:0] _GEN_1290 = IR == 8'hf2 ? D_sampled : _GEN_1268; // @[Microcode.scala 420:32 65:15]
  wire [7:0] _GEN_1291 = IR == 8'hf2 ? E_sampled : _GEN_1269; // @[Microcode.scala 420:32 66:15]
  wire [7:0] _GEN_1292 = IR == 8'hf2 ? H_sampled : _GEN_1270; // @[Microcode.scala 420:32 67:15]
  wire [7:0] _GEN_1293 = IR == 8'hf2 ? L_sampled : _GEN_1271; // @[Microcode.scala 420:32 68:15]
  wire [3:0] _GEN_1294 = IR == 8'hf2 ? 4'h0 : _GEN_1272; // @[Microcode.scala 108:21 420:32]
  wire [7:0] _GEN_1295 = IR == 8'hf2 ? 8'h0 : _GEN_1273; // @[Microcode.scala 106:21 420:32]
  wire [7:0] _GEN_1296 = IR == 8'hf2 ? 8'h0 : _GEN_1274; // @[Microcode.scala 107:21 420:32]
  wire [7:0] _GEN_1297 = IR == 8'hf2 ? F_sampled : _GEN_1275; // @[Microcode.scala 420:32 62:15]
  wire [15:0] _GEN_1298 = IR == 8'hf2 ? PC_sampled : _GEN_1276; // @[Microcode.scala 420:32 59:15]
  wire [15:0] _GEN_1299 = IR == 8'hf2 ? SP_sampled : _GEN_1277; // @[Microcode.scala 420:32 60:15]
  wire [2:0] _GEN_1300 = IR == 8'hf2 ? mcycle : _GEN_1278; // @[Microcode.scala 420:32 75:21]
  wire [7:0] _GEN_1301 = IR == 8'hf2 ? imm8 : _GEN_1279; // @[Microcode.scala 420:32 69:15]
  wire [7:0] _GEN_1304 = IR == 8'h32 ? _u_result_T_26[15:8] : _GEN_1292; // @[Microcode.scala 404:32 407:13]
  wire [7:0] _GEN_1305 = IR == 8'h32 ? _u_result_T_26[7:0] : _GEN_1293; // @[Microcode.scala 404:32 408:13]
  wire [15:0] _GEN_1306 = IR == 8'h32 ? _GEN_268 : _GEN_1282; // @[Microcode.scala 404:32]
  wire  _GEN_1307 = IR == 8'h32 ? _u_T_146 : _GEN_1286; // @[Microcode.scala 404:32]
  wire [7:0] _GEN_1308 = IR == 8'h32 ? _GEN_270 : _GEN_1287; // @[Microcode.scala 404:32]
  wire  _GEN_1309 = IR == 8'h32 ? _u_T_1 : _GEN_1285; // @[Microcode.scala 404:32]
  wire  _GEN_1310 = IR == 8'h32 ? 1'h0 : _GEN_1283; // @[Microcode.scala 404:32 79:21]
  wire [7:0] _GEN_1311 = IR == 8'h32 ? A_sampled : _GEN_1284; // @[Microcode.scala 404:32 61:15]
  wire [7:0] _GEN_1312 = IR == 8'h32 ? B_sampled : _GEN_1288; // @[Microcode.scala 404:32 63:15]
  wire [7:0] _GEN_1313 = IR == 8'h32 ? C_sampled : _GEN_1289; // @[Microcode.scala 404:32 64:15]
  wire [7:0] _GEN_1314 = IR == 8'h32 ? D_sampled : _GEN_1290; // @[Microcode.scala 404:32 65:15]
  wire [7:0] _GEN_1315 = IR == 8'h32 ? E_sampled : _GEN_1291; // @[Microcode.scala 404:32 66:15]
  wire [3:0] _GEN_1316 = IR == 8'h32 ? 4'h0 : _GEN_1294; // @[Microcode.scala 108:21 404:32]
  wire [7:0] _GEN_1317 = IR == 8'h32 ? 8'h0 : _GEN_1295; // @[Microcode.scala 106:21 404:32]
  wire [7:0] _GEN_1318 = IR == 8'h32 ? 8'h0 : _GEN_1296; // @[Microcode.scala 107:21 404:32]
  wire [7:0] _GEN_1319 = IR == 8'h32 ? F_sampled : _GEN_1297; // @[Microcode.scala 404:32 62:15]
  wire [15:0] _GEN_1320 = IR == 8'h32 ? PC_sampled : _GEN_1298; // @[Microcode.scala 404:32 59:15]
  wire [15:0] _GEN_1321 = IR == 8'h32 ? SP_sampled : _GEN_1299; // @[Microcode.scala 404:32 60:15]
  wire [2:0] _GEN_1322 = IR == 8'h32 ? mcycle : _GEN_1300; // @[Microcode.scala 404:32 75:21]
  wire [7:0] _GEN_1323 = IR == 8'h32 ? imm8 : _GEN_1301; // @[Microcode.scala 404:32 69:15]
  wire [7:0] _GEN_1326 = IR == 8'h22 ? _u_result_T_8[15:8] : _GEN_1304; // @[Microcode.scala 388:32 391:13]
  wire [7:0] _GEN_1327 = IR == 8'h22 ? _u_result_T_8[7:0] : _GEN_1305; // @[Microcode.scala 388:32 392:13]
  wire [15:0] _GEN_1328 = IR == 8'h22 ? _GEN_268 : _GEN_1306; // @[Microcode.scala 388:32]
  wire  _GEN_1329 = IR == 8'h22 ? _u_T_146 : _GEN_1307; // @[Microcode.scala 388:32]
  wire [7:0] _GEN_1330 = IR == 8'h22 ? _GEN_270 : _GEN_1308; // @[Microcode.scala 388:32]
  wire  _GEN_1331 = IR == 8'h22 ? _u_T_1 : _GEN_1309; // @[Microcode.scala 388:32]
  wire  _GEN_1332 = IR == 8'h22 ? 1'h0 : _GEN_1310; // @[Microcode.scala 388:32 79:21]
  wire [7:0] _GEN_1333 = IR == 8'h22 ? A_sampled : _GEN_1311; // @[Microcode.scala 388:32 61:15]
  wire [7:0] _GEN_1334 = IR == 8'h22 ? B_sampled : _GEN_1312; // @[Microcode.scala 388:32 63:15]
  wire [7:0] _GEN_1335 = IR == 8'h22 ? C_sampled : _GEN_1313; // @[Microcode.scala 388:32 64:15]
  wire [7:0] _GEN_1336 = IR == 8'h22 ? D_sampled : _GEN_1314; // @[Microcode.scala 388:32 65:15]
  wire [7:0] _GEN_1337 = IR == 8'h22 ? E_sampled : _GEN_1315; // @[Microcode.scala 388:32 66:15]
  wire [3:0] _GEN_1338 = IR == 8'h22 ? 4'h0 : _GEN_1316; // @[Microcode.scala 108:21 388:32]
  wire [7:0] _GEN_1339 = IR == 8'h22 ? 8'h0 : _GEN_1317; // @[Microcode.scala 106:21 388:32]
  wire [7:0] _GEN_1340 = IR == 8'h22 ? 8'h0 : _GEN_1318; // @[Microcode.scala 107:21 388:32]
  wire [7:0] _GEN_1341 = IR == 8'h22 ? F_sampled : _GEN_1319; // @[Microcode.scala 388:32 62:15]
  wire [15:0] _GEN_1342 = IR == 8'h22 ? PC_sampled : _GEN_1320; // @[Microcode.scala 388:32 59:15]
  wire [15:0] _GEN_1343 = IR == 8'h22 ? SP_sampled : _GEN_1321; // @[Microcode.scala 388:32 60:15]
  wire [2:0] _GEN_1344 = IR == 8'h22 ? mcycle : _GEN_1322; // @[Microcode.scala 388:32 75:21]
  wire [7:0] _GEN_1345 = IR == 8'h22 ? imm8 : _GEN_1323; // @[Microcode.scala 388:32 69:15]
  wire [15:0] _GEN_1348 = IR == 8'h3a ? _GEN_246 : _GEN_1328; // @[Microcode.scala 372:32]
  wire  _GEN_1349 = IR == 8'h3a ? _GEN_247 : _GEN_1332; // @[Microcode.scala 372:32]
  wire [7:0] _GEN_1350 = IR == 8'h3a ? _GEN_248 : _GEN_1333; // @[Microcode.scala 372:32]
  wire [7:0] _GEN_1351 = IR == 8'h3a ? _GEN_265 : _GEN_1326; // @[Microcode.scala 372:32]
  wire [7:0] _GEN_1352 = IR == 8'h3a ? _GEN_266 : _GEN_1327; // @[Microcode.scala 372:32]
  wire  _GEN_1353 = IR == 8'h3a ? _GEN_251 : _GEN_1331; // @[Microcode.scala 372:32]
  wire  _GEN_1354 = IR == 8'h3a ? 1'h0 : _GEN_1329; // @[Microcode.scala 372:32 80:21]
  wire [7:0] _GEN_1355 = IR == 8'h3a ? 8'h0 : _GEN_1330; // @[Microcode.scala 372:32 81:21]
  wire [7:0] _GEN_1356 = IR == 8'h3a ? B_sampled : _GEN_1334; // @[Microcode.scala 372:32 63:15]
  wire [7:0] _GEN_1357 = IR == 8'h3a ? C_sampled : _GEN_1335; // @[Microcode.scala 372:32 64:15]
  wire [7:0] _GEN_1358 = IR == 8'h3a ? D_sampled : _GEN_1336; // @[Microcode.scala 372:32 65:15]
  wire [7:0] _GEN_1359 = IR == 8'h3a ? E_sampled : _GEN_1337; // @[Microcode.scala 372:32 66:15]
  wire [3:0] _GEN_1360 = IR == 8'h3a ? 4'h0 : _GEN_1338; // @[Microcode.scala 108:21 372:32]
  wire [7:0] _GEN_1361 = IR == 8'h3a ? 8'h0 : _GEN_1339; // @[Microcode.scala 106:21 372:32]
  wire [7:0] _GEN_1362 = IR == 8'h3a ? 8'h0 : _GEN_1340; // @[Microcode.scala 107:21 372:32]
  wire [7:0] _GEN_1363 = IR == 8'h3a ? F_sampled : _GEN_1341; // @[Microcode.scala 372:32 62:15]
  wire [15:0] _GEN_1364 = IR == 8'h3a ? PC_sampled : _GEN_1342; // @[Microcode.scala 372:32 59:15]
  wire [15:0] _GEN_1365 = IR == 8'h3a ? SP_sampled : _GEN_1343; // @[Microcode.scala 372:32 60:15]
  wire [2:0] _GEN_1366 = IR == 8'h3a ? mcycle : _GEN_1344; // @[Microcode.scala 372:32 75:21]
  wire [7:0] _GEN_1367 = IR == 8'h3a ? imm8 : _GEN_1345; // @[Microcode.scala 372:32 69:15]
  wire [15:0] _GEN_1370 = IR == 8'h2a ? _GEN_246 : _GEN_1348; // @[Microcode.scala 356:32]
  wire  _GEN_1371 = IR == 8'h2a ? _GEN_247 : _GEN_1349; // @[Microcode.scala 356:32]
  wire [7:0] _GEN_1372 = IR == 8'h2a ? _GEN_248 : _GEN_1350; // @[Microcode.scala 356:32]
  wire [7:0] _GEN_1373 = IR == 8'h2a ? _GEN_249 : _GEN_1351; // @[Microcode.scala 356:32]
  wire [7:0] _GEN_1374 = IR == 8'h2a ? _GEN_250 : _GEN_1352; // @[Microcode.scala 356:32]
  wire  _GEN_1375 = IR == 8'h2a ? _GEN_251 : _GEN_1353; // @[Microcode.scala 356:32]
  wire  _GEN_1376 = IR == 8'h2a ? 1'h0 : _GEN_1354; // @[Microcode.scala 356:32 80:21]
  wire [7:0] _GEN_1377 = IR == 8'h2a ? 8'h0 : _GEN_1355; // @[Microcode.scala 356:32 81:21]
  wire [7:0] _GEN_1378 = IR == 8'h2a ? B_sampled : _GEN_1356; // @[Microcode.scala 356:32 63:15]
  wire [7:0] _GEN_1379 = IR == 8'h2a ? C_sampled : _GEN_1357; // @[Microcode.scala 356:32 64:15]
  wire [7:0] _GEN_1380 = IR == 8'h2a ? D_sampled : _GEN_1358; // @[Microcode.scala 356:32 65:15]
  wire [7:0] _GEN_1381 = IR == 8'h2a ? E_sampled : _GEN_1359; // @[Microcode.scala 356:32 66:15]
  wire [3:0] _GEN_1382 = IR == 8'h2a ? 4'h0 : _GEN_1360; // @[Microcode.scala 108:21 356:32]
  wire [7:0] _GEN_1383 = IR == 8'h2a ? 8'h0 : _GEN_1361; // @[Microcode.scala 106:21 356:32]
  wire [7:0] _GEN_1384 = IR == 8'h2a ? 8'h0 : _GEN_1362; // @[Microcode.scala 107:21 356:32]
  wire [7:0] _GEN_1385 = IR == 8'h2a ? F_sampled : _GEN_1363; // @[Microcode.scala 356:32 62:15]
  wire [15:0] _GEN_1386 = IR == 8'h2a ? PC_sampled : _GEN_1364; // @[Microcode.scala 356:32 59:15]
  wire [15:0] _GEN_1387 = IR == 8'h2a ? SP_sampled : _GEN_1365; // @[Microcode.scala 356:32 60:15]
  wire [2:0] _GEN_1388 = IR == 8'h2a ? mcycle : _GEN_1366; // @[Microcode.scala 356:32 75:21]
  wire [7:0] _GEN_1389 = IR == 8'h2a ? imm8 : _GEN_1367; // @[Microcode.scala 356:32 69:15]
  wire [15:0] _GEN_1392 = IR == 8'h36 ? _GEN_232 : _GEN_1370; // @[Microcode.scala 338:32]
  wire  _GEN_1393 = IR == 8'h36 ? _u_T_133 : _GEN_1376; // @[Microcode.scala 338:32]
  wire [7:0] _GEN_1394 = IR == 8'h36 ? _GEN_234 : _GEN_1377; // @[Microcode.scala 338:32]
  wire  _GEN_1395 = IR == 8'h36 ? _GEN_235 : _GEN_1375; // @[Microcode.scala 338:32]
  wire  _GEN_1396 = IR == 8'h36 ? 1'h0 : _GEN_1371; // @[Microcode.scala 338:32 79:21]
  wire [7:0] _GEN_1397 = IR == 8'h36 ? A_sampled : _GEN_1372; // @[Microcode.scala 338:32 61:15]
  wire [7:0] _GEN_1398 = IR == 8'h36 ? H_sampled : _GEN_1373; // @[Microcode.scala 338:32 67:15]
  wire [7:0] _GEN_1399 = IR == 8'h36 ? L_sampled : _GEN_1374; // @[Microcode.scala 338:32 68:15]
  wire [7:0] _GEN_1400 = IR == 8'h36 ? B_sampled : _GEN_1378; // @[Microcode.scala 338:32 63:15]
  wire [7:0] _GEN_1401 = IR == 8'h36 ? C_sampled : _GEN_1379; // @[Microcode.scala 338:32 64:15]
  wire [7:0] _GEN_1402 = IR == 8'h36 ? D_sampled : _GEN_1380; // @[Microcode.scala 338:32 65:15]
  wire [7:0] _GEN_1403 = IR == 8'h36 ? E_sampled : _GEN_1381; // @[Microcode.scala 338:32 66:15]
  wire [3:0] _GEN_1404 = IR == 8'h36 ? 4'h0 : _GEN_1382; // @[Microcode.scala 108:21 338:32]
  wire [7:0] _GEN_1405 = IR == 8'h36 ? 8'h0 : _GEN_1383; // @[Microcode.scala 106:21 338:32]
  wire [7:0] _GEN_1406 = IR == 8'h36 ? 8'h0 : _GEN_1384; // @[Microcode.scala 107:21 338:32]
  wire [7:0] _GEN_1407 = IR == 8'h36 ? F_sampled : _GEN_1385; // @[Microcode.scala 338:32 62:15]
  wire [15:0] _GEN_1408 = IR == 8'h36 ? PC_sampled : _GEN_1386; // @[Microcode.scala 338:32 59:15]
  wire [15:0] _GEN_1409 = IR == 8'h36 ? SP_sampled : _GEN_1387; // @[Microcode.scala 338:32 60:15]
  wire [2:0] _GEN_1410 = IR == 8'h36 ? mcycle : _GEN_1388; // @[Microcode.scala 338:32 75:21]
  wire [7:0] _GEN_1411 = IR == 8'h36 ? imm8 : _GEN_1389; // @[Microcode.scala 338:32 69:15]
  wire [15:0] _GEN_1414 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? u_HL : _GEN_1392; // @[Microcode.scala 326:68 329:23]
  wire  _GEN_1415 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? _u_T_61 : _GEN_1393; // @[Microcode.scala 326:68 330:23]
  wire [7:0] _GEN_1416 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? _u_T_103 : _GEN_1394; // @[Microcode.scala 326:68 331:23]
  wire  _GEN_1417 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? _u_T_1 : _GEN_1395; // @[Microcode.scala 326:68]
  wire  _GEN_1418 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? 1'h0 : _GEN_1396; // @[Microcode.scala 326:68 79:21]
  wire [7:0] _GEN_1419 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? A_sampled : _GEN_1397; // @[Microcode.scala 326:68 61:15]
  wire [7:0] _GEN_1420 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? H_sampled : _GEN_1398; // @[Microcode.scala 326:68 67:15]
  wire [7:0] _GEN_1421 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? L_sampled : _GEN_1399; // @[Microcode.scala 326:68 68:15]
  wire [7:0] _GEN_1422 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? B_sampled : _GEN_1400; // @[Microcode.scala 326:68 63:15]
  wire [7:0] _GEN_1423 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? C_sampled : _GEN_1401; // @[Microcode.scala 326:68 64:15]
  wire [7:0] _GEN_1424 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? D_sampled : _GEN_1402; // @[Microcode.scala 326:68 65:15]
  wire [7:0] _GEN_1425 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? E_sampled : _GEN_1403; // @[Microcode.scala 326:68 66:15]
  wire [3:0] _GEN_1426 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? 4'h0 : _GEN_1404; // @[Microcode.scala 108:21 326:68]
  wire [7:0] _GEN_1427 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? 8'h0 : _GEN_1405; // @[Microcode.scala 106:21 326:68]
  wire [7:0] _GEN_1428 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? 8'h0 : _GEN_1406; // @[Microcode.scala 107:21 326:68]
  wire [7:0] _GEN_1429 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? F_sampled : _GEN_1407; // @[Microcode.scala 326:68 62:15]
  wire [15:0] _GEN_1430 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? PC_sampled : _GEN_1408; // @[Microcode.scala 326:68 59:15]
  wire [15:0] _GEN_1431 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? SP_sampled : _GEN_1409; // @[Microcode.scala 326:68 60:15]
  wire [2:0] _GEN_1432 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? mcycle : _GEN_1410; // @[Microcode.scala 326:68 75:21]
  wire [7:0] _GEN_1433 = IR >= 8'h70 & IR <= 8'h75 | IR == 8'h77 ? imm8 : _GEN_1411; // @[Microcode.scala 326:68 69:15]
  wire [7:0] _GEN_1436 = _u_T_29 == 8'h6 & _u_T_33 ? _GEN_222 : _GEN_1422; // @[Microcode.scala 316:73]
  wire [7:0] _GEN_1437 = _u_T_29 == 8'h6 & _u_T_33 ? _GEN_223 : _GEN_1423; // @[Microcode.scala 316:73]
  wire [7:0] _GEN_1438 = _u_T_29 == 8'h6 & _u_T_33 ? _GEN_224 : _GEN_1424; // @[Microcode.scala 316:73]
  wire [7:0] _GEN_1439 = _u_T_29 == 8'h6 & _u_T_33 ? _GEN_225 : _GEN_1425; // @[Microcode.scala 316:73]
  wire [7:0] _GEN_1440 = _u_T_29 == 8'h6 & _u_T_33 ? _GEN_226 : _GEN_1420; // @[Microcode.scala 316:73]
  wire [7:0] _GEN_1441 = _u_T_29 == 8'h6 & _u_T_33 ? _GEN_227 : _GEN_1421; // @[Microcode.scala 316:73]
  wire [7:0] _GEN_1442 = _u_T_29 == 8'h6 & _u_T_33 ? _GEN_228 : _GEN_1419; // @[Microcode.scala 316:73]
  wire  _GEN_1443 = _u_T_29 == 8'h6 & _u_T_33 ? _u_T_1 : _GEN_1417; // @[Microcode.scala 316:73]
  wire [15:0] _GEN_1444 = _u_T_29 == 8'h6 & _u_T_33 ? 16'h0 : _GEN_1414; // @[Microcode.scala 316:73 78:21]
  wire  _GEN_1445 = _u_T_29 == 8'h6 & _u_T_33 ? 1'h0 : _GEN_1415; // @[Microcode.scala 316:73 80:21]
  wire [7:0] _GEN_1446 = _u_T_29 == 8'h6 & _u_T_33 ? 8'h0 : _GEN_1416; // @[Microcode.scala 316:73 81:21]
  wire  _GEN_1447 = _u_T_29 == 8'h6 & _u_T_33 ? 1'h0 : _GEN_1418; // @[Microcode.scala 316:73 79:21]
  wire [3:0] _GEN_1448 = _u_T_29 == 8'h6 & _u_T_33 ? 4'h0 : _GEN_1426; // @[Microcode.scala 108:21 316:73]
  wire [7:0] _GEN_1449 = _u_T_29 == 8'h6 & _u_T_33 ? 8'h0 : _GEN_1427; // @[Microcode.scala 106:21 316:73]
  wire [7:0] _GEN_1450 = _u_T_29 == 8'h6 & _u_T_33 ? 8'h0 : _GEN_1428; // @[Microcode.scala 107:21 316:73]
  wire [7:0] _GEN_1451 = _u_T_29 == 8'h6 & _u_T_33 ? F_sampled : _GEN_1429; // @[Microcode.scala 316:73 62:15]
  wire [15:0] _GEN_1452 = _u_T_29 == 8'h6 & _u_T_33 ? PC_sampled : _GEN_1430; // @[Microcode.scala 316:73 59:15]
  wire [15:0] _GEN_1453 = _u_T_29 == 8'h6 & _u_T_33 ? SP_sampled : _GEN_1431; // @[Microcode.scala 316:73 60:15]
  wire [2:0] _GEN_1454 = _u_T_29 == 8'h6 & _u_T_33 ? mcycle : _GEN_1432; // @[Microcode.scala 316:73 75:21]
  wire [7:0] _GEN_1455 = _u_T_29 == 8'h6 & _u_T_33 ? imm8 : _GEN_1433; // @[Microcode.scala 316:73 69:15]
  wire [7:0] _GEN_1458 = _u_T_89 ? _GEN_193 : _GEN_1436; // @[Microcode.scala 307:37]
  wire [7:0] _GEN_1459 = _u_T_89 ? _GEN_194 : _GEN_1437; // @[Microcode.scala 307:37]
  wire [7:0] _GEN_1460 = _u_T_89 ? _GEN_195 : _GEN_1438; // @[Microcode.scala 307:37]
  wire [7:0] _GEN_1461 = _u_T_89 ? _GEN_196 : _GEN_1439; // @[Microcode.scala 307:37]
  wire [7:0] _GEN_1462 = _u_T_89 ? _GEN_197 : _GEN_1440; // @[Microcode.scala 307:37]
  wire [7:0] _GEN_1463 = _u_T_89 ? _GEN_198 : _GEN_1441; // @[Microcode.scala 307:37]
  wire [7:0] _GEN_1464 = _u_T_89 ? _GEN_199 : _GEN_1442; // @[Microcode.scala 307:37]
  wire  _GEN_1465 = _u_T_89 ? _u_T_1 : _GEN_1443; // @[Microcode.scala 307:37]
  wire [15:0] _GEN_1466 = _u_T_89 ? 16'h0 : _GEN_1444; // @[Microcode.scala 307:37 78:21]
  wire  _GEN_1467 = _u_T_89 ? 1'h0 : _GEN_1445; // @[Microcode.scala 307:37 80:21]
  wire [7:0] _GEN_1468 = _u_T_89 ? 8'h0 : _GEN_1446; // @[Microcode.scala 307:37 81:21]
  wire  _GEN_1469 = _u_T_89 ? 1'h0 : _GEN_1447; // @[Microcode.scala 307:37 79:21]
  wire [3:0] _GEN_1470 = _u_T_89 ? 4'h0 : _GEN_1448; // @[Microcode.scala 108:21 307:37]
  wire [7:0] _GEN_1471 = _u_T_89 ? 8'h0 : _GEN_1449; // @[Microcode.scala 106:21 307:37]
  wire [7:0] _GEN_1472 = _u_T_89 ? 8'h0 : _GEN_1450; // @[Microcode.scala 107:21 307:37]
  wire [7:0] _GEN_1473 = _u_T_89 ? F_sampled : _GEN_1451; // @[Microcode.scala 307:37 62:15]
  wire [15:0] _GEN_1474 = _u_T_89 ? PC_sampled : _GEN_1452; // @[Microcode.scala 307:37 59:15]
  wire [15:0] _GEN_1475 = _u_T_89 ? SP_sampled : _GEN_1453; // @[Microcode.scala 307:37 60:15]
  wire [2:0] _GEN_1476 = _u_T_89 ? mcycle : _GEN_1454; // @[Microcode.scala 307:37 75:21]
  wire [7:0] _GEN_1477 = _u_T_89 ? imm8 : _GEN_1455; // @[Microcode.scala 307:37 69:15]
  wire [15:0] _GEN_1480 = IR == 8'h35 ? _GEN_131 : _GEN_1466; // @[Microcode.scala 277:32]
  wire  _GEN_1481 = IR == 8'h35 ? _u_T_60 : _GEN_1469; // @[Microcode.scala 277:32]
  wire [7:0] _GEN_1482 = IR == 8'h35 ? _GEN_133 : _GEN_1477; // @[Microcode.scala 277:32]
  wire [2:0] _GEN_1483 = IR == 8'h35 ? _GEN_134 : _GEN_1476; // @[Microcode.scala 277:32]
  wire [3:0] _GEN_1484 = IR == 8'h35 ? _GEN_165 : _GEN_1470; // @[Microcode.scala 277:32]
  wire [7:0] _GEN_1485 = IR == 8'h35 ? _GEN_136 : _GEN_1471; // @[Microcode.scala 277:32]
  wire [7:0] _GEN_1486 = IR == 8'h35 ? 8'h0 : _GEN_1472; // @[Microcode.scala 277:32]
  wire [7:0] _GEN_1487 = IR == 8'h35 ? _GEN_138 : _GEN_1473; // @[Microcode.scala 277:32]
  wire  _GEN_1488 = IR == 8'h35 ? _GEN_139 : _GEN_1467; // @[Microcode.scala 277:32]
  wire [7:0] _GEN_1489 = IR == 8'h35 ? _GEN_140 : _GEN_1468; // @[Microcode.scala 277:32]
  wire  _GEN_1490 = IR == 8'h35 ? _GEN_141 : _GEN_1465; // @[Microcode.scala 277:32]
  wire [7:0] _GEN_1491 = IR == 8'h35 ? B_sampled : _GEN_1458; // @[Microcode.scala 277:32 63:15]
  wire [7:0] _GEN_1492 = IR == 8'h35 ? C_sampled : _GEN_1459; // @[Microcode.scala 277:32 64:15]
  wire [7:0] _GEN_1493 = IR == 8'h35 ? D_sampled : _GEN_1460; // @[Microcode.scala 277:32 65:15]
  wire [7:0] _GEN_1494 = IR == 8'h35 ? E_sampled : _GEN_1461; // @[Microcode.scala 277:32 66:15]
  wire [7:0] _GEN_1495 = IR == 8'h35 ? H_sampled : _GEN_1462; // @[Microcode.scala 277:32 67:15]
  wire [7:0] _GEN_1496 = IR == 8'h35 ? L_sampled : _GEN_1463; // @[Microcode.scala 277:32 68:15]
  wire [7:0] _GEN_1497 = IR == 8'h35 ? A_sampled : _GEN_1464; // @[Microcode.scala 277:32 61:15]
  wire [15:0] _GEN_1498 = IR == 8'h35 ? PC_sampled : _GEN_1474; // @[Microcode.scala 277:32 59:15]
  wire [15:0] _GEN_1499 = IR == 8'h35 ? SP_sampled : _GEN_1475; // @[Microcode.scala 277:32 60:15]
  wire [15:0] _GEN_1502 = IR == 8'h34 ? _GEN_131 : _GEN_1480; // @[Microcode.scala 250:32]
  wire  _GEN_1503 = IR == 8'h34 ? _u_T_60 : _GEN_1481; // @[Microcode.scala 250:32]
  wire [7:0] _GEN_1504 = IR == 8'h34 ? _GEN_133 : _GEN_1482; // @[Microcode.scala 250:32]
  wire [2:0] _GEN_1505 = IR == 8'h34 ? _GEN_134 : _GEN_1483; // @[Microcode.scala 250:32]
  wire [3:0] _GEN_1506 = IR == 8'h34 ? _GEN_135 : _GEN_1484; // @[Microcode.scala 250:32]
  wire [7:0] _GEN_1507 = IR == 8'h34 ? _GEN_136 : _GEN_1485; // @[Microcode.scala 250:32]
  wire [7:0] _GEN_1508 = IR == 8'h34 ? 8'h0 : _GEN_1486; // @[Microcode.scala 250:32]
  wire [7:0] _GEN_1509 = IR == 8'h34 ? _GEN_138 : _GEN_1487; // @[Microcode.scala 250:32]
  wire  _GEN_1510 = IR == 8'h34 ? _GEN_139 : _GEN_1488; // @[Microcode.scala 250:32]
  wire [7:0] _GEN_1511 = IR == 8'h34 ? _GEN_140 : _GEN_1489; // @[Microcode.scala 250:32]
  wire  _GEN_1512 = IR == 8'h34 ? _GEN_141 : _GEN_1490; // @[Microcode.scala 250:32]
  wire [7:0] _GEN_1513 = IR == 8'h34 ? B_sampled : _GEN_1491; // @[Microcode.scala 250:32 63:15]
  wire [7:0] _GEN_1514 = IR == 8'h34 ? C_sampled : _GEN_1492; // @[Microcode.scala 250:32 64:15]
  wire [7:0] _GEN_1515 = IR == 8'h34 ? D_sampled : _GEN_1493; // @[Microcode.scala 250:32 65:15]
  wire [7:0] _GEN_1516 = IR == 8'h34 ? E_sampled : _GEN_1494; // @[Microcode.scala 250:32 66:15]
  wire [7:0] _GEN_1517 = IR == 8'h34 ? H_sampled : _GEN_1495; // @[Microcode.scala 250:32 67:15]
  wire [7:0] _GEN_1518 = IR == 8'h34 ? L_sampled : _GEN_1496; // @[Microcode.scala 250:32 68:15]
  wire [7:0] _GEN_1519 = IR == 8'h34 ? A_sampled : _GEN_1497; // @[Microcode.scala 250:32 61:15]
  wire [15:0] _GEN_1520 = IR == 8'h34 ? PC_sampled : _GEN_1498; // @[Microcode.scala 250:32 59:15]
  wire [15:0] _GEN_1521 = IR == 8'h34 ? SP_sampled : _GEN_1499; // @[Microcode.scala 250:32 60:15]
  wire [3:0] _GEN_1524 = _u_T_29 == 8'h5 & _u_T_33 ? 4'h9 : _GEN_1506; // @[Microcode.scala 235:73 239:17]
  wire [7:0] _GEN_1525 = _u_T_29 == 8'h5 & _u_T_33 ? u_oldVal : _GEN_1507; // @[Microcode.scala 235:73 240:17]
  wire [7:0] _GEN_1526 = _u_T_29 == 8'h5 & _u_T_33 ? 8'h0 : _GEN_1508; // @[Microcode.scala 235:73 241:17]
  wire [7:0] _GEN_1527 = _u_T_29 == 8'h5 & _u_T_33 ? _GEN_75 : _GEN_1513; // @[Microcode.scala 235:73]
  wire [7:0] _GEN_1528 = _u_T_29 == 8'h5 & _u_T_33 ? _GEN_76 : _GEN_1514; // @[Microcode.scala 235:73]
  wire [7:0] _GEN_1529 = _u_T_29 == 8'h5 & _u_T_33 ? _GEN_77 : _GEN_1515; // @[Microcode.scala 235:73]
  wire [7:0] _GEN_1530 = _u_T_29 == 8'h5 & _u_T_33 ? _GEN_78 : _GEN_1516; // @[Microcode.scala 235:73]
  wire [7:0] _GEN_1531 = _u_T_29 == 8'h5 & _u_T_33 ? _GEN_79 : _GEN_1517; // @[Microcode.scala 235:73]
  wire [7:0] _GEN_1532 = _u_T_29 == 8'h5 & _u_T_33 ? _GEN_80 : _GEN_1518; // @[Microcode.scala 235:73]
  wire [7:0] _GEN_1533 = _u_T_29 == 8'h5 & _u_T_33 ? _GEN_81 : _GEN_1519; // @[Microcode.scala 235:73]
  wire [7:0] _GEN_1534 = _u_T_29 == 8'h5 & _u_T_33 ? _u_out_F_T_1 : _GEN_1509; // @[Microcode.scala 103:13 235:73]
  wire  _GEN_1535 = _u_T_29 == 8'h5 & _u_T_33 ? _u_T_1 : _GEN_1512; // @[Microcode.scala 235:73]
  wire [15:0] _GEN_1536 = _u_T_29 == 8'h5 & _u_T_33 ? 16'h0 : _GEN_1502; // @[Microcode.scala 235:73 78:21]
  wire  _GEN_1537 = _u_T_29 == 8'h5 & _u_T_33 ? 1'h0 : _GEN_1503; // @[Microcode.scala 235:73 79:21]
  wire [7:0] _GEN_1538 = _u_T_29 == 8'h5 & _u_T_33 ? imm8 : _GEN_1504; // @[Microcode.scala 235:73 69:15]
  wire [2:0] _GEN_1539 = _u_T_29 == 8'h5 & _u_T_33 ? mcycle : _GEN_1505; // @[Microcode.scala 235:73 75:21]
  wire  _GEN_1540 = _u_T_29 == 8'h5 & _u_T_33 ? 1'h0 : _GEN_1510; // @[Microcode.scala 235:73 80:21]
  wire [7:0] _GEN_1541 = _u_T_29 == 8'h5 & _u_T_33 ? 8'h0 : _GEN_1511; // @[Microcode.scala 235:73 81:21]
  wire [15:0] _GEN_1542 = _u_T_29 == 8'h5 & _u_T_33 ? PC_sampled : _GEN_1520; // @[Microcode.scala 235:73 59:15]
  wire [15:0] _GEN_1543 = _u_T_29 == 8'h5 & _u_T_33 ? SP_sampled : _GEN_1521; // @[Microcode.scala 235:73 60:15]
  wire [3:0] _GEN_1546 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? 4'h8 : _GEN_1524; // @[Microcode.scala 220:73 224:17]
  wire [7:0] _GEN_1547 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? u_oldVal : _GEN_1525; // @[Microcode.scala 220:73 225:17]
  wire [7:0] _GEN_1548 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? 8'h0 : _GEN_1526; // @[Microcode.scala 220:73 226:17]
  wire [7:0] _GEN_1549 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _GEN_75 : _GEN_1527; // @[Microcode.scala 220:73]
  wire [7:0] _GEN_1550 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _GEN_76 : _GEN_1528; // @[Microcode.scala 220:73]
  wire [7:0] _GEN_1551 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _GEN_77 : _GEN_1529; // @[Microcode.scala 220:73]
  wire [7:0] _GEN_1552 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _GEN_78 : _GEN_1530; // @[Microcode.scala 220:73]
  wire [7:0] _GEN_1553 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _GEN_79 : _GEN_1531; // @[Microcode.scala 220:73]
  wire [7:0] _GEN_1554 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _GEN_80 : _GEN_1532; // @[Microcode.scala 220:73]
  wire [7:0] _GEN_1555 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _GEN_81 : _GEN_1533; // @[Microcode.scala 220:73]
  wire [7:0] _GEN_1556 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _u_out_F_T_1 : _GEN_1534; // @[Microcode.scala 103:13 220:73]
  wire  _GEN_1557 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? _u_T_1 : _GEN_1535; // @[Microcode.scala 220:73]
  wire [15:0] _GEN_1558 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? 16'h0 : _GEN_1536; // @[Microcode.scala 220:73 78:21]
  wire  _GEN_1559 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? 1'h0 : _GEN_1537; // @[Microcode.scala 220:73 79:21]
  wire [7:0] _GEN_1560 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? imm8 : _GEN_1538; // @[Microcode.scala 220:73 69:15]
  wire [2:0] _GEN_1561 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? mcycle : _GEN_1539; // @[Microcode.scala 220:73 75:21]
  wire  _GEN_1562 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? 1'h0 : _GEN_1540; // @[Microcode.scala 220:73 80:21]
  wire [7:0] _GEN_1563 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? 8'h0 : _GEN_1541; // @[Microcode.scala 220:73 81:21]
  wire [15:0] _GEN_1564 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? PC_sampled : _GEN_1542; // @[Microcode.scala 220:73 59:15]
  wire [15:0] _GEN_1565 = _u_T_29 == 8'h4 & _u_T_32 != 5'h6 ? SP_sampled : _GEN_1543; // @[Microcode.scala 220:73 60:15]
  wire [7:0] _GEN_1568 = _u_T_4 == 8'h9 ? u_result_2[15:8] : _GEN_1553; // @[Microcode.scala 196:44 207:13]
  wire [7:0] _GEN_1569 = _u_T_4 == 8'h9 ? u_result_2[7:0] : _GEN_1554; // @[Microcode.scala 196:44 208:13]
  wire [7:0] _GEN_1570 = _u_T_4 == 8'h9 ? _u_out_F_T : _GEN_1556; // @[Microcode.scala 103:13 196:44]
  wire  _GEN_1571 = _u_T_4 == 8'h9 ? _u_T_1 : _GEN_1557; // @[Microcode.scala 196:44]
  wire [3:0] _GEN_1572 = _u_T_4 == 8'h9 ? 4'h0 : _GEN_1546; // @[Microcode.scala 108:21 196:44]
  wire [7:0] _GEN_1573 = _u_T_4 == 8'h9 ? 8'h0 : _GEN_1547; // @[Microcode.scala 106:21 196:44]
  wire [7:0] _GEN_1574 = _u_T_4 == 8'h9 ? 8'h0 : _GEN_1548; // @[Microcode.scala 107:21 196:44]
  wire [7:0] _GEN_1575 = _u_T_4 == 8'h9 ? B_sampled : _GEN_1549; // @[Microcode.scala 196:44 63:15]
  wire [7:0] _GEN_1576 = _u_T_4 == 8'h9 ? C_sampled : _GEN_1550; // @[Microcode.scala 196:44 64:15]
  wire [7:0] _GEN_1577 = _u_T_4 == 8'h9 ? D_sampled : _GEN_1551; // @[Microcode.scala 196:44 65:15]
  wire [7:0] _GEN_1578 = _u_T_4 == 8'h9 ? E_sampled : _GEN_1552; // @[Microcode.scala 196:44 66:15]
  wire [7:0] _GEN_1579 = _u_T_4 == 8'h9 ? A_sampled : _GEN_1555; // @[Microcode.scala 196:44 61:15]
  wire [15:0] _GEN_1580 = _u_T_4 == 8'h9 ? 16'h0 : _GEN_1558; // @[Microcode.scala 196:44 78:21]
  wire  _GEN_1581 = _u_T_4 == 8'h9 ? 1'h0 : _GEN_1559; // @[Microcode.scala 196:44 79:21]
  wire [7:0] _GEN_1582 = _u_T_4 == 8'h9 ? imm8 : _GEN_1560; // @[Microcode.scala 196:44 69:15]
  wire [2:0] _GEN_1583 = _u_T_4 == 8'h9 ? mcycle : _GEN_1561; // @[Microcode.scala 196:44 75:21]
  wire  _GEN_1584 = _u_T_4 == 8'h9 ? 1'h0 : _GEN_1562; // @[Microcode.scala 196:44 80:21]
  wire [7:0] _GEN_1585 = _u_T_4 == 8'h9 ? 8'h0 : _GEN_1563; // @[Microcode.scala 196:44 81:21]
  wire [15:0] _GEN_1586 = _u_T_4 == 8'h9 ? PC_sampled : _GEN_1564; // @[Microcode.scala 196:44 59:15]
  wire [15:0] _GEN_1587 = _u_T_4 == 8'h9 ? SP_sampled : _GEN_1565; // @[Microcode.scala 196:44 60:15]
  wire [7:0] _GEN_1590 = _u_T_4 == 8'hb ? _GEN_45 : _GEN_1575; // @[Microcode.scala 176:44]
  wire [7:0] _GEN_1591 = _u_T_4 == 8'hb ? _GEN_46 : _GEN_1576; // @[Microcode.scala 176:44]
  wire [7:0] _GEN_1592 = _u_T_4 == 8'hb ? _GEN_47 : _GEN_1577; // @[Microcode.scala 176:44]
  wire [7:0] _GEN_1593 = _u_T_4 == 8'hb ? _GEN_48 : _GEN_1578; // @[Microcode.scala 176:44]
  wire [7:0] _GEN_1594 = _u_T_4 == 8'hb ? _GEN_49 : _GEN_1568; // @[Microcode.scala 176:44]
  wire [7:0] _GEN_1595 = _u_T_4 == 8'hb ? _GEN_50 : _GEN_1569; // @[Microcode.scala 176:44]
  wire [15:0] _GEN_1596 = _u_T_4 == 8'hb ? _GEN_51 : _GEN_1587; // @[Microcode.scala 176:44]
  wire  _GEN_1597 = _u_T_4 == 8'hb ? _u_T_1 : _GEN_1571; // @[Microcode.scala 176:44]
  wire [7:0] _GEN_1598 = _u_T_4 == 8'hb ? F_sampled : _GEN_1570; // @[Microcode.scala 176:44 62:15]
  wire [3:0] _GEN_1599 = _u_T_4 == 8'hb ? 4'h0 : _GEN_1572; // @[Microcode.scala 108:21 176:44]
  wire [7:0] _GEN_1600 = _u_T_4 == 8'hb ? 8'h0 : _GEN_1573; // @[Microcode.scala 106:21 176:44]
  wire [7:0] _GEN_1601 = _u_T_4 == 8'hb ? 8'h0 : _GEN_1574; // @[Microcode.scala 107:21 176:44]
  wire [7:0] _GEN_1602 = _u_T_4 == 8'hb ? A_sampled : _GEN_1579; // @[Microcode.scala 176:44 61:15]
  wire [15:0] _GEN_1603 = _u_T_4 == 8'hb ? 16'h0 : _GEN_1580; // @[Microcode.scala 176:44 78:21]
  wire  _GEN_1604 = _u_T_4 == 8'hb ? 1'h0 : _GEN_1581; // @[Microcode.scala 176:44 79:21]
  wire [7:0] _GEN_1605 = _u_T_4 == 8'hb ? imm8 : _GEN_1582; // @[Microcode.scala 176:44 69:15]
  wire [2:0] _GEN_1606 = _u_T_4 == 8'hb ? mcycle : _GEN_1583; // @[Microcode.scala 176:44 75:21]
  wire  _GEN_1607 = _u_T_4 == 8'hb ? 1'h0 : _GEN_1584; // @[Microcode.scala 176:44 80:21]
  wire [7:0] _GEN_1608 = _u_T_4 == 8'hb ? 8'h0 : _GEN_1585; // @[Microcode.scala 176:44 81:21]
  wire [15:0] _GEN_1609 = _u_T_4 == 8'hb ? PC_sampled : _GEN_1586; // @[Microcode.scala 176:44 59:15]
  wire [7:0] _GEN_1612 = _u_T_4 == 8'h3 ? _GEN_28 : _GEN_1590; // @[Microcode.scala 156:44]
  wire [7:0] _GEN_1613 = _u_T_4 == 8'h3 ? _GEN_29 : _GEN_1591; // @[Microcode.scala 156:44]
  wire [7:0] _GEN_1614 = _u_T_4 == 8'h3 ? _GEN_30 : _GEN_1592; // @[Microcode.scala 156:44]
  wire [7:0] _GEN_1615 = _u_T_4 == 8'h3 ? _GEN_31 : _GEN_1593; // @[Microcode.scala 156:44]
  wire [7:0] _GEN_1616 = _u_T_4 == 8'h3 ? _GEN_32 : _GEN_1594; // @[Microcode.scala 156:44]
  wire [7:0] _GEN_1617 = _u_T_4 == 8'h3 ? _GEN_33 : _GEN_1595; // @[Microcode.scala 156:44]
  wire [15:0] _GEN_1618 = _u_T_4 == 8'h3 ? _GEN_34 : _GEN_1596; // @[Microcode.scala 156:44]
  wire  _GEN_1619 = _u_T_4 == 8'h3 ? _u_T_1 : _GEN_1597; // @[Microcode.scala 156:44]
  wire [7:0] _GEN_1620 = _u_T_4 == 8'h3 ? F_sampled : _GEN_1598; // @[Microcode.scala 156:44 62:15]
  wire [3:0] _GEN_1621 = _u_T_4 == 8'h3 ? 4'h0 : _GEN_1599; // @[Microcode.scala 108:21 156:44]
  wire [7:0] _GEN_1622 = _u_T_4 == 8'h3 ? 8'h0 : _GEN_1600; // @[Microcode.scala 106:21 156:44]
  wire [7:0] _GEN_1623 = _u_T_4 == 8'h3 ? 8'h0 : _GEN_1601; // @[Microcode.scala 107:21 156:44]
  wire [7:0] _GEN_1624 = _u_T_4 == 8'h3 ? A_sampled : _GEN_1602; // @[Microcode.scala 156:44 61:15]
  wire [15:0] _GEN_1625 = _u_T_4 == 8'h3 ? 16'h0 : _GEN_1603; // @[Microcode.scala 156:44 78:21]
  wire  _GEN_1626 = _u_T_4 == 8'h3 ? 1'h0 : _GEN_1604; // @[Microcode.scala 156:44 79:21]
  wire [7:0] _GEN_1627 = _u_T_4 == 8'h3 ? imm8 : _GEN_1605; // @[Microcode.scala 156:44 69:15]
  wire [2:0] _GEN_1628 = _u_T_4 == 8'h3 ? mcycle : _GEN_1606; // @[Microcode.scala 156:44 75:21]
  wire  _GEN_1629 = _u_T_4 == 8'h3 ? 1'h0 : _GEN_1607; // @[Microcode.scala 156:44 80:21]
  wire [7:0] _GEN_1630 = _u_T_4 == 8'h3 ? 8'h0 : _GEN_1608; // @[Microcode.scala 156:44 81:21]
  wire [15:0] _GEN_1631 = _u_T_4 == 8'h3 ? PC_sampled : _GEN_1609; // @[Microcode.scala 156:44 59:15]
  wire [7:0] _GEN_1634 = _u_T_4 == 8'h1 ? _GEN_11 : _GEN_1613; // @[Microcode.scala 131:44]
  wire [7:0] _GEN_1635 = _u_T_4 == 8'h1 ? _GEN_12 : _GEN_1612; // @[Microcode.scala 131:44]
  wire [7:0] _GEN_1636 = _u_T_4 == 8'h1 ? _GEN_13 : _GEN_1615; // @[Microcode.scala 131:44]
  wire [7:0] _GEN_1637 = _u_T_4 == 8'h1 ? _GEN_14 : _GEN_1614; // @[Microcode.scala 131:44]
  wire [7:0] _GEN_1638 = _u_T_4 == 8'h1 ? _GEN_15 : _GEN_1617; // @[Microcode.scala 131:44]
  wire [7:0] _GEN_1639 = _u_T_4 == 8'h1 ? _GEN_16 : _GEN_1616; // @[Microcode.scala 131:44]
  wire [15:0] _GEN_1640 = _u_T_4 == 8'h1 ? _GEN_17 : _GEN_1618; // @[Microcode.scala 131:44]
  wire  _GEN_1641 = _u_T_4 == 8'h1 ? _u_T_1 : _GEN_1619; // @[Microcode.scala 131:44]
  wire [7:0] _GEN_1642 = _u_T_4 == 8'h1 ? F_sampled : _GEN_1620; // @[Microcode.scala 131:44 62:15]
  wire [3:0] _GEN_1643 = _u_T_4 == 8'h1 ? 4'h0 : _GEN_1621; // @[Microcode.scala 108:21 131:44]
  wire [7:0] _GEN_1644 = _u_T_4 == 8'h1 ? 8'h0 : _GEN_1622; // @[Microcode.scala 106:21 131:44]
  wire [7:0] _GEN_1645 = _u_T_4 == 8'h1 ? 8'h0 : _GEN_1623; // @[Microcode.scala 107:21 131:44]
  wire [7:0] _GEN_1646 = _u_T_4 == 8'h1 ? A_sampled : _GEN_1624; // @[Microcode.scala 131:44 61:15]
  wire [15:0] _GEN_1647 = _u_T_4 == 8'h1 ? 16'h0 : _GEN_1625; // @[Microcode.scala 131:44 78:21]
  wire  _GEN_1648 = _u_T_4 == 8'h1 ? 1'h0 : _GEN_1626; // @[Microcode.scala 131:44 79:21]
  wire [7:0] _GEN_1649 = _u_T_4 == 8'h1 ? imm8 : _GEN_1627; // @[Microcode.scala 131:44 69:15]
  wire [2:0] _GEN_1650 = _u_T_4 == 8'h1 ? mcycle : _GEN_1628; // @[Microcode.scala 131:44 75:21]
  wire  _GEN_1651 = _u_T_4 == 8'h1 ? 1'h0 : _GEN_1629; // @[Microcode.scala 131:44 80:21]
  wire [7:0] _GEN_1652 = _u_T_4 == 8'h1 ? 8'h0 : _GEN_1630; // @[Microcode.scala 131:44 81:21]
  wire [15:0] _GEN_1653 = _u_T_4 == 8'h1 ? PC_sampled : _GEN_1631; // @[Microcode.scala 131:44 59:15]
  wire  _GEN_1656 = IR == 8'h76 ? _u_T_1 : _GEN_1641; // @[Microcode.scala 124:32]
  wire [7:0] _GEN_1657 = IR == 8'h76 ? C_sampled : _GEN_1634; // @[Microcode.scala 124:32 64:15]
  wire [7:0] _GEN_1658 = IR == 8'h76 ? B_sampled : _GEN_1635; // @[Microcode.scala 124:32 63:15]
  wire [7:0] _GEN_1659 = IR == 8'h76 ? E_sampled : _GEN_1636; // @[Microcode.scala 124:32 66:15]
  wire [7:0] _GEN_1660 = IR == 8'h76 ? D_sampled : _GEN_1637; // @[Microcode.scala 124:32 65:15]
  wire [7:0] _GEN_1661 = IR == 8'h76 ? L_sampled : _GEN_1638; // @[Microcode.scala 124:32 68:15]
  wire [7:0] _GEN_1662 = IR == 8'h76 ? H_sampled : _GEN_1639; // @[Microcode.scala 124:32 67:15]
  wire [15:0] _GEN_1663 = IR == 8'h76 ? SP_sampled : _GEN_1640; // @[Microcode.scala 124:32 60:15]
  wire [7:0] _GEN_1664 = IR == 8'h76 ? F_sampled : _GEN_1642; // @[Microcode.scala 124:32 62:15]
  wire [3:0] _GEN_1665 = IR == 8'h76 ? 4'h0 : _GEN_1643; // @[Microcode.scala 108:21 124:32]
  wire [7:0] _GEN_1666 = IR == 8'h76 ? 8'h0 : _GEN_1644; // @[Microcode.scala 106:21 124:32]
  wire [7:0] _GEN_1667 = IR == 8'h76 ? 8'h0 : _GEN_1645; // @[Microcode.scala 107:21 124:32]
  wire [7:0] _GEN_1668 = IR == 8'h76 ? A_sampled : _GEN_1646; // @[Microcode.scala 124:32 61:15]
  wire [15:0] _GEN_1669 = IR == 8'h76 ? 16'h0 : _GEN_1647; // @[Microcode.scala 124:32 78:21]
  wire  _GEN_1670 = IR == 8'h76 ? 1'h0 : _GEN_1648; // @[Microcode.scala 124:32 79:21]
  wire [7:0] _GEN_1671 = IR == 8'h76 ? imm8 : _GEN_1649; // @[Microcode.scala 124:32 69:15]
  wire [2:0] _GEN_1672 = IR == 8'h76 ? mcycle : _GEN_1650; // @[Microcode.scala 124:32 75:21]
  wire  _GEN_1673 = IR == 8'h76 ? 1'h0 : _GEN_1651; // @[Microcode.scala 124:32 80:21]
  wire [7:0] _GEN_1674 = IR == 8'h76 ? 8'h0 : _GEN_1652; // @[Microcode.scala 124:32 81:21]
  wire [15:0] _GEN_1675 = IR == 8'h76 ? PC_sampled : _GEN_1653; // @[Microcode.scala 124:32 59:15]
  wire  u__done = IR == 8'h0 ? _u_T_1 : _GEN_1656; // @[Microcode.scala 118:26]
  wire [7:0] u__C = IR == 8'h0 ? C_sampled : _GEN_1657; // @[Microcode.scala 118:26 64:15]
  wire [7:0] u__B = IR == 8'h0 ? B_sampled : _GEN_1658; // @[Microcode.scala 118:26 63:15]
  wire [7:0] u__E = IR == 8'h0 ? E_sampled : _GEN_1659; // @[Microcode.scala 118:26 66:15]
  wire [7:0] u__D = IR == 8'h0 ? D_sampled : _GEN_1660; // @[Microcode.scala 118:26 65:15]
  wire [7:0] u__L = IR == 8'h0 ? L_sampled : _GEN_1661; // @[Microcode.scala 118:26 68:15]
  wire [7:0] u__H = IR == 8'h0 ? H_sampled : _GEN_1662; // @[Microcode.scala 118:26 67:15]
  wire [15:0] u__SP = IR == 8'h0 ? SP_sampled : _GEN_1663; // @[Microcode.scala 118:26 60:15]
  wire [7:0] u__F = IR == 8'h0 ? F_sampled : _GEN_1664; // @[Microcode.scala 118:26 62:15]
  wire [7:0] u__A = IR == 8'h0 ? A_sampled : _GEN_1668; // @[Microcode.scala 118:26 61:15]
  wire [15:0] _GEN_1691 = IR == 8'h0 ? 16'h0 : _GEN_1669; // @[Microcode.scala 118:26 78:21]
  wire  _GEN_1692 = IR == 8'h0 ? 1'h0 : _GEN_1670; // @[Microcode.scala 118:26 79:21]
  wire [7:0] u__imm8 = IR == 8'h0 ? imm8 : _GEN_1671; // @[Microcode.scala 118:26 69:15]
  wire [2:0] u__next_mcycle = IR == 8'h0 ? mcycle : _GEN_1672; // @[Microcode.scala 118:26 75:21]
  wire  _GEN_1695 = IR == 8'h0 ? 1'h0 : _GEN_1673; // @[Microcode.scala 118:26 80:21]
  wire [7:0] _GEN_1696 = IR == 8'h0 ? 8'h0 : _GEN_1674; // @[Microcode.scala 118:26 81:21]
  wire [15:0] u__PC = IR == 8'h0 ? PC_sampled : _GEN_1675; // @[Microcode.scala 118:26 59:15]
  wire [1:0] _tcycle_T_1 = tcycle + 2'h1; // @[LR35902_Core.scala 146:22]
  wire  _T_1 = 3'h0 == state; // @[LR35902_Core.scala 152:17]
  wire [15:0] _PC_T_1 = PC + 16'h1; // @[LR35902_Core.scala 164:18]
  wire [7:0] _isLDrImm_new_T = io_memReadData & 8'hc7; // @[LR35902_Core.scala 172:44]
  wire  isLDrImm_new = _isLDrImm_new_T == 8'h6; // @[LR35902_Core.scala 172:55]
  wire  _needsImm8_new_T = io_memReadData == 8'h18; // @[LR35902_Core.scala 176:28]
  wire  _needsImm8_new_T_1 = isLDrImm_new | _needsImm8_new_T; // @[LR35902_Core.scala 175:24]
  wire  _needsImm8_new_T_2 = io_memReadData == 8'h20; // @[LR35902_Core.scala 177:28]
  wire  _needsImm8_new_T_3 = _needsImm8_new_T_1 | _needsImm8_new_T_2; // @[LR35902_Core.scala 176:41]
  wire  _needsImm8_new_T_10 = io_memReadData == 8'hc6; // @[LR35902_Core.scala 178:28]
  wire  _needsImm8_new_T_11 = _needsImm8_new_T_3 | io_memReadData == 8'h28 | io_memReadData == 8'h30 | io_memReadData
     == 8'h38 | _needsImm8_new_T_10; // @[LR35902_Core.scala 177:134]
  wire  _needsImm8_new_T_12 = io_memReadData == 8'hd6; // @[LR35902_Core.scala 179:28]
  wire  _needsImm8_new_T_13 = _needsImm8_new_T_11 | _needsImm8_new_T_12; // @[LR35902_Core.scala 178:41]
  wire  _needsImm8_new_T_14 = io_memReadData == 8'he0; // @[LR35902_Core.scala 180:28]
  wire  _needsImm8_new_T_15 = _needsImm8_new_T_13 | _needsImm8_new_T_14; // @[LR35902_Core.scala 179:41]
  wire  _needsImm8_new_T_16 = io_memReadData == 8'he6; // @[LR35902_Core.scala 181:28]
  wire  _needsImm8_new_T_17 = _needsImm8_new_T_15 | _needsImm8_new_T_16; // @[LR35902_Core.scala 180:41]
  wire  _needsImm8_new_T_18 = io_memReadData == 8'he8; // @[LR35902_Core.scala 182:28]
  wire  _needsImm8_new_T_19 = _needsImm8_new_T_17 | _needsImm8_new_T_18; // @[LR35902_Core.scala 181:41]
  wire  _needsImm8_new_T_20 = io_memReadData == 8'hee; // @[LR35902_Core.scala 183:28]
  wire  _needsImm8_new_T_21 = _needsImm8_new_T_19 | _needsImm8_new_T_20; // @[LR35902_Core.scala 182:41]
  wire  _needsImm8_new_T_22 = io_memReadData == 8'hf0; // @[LR35902_Core.scala 184:28]
  wire  _needsImm8_new_T_23 = _needsImm8_new_T_21 | _needsImm8_new_T_22; // @[LR35902_Core.scala 183:41]
  wire  _needsImm8_new_T_24 = io_memReadData == 8'hf6; // @[LR35902_Core.scala 185:28]
  wire  _needsImm8_new_T_25 = _needsImm8_new_T_23 | _needsImm8_new_T_24; // @[LR35902_Core.scala 184:41]
  wire  _needsImm8_new_T_26 = io_memReadData == 8'hf8; // @[LR35902_Core.scala 186:28]
  wire  _needsImm8_new_T_27 = _needsImm8_new_T_25 | _needsImm8_new_T_26; // @[LR35902_Core.scala 185:41]
  wire  _needsImm8_new_T_28 = io_memReadData == 8'hfe; // @[LR35902_Core.scala 187:28]
  wire  needsImm8_new = _needsImm8_new_T_27 | _needsImm8_new_T_28; // @[LR35902_Core.scala 186:41]
  wire  _needsImm16_new_T_7 = io_memReadData == 8'hc3; // @[LR35902_Core.scala 191:28]
  wire  _needsImm16_new_T_8 = io_memReadData == 8'hc2 | io_memReadData == 8'hca | io_memReadData == 8'hd2 |
    io_memReadData == 8'hda | _needsImm16_new_T_7; // @[LR35902_Core.scala 190:132]
  wire  _needsImm16_new_T_9 = io_memReadData == 8'hc4; // @[LR35902_Core.scala 192:28]
  wire  _needsImm16_new_T_10 = _needsImm16_new_T_8 | _needsImm16_new_T_9; // @[LR35902_Core.scala 191:41]
  wire  _needsImm16_new_T_17 = io_memReadData == 8'hcd; // @[LR35902_Core.scala 193:28]
  wire  _needsImm16_new_T_18 = _needsImm16_new_T_10 | io_memReadData == 8'hcc | io_memReadData == 8'hd4 | io_memReadData
     == 8'hdc | _needsImm16_new_T_17; // @[LR35902_Core.scala 192:134]
  wire  _needsImm16_new_T_19 = io_memReadData == 8'hea; // @[LR35902_Core.scala 194:28]
  wire  _needsImm16_new_T_20 = _needsImm16_new_T_18 | _needsImm16_new_T_19; // @[LR35902_Core.scala 193:41]
  wire  _needsImm16_new_T_21 = io_memReadData == 8'hfa; // @[LR35902_Core.scala 195:28]
  wire  _needsImm16_new_T_22 = _needsImm16_new_T_20 | _needsImm16_new_T_21; // @[LR35902_Core.scala 194:41]
  wire  _needsImm16_new_T_23 = io_memReadData == 8'h1; // @[LR35902_Core.scala 196:28]
  wire  _needsImm16_new_T_24 = _needsImm16_new_T_22 | _needsImm16_new_T_23; // @[LR35902_Core.scala 195:41]
  wire  _needsImm16_new_T_25 = io_memReadData == 8'h8; // @[LR35902_Core.scala 197:28]
  wire  _needsImm16_new_T_26 = _needsImm16_new_T_24 | _needsImm16_new_T_25; // @[LR35902_Core.scala 196:41]
  wire  _needsImm16_new_T_27 = io_memReadData == 8'h11; // @[LR35902_Core.scala 198:28]
  wire  _needsImm16_new_T_28 = _needsImm16_new_T_26 | _needsImm16_new_T_27; // @[LR35902_Core.scala 197:41]
  wire  _needsImm16_new_T_29 = io_memReadData == 8'h21; // @[LR35902_Core.scala 199:28]
  wire  _needsImm16_new_T_30 = _needsImm16_new_T_28 | _needsImm16_new_T_29; // @[LR35902_Core.scala 198:41]
  wire  _needsImm16_new_T_31 = io_memReadData == 8'h31; // @[LR35902_Core.scala 200:28]
  wire  needsImm16_new = _needsImm16_new_T_30 | _needsImm16_new_T_31; // @[LR35902_Core.scala 199:41]
  wire [2:0] _GEN_1703 = needsImm16_new ? 3'h2 : 3'h4; // @[LR35902_Core.scala 207:36 208:17 210:17]
  wire [15:0] _GEN_1704 = needsImm16_new ? PC_sampled : _PC_T_1; // @[LR35902_Core.scala 207:36 212:22 68:27]
  wire [15:0] _GEN_1705 = needsImm16_new ? SP_sampled : SP; // @[LR35902_Core.scala 207:36 213:22 69:27]
  wire [7:0] _GEN_1706 = needsImm16_new ? A_sampled : A; // @[LR35902_Core.scala 207:36 214:22 70:27]
  wire [7:0] _GEN_1707 = needsImm16_new ? F_sampled : F; // @[LR35902_Core.scala 207:36 215:22 71:27]
  wire [7:0] _GEN_1708 = needsImm16_new ? B_sampled : B; // @[LR35902_Core.scala 207:36 216:22 72:27]
  wire [7:0] _GEN_1709 = needsImm16_new ? C_sampled : C; // @[LR35902_Core.scala 207:36 217:22 73:27]
  wire [7:0] _GEN_1710 = needsImm16_new ? D_sampled : D; // @[LR35902_Core.scala 207:36 218:22 74:27]
  wire [7:0] _GEN_1711 = needsImm16_new ? E_sampled : E; // @[LR35902_Core.scala 207:36 219:22 75:27]
  wire [7:0] _GEN_1712 = needsImm16_new ? H_sampled : H; // @[LR35902_Core.scala 207:36 220:22 76:27]
  wire [7:0] _GEN_1713 = needsImm16_new ? L_sampled : L; // @[LR35902_Core.scala 207:36 221:22 77:27]
  wire [2:0] _GEN_1714 = needsImm8_new ? 3'h1 : _GEN_1703; // @[LR35902_Core.scala 205:35 206:17]
  wire [15:0] _GEN_1715 = needsImm8_new ? PC_sampled : _GEN_1704; // @[LR35902_Core.scala 205:35 68:27]
  wire [15:0] _GEN_1716 = needsImm8_new ? SP_sampled : _GEN_1705; // @[LR35902_Core.scala 205:35 69:27]
  wire [7:0] _GEN_1717 = needsImm8_new ? A_sampled : _GEN_1706; // @[LR35902_Core.scala 205:35 70:27]
  wire [7:0] _GEN_1718 = needsImm8_new ? F_sampled : _GEN_1707; // @[LR35902_Core.scala 205:35 71:27]
  wire [7:0] _GEN_1719 = needsImm8_new ? B_sampled : _GEN_1708; // @[LR35902_Core.scala 205:35 72:27]
  wire [7:0] _GEN_1720 = needsImm8_new ? C_sampled : _GEN_1709; // @[LR35902_Core.scala 205:35 73:27]
  wire [7:0] _GEN_1721 = needsImm8_new ? D_sampled : _GEN_1710; // @[LR35902_Core.scala 205:35 74:27]
  wire [7:0] _GEN_1722 = needsImm8_new ? E_sampled : _GEN_1711; // @[LR35902_Core.scala 205:35 75:27]
  wire [7:0] _GEN_1723 = needsImm8_new ? H_sampled : _GEN_1712; // @[LR35902_Core.scala 205:35 76:27]
  wire [7:0] _GEN_1724 = needsImm8_new ? L_sampled : _GEN_1713; // @[LR35902_Core.scala 205:35 77:27]
  wire [15:0] _GEN_1737 = _u_T_1 ? _PC_T_1 : PC; // @[LR35902_Core.scala 161:28 164:12 53:19]
  wire [2:0] _GEN_1738 = _u_T_1 ? 3'h0 : mcycle; // @[LR35902_Core.scala 161:28 165:16 87:23]
  wire  _T_4 = 3'h1 == state; // @[LR35902_Core.scala 152:17]
  wire [2:0] _GEN_1755 = _u_T_1 ? 3'h4 : state; // @[LR35902_Core.scala 233:28 237:16 85:23]
  wire [15:0] _GEN_1756 = _u_T_1 ? _PC_T_1 : PC_sampled; // @[LR35902_Core.scala 233:28 240:20 68:27]
  wire [15:0] _GEN_1757 = _u_T_1 ? SP : SP_sampled; // @[LR35902_Core.scala 233:28 241:20 69:27]
  wire [7:0] _GEN_1758 = _u_T_1 ? A : A_sampled; // @[LR35902_Core.scala 233:28 242:20 70:27]
  wire [7:0] _GEN_1759 = _u_T_1 ? F : F_sampled; // @[LR35902_Core.scala 233:28 243:20 71:27]
  wire [7:0] _GEN_1760 = _u_T_1 ? B : B_sampled; // @[LR35902_Core.scala 233:28 244:20 72:27]
  wire [7:0] _GEN_1761 = _u_T_1 ? C : C_sampled; // @[LR35902_Core.scala 233:28 245:20 73:27]
  wire [7:0] _GEN_1762 = _u_T_1 ? D : D_sampled; // @[LR35902_Core.scala 233:28 246:20 74:27]
  wire [7:0] _GEN_1763 = _u_T_1 ? E : E_sampled; // @[LR35902_Core.scala 233:28 247:20 75:27]
  wire [7:0] _GEN_1764 = _u_T_1 ? H : H_sampled; // @[LR35902_Core.scala 233:28 248:20 76:27]
  wire [7:0] _GEN_1765 = _u_T_1 ? L : L_sampled; // @[LR35902_Core.scala 233:28 249:20 77:27]
  wire  _T_6 = 3'h2 == state; // @[LR35902_Core.scala 152:17]
  wire [15:0] _GEN_1766 = _u_T_1 ? {{8'd0}, io_memReadData} : imm16; // @[LR35902_Core.scala 260:28 261:16 59:22]
  wire [2:0] _GEN_1768 = _u_T_1 ? 3'h3 : state; // @[LR35902_Core.scala 260:28 263:16 85:23]
  wire  _T_8 = 3'h3 == state; // @[LR35902_Core.scala 152:17]
  wire [15:0] _imm16_T_1 = {io_memReadData,imm16[7:0]}; // @[Cat.scala 33:92]
  wire [15:0] _GEN_1769 = _u_T_1 ? _imm16_T_1 : imm16; // @[LR35902_Core.scala 274:28 275:16 59:22]
  wire  _T_10 = 3'h5 == state; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_1783 = _u_T_1 ? io_memReadData : IR2; // @[LR35902_Core.scala 301:28 302:16 57:22]
  wire  _T_12 = 3'h4 == state; // @[LR35902_Core.scala 152:17]
  wire  _T_13 = IR == 8'hcb; // @[LR35902_Core.scala 326:15]
  wire [1:0] cbOut_group = IR2[7:6]; // @[MicrocodeCB.scala 70:23]
  wire [2:0] cbOut_bitIdx = IR2[5:3]; // @[MicrocodeCB.scala 71:23]
  wire [2:0] cbOut_regIdx = IR2[2:0]; // @[MicrocodeCB.scala 72:23]
  wire  cbOut_isHL = cbOut_regIdx == 3'h6; // @[MicrocodeCB.scala 74:28]
  wire  _cbOut_operand_T = 3'h0 == cbOut_regIdx; // @[Mux.scala 81:61]
  wire [7:0] _cbOut_operand_T_1 = 3'h0 == cbOut_regIdx ? B_sampled : 8'h0; // @[Mux.scala 81:58]
  wire  _cbOut_operand_T_2 = 3'h1 == cbOut_regIdx; // @[Mux.scala 81:61]
  wire [7:0] _cbOut_operand_T_3 = 3'h1 == cbOut_regIdx ? C_sampled : _cbOut_operand_T_1; // @[Mux.scala 81:58]
  wire  _cbOut_operand_T_4 = 3'h2 == cbOut_regIdx; // @[Mux.scala 81:61]
  wire [7:0] _cbOut_operand_T_5 = 3'h2 == cbOut_regIdx ? D_sampled : _cbOut_operand_T_3; // @[Mux.scala 81:58]
  wire  _cbOut_operand_T_6 = 3'h3 == cbOut_regIdx; // @[Mux.scala 81:61]
  wire [7:0] _cbOut_operand_T_7 = 3'h3 == cbOut_regIdx ? E_sampled : _cbOut_operand_T_5; // @[Mux.scala 81:58]
  wire  _cbOut_operand_T_8 = 3'h4 == cbOut_regIdx; // @[Mux.scala 81:61]
  wire [7:0] _cbOut_operand_T_9 = 3'h4 == cbOut_regIdx ? H_sampled : _cbOut_operand_T_7; // @[Mux.scala 81:58]
  wire  _cbOut_operand_T_10 = 3'h5 == cbOut_regIdx; // @[Mux.scala 81:61]
  wire [7:0] _cbOut_operand_T_11 = 3'h5 == cbOut_regIdx ? L_sampled : _cbOut_operand_T_9; // @[Mux.scala 81:58]
  wire  _cbOut_operand_T_12 = 3'h7 == cbOut_regIdx; // @[Mux.scala 81:61]
  wire [7:0] _cbOut_operand_T_13 = 3'h7 == cbOut_regIdx ? A_sampled : _cbOut_operand_T_11; // @[Mux.scala 81:58]
  wire [15:0] _GEN_1799 = cbOut_isHL ? u_HL : 16'h0; // @[MicrocodeCB.scala 113:18 115:20 62:21]
  wire [7:0] _GEN_1801 = cbOut_isHL ? io_memReadData : _cbOut_operand_T_13; // @[MicrocodeCB.scala 109:13 113:18 117:17]
  wire [7:0] _GEN_1802 = cbOut_isHL ? io_memReadData : CB_imm8; // @[MicrocodeCB.scala 113:18 118:18 56:14]
  wire [2:0] _GEN_1803 = cbOut_isHL ? _GEN_115 : _GEN_115; // @[MicrocodeCB.scala 113:18]
  wire [15:0] _GEN_1804 = _u_T_325 ? _GEN_1799 : 16'h0; // @[MicrocodeCB.scala 111:26 62:21]
  wire  _GEN_1805 = _u_T_325 & cbOut_isHL; // @[MicrocodeCB.scala 111:26 63:21]
  wire [7:0] _GEN_1806 = _u_T_325 ? _GEN_1801 : _cbOut_operand_T_13; // @[MicrocodeCB.scala 109:13 111:26]
  wire [7:0] _GEN_1807 = _u_T_325 ? _GEN_1802 : CB_imm8; // @[MicrocodeCB.scala 111:26 56:14]
  wire [2:0] _GEN_1808 = _u_T_325 ? _GEN_1803 : mcycle; // @[MicrocodeCB.scala 111:26 59:21]
  wire  _cbOut_T_3 = mcycle == 3'h2; // @[MicrocodeCB.scala 139:17]
  wire [7:0] cbOut_operand = mcycle == 3'h2 & cbOut_isHL ? CB_imm8 : _GEN_1806; // @[MicrocodeCB.scala 139:34 140:15]
  wire  cbOut_c = cbOut_operand[7]; // @[MicrocodeCB.scala 165:30]
  wire [7:0] _cbOut_result_T_1 = {cbOut_operand[6:0],cbOut_c}; // @[Cat.scala 33:92]
  wire  cbOut_c_1 = cbOut_operand[0]; // @[MicrocodeCB.scala 174:30]
  wire [7:0] _cbOut_result_T_3 = {cbOut_c_1,cbOut_operand[7:1]}; // @[Cat.scala 33:92]
  wire [7:0] _cbOut_result_T_6 = {cbOut_operand[6:0],F_sampled[4]}; // @[Cat.scala 33:92]
  wire [7:0] _cbOut_result_T_9 = {F_sampled[4],cbOut_operand[7:1]}; // @[Cat.scala 33:92]
  wire [7:0] _cbOut_result_T_11 = {cbOut_operand[6:0],1'h0}; // @[Cat.scala 33:92]
  wire [7:0] _cbOut_result_T_14 = {cbOut_c,cbOut_operand[7:1]}; // @[Cat.scala 33:92]
  wire [7:0] _cbOut_result_T_17 = {cbOut_operand[3:0],cbOut_operand[7:4]}; // @[Cat.scala 33:92]
  wire [7:0] _cbOut_result_T_19 = {1'h0,cbOut_operand[7:1]}; // @[Cat.scala 33:92]
  wire [7:0] _GEN_1810 = 3'h7 == cbOut_bitIdx ? _cbOut_result_T_19 : cbOut_operand; // @[MicrocodeCB.scala 143:12 162:26 228:22]
  wire [7:0] _GEN_1815 = 3'h6 == cbOut_bitIdx ? _cbOut_result_T_17 : _GEN_1810; // @[MicrocodeCB.scala 162:26 219:22]
  wire [7:0] _GEN_1820 = 3'h5 == cbOut_bitIdx ? _cbOut_result_T_14 : _GEN_1815; // @[MicrocodeCB.scala 162:26 211:22]
  wire [7:0] _GEN_1825 = 3'h4 == cbOut_bitIdx ? _cbOut_result_T_11 : _GEN_1820; // @[MicrocodeCB.scala 162:26 202:22]
  wire [7:0] _GEN_1830 = 3'h3 == cbOut_bitIdx ? _cbOut_result_T_9 : _GEN_1825; // @[MicrocodeCB.scala 162:26 193:22]
  wire [7:0] _GEN_1835 = 3'h2 == cbOut_bitIdx ? _cbOut_result_T_6 : _GEN_1830; // @[MicrocodeCB.scala 162:26 184:22]
  wire [7:0] _GEN_1840 = 3'h1 == cbOut_bitIdx ? _cbOut_result_T_3 : _GEN_1835; // @[MicrocodeCB.scala 162:26 175:22]
  wire [7:0] _GEN_1845 = 3'h0 == cbOut_bitIdx ? _cbOut_result_T_1 : _GEN_1840; // @[MicrocodeCB.scala 162:26 166:22]
  wire [7:0] _cbOut_mask_T = 8'h1 << cbOut_bitIdx; // @[MicrocodeCB.scala 249:29]
  wire [7:0] cbOut_mask = ~_cbOut_mask_T; // @[MicrocodeCB.scala 249:23]
  wire [7:0] _cbOut_result_T_20 = cbOut_operand & cbOut_mask; // @[MicrocodeCB.scala 250:29]
  wire [7:0] _cbOut_result_T_21 = cbOut_operand | _cbOut_mask_T; // @[MicrocodeCB.scala 257:29]
  wire [7:0] _GEN_1850 = 2'h3 == cbOut_group ? _cbOut_result_T_21 : cbOut_operand; // @[MicrocodeCB.scala 143:12 158:21 257:18]
  wire [7:0] _GEN_1851 = 2'h2 == cbOut_group ? _cbOut_result_T_20 : _GEN_1850; // @[MicrocodeCB.scala 158:21 250:18]
  wire [7:0] _GEN_1856 = 2'h1 == cbOut_group ? cbOut_operand : _GEN_1851; // @[MicrocodeCB.scala 158:21 244:18]
  wire [7:0] _GEN_1857 = 2'h0 == cbOut_group ? _GEN_1845 : _GEN_1856; // @[MicrocodeCB.scala 158:21]
  wire [7:0] cbOut_result = _cbOut_T_3 ? _GEN_1857 : cbOut_operand; // @[MicrocodeCB.scala 143:12 157:26]
  wire  _cbOut_flagZ_T_1 = cbOut_result == 8'h0; // @[MicrocodeCB.scala 167:32]
  wire  _GEN_1811 = 3'h7 == cbOut_bitIdx ? _cbOut_flagZ_T_1 : F_sampled[7]; // @[MicrocodeCB.scala 152:11 162:26 229:21]
  wire  _GEN_1812 = 3'h7 == cbOut_bitIdx ? 1'h0 : u_N; // @[MicrocodeCB.scala 153:11 162:26 230:21]
  wire  _GEN_1813 = 3'h7 == cbOut_bitIdx ? 1'h0 : u_H; // @[MicrocodeCB.scala 154:11 162:26 231:21]
  wire  _GEN_1814 = 3'h7 == cbOut_bitIdx ? cbOut_c_1 : F_sampled[4]; // @[MicrocodeCB.scala 155:11 162:26 232:21]
  wire  _GEN_1816 = 3'h6 == cbOut_bitIdx ? _cbOut_flagZ_T_1 : _GEN_1811; // @[MicrocodeCB.scala 162:26 220:21]
  wire  _GEN_1817 = 3'h6 == cbOut_bitIdx ? 1'h0 : _GEN_1812; // @[MicrocodeCB.scala 162:26 221:21]
  wire  _GEN_1818 = 3'h6 == cbOut_bitIdx ? 1'h0 : _GEN_1813; // @[MicrocodeCB.scala 162:26 222:21]
  wire  _GEN_1819 = 3'h6 == cbOut_bitIdx ? 1'h0 : _GEN_1814; // @[MicrocodeCB.scala 162:26 223:21]
  wire  _GEN_1821 = 3'h5 == cbOut_bitIdx ? _cbOut_flagZ_T_1 : _GEN_1816; // @[MicrocodeCB.scala 162:26 212:21]
  wire  _GEN_1822 = 3'h5 == cbOut_bitIdx ? 1'h0 : _GEN_1817; // @[MicrocodeCB.scala 162:26 213:21]
  wire  _GEN_1823 = 3'h5 == cbOut_bitIdx ? 1'h0 : _GEN_1818; // @[MicrocodeCB.scala 162:26 214:21]
  wire  _GEN_1824 = 3'h5 == cbOut_bitIdx ? cbOut_c_1 : _GEN_1819; // @[MicrocodeCB.scala 162:26 215:21]
  wire  _GEN_1826 = 3'h4 == cbOut_bitIdx ? _cbOut_flagZ_T_1 : _GEN_1821; // @[MicrocodeCB.scala 162:26 203:21]
  wire  _GEN_1827 = 3'h4 == cbOut_bitIdx ? 1'h0 : _GEN_1822; // @[MicrocodeCB.scala 162:26 204:21]
  wire  _GEN_1828 = 3'h4 == cbOut_bitIdx ? 1'h0 : _GEN_1823; // @[MicrocodeCB.scala 162:26 205:21]
  wire  _GEN_1829 = 3'h4 == cbOut_bitIdx ? cbOut_c : _GEN_1824; // @[MicrocodeCB.scala 162:26 206:21]
  wire  _GEN_1831 = 3'h3 == cbOut_bitIdx ? _cbOut_flagZ_T_1 : _GEN_1826; // @[MicrocodeCB.scala 162:26 194:21]
  wire  _GEN_1832 = 3'h3 == cbOut_bitIdx ? 1'h0 : _GEN_1827; // @[MicrocodeCB.scala 162:26 195:21]
  wire  _GEN_1833 = 3'h3 == cbOut_bitIdx ? 1'h0 : _GEN_1828; // @[MicrocodeCB.scala 162:26 196:21]
  wire  _GEN_1834 = 3'h3 == cbOut_bitIdx ? cbOut_c_1 : _GEN_1829; // @[MicrocodeCB.scala 162:26 197:21]
  wire  _GEN_1836 = 3'h2 == cbOut_bitIdx ? _cbOut_flagZ_T_1 : _GEN_1831; // @[MicrocodeCB.scala 162:26 185:21]
  wire  _GEN_1837 = 3'h2 == cbOut_bitIdx ? 1'h0 : _GEN_1832; // @[MicrocodeCB.scala 162:26 186:21]
  wire  _GEN_1838 = 3'h2 == cbOut_bitIdx ? 1'h0 : _GEN_1833; // @[MicrocodeCB.scala 162:26 187:21]
  wire  _GEN_1839 = 3'h2 == cbOut_bitIdx ? cbOut_c : _GEN_1834; // @[MicrocodeCB.scala 162:26 188:21]
  wire  _GEN_1841 = 3'h1 == cbOut_bitIdx ? _cbOut_flagZ_T_1 : _GEN_1836; // @[MicrocodeCB.scala 162:26 176:21]
  wire  _GEN_1842 = 3'h1 == cbOut_bitIdx ? 1'h0 : _GEN_1837; // @[MicrocodeCB.scala 162:26 177:21]
  wire  _GEN_1843 = 3'h1 == cbOut_bitIdx ? 1'h0 : _GEN_1838; // @[MicrocodeCB.scala 162:26 178:21]
  wire  _GEN_1844 = 3'h1 == cbOut_bitIdx ? cbOut_c_1 : _GEN_1839; // @[MicrocodeCB.scala 162:26 179:21]
  wire  _GEN_1846 = 3'h0 == cbOut_bitIdx ? cbOut_result == 8'h0 : _GEN_1841; // @[MicrocodeCB.scala 162:26 167:21]
  wire  _GEN_1847 = 3'h0 == cbOut_bitIdx ? 1'h0 : _GEN_1842; // @[MicrocodeCB.scala 162:26 168:21]
  wire  _GEN_1848 = 3'h0 == cbOut_bitIdx ? 1'h0 : _GEN_1843; // @[MicrocodeCB.scala 162:26 169:21]
  wire  _GEN_1849 = 3'h0 == cbOut_bitIdx ? cbOut_c : _GEN_1844; // @[MicrocodeCB.scala 162:26 170:21]
  wire [7:0] _cbOut_bitVal_T = cbOut_operand >> cbOut_bitIdx; // @[MicrocodeCB.scala 239:31]
  wire  cbOut_bitVal = _cbOut_bitVal_T[0]; // @[MicrocodeCB.scala 239:31]
  wire  _GEN_1852 = 2'h1 == cbOut_group ? ~cbOut_bitVal : F_sampled[7]; // @[MicrocodeCB.scala 152:11 158:21 240:17]
  wire  _GEN_1853 = 2'h1 == cbOut_group ? 1'h0 : u_N; // @[MicrocodeCB.scala 153:11 158:21 241:17]
  wire  _GEN_1854 = 2'h1 == cbOut_group | u_H; // @[MicrocodeCB.scala 154:11 158:21 242:17]
  wire  _GEN_1855 = 2'h1 == cbOut_group ? F_sampled[4] : F_sampled[4]; // @[MicrocodeCB.scala 155:11 158:21 243:17]
  wire  _GEN_1858 = 2'h0 == cbOut_group ? _GEN_1846 : _GEN_1852; // @[MicrocodeCB.scala 158:21]
  wire  _GEN_1859 = 2'h0 == cbOut_group ? _GEN_1847 : _GEN_1853; // @[MicrocodeCB.scala 158:21]
  wire  _GEN_1860 = 2'h0 == cbOut_group ? _GEN_1848 : _GEN_1854; // @[MicrocodeCB.scala 158:21]
  wire  _GEN_1861 = 2'h0 == cbOut_group ? _GEN_1849 : _GEN_1855; // @[MicrocodeCB.scala 158:21]
  wire  cbOut_flagC = _cbOut_T_3 ? _GEN_1861 : F_sampled[4]; // @[MicrocodeCB.scala 155:11 157:26]
  wire  cbOut_flagZ = _cbOut_T_3 ? _GEN_1858 : F_sampled[7]; // @[MicrocodeCB.scala 152:11 157:26]
  wire  cbOut_flagN = _cbOut_T_3 ? _GEN_1859 : u_N; // @[MicrocodeCB.scala 153:11 157:26]
  wire  cbOut_flagH = _cbOut_T_3 ? _GEN_1860 : u_H; // @[MicrocodeCB.scala 154:11 157:26]
  wire [7:0] _cbOut_out_F_T = {cbOut_flagZ,cbOut_flagN,cbOut_flagH,cbOut_flagC,4'h0}; // @[Cat.scala 33:92]
  wire [7:0] _GEN_1862 = _cbOut_operand_T_12 ? cbOut_result : A_sampled; // @[MicrocodeCB.scala 94:17 101:25 47:11]
  wire [7:0] _GEN_1863 = _cbOut_operand_T_10 ? cbOut_result : L_sampled; // @[MicrocodeCB.scala 94:17 100:25 54:11]
  wire [7:0] _GEN_1864 = _cbOut_operand_T_10 ? A_sampled : _GEN_1862; // @[MicrocodeCB.scala 47:11 94:17]
  wire [7:0] _GEN_1865 = _cbOut_operand_T_8 ? cbOut_result : H_sampled; // @[MicrocodeCB.scala 53:11 94:17 99:25]
  wire [7:0] _GEN_1866 = _cbOut_operand_T_8 ? L_sampled : _GEN_1863; // @[MicrocodeCB.scala 54:11 94:17]
  wire [7:0] _GEN_1867 = _cbOut_operand_T_8 ? A_sampled : _GEN_1864; // @[MicrocodeCB.scala 47:11 94:17]
  wire [7:0] _GEN_1868 = _cbOut_operand_T_6 ? cbOut_result : E_sampled; // @[MicrocodeCB.scala 52:11 94:17 98:25]
  wire [7:0] _GEN_1869 = _cbOut_operand_T_6 ? H_sampled : _GEN_1865; // @[MicrocodeCB.scala 53:11 94:17]
  wire [7:0] _GEN_1870 = _cbOut_operand_T_6 ? L_sampled : _GEN_1866; // @[MicrocodeCB.scala 54:11 94:17]
  wire [7:0] _GEN_1871 = _cbOut_operand_T_6 ? A_sampled : _GEN_1867; // @[MicrocodeCB.scala 47:11 94:17]
  wire [7:0] _GEN_1872 = _cbOut_operand_T_4 ? cbOut_result : D_sampled; // @[MicrocodeCB.scala 51:11 94:17 97:25]
  wire [7:0] _GEN_1873 = _cbOut_operand_T_4 ? E_sampled : _GEN_1868; // @[MicrocodeCB.scala 52:11 94:17]
  wire [7:0] _GEN_1874 = _cbOut_operand_T_4 ? H_sampled : _GEN_1869; // @[MicrocodeCB.scala 53:11 94:17]
  wire [7:0] _GEN_1875 = _cbOut_operand_T_4 ? L_sampled : _GEN_1870; // @[MicrocodeCB.scala 54:11 94:17]
  wire [7:0] _GEN_1876 = _cbOut_operand_T_4 ? A_sampled : _GEN_1871; // @[MicrocodeCB.scala 47:11 94:17]
  wire [7:0] _GEN_1877 = _cbOut_operand_T_2 ? cbOut_result : C_sampled; // @[MicrocodeCB.scala 50:11 94:17 96:25]
  wire [7:0] _GEN_1878 = _cbOut_operand_T_2 ? D_sampled : _GEN_1872; // @[MicrocodeCB.scala 51:11 94:17]
  wire [7:0] _GEN_1879 = _cbOut_operand_T_2 ? E_sampled : _GEN_1873; // @[MicrocodeCB.scala 52:11 94:17]
  wire [7:0] _GEN_1880 = _cbOut_operand_T_2 ? H_sampled : _GEN_1874; // @[MicrocodeCB.scala 53:11 94:17]
  wire [7:0] _GEN_1881 = _cbOut_operand_T_2 ? L_sampled : _GEN_1875; // @[MicrocodeCB.scala 54:11 94:17]
  wire [7:0] _GEN_1882 = _cbOut_operand_T_2 ? A_sampled : _GEN_1876; // @[MicrocodeCB.scala 47:11 94:17]
  wire [7:0] _GEN_1883 = _cbOut_operand_T ? cbOut_result : B_sampled; // @[MicrocodeCB.scala 49:11 94:17 95:25]
  wire [7:0] _GEN_1884 = _cbOut_operand_T ? C_sampled : _GEN_1877; // @[MicrocodeCB.scala 50:11 94:17]
  wire [7:0] _GEN_1885 = _cbOut_operand_T ? D_sampled : _GEN_1878; // @[MicrocodeCB.scala 51:11 94:17]
  wire [7:0] _GEN_1886 = _cbOut_operand_T ? E_sampled : _GEN_1879; // @[MicrocodeCB.scala 52:11 94:17]
  wire [7:0] _GEN_1887 = _cbOut_operand_T ? H_sampled : _GEN_1880; // @[MicrocodeCB.scala 53:11 94:17]
  wire [7:0] _GEN_1888 = _cbOut_operand_T ? L_sampled : _GEN_1881; // @[MicrocodeCB.scala 54:11 94:17]
  wire [7:0] _GEN_1889 = _cbOut_operand_T ? A_sampled : _GEN_1882; // @[MicrocodeCB.scala 47:11 94:17]
  wire [7:0] _GEN_1890 = ~cbOut_isHL ? _GEN_1883 : B_sampled; // @[MicrocodeCB.scala 267:19 49:11]
  wire [7:0] _GEN_1891 = ~cbOut_isHL ? _GEN_1884 : C_sampled; // @[MicrocodeCB.scala 267:19 50:11]
  wire [7:0] _GEN_1892 = ~cbOut_isHL ? _GEN_1885 : D_sampled; // @[MicrocodeCB.scala 267:19 51:11]
  wire [7:0] _GEN_1893 = ~cbOut_isHL ? _GEN_1886 : E_sampled; // @[MicrocodeCB.scala 267:19 52:11]
  wire [7:0] _GEN_1894 = ~cbOut_isHL ? _GEN_1887 : H_sampled; // @[MicrocodeCB.scala 267:19 53:11]
  wire [7:0] _GEN_1895 = ~cbOut_isHL ? _GEN_1888 : L_sampled; // @[MicrocodeCB.scala 267:19 54:11]
  wire [7:0] _GEN_1896 = ~cbOut_isHL ? _GEN_1889 : A_sampled; // @[MicrocodeCB.scala 267:19 47:11]
  wire [2:0] _GEN_1897 = cbOut_isHL ? 3'h3 : _GEN_1808; // @[MicrocodeCB.scala 276:20 277:27]
  wire  _GEN_1898 = cbOut_isHL ? 1'h0 : 1'h1; // @[MicrocodeCB.scala 276:20 58:14 279:20]
  wire [2:0] _GEN_1899 = _u_T_1 ? _GEN_1897 : _GEN_1808; // @[MicrocodeCB.scala 275:28]
  wire  _GEN_1900 = _u_T_1 & _GEN_1898; // @[MicrocodeCB.scala 275:28 58:14]
  wire [7:0] cbOut_F = _cbOut_T_3 ? _cbOut_out_F_T : F_sampled; // @[MicrocodeCB.scala 157:26 264:13 48:11]
  wire [7:0] cbOut_B = _cbOut_T_3 ? _GEN_1890 : B_sampled; // @[MicrocodeCB.scala 157:26 49:11]
  wire [7:0] cbOut_C = _cbOut_T_3 ? _GEN_1891 : C_sampled; // @[MicrocodeCB.scala 157:26 50:11]
  wire [7:0] cbOut_D = _cbOut_T_3 ? _GEN_1892 : D_sampled; // @[MicrocodeCB.scala 157:26 51:11]
  wire [7:0] cbOut_E = _cbOut_T_3 ? _GEN_1893 : E_sampled; // @[MicrocodeCB.scala 157:26 52:11]
  wire [7:0] cbOut_H = _cbOut_T_3 ? _GEN_1894 : H_sampled; // @[MicrocodeCB.scala 157:26 53:11]
  wire [7:0] cbOut_L = _cbOut_T_3 ? _GEN_1895 : L_sampled; // @[MicrocodeCB.scala 157:26 54:11]
  wire [7:0] cbOut_A = _cbOut_T_3 ? _GEN_1896 : A_sampled; // @[MicrocodeCB.scala 157:26 47:11]
  wire [7:0] cbOut_imm8 = _cbOut_T_3 ? cbOut_result : _GEN_1807; // @[MicrocodeCB.scala 157:26 272:16]
  wire [2:0] cbOut_next_mcycle = _cbOut_T_3 ? _GEN_1899 : _GEN_1808; // @[MicrocodeCB.scala 157:26]
  wire  _GEN_1916 = _cbOut_T_3 & _GEN_1900; // @[MicrocodeCB.scala 157:26 58:14]
  wire  _cbOut_T_27 = mcycle == 3'h3; // @[MicrocodeCB.scala 288:17]
  wire  _GEN_1917 = _u_T_1 | _GEN_1916; // @[MicrocodeCB.scala 293:28 294:18]
  wire [15:0] _GEN_1918 = mcycle == 3'h3 ? u_HL : _GEN_1804; // @[MicrocodeCB.scala 288:26 289:23]
  wire [7:0] _GEN_1920 = mcycle == 3'h3 ? CB_imm8 : 8'h0; // @[MicrocodeCB.scala 288:26 291:23 65:21]
  wire  cbOut_done = mcycle == 3'h3 ? _GEN_1917 : _GEN_1916; // @[MicrocodeCB.scala 288:26]
  wire [2:0] _GEN_1922 = cbOut_done ? 3'h0 : cbOut_next_mcycle; // @[LR35902_Core.scala 369:28 370:20 373:20]
  wire [2:0] _GEN_1923 = cbOut_done ? 3'h0 : state; // @[LR35902_Core.scala 369:28 371:20 85:23]
  wire [7:0] _GEN_1924 = _u_T_1 ? cbOut_A : A; // @[LR35902_Core.scala 346:30 348:14 44:18]
  wire [7:0] _GEN_1925 = _u_T_1 ? cbOut_F : F; // @[LR35902_Core.scala 346:30 349:14 45:18]
  wire [7:0] _GEN_1926 = _u_T_1 ? cbOut_B : B; // @[LR35902_Core.scala 346:30 350:14 46:18]
  wire [7:0] _GEN_1927 = _u_T_1 ? cbOut_C : C; // @[LR35902_Core.scala 346:30 351:14 47:18]
  wire [7:0] _GEN_1928 = _u_T_1 ? cbOut_D : D; // @[LR35902_Core.scala 346:30 352:14 48:18]
  wire [7:0] _GEN_1929 = _u_T_1 ? cbOut_E : E; // @[LR35902_Core.scala 346:30 353:14 49:18]
  wire [7:0] _GEN_1930 = _u_T_1 ? cbOut_H : H; // @[LR35902_Core.scala 346:30 354:14 50:18]
  wire [7:0] _GEN_1931 = _u_T_1 ? cbOut_L : L; // @[LR35902_Core.scala 346:30 355:14 51:18]
  wire [7:0] _GEN_1932 = _u_T_1 ? cbOut_imm8 : CB_imm8; // @[LR35902_Core.scala 346:30 357:19 60:24]
  wire [7:0] _GEN_1933 = _u_T_1 ? cbOut_A : A_sampled; // @[LR35902_Core.scala 346:30 360:22 70:27]
  wire [7:0] _GEN_1934 = _u_T_1 ? cbOut_F : F_sampled; // @[LR35902_Core.scala 346:30 361:22 71:27]
  wire [7:0] _GEN_1935 = _u_T_1 ? cbOut_B : B_sampled; // @[LR35902_Core.scala 346:30 362:22 72:27]
  wire [7:0] _GEN_1936 = _u_T_1 ? cbOut_C : C_sampled; // @[LR35902_Core.scala 346:30 363:22 73:27]
  wire [7:0] _GEN_1937 = _u_T_1 ? cbOut_D : D_sampled; // @[LR35902_Core.scala 346:30 364:22 74:27]
  wire [7:0] _GEN_1938 = _u_T_1 ? cbOut_E : E_sampled; // @[LR35902_Core.scala 346:30 365:22 75:27]
  wire [7:0] _GEN_1939 = _u_T_1 ? cbOut_H : H_sampled; // @[LR35902_Core.scala 346:30 366:22 76:27]
  wire [7:0] _GEN_1940 = _u_T_1 ? cbOut_L : L_sampled; // @[LR35902_Core.scala 346:30 367:22 77:27]
  wire [2:0] _GEN_1941 = _u_T_1 ? _GEN_1922 : mcycle; // @[LR35902_Core.scala 346:30 87:23]
  wire [2:0] _GEN_1942 = _u_T_1 ? _GEN_1923 : state; // @[LR35902_Core.scala 346:30 85:23]
  wire  _T_18 = _u_T_252 | _u_T_259; // @[LR35902_Core.scala 387:31]
  wire [2:0] _GEN_1943 = u__done ? 3'h0 : u__next_mcycle; // @[LR35902_Core.scala 421:24 422:20 425:20]
  wire [2:0] _GEN_1944 = u__done ? 3'h0 : state; // @[LR35902_Core.scala 421:24 423:20 85:23]
  wire [15:0] _GEN_1945 = _u_T_1 ? u__PC : PC; // @[LR35902_Core.scala 385:30 392:14 53:19]
  wire [15:0] _GEN_1946 = _u_T_1 ? u__SP : SP; // @[LR35902_Core.scala 385:30 393:14 54:19]
  wire [7:0] _GEN_1947 = _u_T_1 ? u__A : A; // @[LR35902_Core.scala 385:30 394:14 44:18]
  wire [7:0] _GEN_1948 = _u_T_1 ? u__F : F; // @[LR35902_Core.scala 385:30 395:14 45:18]
  wire [7:0] _GEN_1949 = _u_T_1 ? u__B : B; // @[LR35902_Core.scala 385:30 396:14 46:18]
  wire [7:0] _GEN_1950 = _u_T_1 ? u__C : C; // @[LR35902_Core.scala 385:30 397:14 47:18]
  wire [7:0] _GEN_1951 = _u_T_1 ? u__D : D; // @[LR35902_Core.scala 385:30 398:14 48:18]
  wire [7:0] _GEN_1952 = _u_T_1 ? u__E : E; // @[LR35902_Core.scala 385:30 399:14 49:18]
  wire [7:0] _GEN_1953 = _u_T_1 ? u__H : H; // @[LR35902_Core.scala 385:30 400:14 50:18]
  wire [7:0] _GEN_1954 = _u_T_1 ? u__L : L; // @[LR35902_Core.scala 385:30 401:14 51:18]
  wire [15:0] _GEN_1955 = _u_T_1 ? u__PC : PC_sampled; // @[LR35902_Core.scala 385:30 405:22 68:27]
  wire [15:0] _GEN_1956 = _u_T_1 ? u__SP : SP_sampled; // @[LR35902_Core.scala 385:30 406:22 69:27]
  wire [7:0] _GEN_1957 = _u_T_1 ? u__A : A_sampled; // @[LR35902_Core.scala 385:30 407:22 70:27]
  wire [7:0] _GEN_1958 = _u_T_1 ? u__F : F_sampled; // @[LR35902_Core.scala 385:30 408:22 71:27]
  wire [7:0] _GEN_1959 = _u_T_1 ? u__B : B_sampled; // @[LR35902_Core.scala 385:30 409:22 72:27]
  wire [7:0] _GEN_1960 = _u_T_1 ? u__C : C_sampled; // @[LR35902_Core.scala 385:30 410:22 73:27]
  wire [7:0] _GEN_1961 = _u_T_1 ? u__D : D_sampled; // @[LR35902_Core.scala 385:30 411:22 74:27]
  wire [7:0] _GEN_1962 = _u_T_1 ? u__E : E_sampled; // @[LR35902_Core.scala 385:30 412:22 75:27]
  wire [7:0] _GEN_1963 = _u_T_1 ? u__H : H_sampled; // @[LR35902_Core.scala 385:30 413:22 76:27]
  wire [7:0] _GEN_1964 = _u_T_1 ? u__L : L_sampled; // @[LR35902_Core.scala 385:30 414:22 77:27]
  wire [7:0] _GEN_1965 = _u_T_1 ? u__imm8 : imm8; // @[LR35902_Core.scala 385:30 416:23 58:22]
  wire [2:0] _GEN_1969 = _u_T_1 ? _GEN_1943 : mcycle; // @[LR35902_Core.scala 385:30 87:23]
  wire [2:0] _GEN_1970 = _u_T_1 ? _GEN_1944 : state; // @[LR35902_Core.scala 385:30 85:23]
  wire [15:0] _GEN_1971 = IR == 8'hcb ? _GEN_1918 : _GEN_1691; // @[LR35902_Core.scala 326:28]
  wire  _GEN_1972 = IR == 8'hcb ? _GEN_1805 : _GEN_1692; // @[LR35902_Core.scala 326:28]
  wire  _GEN_1973 = IR == 8'hcb ? _cbOut_T_27 : _GEN_1695; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1974 = IR == 8'hcb ? _GEN_1920 : _GEN_1696; // @[LR35902_Core.scala 326:28]
  wire [15:0] _GEN_2007 = 3'h4 == state ? _GEN_1971 : _GEN_1691; // @[LR35902_Core.scala 152:17]
  wire [15:0] _GEN_2059 = 3'h5 == state ? _GEN_1691 : _GEN_2007; // @[LR35902_Core.scala 152:17]
  wire [15:0] _GEN_2097 = 3'h3 == state ? _GEN_1691 : _GEN_2059; // @[LR35902_Core.scala 152:17]
  wire [15:0] _GEN_2134 = 3'h2 == state ? _GEN_1691 : _GEN_2097; // @[LR35902_Core.scala 152:17]
  wire [15:0] _GEN_2172 = 3'h1 == state ? _GEN_1691 : _GEN_2134; // @[LR35902_Core.scala 152:17]
  wire [15:0] mcBus_memAddr = 3'h0 == state ? _GEN_1691 : _GEN_2172; // @[LR35902_Core.scala 152:17]
  wire  _GEN_2008 = 3'h4 == state ? _GEN_1972 : _GEN_1692; // @[LR35902_Core.scala 152:17]
  wire  _GEN_2060 = 3'h5 == state ? _GEN_1692 : _GEN_2008; // @[LR35902_Core.scala 152:17]
  wire  _GEN_2098 = 3'h3 == state ? _GEN_1692 : _GEN_2060; // @[LR35902_Core.scala 152:17]
  wire  _GEN_2135 = 3'h2 == state ? _GEN_1692 : _GEN_2098; // @[LR35902_Core.scala 152:17]
  wire  _GEN_2173 = 3'h1 == state ? _GEN_1692 : _GEN_2135; // @[LR35902_Core.scala 152:17]
  wire  mcBus_memRead = 3'h0 == state ? _GEN_1692 : _GEN_2173; // @[LR35902_Core.scala 152:17]
  wire  _GEN_2009 = 3'h4 == state ? _GEN_1973 : _GEN_1695; // @[LR35902_Core.scala 152:17]
  wire  _GEN_2061 = 3'h5 == state ? _GEN_1695 : _GEN_2009; // @[LR35902_Core.scala 152:17]
  wire  _GEN_2099 = 3'h3 == state ? _GEN_1695 : _GEN_2061; // @[LR35902_Core.scala 152:17]
  wire  _GEN_2136 = 3'h2 == state ? _GEN_1695 : _GEN_2099; // @[LR35902_Core.scala 152:17]
  wire  _GEN_2174 = 3'h1 == state ? _GEN_1695 : _GEN_2136; // @[LR35902_Core.scala 152:17]
  wire  mcBus_memWrite = 3'h0 == state ? _GEN_1695 : _GEN_2174; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2010 = 3'h4 == state ? _GEN_1974 : _GEN_1696; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2062 = 3'h5 == state ? _GEN_1696 : _GEN_2010; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2100 = 3'h3 == state ? _GEN_1696 : _GEN_2062; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2137 = 3'h2 == state ? _GEN_1696 : _GEN_2100; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2175 = 3'h1 == state ? _GEN_1696 : _GEN_2137; // @[LR35902_Core.scala 152:17]
  wire [7:0] mcBus_memWriteData = 3'h0 == state ? _GEN_1696 : _GEN_2175; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_1979 = IR == 8'hcb ? _GEN_1924 : _GEN_1947; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1980 = IR == 8'hcb ? _GEN_1925 : _GEN_1948; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1981 = IR == 8'hcb ? _GEN_1926 : _GEN_1949; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1982 = IR == 8'hcb ? _GEN_1927 : _GEN_1950; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1983 = IR == 8'hcb ? _GEN_1928 : _GEN_1951; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1984 = IR == 8'hcb ? _GEN_1929 : _GEN_1952; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1985 = IR == 8'hcb ? _GEN_1930 : _GEN_1953; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1986 = IR == 8'hcb ? _GEN_1931 : _GEN_1954; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1987 = IR == 8'hcb ? _GEN_1932 : CB_imm8; // @[LR35902_Core.scala 326:28 60:24]
  wire [7:0] _GEN_1988 = IR == 8'hcb ? _GEN_1933 : _GEN_1957; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1989 = IR == 8'hcb ? _GEN_1934 : _GEN_1958; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1990 = IR == 8'hcb ? _GEN_1935 : _GEN_1959; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1991 = IR == 8'hcb ? _GEN_1936 : _GEN_1960; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1992 = IR == 8'hcb ? _GEN_1937 : _GEN_1961; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1993 = IR == 8'hcb ? _GEN_1938 : _GEN_1962; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1994 = IR == 8'hcb ? _GEN_1939 : _GEN_1963; // @[LR35902_Core.scala 326:28]
  wire [7:0] _GEN_1995 = IR == 8'hcb ? _GEN_1940 : _GEN_1964; // @[LR35902_Core.scala 326:28]
  wire [2:0] _GEN_1996 = IR == 8'hcb ? _GEN_1941 : _GEN_1969; // @[LR35902_Core.scala 326:28]
  wire [2:0] _GEN_1997 = IR == 8'hcb ? _GEN_1942 : _GEN_1970; // @[LR35902_Core.scala 326:28]
  wire [15:0] _GEN_1998 = IR == 8'hcb ? PC : _GEN_1945; // @[LR35902_Core.scala 326:28 53:19]
  wire [15:0] _GEN_1999 = IR == 8'hcb ? SP : _GEN_1946; // @[LR35902_Core.scala 326:28 54:19]
  wire [15:0] _GEN_2000 = IR == 8'hcb ? PC_sampled : _GEN_1955; // @[LR35902_Core.scala 326:28 68:27]
  wire [15:0] _GEN_2001 = IR == 8'hcb ? SP_sampled : _GEN_1956; // @[LR35902_Core.scala 326:28 69:27]
  wire [7:0] _GEN_2002 = IR == 8'hcb ? imm8 : _GEN_1965; // @[LR35902_Core.scala 326:28 58:22]
  wire [15:0] _GEN_2011 = 3'h4 == state ? mcBus_memAddr : 16'h0; // @[LR35902_Core.scala 152:17 135:33]
  wire  _GEN_2012 = 3'h4 == state & mcBus_memRead; // @[LR35902_Core.scala 152:17 136:33]
  wire [7:0] _GEN_2014 = 3'h4 == state ? mcBus_memWriteData : 8'h0; // @[LR35902_Core.scala 152:17 138:33]
  wire [7:0] _GEN_2015 = 3'h4 == state ? _GEN_1979 : A; // @[LR35902_Core.scala 152:17 44:18]
  wire [7:0] _GEN_2016 = 3'h4 == state ? _GEN_1980 : F; // @[LR35902_Core.scala 152:17 45:18]
  wire [7:0] _GEN_2017 = 3'h4 == state ? _GEN_1981 : B; // @[LR35902_Core.scala 152:17 46:18]
  wire [7:0] _GEN_2018 = 3'h4 == state ? _GEN_1982 : C; // @[LR35902_Core.scala 152:17 47:18]
  wire [7:0] _GEN_2019 = 3'h4 == state ? _GEN_1983 : D; // @[LR35902_Core.scala 152:17 48:18]
  wire [7:0] _GEN_2020 = 3'h4 == state ? _GEN_1984 : E; // @[LR35902_Core.scala 152:17 49:18]
  wire [7:0] _GEN_2021 = 3'h4 == state ? _GEN_1985 : H; // @[LR35902_Core.scala 152:17 50:18]
  wire [7:0] _GEN_2022 = 3'h4 == state ? _GEN_1986 : L; // @[LR35902_Core.scala 152:17 51:18]
  wire [7:0] _GEN_2023 = 3'h4 == state ? _GEN_1987 : CB_imm8; // @[LR35902_Core.scala 152:17 60:24]
  wire [7:0] _GEN_2024 = 3'h4 == state ? _GEN_1988 : A_sampled; // @[LR35902_Core.scala 152:17 70:27]
  wire [7:0] _GEN_2025 = 3'h4 == state ? _GEN_1989 : F_sampled; // @[LR35902_Core.scala 152:17 71:27]
  wire [7:0] _GEN_2026 = 3'h4 == state ? _GEN_1990 : B_sampled; // @[LR35902_Core.scala 152:17 72:27]
  wire [7:0] _GEN_2027 = 3'h4 == state ? _GEN_1991 : C_sampled; // @[LR35902_Core.scala 152:17 73:27]
  wire [7:0] _GEN_2028 = 3'h4 == state ? _GEN_1992 : D_sampled; // @[LR35902_Core.scala 152:17 74:27]
  wire [7:0] _GEN_2029 = 3'h4 == state ? _GEN_1993 : E_sampled; // @[LR35902_Core.scala 152:17 75:27]
  wire [7:0] _GEN_2030 = 3'h4 == state ? _GEN_1994 : H_sampled; // @[LR35902_Core.scala 152:17 76:27]
  wire [7:0] _GEN_2031 = 3'h4 == state ? _GEN_1995 : L_sampled; // @[LR35902_Core.scala 152:17 77:27]
  wire [2:0] _GEN_2032 = 3'h4 == state ? _GEN_1996 : mcycle; // @[LR35902_Core.scala 152:17 87:23]
  wire [2:0] _GEN_2033 = 3'h4 == state ? _GEN_1997 : state; // @[LR35902_Core.scala 152:17 85:23]
  wire [15:0] _GEN_2034 = 3'h4 == state ? _GEN_1998 : PC; // @[LR35902_Core.scala 152:17 53:19]
  wire [15:0] _GEN_2035 = 3'h4 == state ? _GEN_1999 : SP; // @[LR35902_Core.scala 152:17 54:19]
  wire [15:0] _GEN_2036 = 3'h4 == state ? _GEN_2000 : PC_sampled; // @[LR35902_Core.scala 152:17 68:27]
  wire [15:0] _GEN_2037 = 3'h4 == state ? _GEN_2001 : SP_sampled; // @[LR35902_Core.scala 152:17 69:27]
  wire [7:0] _GEN_2038 = 3'h4 == state ? _GEN_2002 : imm8; // @[LR35902_Core.scala 152:17 58:22]
  wire [15:0] _GEN_2043 = 3'h5 == state ? PC : _GEN_2011; // @[LR35902_Core.scala 152:17 298:15]
  wire  _GEN_2044 = 3'h5 == state | _GEN_2012; // @[LR35902_Core.scala 152:17 299:15]
  wire [7:0] _GEN_2045 = 3'h5 == state ? _GEN_1783 : IR2; // @[LR35902_Core.scala 152:17 57:22]
  wire [15:0] _GEN_2046 = 3'h5 == state ? _GEN_1737 : _GEN_2034; // @[LR35902_Core.scala 152:17]
  wire [2:0] _GEN_2047 = 3'h5 == state ? _GEN_113 : _GEN_2032; // @[LR35902_Core.scala 152:17]
  wire [2:0] _GEN_2048 = 3'h5 == state ? _GEN_1755 : _GEN_2033; // @[LR35902_Core.scala 152:17]
  wire [15:0] _GEN_2049 = 3'h5 == state ? _GEN_1756 : _GEN_2036; // @[LR35902_Core.scala 152:17]
  wire [15:0] _GEN_2050 = 3'h5 == state ? _GEN_1757 : _GEN_2037; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2051 = 3'h5 == state ? _GEN_1758 : _GEN_2024; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2052 = 3'h5 == state ? _GEN_1759 : _GEN_2025; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2053 = 3'h5 == state ? _GEN_1760 : _GEN_2026; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2054 = 3'h5 == state ? _GEN_1761 : _GEN_2027; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2055 = 3'h5 == state ? _GEN_1762 : _GEN_2028; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2056 = 3'h5 == state ? _GEN_1763 : _GEN_2029; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2057 = 3'h5 == state ? _GEN_1764 : _GEN_2030; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2058 = 3'h5 == state ? _GEN_1765 : _GEN_2031; // @[LR35902_Core.scala 152:17]
  wire  _GEN_2063 = 3'h5 == state ? 1'h0 : 3'h4 == state & mcBus_memWrite; // @[LR35902_Core.scala 152:17 137:33]
  wire [7:0] _GEN_2064 = 3'h5 == state ? 8'h0 : _GEN_2014; // @[LR35902_Core.scala 152:17 138:33]
  wire [7:0] _GEN_2065 = 3'h5 == state ? A : _GEN_2015; // @[LR35902_Core.scala 152:17 44:18]
  wire [7:0] _GEN_2066 = 3'h5 == state ? F : _GEN_2016; // @[LR35902_Core.scala 152:17 45:18]
  wire [7:0] _GEN_2067 = 3'h5 == state ? B : _GEN_2017; // @[LR35902_Core.scala 152:17 46:18]
  wire [7:0] _GEN_2068 = 3'h5 == state ? C : _GEN_2018; // @[LR35902_Core.scala 152:17 47:18]
  wire [7:0] _GEN_2069 = 3'h5 == state ? D : _GEN_2019; // @[LR35902_Core.scala 152:17 48:18]
  wire [7:0] _GEN_2070 = 3'h5 == state ? E : _GEN_2020; // @[LR35902_Core.scala 152:17 49:18]
  wire [7:0] _GEN_2071 = 3'h5 == state ? H : _GEN_2021; // @[LR35902_Core.scala 152:17 50:18]
  wire [7:0] _GEN_2072 = 3'h5 == state ? L : _GEN_2022; // @[LR35902_Core.scala 152:17 51:18]
  wire [7:0] _GEN_2073 = 3'h5 == state ? CB_imm8 : _GEN_2023; // @[LR35902_Core.scala 152:17 60:24]
  wire [15:0] _GEN_2074 = 3'h5 == state ? SP : _GEN_2035; // @[LR35902_Core.scala 152:17 54:19]
  wire [7:0] _GEN_2075 = 3'h5 == state ? imm8 : _GEN_2038; // @[LR35902_Core.scala 152:17 58:22]
  wire [15:0] _GEN_2080 = 3'h3 == state ? PC : _GEN_2043; // @[LR35902_Core.scala 152:17 271:15]
  wire  _GEN_2081 = 3'h3 == state | _GEN_2044; // @[LR35902_Core.scala 152:17 272:15]
  wire [15:0] _GEN_2082 = 3'h3 == state ? _GEN_1769 : imm16; // @[LR35902_Core.scala 152:17]
  wire [15:0] _GEN_2083 = 3'h3 == state ? _GEN_1737 : _GEN_2046; // @[LR35902_Core.scala 152:17]
  wire [2:0] _GEN_2084 = 3'h3 == state ? _GEN_1738 : _GEN_2047; // @[LR35902_Core.scala 152:17]
  wire [2:0] _GEN_2085 = 3'h3 == state ? _GEN_1755 : _GEN_2048; // @[LR35902_Core.scala 152:17]
  wire [15:0] _GEN_2086 = 3'h3 == state ? _GEN_1756 : _GEN_2049; // @[LR35902_Core.scala 152:17]
  wire [15:0] _GEN_2087 = 3'h3 == state ? _GEN_1757 : _GEN_2050; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2088 = 3'h3 == state ? _GEN_1758 : _GEN_2051; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2089 = 3'h3 == state ? _GEN_1759 : _GEN_2052; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2090 = 3'h3 == state ? _GEN_1760 : _GEN_2053; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2091 = 3'h3 == state ? _GEN_1761 : _GEN_2054; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2092 = 3'h3 == state ? _GEN_1762 : _GEN_2055; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2093 = 3'h3 == state ? _GEN_1763 : _GEN_2056; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2094 = 3'h3 == state ? _GEN_1764 : _GEN_2057; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2095 = 3'h3 == state ? _GEN_1765 : _GEN_2058; // @[LR35902_Core.scala 152:17]
  wire [7:0] _GEN_2096 = 3'h3 == state ? IR2 : _GEN_2045; // @[LR35902_Core.scala 152:17 57:22]
  wire  _GEN_2101 = 3'h3 == state ? 1'h0 : _GEN_2063; // @[LR35902_Core.scala 152:17 137:33]
  wire [7:0] _GEN_2102 = 3'h3 == state ? 8'h0 : _GEN_2064; // @[LR35902_Core.scala 152:17 138:33]
  wire [7:0] _GEN_2103 = 3'h3 == state ? A : _GEN_2065; // @[LR35902_Core.scala 152:17 44:18]
  wire [7:0] _GEN_2104 = 3'h3 == state ? F : _GEN_2066; // @[LR35902_Core.scala 152:17 45:18]
  wire [7:0] _GEN_2105 = 3'h3 == state ? B : _GEN_2067; // @[LR35902_Core.scala 152:17 46:18]
  wire [7:0] _GEN_2106 = 3'h3 == state ? C : _GEN_2068; // @[LR35902_Core.scala 152:17 47:18]
  wire [7:0] _GEN_2107 = 3'h3 == state ? D : _GEN_2069; // @[LR35902_Core.scala 152:17 48:18]
  wire [7:0] _GEN_2108 = 3'h3 == state ? E : _GEN_2070; // @[LR35902_Core.scala 152:17 49:18]
  wire [7:0] _GEN_2109 = 3'h3 == state ? H : _GEN_2071; // @[LR35902_Core.scala 152:17 50:18]
  wire [7:0] _GEN_2110 = 3'h3 == state ? L : _GEN_2072; // @[LR35902_Core.scala 152:17 51:18]
  wire [7:0] _GEN_2111 = 3'h3 == state ? CB_imm8 : _GEN_2073; // @[LR35902_Core.scala 152:17 60:24]
  wire [15:0] _GEN_2112 = 3'h3 == state ? SP : _GEN_2074; // @[LR35902_Core.scala 152:17 54:19]
  wire [7:0] _GEN_2113 = 3'h3 == state ? imm8 : _GEN_2075; // @[LR35902_Core.scala 152:17 58:22]
  wire [15:0] _GEN_2117 = 3'h2 == state ? PC : _GEN_2080; // @[LR35902_Core.scala 152:17 257:15]
  wire  _GEN_2118 = 3'h2 == state | _GEN_2081; // @[LR35902_Core.scala 152:17 258:15]
  wire  _GEN_2138 = 3'h2 == state ? 1'h0 : _GEN_2101; // @[LR35902_Core.scala 152:17 137:33]
  wire [7:0] _GEN_2139 = 3'h2 == state ? 8'h0 : _GEN_2102; // @[LR35902_Core.scala 152:17 138:33]
  wire [15:0] _GEN_2154 = 3'h1 == state ? PC : _GEN_2117; // @[LR35902_Core.scala 152:17 230:15]
  wire  _GEN_2155 = 3'h1 == state | _GEN_2118; // @[LR35902_Core.scala 152:17 231:15]
  wire  _GEN_2176 = 3'h1 == state ? 1'h0 : _GEN_2138; // @[LR35902_Core.scala 152:17 137:33]
  wire [7:0] _GEN_2177 = 3'h1 == state ? 8'h0 : _GEN_2139; // @[LR35902_Core.scala 152:17 138:33]
  LR35902_ALU u_alu ( // @[Microcode.scala 105:21]
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
  assign io_memAddr = 3'h0 == state ? PC : _GEN_2154; // @[LR35902_Core.scala 152:17 158:15]
  assign io_memRead = 3'h0 == state | _GEN_2155; // @[LR35902_Core.scala 152:17 159:15]
  assign io_memWrite = 3'h0 == state ? 1'h0 : _GEN_2176; // @[LR35902_Core.scala 152:17 137:33]
  assign io_memWriteData = 3'h0 == state ? 8'h0 : _GEN_2177; // @[LR35902_Core.scala 152:17 138:33]
  assign io_dbg_pc = PC; // @[LR35902_Core.scala 447:17]
  assign io_dbg_opcode = IR; // @[LR35902_Core.scala 448:17]
  assign io_dbg_a = A; // @[LR35902_Core.scala 451:12]
  assign io_dbg_f = F; // @[LR35902_Core.scala 452:12]
  assign io_dbg_b = B; // @[LR35902_Core.scala 453:12]
  assign io_dbg_c = C; // @[LR35902_Core.scala 454:12]
  assign io_dbg_d = D; // @[LR35902_Core.scala 455:12]
  assign io_dbg_e = E; // @[LR35902_Core.scala 456:12]
  assign io_dbg_h = H; // @[LR35902_Core.scala 457:12]
  assign io_dbg_l = L; // @[LR35902_Core.scala 458:12]
  assign io_dbg_state = {{5'd0}, state}; // @[LR35902_Core.scala 460:17]
  assign io_dbg_tcycle = {{6'd0}, tcycle}; // @[LR35902_Core.scala 461:17]
  assign io_dbg_mcycle = {{5'd0}, mcycle}; // @[LR35902_Core.scala 462:17]
  assign io_dbg_IR = IR; // @[LR35902_Core.scala 463:17]
  assign u_alu_io_op = IR == 8'h0 ? 4'h0 : _GEN_1665; // @[Microcode.scala 108:21 118:26]
  assign u_alu_io_a = IR == 8'h0 ? 8'h0 : _GEN_1666; // @[Microcode.scala 106:21 118:26]
  assign u_alu_io_b = IR == 8'h0 ? 8'h0 : _GEN_1667; // @[Microcode.scala 107:21 118:26]
  assign u_alu_io_carryIn = F_sampled[4]; // @[Microcode.scala 109:28]
  always @(posedge clock) begin
    if (reset) begin // @[LR35902_Core.scala 44:18]
      A <= 8'h1; // @[LR35902_Core.scala 44:18]
    end else if (!(3'h0 == state)) begin // @[LR35902_Core.scala 152:17]
      if (!(3'h1 == state)) begin // @[LR35902_Core.scala 152:17]
        if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
          A <= _GEN_2103;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 45:18]
      F <= 8'hb0; // @[LR35902_Core.scala 45:18]
    end else if (!(3'h0 == state)) begin // @[LR35902_Core.scala 152:17]
      if (!(3'h1 == state)) begin // @[LR35902_Core.scala 152:17]
        if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
          F <= _GEN_2104;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 46:18]
      B <= 8'h0; // @[LR35902_Core.scala 46:18]
    end else if (!(3'h0 == state)) begin // @[LR35902_Core.scala 152:17]
      if (!(3'h1 == state)) begin // @[LR35902_Core.scala 152:17]
        if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
          B <= _GEN_2105;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 47:18]
      C <= 8'h13; // @[LR35902_Core.scala 47:18]
    end else if (!(3'h0 == state)) begin // @[LR35902_Core.scala 152:17]
      if (!(3'h1 == state)) begin // @[LR35902_Core.scala 152:17]
        if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
          C <= _GEN_2106;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 48:18]
      D <= 8'h0; // @[LR35902_Core.scala 48:18]
    end else if (!(3'h0 == state)) begin // @[LR35902_Core.scala 152:17]
      if (!(3'h1 == state)) begin // @[LR35902_Core.scala 152:17]
        if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
          D <= _GEN_2107;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 49:18]
      E <= 8'hd8; // @[LR35902_Core.scala 49:18]
    end else if (!(3'h0 == state)) begin // @[LR35902_Core.scala 152:17]
      if (!(3'h1 == state)) begin // @[LR35902_Core.scala 152:17]
        if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
          E <= _GEN_2108;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 50:18]
      H <= 8'h1; // @[LR35902_Core.scala 50:18]
    end else if (!(3'h0 == state)) begin // @[LR35902_Core.scala 152:17]
      if (!(3'h1 == state)) begin // @[LR35902_Core.scala 152:17]
        if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
          H <= _GEN_2109;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 51:18]
      L <= 8'h4d; // @[LR35902_Core.scala 51:18]
    end else if (!(3'h0 == state)) begin // @[LR35902_Core.scala 152:17]
      if (!(3'h1 == state)) begin // @[LR35902_Core.scala 152:17]
        if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
          L <= _GEN_2110;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 53:19]
      PC <= 16'h0; // @[LR35902_Core.scala 53:19]
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 152:17]
      PC <= _GEN_1737;
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 152:17]
      PC <= _GEN_1737;
    end else if (3'h2 == state) begin // @[LR35902_Core.scala 152:17]
      PC <= _GEN_1737;
    end else begin
      PC <= _GEN_2083;
    end
    if (reset) begin // @[LR35902_Core.scala 54:19]
      SP <= 16'hfffe; // @[LR35902_Core.scala 54:19]
    end else if (!(3'h0 == state)) begin // @[LR35902_Core.scala 152:17]
      if (!(3'h1 == state)) begin // @[LR35902_Core.scala 152:17]
        if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
          SP <= _GEN_2112;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 56:22]
      IR <= 8'h0; // @[LR35902_Core.scala 56:22]
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 161:28]
        IR <= io_memReadData; // @[LR35902_Core.scala 163:12]
      end
    end
    if (reset) begin // @[LR35902_Core.scala 57:22]
      IR2 <= 8'h0; // @[LR35902_Core.scala 57:22]
    end else if (!(3'h0 == state)) begin // @[LR35902_Core.scala 152:17]
      if (!(3'h1 == state)) begin // @[LR35902_Core.scala 152:17]
        if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
          IR2 <= _GEN_2096;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 58:22]
      imm8 <= 8'h0; // @[LR35902_Core.scala 58:22]
    end else if (!(3'h0 == state)) begin // @[LR35902_Core.scala 152:17]
      if (3'h1 == state) begin // @[LR35902_Core.scala 152:17]
        if (_u_T_1) begin // @[LR35902_Core.scala 233:28]
          imm8 <= io_memReadData; // @[LR35902_Core.scala 234:16]
        end
      end else if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
        imm8 <= _GEN_2113;
      end
    end
    if (reset) begin // @[LR35902_Core.scala 59:22]
      imm16 <= 16'h0; // @[LR35902_Core.scala 59:22]
    end else if (!(3'h0 == state)) begin // @[LR35902_Core.scala 152:17]
      if (!(3'h1 == state)) begin // @[LR35902_Core.scala 152:17]
        if (3'h2 == state) begin // @[LR35902_Core.scala 152:17]
          imm16 <= _GEN_1766;
        end else begin
          imm16 <= _GEN_2082;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 60:24]
      CB_imm8 <= 8'h0; // @[LR35902_Core.scala 60:24]
    end else if (!(3'h0 == state)) begin // @[LR35902_Core.scala 152:17]
      if (!(3'h1 == state)) begin // @[LR35902_Core.scala 152:17]
        if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
          CB_imm8 <= _GEN_2111;
        end
      end
    end
    if (reset) begin // @[LR35902_Core.scala 68:27]
      PC_sampled <= 16'h0; // @[LR35902_Core.scala 68:27]
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 161:28]
        if (!(io_memReadData == 8'hcb)) begin // @[LR35902_Core.scala 203:41]
          PC_sampled <= _GEN_1715;
        end
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 233:28]
        PC_sampled <= _PC_T_1; // @[LR35902_Core.scala 240:20]
      end
    end else if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
      PC_sampled <= _GEN_2086;
    end
    if (reset) begin // @[LR35902_Core.scala 69:27]
      SP_sampled <= 16'hfffe; // @[LR35902_Core.scala 69:27]
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 161:28]
        if (!(io_memReadData == 8'hcb)) begin // @[LR35902_Core.scala 203:41]
          SP_sampled <= _GEN_1716;
        end
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 233:28]
        SP_sampled <= SP; // @[LR35902_Core.scala 241:20]
      end
    end else if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
      SP_sampled <= _GEN_2087;
    end
    if (reset) begin // @[LR35902_Core.scala 70:27]
      A_sampled <= 8'h1; // @[LR35902_Core.scala 70:27]
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 161:28]
        if (!(io_memReadData == 8'hcb)) begin // @[LR35902_Core.scala 203:41]
          A_sampled <= _GEN_1717;
        end
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 233:28]
        A_sampled <= A; // @[LR35902_Core.scala 242:20]
      end
    end else if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
      A_sampled <= _GEN_2088;
    end
    if (reset) begin // @[LR35902_Core.scala 71:27]
      F_sampled <= 8'hb0; // @[LR35902_Core.scala 71:27]
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 161:28]
        if (!(io_memReadData == 8'hcb)) begin // @[LR35902_Core.scala 203:41]
          F_sampled <= _GEN_1718;
        end
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 233:28]
        F_sampled <= F; // @[LR35902_Core.scala 243:20]
      end
    end else if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
      F_sampled <= _GEN_2089;
    end
    if (reset) begin // @[LR35902_Core.scala 72:27]
      B_sampled <= 8'h0; // @[LR35902_Core.scala 72:27]
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 161:28]
        if (!(io_memReadData == 8'hcb)) begin // @[LR35902_Core.scala 203:41]
          B_sampled <= _GEN_1719;
        end
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 233:28]
        B_sampled <= B; // @[LR35902_Core.scala 244:20]
      end
    end else if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
      B_sampled <= _GEN_2090;
    end
    if (reset) begin // @[LR35902_Core.scala 73:27]
      C_sampled <= 8'h13; // @[LR35902_Core.scala 73:27]
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 161:28]
        if (!(io_memReadData == 8'hcb)) begin // @[LR35902_Core.scala 203:41]
          C_sampled <= _GEN_1720;
        end
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 233:28]
        C_sampled <= C; // @[LR35902_Core.scala 245:20]
      end
    end else if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
      C_sampled <= _GEN_2091;
    end
    if (reset) begin // @[LR35902_Core.scala 74:27]
      D_sampled <= 8'h0; // @[LR35902_Core.scala 74:27]
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 161:28]
        if (!(io_memReadData == 8'hcb)) begin // @[LR35902_Core.scala 203:41]
          D_sampled <= _GEN_1721;
        end
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 233:28]
        D_sampled <= D; // @[LR35902_Core.scala 246:20]
      end
    end else if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
      D_sampled <= _GEN_2092;
    end
    if (reset) begin // @[LR35902_Core.scala 75:27]
      E_sampled <= 8'hd8; // @[LR35902_Core.scala 75:27]
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 161:28]
        if (!(io_memReadData == 8'hcb)) begin // @[LR35902_Core.scala 203:41]
          E_sampled <= _GEN_1722;
        end
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 233:28]
        E_sampled <= E; // @[LR35902_Core.scala 247:20]
      end
    end else if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
      E_sampled <= _GEN_2093;
    end
    if (reset) begin // @[LR35902_Core.scala 76:27]
      H_sampled <= 8'h1; // @[LR35902_Core.scala 76:27]
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 161:28]
        if (!(io_memReadData == 8'hcb)) begin // @[LR35902_Core.scala 203:41]
          H_sampled <= _GEN_1723;
        end
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 233:28]
        H_sampled <= H; // @[LR35902_Core.scala 248:20]
      end
    end else if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
      H_sampled <= _GEN_2094;
    end
    if (reset) begin // @[LR35902_Core.scala 77:27]
      L_sampled <= 8'h4d; // @[LR35902_Core.scala 77:27]
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 161:28]
        if (!(io_memReadData == 8'hcb)) begin // @[LR35902_Core.scala 203:41]
          L_sampled <= _GEN_1724;
        end
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 233:28]
        L_sampled <= L; // @[LR35902_Core.scala 249:20]
      end
    end else if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
      L_sampled <= _GEN_2095;
    end
    if (reset) begin // @[LR35902_Core.scala 85:23]
      state <= 3'h0; // @[LR35902_Core.scala 85:23]
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 161:28]
        if (io_memReadData == 8'hcb) begin // @[LR35902_Core.scala 203:41]
          state <= 3'h5; // @[LR35902_Core.scala 204:17]
        end else begin
          state <= _GEN_1714;
        end
      end
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 152:17]
      if (_u_T_1) begin // @[LR35902_Core.scala 233:28]
        state <= 3'h4; // @[LR35902_Core.scala 237:16]
      end
    end else if (3'h2 == state) begin // @[LR35902_Core.scala 152:17]
      state <= _GEN_1768;
    end else begin
      state <= _GEN_2085;
    end
    if (reset) begin // @[LR35902_Core.scala 86:23]
      tcycle <= 2'h0; // @[LR35902_Core.scala 86:23]
    end else if (_u_T_1) begin // @[LR35902_Core.scala 143:24]
      tcycle <= 2'h0; // @[LR35902_Core.scala 144:12]
    end else begin
      tcycle <= _tcycle_T_1; // @[LR35902_Core.scala 146:12]
    end
    if (reset) begin // @[LR35902_Core.scala 87:23]
      mcycle <= 3'h0; // @[LR35902_Core.scala 87:23]
    end else if (3'h0 == state) begin // @[LR35902_Core.scala 152:17]
      mcycle <= _GEN_1738;
    end else if (3'h1 == state) begin // @[LR35902_Core.scala 152:17]
      mcycle <= _GEN_1738;
    end else if (!(3'h2 == state)) begin // @[LR35902_Core.scala 152:17]
      mcycle <= _GEN_2084;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~_T_1 & ~_T_4 & ~_T_6 & ~_T_8 & ~_T_10 & _T_12 & ~_T_13 & _u_T_1 & _T_18 & ~reset) begin
          $fwrite(32'h80000002,"[WRITEBACK T3] mcycle=%d IR=0x%x u.SP=0x%x (was SP=0x%x)\n",mcycle,IR,u__SP,SP); // @[LR35902_Core.scala 388:19]
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
  PC_sampled = _RAND_15[15:0];
  _RAND_16 = {1{`RANDOM}};
  SP_sampled = _RAND_16[15:0];
  _RAND_17 = {1{`RANDOM}};
  A_sampled = _RAND_17[7:0];
  _RAND_18 = {1{`RANDOM}};
  F_sampled = _RAND_18[7:0];
  _RAND_19 = {1{`RANDOM}};
  B_sampled = _RAND_19[7:0];
  _RAND_20 = {1{`RANDOM}};
  C_sampled = _RAND_20[7:0];
  _RAND_21 = {1{`RANDOM}};
  D_sampled = _RAND_21[7:0];
  _RAND_22 = {1{`RANDOM}};
  E_sampled = _RAND_22[7:0];
  _RAND_23 = {1{`RANDOM}};
  H_sampled = _RAND_23[7:0];
  _RAND_24 = {1{`RANDOM}};
  L_sampled = _RAND_24[7:0];
  _RAND_25 = {1{`RANDOM}};
  state = _RAND_25[2:0];
  _RAND_26 = {1{`RANDOM}};
  tcycle = _RAND_26[1:0];
  _RAND_27 = {1{`RANDOM}};
  mcycle = _RAND_27[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PPU(
  input        clock,
  input        reset,
  input  [7:0] io_lcdc,
  output [7:0] io_ly,
  input  [7:0] io_bgp,
  output       io_vblankIRQ,
  output       io_pixelValid,
  output [7:0] io_pixelX,
  output [7:0] io_pixelY,
  output [1:0] io_pixelColor
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [8:0] lineCycle; // @[PPU.scala 91:26]
  reg [7:0] ly; // @[PPU.scala 92:19]
  wire  lcdEnable = io_lcdc[7]; // @[PPU.scala 94:26]
  wire [8:0] _lineCycle_T_1 = lineCycle + 9'h1; // @[PPU.scala 97:26]
  wire  _T = lineCycle == 9'h1c7; // @[PPU.scala 99:18]
  wire [7:0] _ly_T_2 = ly + 8'h1; // @[PPU.scala 101:37]
  reg  vblankIRQ; // @[PPU.scala 105:26]
  wire  _T_3 = ly == 8'h8f & _T; // @[PPU.scala 106:35]
  wire [1:0] _GEN_3 = lineCycle < 9'hfc ? 2'h3 : 2'h0; // @[PPU.scala 125:33 126:10 128:10]
  wire [1:0] _GEN_4 = lineCycle < 9'h50 ? 2'h2 : _GEN_3; // @[PPU.scala 123:32 124:10]
  wire [1:0] mode = ly >= 8'h90 ? 2'h1 : _GEN_4; // @[PPU.scala 121:29 122:10]
  wire [8:0] xPos = lineCycle - 9'h50; // @[PPU.scala 148:26]
  wire  _T_11 = xPos < 9'ha0; // @[PPU.scala 149:15]
  wire [7:0] _pixelColor_T = io_bgp & 8'h3; // @[PPU.scala 151:29]
  wire [7:0] _GEN_7 = xPos < 9'ha0 ? _pixelColor_T : 8'h0; // @[PPU.scala 149:24 151:18 144:31]
  wire  pixelValid = lcdEnable & ly < 8'h90 & mode == 2'h3 & _T_11; // @[PPU.scala 143:31 147:66]
  wire [7:0] _GEN_9 = lcdEnable & ly < 8'h90 & mode == 2'h3 ? _GEN_7 : 8'h0; // @[PPU.scala 144:31 147:66]
  wire [8:0] _io_pixelX_T_2 = pixelValid ? xPos : 9'h0; // @[PPU.scala 162:19]
  assign io_ly = ly; // @[PPU.scala 158:9]
  assign io_vblankIRQ = vblankIRQ; // @[PPU.scala 159:16]
  assign io_pixelValid = lcdEnable & ly < 8'h90 & mode == 2'h3 & _T_11; // @[PPU.scala 143:31 147:66]
  assign io_pixelX = _io_pixelX_T_2[7:0]; // @[PPU.scala 162:13]
  assign io_pixelY = ly; // @[PPU.scala 163:13]
  assign io_pixelColor = _GEN_9[1:0]; // @[PPU.scala 144:31]
  always @(posedge clock) begin
    if (reset) begin // @[PPU.scala 91:26]
      lineCycle <= 9'h0; // @[PPU.scala 91:26]
    end else if (lineCycle == 9'h1c7) begin // @[PPU.scala 99:47]
      lineCycle <= 9'h0; // @[PPU.scala 100:15]
    end else begin
      lineCycle <= _lineCycle_T_1; // @[PPU.scala 97:13]
    end
    if (reset) begin // @[PPU.scala 92:19]
      ly <= 8'h0; // @[PPU.scala 92:19]
    end else if (lineCycle == 9'h1c7) begin // @[PPU.scala 99:47]
      if (ly == 8'h99) begin // @[PPU.scala 101:14]
        ly <= 8'h0;
      end else begin
        ly <= _ly_T_2;
      end
    end
    if (reset) begin // @[PPU.scala 105:26]
      vblankIRQ <= 1'h0; // @[PPU.scala 105:26]
    end else begin
      vblankIRQ <= _T_3;
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
  lineCycle = _RAND_0[8:0];
  _RAND_1 = {1{`RANDOM}};
  ly = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  vblankIRQ = _RAND_2[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module BootRom(
  input  [15:0] io_address,
  output [7:0]  io_dataOut,
  output        io_valid,
  input         io_enabled
);
  wire  inBootRange = io_address < 16'h100; // @[BootRom.scala 61:32]
  wire [7:0] _GEN_1 = 8'h1 == io_address[7:0] ? 8'hfe : 8'h31; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_2 = 8'h2 == io_address[7:0] ? 8'hff : _GEN_1; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_3 = 8'h3 == io_address[7:0] ? 8'haf : _GEN_2; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_4 = 8'h4 == io_address[7:0] ? 8'h21 : _GEN_3; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_5 = 8'h5 == io_address[7:0] ? 8'hff : _GEN_4; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_6 = 8'h6 == io_address[7:0] ? 8'h9f : _GEN_5; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_7 = 8'h7 == io_address[7:0] ? 8'h32 : _GEN_6; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_8 = 8'h8 == io_address[7:0] ? 8'hcb : _GEN_7; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_9 = 8'h9 == io_address[7:0] ? 8'h7c : _GEN_8; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_10 = 8'ha == io_address[7:0] ? 8'h20 : _GEN_9; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_11 = 8'hb == io_address[7:0] ? 8'hfb : _GEN_10; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_12 = 8'hc == io_address[7:0] ? 8'h21 : _GEN_11; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_13 = 8'hd == io_address[7:0] ? 8'h26 : _GEN_12; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_14 = 8'he == io_address[7:0] ? 8'hff : _GEN_13; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_15 = 8'hf == io_address[7:0] ? 8'he : _GEN_14; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_16 = 8'h10 == io_address[7:0] ? 8'h11 : _GEN_15; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_17 = 8'h11 == io_address[7:0] ? 8'h3e : _GEN_16; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_18 = 8'h12 == io_address[7:0] ? 8'h80 : _GEN_17; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_19 = 8'h13 == io_address[7:0] ? 8'h32 : _GEN_18; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_20 = 8'h14 == io_address[7:0] ? 8'he2 : _GEN_19; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_21 = 8'h15 == io_address[7:0] ? 8'hc : _GEN_20; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_22 = 8'h16 == io_address[7:0] ? 8'h3e : _GEN_21; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_23 = 8'h17 == io_address[7:0] ? 8'hf3 : _GEN_22; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_24 = 8'h18 == io_address[7:0] ? 8'he2 : _GEN_23; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_25 = 8'h19 == io_address[7:0] ? 8'h32 : _GEN_24; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_26 = 8'h1a == io_address[7:0] ? 8'h3e : _GEN_25; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_27 = 8'h1b == io_address[7:0] ? 8'h77 : _GEN_26; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_28 = 8'h1c == io_address[7:0] ? 8'h77 : _GEN_27; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_29 = 8'h1d == io_address[7:0] ? 8'h3e : _GEN_28; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_30 = 8'h1e == io_address[7:0] ? 8'hfc : _GEN_29; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_31 = 8'h1f == io_address[7:0] ? 8'he0 : _GEN_30; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_32 = 8'h20 == io_address[7:0] ? 8'h47 : _GEN_31; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_33 = 8'h21 == io_address[7:0] ? 8'h11 : _GEN_32; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_34 = 8'h22 == io_address[7:0] ? 8'h4 : _GEN_33; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_35 = 8'h23 == io_address[7:0] ? 8'h1 : _GEN_34; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_36 = 8'h24 == io_address[7:0] ? 8'h21 : _GEN_35; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_37 = 8'h25 == io_address[7:0] ? 8'h10 : _GEN_36; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_38 = 8'h26 == io_address[7:0] ? 8'h80 : _GEN_37; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_39 = 8'h27 == io_address[7:0] ? 8'h1a : _GEN_38; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_40 = 8'h28 == io_address[7:0] ? 8'hcd : _GEN_39; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_41 = 8'h29 == io_address[7:0] ? 8'h95 : _GEN_40; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_42 = 8'h2a == io_address[7:0] ? 8'h0 : _GEN_41; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_43 = 8'h2b == io_address[7:0] ? 8'hcd : _GEN_42; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_44 = 8'h2c == io_address[7:0] ? 8'h96 : _GEN_43; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_45 = 8'h2d == io_address[7:0] ? 8'h0 : _GEN_44; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_46 = 8'h2e == io_address[7:0] ? 8'h13 : _GEN_45; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_47 = 8'h2f == io_address[7:0] ? 8'h7b : _GEN_46; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_48 = 8'h30 == io_address[7:0] ? 8'hfe : _GEN_47; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_49 = 8'h31 == io_address[7:0] ? 8'h34 : _GEN_48; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_50 = 8'h32 == io_address[7:0] ? 8'h20 : _GEN_49; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_51 = 8'h33 == io_address[7:0] ? 8'hf3 : _GEN_50; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_52 = 8'h34 == io_address[7:0] ? 8'h11 : _GEN_51; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_53 = 8'h35 == io_address[7:0] ? 8'hd8 : _GEN_52; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_54 = 8'h36 == io_address[7:0] ? 8'h0 : _GEN_53; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_55 = 8'h37 == io_address[7:0] ? 8'h6 : _GEN_54; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_56 = 8'h38 == io_address[7:0] ? 8'h8 : _GEN_55; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_57 = 8'h39 == io_address[7:0] ? 8'h1a : _GEN_56; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_58 = 8'h3a == io_address[7:0] ? 8'h13 : _GEN_57; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_59 = 8'h3b == io_address[7:0] ? 8'h22 : _GEN_58; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_60 = 8'h3c == io_address[7:0] ? 8'h23 : _GEN_59; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_61 = 8'h3d == io_address[7:0] ? 8'h5 : _GEN_60; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_62 = 8'h3e == io_address[7:0] ? 8'h20 : _GEN_61; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_63 = 8'h3f == io_address[7:0] ? 8'hf9 : _GEN_62; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_64 = 8'h40 == io_address[7:0] ? 8'h3e : _GEN_63; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_65 = 8'h41 == io_address[7:0] ? 8'h19 : _GEN_64; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_66 = 8'h42 == io_address[7:0] ? 8'hea : _GEN_65; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_67 = 8'h43 == io_address[7:0] ? 8'h10 : _GEN_66; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_68 = 8'h44 == io_address[7:0] ? 8'h99 : _GEN_67; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_69 = 8'h45 == io_address[7:0] ? 8'h21 : _GEN_68; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_70 = 8'h46 == io_address[7:0] ? 8'h2f : _GEN_69; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_71 = 8'h47 == io_address[7:0] ? 8'h99 : _GEN_70; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_72 = 8'h48 == io_address[7:0] ? 8'he : _GEN_71; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_73 = 8'h49 == io_address[7:0] ? 8'hc : _GEN_72; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_74 = 8'h4a == io_address[7:0] ? 8'h3d : _GEN_73; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_75 = 8'h4b == io_address[7:0] ? 8'h28 : _GEN_74; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_76 = 8'h4c == io_address[7:0] ? 8'h8 : _GEN_75; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_77 = 8'h4d == io_address[7:0] ? 8'h32 : _GEN_76; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_78 = 8'h4e == io_address[7:0] ? 8'hd : _GEN_77; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_79 = 8'h4f == io_address[7:0] ? 8'h20 : _GEN_78; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_80 = 8'h50 == io_address[7:0] ? 8'hf9 : _GEN_79; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_81 = 8'h51 == io_address[7:0] ? 8'h2e : _GEN_80; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_82 = 8'h52 == io_address[7:0] ? 8'hf : _GEN_81; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_83 = 8'h53 == io_address[7:0] ? 8'h18 : _GEN_82; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_84 = 8'h54 == io_address[7:0] ? 8'hf3 : _GEN_83; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_85 = 8'h55 == io_address[7:0] ? 8'h67 : _GEN_84; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_86 = 8'h56 == io_address[7:0] ? 8'h3e : _GEN_85; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_87 = 8'h57 == io_address[7:0] ? 8'h64 : _GEN_86; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_88 = 8'h58 == io_address[7:0] ? 8'h57 : _GEN_87; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_89 = 8'h59 == io_address[7:0] ? 8'he0 : _GEN_88; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_90 = 8'h5a == io_address[7:0] ? 8'h42 : _GEN_89; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_91 = 8'h5b == io_address[7:0] ? 8'h3e : _GEN_90; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_92 = 8'h5c == io_address[7:0] ? 8'h91 : _GEN_91; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_93 = 8'h5d == io_address[7:0] ? 8'he0 : _GEN_92; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_94 = 8'h5e == io_address[7:0] ? 8'h40 : _GEN_93; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_95 = 8'h5f == io_address[7:0] ? 8'h4 : _GEN_94; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_96 = 8'h60 == io_address[7:0] ? 8'h1e : _GEN_95; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_97 = 8'h61 == io_address[7:0] ? 8'h2 : _GEN_96; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_98 = 8'h62 == io_address[7:0] ? 8'he : _GEN_97; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_99 = 8'h63 == io_address[7:0] ? 8'hc : _GEN_98; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_100 = 8'h64 == io_address[7:0] ? 8'hf0 : _GEN_99; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_101 = 8'h65 == io_address[7:0] ? 8'h44 : _GEN_100; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_102 = 8'h66 == io_address[7:0] ? 8'hfe : _GEN_101; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_103 = 8'h67 == io_address[7:0] ? 8'h90 : _GEN_102; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_104 = 8'h68 == io_address[7:0] ? 8'h20 : _GEN_103; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_105 = 8'h69 == io_address[7:0] ? 8'hfa : _GEN_104; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_106 = 8'h6a == io_address[7:0] ? 8'hd : _GEN_105; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_107 = 8'h6b == io_address[7:0] ? 8'h20 : _GEN_106; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_108 = 8'h6c == io_address[7:0] ? 8'hf7 : _GEN_107; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_109 = 8'h6d == io_address[7:0] ? 8'h1d : _GEN_108; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_110 = 8'h6e == io_address[7:0] ? 8'h20 : _GEN_109; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_111 = 8'h6f == io_address[7:0] ? 8'hf2 : _GEN_110; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_112 = 8'h70 == io_address[7:0] ? 8'he : _GEN_111; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_113 = 8'h71 == io_address[7:0] ? 8'h13 : _GEN_112; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_114 = 8'h72 == io_address[7:0] ? 8'h24 : _GEN_113; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_115 = 8'h73 == io_address[7:0] ? 8'h7c : _GEN_114; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_116 = 8'h74 == io_address[7:0] ? 8'h1e : _GEN_115; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_117 = 8'h75 == io_address[7:0] ? 8'h83 : _GEN_116; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_118 = 8'h76 == io_address[7:0] ? 8'hfe : _GEN_117; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_119 = 8'h77 == io_address[7:0] ? 8'h62 : _GEN_118; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_120 = 8'h78 == io_address[7:0] ? 8'h28 : _GEN_119; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_121 = 8'h79 == io_address[7:0] ? 8'h6 : _GEN_120; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_122 = 8'h7a == io_address[7:0] ? 8'h1e : _GEN_121; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_123 = 8'h7b == io_address[7:0] ? 8'hc1 : _GEN_122; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_124 = 8'h7c == io_address[7:0] ? 8'hfe : _GEN_123; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_125 = 8'h7d == io_address[7:0] ? 8'h64 : _GEN_124; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_126 = 8'h7e == io_address[7:0] ? 8'h20 : _GEN_125; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_127 = 8'h7f == io_address[7:0] ? 8'h6 : _GEN_126; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_128 = 8'h80 == io_address[7:0] ? 8'h7b : _GEN_127; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_129 = 8'h81 == io_address[7:0] ? 8'he2 : _GEN_128; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_130 = 8'h82 == io_address[7:0] ? 8'hc : _GEN_129; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_131 = 8'h83 == io_address[7:0] ? 8'h3e : _GEN_130; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_132 = 8'h84 == io_address[7:0] ? 8'h87 : _GEN_131; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_133 = 8'h85 == io_address[7:0] ? 8'he2 : _GEN_132; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_134 = 8'h86 == io_address[7:0] ? 8'hf0 : _GEN_133; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_135 = 8'h87 == io_address[7:0] ? 8'h42 : _GEN_134; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_136 = 8'h88 == io_address[7:0] ? 8'h90 : _GEN_135; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_137 = 8'h89 == io_address[7:0] ? 8'he0 : _GEN_136; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_138 = 8'h8a == io_address[7:0] ? 8'h42 : _GEN_137; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_139 = 8'h8b == io_address[7:0] ? 8'h15 : _GEN_138; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_140 = 8'h8c == io_address[7:0] ? 8'h20 : _GEN_139; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_141 = 8'h8d == io_address[7:0] ? 8'hd2 : _GEN_140; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_142 = 8'h8e == io_address[7:0] ? 8'h5 : _GEN_141; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_143 = 8'h8f == io_address[7:0] ? 8'h20 : _GEN_142; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_144 = 8'h90 == io_address[7:0] ? 8'h4f : _GEN_143; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_145 = 8'h91 == io_address[7:0] ? 8'h16 : _GEN_144; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_146 = 8'h92 == io_address[7:0] ? 8'h20 : _GEN_145; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_147 = 8'h93 == io_address[7:0] ? 8'h18 : _GEN_146; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_148 = 8'h94 == io_address[7:0] ? 8'hcb : _GEN_147; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_149 = 8'h95 == io_address[7:0] ? 8'h4f : _GEN_148; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_150 = 8'h96 == io_address[7:0] ? 8'h6 : _GEN_149; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_151 = 8'h97 == io_address[7:0] ? 8'h4 : _GEN_150; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_152 = 8'h98 == io_address[7:0] ? 8'hc5 : _GEN_151; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_153 = 8'h99 == io_address[7:0] ? 8'hcb : _GEN_152; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_154 = 8'h9a == io_address[7:0] ? 8'h11 : _GEN_153; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_155 = 8'h9b == io_address[7:0] ? 8'h17 : _GEN_154; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_156 = 8'h9c == io_address[7:0] ? 8'hc1 : _GEN_155; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_157 = 8'h9d == io_address[7:0] ? 8'hcb : _GEN_156; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_158 = 8'h9e == io_address[7:0] ? 8'h11 : _GEN_157; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_159 = 8'h9f == io_address[7:0] ? 8'h17 : _GEN_158; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_160 = 8'ha0 == io_address[7:0] ? 8'h5 : _GEN_159; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_161 = 8'ha1 == io_address[7:0] ? 8'h20 : _GEN_160; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_162 = 8'ha2 == io_address[7:0] ? 8'hf5 : _GEN_161; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_163 = 8'ha3 == io_address[7:0] ? 8'h22 : _GEN_162; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_164 = 8'ha4 == io_address[7:0] ? 8'h23 : _GEN_163; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_165 = 8'ha5 == io_address[7:0] ? 8'h22 : _GEN_164; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_166 = 8'ha6 == io_address[7:0] ? 8'h23 : _GEN_165; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_167 = 8'ha7 == io_address[7:0] ? 8'hc9 : _GEN_166; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_168 = 8'ha8 == io_address[7:0] ? 8'hce : _GEN_167; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_169 = 8'ha9 == io_address[7:0] ? 8'hed : _GEN_168; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_170 = 8'haa == io_address[7:0] ? 8'h66 : _GEN_169; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_171 = 8'hab == io_address[7:0] ? 8'h66 : _GEN_170; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_172 = 8'hac == io_address[7:0] ? 8'hcc : _GEN_171; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_173 = 8'had == io_address[7:0] ? 8'hd : _GEN_172; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_174 = 8'hae == io_address[7:0] ? 8'h0 : _GEN_173; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_175 = 8'haf == io_address[7:0] ? 8'hb : _GEN_174; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_176 = 8'hb0 == io_address[7:0] ? 8'h3 : _GEN_175; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_177 = 8'hb1 == io_address[7:0] ? 8'h73 : _GEN_176; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_178 = 8'hb2 == io_address[7:0] ? 8'h0 : _GEN_177; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_179 = 8'hb3 == io_address[7:0] ? 8'h83 : _GEN_178; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_180 = 8'hb4 == io_address[7:0] ? 8'h0 : _GEN_179; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_181 = 8'hb5 == io_address[7:0] ? 8'hc : _GEN_180; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_182 = 8'hb6 == io_address[7:0] ? 8'h0 : _GEN_181; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_183 = 8'hb7 == io_address[7:0] ? 8'hd : _GEN_182; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_184 = 8'hb8 == io_address[7:0] ? 8'h0 : _GEN_183; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_185 = 8'hb9 == io_address[7:0] ? 8'h8 : _GEN_184; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_186 = 8'hba == io_address[7:0] ? 8'h11 : _GEN_185; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_187 = 8'hbb == io_address[7:0] ? 8'h1f : _GEN_186; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_188 = 8'hbc == io_address[7:0] ? 8'h88 : _GEN_187; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_189 = 8'hbd == io_address[7:0] ? 8'h89 : _GEN_188; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_190 = 8'hbe == io_address[7:0] ? 8'h0 : _GEN_189; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_191 = 8'hbf == io_address[7:0] ? 8'he : _GEN_190; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_192 = 8'hc0 == io_address[7:0] ? 8'hdc : _GEN_191; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_193 = 8'hc1 == io_address[7:0] ? 8'hcc : _GEN_192; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_194 = 8'hc2 == io_address[7:0] ? 8'h6e : _GEN_193; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_195 = 8'hc3 == io_address[7:0] ? 8'he6 : _GEN_194; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_196 = 8'hc4 == io_address[7:0] ? 8'hdd : _GEN_195; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_197 = 8'hc5 == io_address[7:0] ? 8'hdd : _GEN_196; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_198 = 8'hc6 == io_address[7:0] ? 8'hd9 : _GEN_197; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_199 = 8'hc7 == io_address[7:0] ? 8'h99 : _GEN_198; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_200 = 8'hc8 == io_address[7:0] ? 8'hbb : _GEN_199; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_201 = 8'hc9 == io_address[7:0] ? 8'hbb : _GEN_200; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_202 = 8'hca == io_address[7:0] ? 8'h67 : _GEN_201; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_203 = 8'hcb == io_address[7:0] ? 8'h63 : _GEN_202; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_204 = 8'hcc == io_address[7:0] ? 8'h6e : _GEN_203; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_205 = 8'hcd == io_address[7:0] ? 8'he : _GEN_204; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_206 = 8'hce == io_address[7:0] ? 8'hec : _GEN_205; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_207 = 8'hcf == io_address[7:0] ? 8'hcc : _GEN_206; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_208 = 8'hd0 == io_address[7:0] ? 8'hdd : _GEN_207; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_209 = 8'hd1 == io_address[7:0] ? 8'hdc : _GEN_208; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_210 = 8'hd2 == io_address[7:0] ? 8'h99 : _GEN_209; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_211 = 8'hd3 == io_address[7:0] ? 8'h9f : _GEN_210; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_212 = 8'hd4 == io_address[7:0] ? 8'hbb : _GEN_211; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_213 = 8'hd5 == io_address[7:0] ? 8'hb9 : _GEN_212; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_214 = 8'hd6 == io_address[7:0] ? 8'h33 : _GEN_213; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_215 = 8'hd7 == io_address[7:0] ? 8'h3e : _GEN_214; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_216 = 8'hd8 == io_address[7:0] ? 8'h3c : _GEN_215; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_217 = 8'hd9 == io_address[7:0] ? 8'h42 : _GEN_216; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_218 = 8'hda == io_address[7:0] ? 8'hb9 : _GEN_217; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_219 = 8'hdb == io_address[7:0] ? 8'ha5 : _GEN_218; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_220 = 8'hdc == io_address[7:0] ? 8'hb9 : _GEN_219; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_221 = 8'hdd == io_address[7:0] ? 8'ha5 : _GEN_220; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_222 = 8'hde == io_address[7:0] ? 8'h42 : _GEN_221; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_223 = 8'hdf == io_address[7:0] ? 8'h3c : _GEN_222; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_224 = 8'he0 == io_address[7:0] ? 8'h21 : _GEN_223; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_225 = 8'he1 == io_address[7:0] ? 8'h4 : _GEN_224; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_226 = 8'he2 == io_address[7:0] ? 8'h1 : _GEN_225; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_227 = 8'he3 == io_address[7:0] ? 8'h11 : _GEN_226; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_228 = 8'he4 == io_address[7:0] ? 8'ha8 : _GEN_227; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_229 = 8'he5 == io_address[7:0] ? 8'h0 : _GEN_228; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_230 = 8'he6 == io_address[7:0] ? 8'h1a : _GEN_229; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_231 = 8'he7 == io_address[7:0] ? 8'h13 : _GEN_230; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_232 = 8'he8 == io_address[7:0] ? 8'hbe : _GEN_231; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_233 = 8'he9 == io_address[7:0] ? 8'h20 : _GEN_232; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_234 = 8'hea == io_address[7:0] ? 8'hfe : _GEN_233; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_235 = 8'heb == io_address[7:0] ? 8'h23 : _GEN_234; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_236 = 8'hec == io_address[7:0] ? 8'h7d : _GEN_235; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_237 = 8'hed == io_address[7:0] ? 8'hfe : _GEN_236; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_238 = 8'hee == io_address[7:0] ? 8'h34 : _GEN_237; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_239 = 8'hef == io_address[7:0] ? 8'h20 : _GEN_238; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_240 = 8'hf0 == io_address[7:0] ? 8'hf5 : _GEN_239; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_241 = 8'hf1 == io_address[7:0] ? 8'h6 : _GEN_240; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_242 = 8'hf2 == io_address[7:0] ? 8'h19 : _GEN_241; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_243 = 8'hf3 == io_address[7:0] ? 8'h78 : _GEN_242; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_244 = 8'hf4 == io_address[7:0] ? 8'h86 : _GEN_243; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_245 = 8'hf5 == io_address[7:0] ? 8'h23 : _GEN_244; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_246 = 8'hf6 == io_address[7:0] ? 8'h5 : _GEN_245; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_247 = 8'hf7 == io_address[7:0] ? 8'h20 : _GEN_246; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_248 = 8'hf8 == io_address[7:0] ? 8'hfb : _GEN_247; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_249 = 8'hf9 == io_address[7:0] ? 8'h86 : _GEN_248; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_250 = 8'hfa == io_address[7:0] ? 8'h20 : _GEN_249; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_251 = 8'hfb == io_address[7:0] ? 8'hfe : _GEN_250; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_252 = 8'hfc == io_address[7:0] ? 8'h3e : _GEN_251; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_253 = 8'hfd == io_address[7:0] ? 8'h1 : _GEN_252; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_254 = 8'hfe == io_address[7:0] ? 8'he0 : _GEN_253; // @[BootRom.scala 66:{16,16}]
  wire [7:0] _GEN_255 = 8'hff == io_address[7:0] ? 8'h50 : _GEN_254; // @[BootRom.scala 66:{16,16}]
  assign io_dataOut = io_valid ? _GEN_255 : 8'h0; // @[BootRom.scala 65:18 66:16 68:16]
  assign io_valid = io_enabled & inBootRange; // @[BootRom.scala 62:26]
endmodule
module IORegisters(
  input        clock,
  input        reset,
  input  [7:0] io_addr,
  input        io_write,
  input  [7:0] io_writeData,
  output [7:0] io_readData,
  input        io_vblankIRQ,
  output [7:0] io_ppuLcdc,
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
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] regP1; // @[IORegisters.scala 52:22]
  reg [7:0] regSB; // @[IORegisters.scala 57:22]
  reg [7:0] regSC; // @[IORegisters.scala 58:22]
  reg [7:0] regDIV; // @[IORegisters.scala 68:24]
  reg [7:0] regTIMA; // @[IORegisters.scala 69:24]
  reg [7:0] regTMA; // @[IORegisters.scala 70:24]
  reg [7:0] regTAC; // @[IORegisters.scala 71:24]
  reg [15:0] divCounter; // @[IORegisters.scala 73:27]
  wire [15:0] _divCounter_T_1 = divCounter + 16'h1; // @[IORegisters.scala 76:28]
  wire [7:0] _regDIV_T_1 = regDIV + 8'h1; // @[IORegisters.scala 78:22]
  wire [7:0] _GEN_0 = divCounter == 16'hff ? _regDIV_T_1 : regDIV; // @[IORegisters.scala 77:30 78:12 68:24]
  reg [7:0] regIF; // @[IORegisters.scala 85:22]
  wire [7:0] _regIF_T = regIF | 8'h1; // @[IORegisters.scala 89:20]
  wire [7:0] _GEN_2 = io_vblankIRQ ? _regIF_T : regIF; // @[IORegisters.scala 88:22 89:11 85:22]
  reg [7:0] regNR10; // @[IORegisters.scala 103:24]
  reg [7:0] regNR11; // @[IORegisters.scala 104:24]
  reg [7:0] regNR12; // @[IORegisters.scala 105:24]
  reg [7:0] regNR13; // @[IORegisters.scala 106:24]
  reg [7:0] regNR14; // @[IORegisters.scala 107:24]
  reg [7:0] regNR21; // @[IORegisters.scala 108:24]
  reg [7:0] regNR22; // @[IORegisters.scala 109:24]
  reg [7:0] regNR23; // @[IORegisters.scala 110:24]
  reg [7:0] regNR24; // @[IORegisters.scala 111:24]
  reg [7:0] regNR30; // @[IORegisters.scala 112:24]
  reg [7:0] regNR31; // @[IORegisters.scala 113:24]
  reg [7:0] regNR32; // @[IORegisters.scala 114:24]
  reg [7:0] regNR33; // @[IORegisters.scala 115:24]
  reg [7:0] regNR34; // @[IORegisters.scala 116:24]
  reg [7:0] regNR41; // @[IORegisters.scala 117:24]
  reg [7:0] regNR42; // @[IORegisters.scala 118:24]
  reg [7:0] regNR43; // @[IORegisters.scala 119:24]
  reg [7:0] regNR44; // @[IORegisters.scala 120:24]
  reg [7:0] regNR50; // @[IORegisters.scala 121:24]
  reg [7:0] regNR51; // @[IORegisters.scala 122:24]
  reg [7:0] regNR52; // @[IORegisters.scala 123:24]
  reg [7:0] regLCDC; // @[IORegisters.scala 128:24]
  reg [7:0] regSTAT; // @[IORegisters.scala 129:24]
  reg [7:0] regSCY; // @[IORegisters.scala 130:24]
  reg [7:0] regSCX; // @[IORegisters.scala 131:24]
  reg [7:0] regLYC; // @[IORegisters.scala 133:24]
  reg [7:0] regDMA; // @[IORegisters.scala 134:24]
  reg [7:0] regBGP; // @[IORegisters.scala 135:24]
  reg [7:0] regOBP0; // @[IORegisters.scala 136:24]
  reg [7:0] regOBP1; // @[IORegisters.scala 137:24]
  reg [7:0] regWY; // @[IORegisters.scala 138:24]
  reg [7:0] regWX; // @[IORegisters.scala 139:24]
  reg [7:0] regBOOT; // @[IORegisters.scala 144:24]
  wire  _T_1 = 8'h0 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_2 = 8'h1 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_3 = 8'h2 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_4 = 8'h4 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_5 = 8'h5 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_6 = 8'h6 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_7 = 8'h7 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_8 = 8'hf == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_9 = 8'h10 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_10 = 8'h11 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_11 = 8'h12 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_12 = 8'h13 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_13 = 8'h14 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_14 = 8'h16 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_15 = 8'h17 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_16 = 8'h18 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_17 = 8'h19 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_18 = 8'h1a == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_19 = 8'h1b == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_20 = 8'h1c == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_21 = 8'h1d == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_22 = 8'h1e == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_23 = 8'h20 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_24 = 8'h21 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_25 = 8'h22 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_26 = 8'h23 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_27 = 8'h24 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_28 = 8'h25 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_29 = 8'h26 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_30 = 8'h40 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_31 = 8'h41 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_32 = 8'h42 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_33 = 8'h43 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_34 = 8'h44 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_35 = 8'h45 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_36 = 8'h46 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_37 = 8'h47 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_38 = 8'h48 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_39 = 8'h49 == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_40 = 8'h4a == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_41 = 8'h4b == io_addr; // @[IORegisters.scala 152:19]
  wire  _T_42 = 8'h50 == io_addr; // @[IORegisters.scala 152:19]
  wire [7:0] _GEN_5 = 8'h50 == io_addr ? regBOOT : 8'hff; // @[IORegisters.scala 152:19 207:27 150:29]
  wire [7:0] _GEN_6 = 8'h4b == io_addr ? regWX : _GEN_5; // @[IORegisters.scala 152:19 204:27]
  wire [7:0] _GEN_7 = 8'h4a == io_addr ? regWY : _GEN_6; // @[IORegisters.scala 152:19 203:27]
  wire [7:0] _GEN_8 = 8'h49 == io_addr ? regOBP1 : _GEN_7; // @[IORegisters.scala 152:19 202:27]
  wire [7:0] _GEN_9 = 8'h48 == io_addr ? regOBP0 : _GEN_8; // @[IORegisters.scala 152:19 201:27]
  wire [7:0] _GEN_10 = 8'h47 == io_addr ? regBGP : _GEN_9; // @[IORegisters.scala 152:19 200:27]
  wire [7:0] _GEN_11 = 8'h46 == io_addr ? regDMA : _GEN_10; // @[IORegisters.scala 152:19 199:27]
  wire [7:0] _GEN_12 = 8'h45 == io_addr ? regLYC : _GEN_11; // @[IORegisters.scala 152:19 198:27]
  wire [7:0] _GEN_13 = 8'h44 == io_addr ? io_ppuLy : _GEN_12; // @[IORegisters.scala 152:19 197:27]
  wire [7:0] _GEN_14 = 8'h43 == io_addr ? regSCX : _GEN_13; // @[IORegisters.scala 152:19 196:27]
  wire [7:0] _GEN_15 = 8'h42 == io_addr ? regSCY : _GEN_14; // @[IORegisters.scala 152:19 195:27]
  wire [7:0] _GEN_16 = 8'h41 == io_addr ? regSTAT : _GEN_15; // @[IORegisters.scala 152:19 194:27]
  wire [7:0] _GEN_17 = 8'h40 == io_addr ? regLCDC : _GEN_16; // @[IORegisters.scala 152:19 193:27]
  wire [7:0] _GEN_18 = 8'h26 == io_addr ? regNR52 : _GEN_17; // @[IORegisters.scala 152:19 190:27]
  wire [7:0] _GEN_19 = 8'h25 == io_addr ? regNR51 : _GEN_18; // @[IORegisters.scala 152:19 189:27]
  wire [7:0] _GEN_20 = 8'h24 == io_addr ? regNR50 : _GEN_19; // @[IORegisters.scala 152:19 188:27]
  wire [7:0] _GEN_21 = 8'h23 == io_addr ? regNR44 : _GEN_20; // @[IORegisters.scala 152:19 187:27]
  wire [7:0] _GEN_22 = 8'h22 == io_addr ? regNR43 : _GEN_21; // @[IORegisters.scala 152:19 186:27]
  wire [7:0] _GEN_23 = 8'h21 == io_addr ? regNR42 : _GEN_22; // @[IORegisters.scala 152:19 185:27]
  wire [7:0] _GEN_24 = 8'h20 == io_addr ? regNR41 : _GEN_23; // @[IORegisters.scala 152:19 184:27]
  wire [7:0] _GEN_25 = 8'h1e == io_addr ? regNR34 : _GEN_24; // @[IORegisters.scala 152:19 183:27]
  wire [7:0] _GEN_26 = 8'h1d == io_addr ? regNR33 : _GEN_25; // @[IORegisters.scala 152:19 182:27]
  wire [7:0] _GEN_27 = 8'h1c == io_addr ? regNR32 : _GEN_26; // @[IORegisters.scala 152:19 181:27]
  wire [7:0] _GEN_28 = 8'h1b == io_addr ? regNR31 : _GEN_27; // @[IORegisters.scala 152:19 180:27]
  wire [7:0] _GEN_29 = 8'h1a == io_addr ? regNR30 : _GEN_28; // @[IORegisters.scala 152:19 179:27]
  wire [7:0] _GEN_30 = 8'h19 == io_addr ? regNR24 : _GEN_29; // @[IORegisters.scala 152:19 178:27]
  wire [7:0] _GEN_31 = 8'h18 == io_addr ? regNR23 : _GEN_30; // @[IORegisters.scala 152:19 177:27]
  wire [7:0] _GEN_32 = 8'h17 == io_addr ? regNR22 : _GEN_31; // @[IORegisters.scala 152:19 176:27]
  wire [7:0] _GEN_33 = 8'h16 == io_addr ? regNR21 : _GEN_32; // @[IORegisters.scala 152:19 175:27]
  wire [7:0] _GEN_34 = 8'h14 == io_addr ? regNR14 : _GEN_33; // @[IORegisters.scala 152:19 174:27]
  wire [7:0] _GEN_35 = 8'h13 == io_addr ? regNR13 : _GEN_34; // @[IORegisters.scala 152:19 173:27]
  wire [7:0] _GEN_36 = 8'h12 == io_addr ? regNR12 : _GEN_35; // @[IORegisters.scala 152:19 172:27]
  wire [7:0] _GEN_37 = 8'h11 == io_addr ? regNR11 : _GEN_36; // @[IORegisters.scala 152:19 171:27]
  wire [7:0] _GEN_38 = 8'h10 == io_addr ? regNR10 : _GEN_37; // @[IORegisters.scala 152:19 170:27]
  wire [7:0] _GEN_39 = 8'hf == io_addr ? regIF : _GEN_38; // @[IORegisters.scala 152:19 167:27]
  wire [7:0] _GEN_40 = 8'h7 == io_addr ? regTAC : _GEN_39; // @[IORegisters.scala 152:19 164:27]
  wire [7:0] _GEN_41 = 8'h6 == io_addr ? regTMA : _GEN_40; // @[IORegisters.scala 152:19 163:27]
  wire [7:0] _GEN_42 = 8'h5 == io_addr ? regTIMA : _GEN_41; // @[IORegisters.scala 152:19 162:27]
  wire [7:0] _GEN_43 = 8'h4 == io_addr ? regDIV : _GEN_42; // @[IORegisters.scala 152:19 161:27]
  wire [7:0] _GEN_44 = 8'h2 == io_addr ? regSC : _GEN_43; // @[IORegisters.scala 152:19 158:27]
  wire [7:0] _GEN_45 = 8'h1 == io_addr ? regSB : _GEN_44; // @[IORegisters.scala 152:19 157:27]
  wire [7:0] _regP1_T = io_writeData | 8'hcf; // @[IORegisters.scala 218:42]
  wire [7:0] _GEN_49 = _T_42 ? io_writeData : regBOOT; // @[IORegisters.scala 216:21 144:24 282:28]
  wire [7:0] _GEN_50 = _T_41 ? io_writeData : regWX; // @[IORegisters.scala 216:21 139:24 279:26]
  wire [7:0] _GEN_51 = _T_41 ? regBOOT : _GEN_49; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_52 = _T_40 ? io_writeData : regWY; // @[IORegisters.scala 216:21 138:24 278:26]
  wire [7:0] _GEN_53 = _T_40 ? regWX : _GEN_50; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_54 = _T_40 ? regBOOT : _GEN_51; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_55 = _T_39 ? io_writeData : regOBP1; // @[IORegisters.scala 216:21 137:24 277:28]
  wire [7:0] _GEN_56 = _T_39 ? regWY : _GEN_52; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_57 = _T_39 ? regWX : _GEN_53; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_58 = _T_39 ? regBOOT : _GEN_54; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_59 = _T_38 ? io_writeData : regOBP0; // @[IORegisters.scala 216:21 136:24 276:28]
  wire [7:0] _GEN_60 = _T_38 ? regOBP1 : _GEN_55; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_61 = _T_38 ? regWY : _GEN_56; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_62 = _T_38 ? regWX : _GEN_57; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_63 = _T_38 ? regBOOT : _GEN_58; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_64 = _T_37 ? io_writeData : regBGP; // @[IORegisters.scala 216:21 135:24 275:27]
  wire [7:0] _GEN_65 = _T_37 ? regOBP0 : _GEN_59; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_66 = _T_37 ? regOBP1 : _GEN_60; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_67 = _T_37 ? regWY : _GEN_61; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_68 = _T_37 ? regWX : _GEN_62; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_69 = _T_37 ? regBOOT : _GEN_63; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_70 = _T_36 ? io_writeData : regDMA; // @[IORegisters.scala 216:21 134:24 274:27]
  wire [7:0] _GEN_71 = _T_36 ? regBGP : _GEN_64; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_72 = _T_36 ? regOBP0 : _GEN_65; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_73 = _T_36 ? regOBP1 : _GEN_66; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_74 = _T_36 ? regWY : _GEN_67; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_75 = _T_36 ? regWX : _GEN_68; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_76 = _T_36 ? regBOOT : _GEN_69; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_77 = _T_35 ? io_writeData : regLYC; // @[IORegisters.scala 216:21 133:24 273:27]
  wire [7:0] _GEN_78 = _T_35 ? regDMA : _GEN_70; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_79 = _T_35 ? regBGP : _GEN_71; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_80 = _T_35 ? regOBP0 : _GEN_72; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_81 = _T_35 ? regOBP1 : _GEN_73; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_82 = _T_35 ? regWY : _GEN_74; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_83 = _T_35 ? regWX : _GEN_75; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_84 = _T_35 ? regBOOT : _GEN_76; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_85 = _T_34 ? regLYC : _GEN_77; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_86 = _T_34 ? regDMA : _GEN_78; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_87 = _T_34 ? regBGP : _GEN_79; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_88 = _T_34 ? regOBP0 : _GEN_80; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_89 = _T_34 ? regOBP1 : _GEN_81; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_90 = _T_34 ? regWY : _GEN_82; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_91 = _T_34 ? regWX : _GEN_83; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_92 = _T_34 ? regBOOT : _GEN_84; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_93 = _T_33 ? io_writeData : regSCX; // @[IORegisters.scala 216:21 131:24 271:27]
  wire [7:0] _GEN_94 = _T_33 ? regLYC : _GEN_85; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_95 = _T_33 ? regDMA : _GEN_86; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_96 = _T_33 ? regBGP : _GEN_87; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_97 = _T_33 ? regOBP0 : _GEN_88; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_98 = _T_33 ? regOBP1 : _GEN_89; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_99 = _T_33 ? regWY : _GEN_90; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_100 = _T_33 ? regWX : _GEN_91; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_101 = _T_33 ? regBOOT : _GEN_92; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_102 = _T_32 ? io_writeData : regSCY; // @[IORegisters.scala 216:21 130:24 270:27]
  wire [7:0] _GEN_103 = _T_32 ? regSCX : _GEN_93; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_104 = _T_32 ? regLYC : _GEN_94; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_105 = _T_32 ? regDMA : _GEN_95; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_106 = _T_32 ? regBGP : _GEN_96; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_107 = _T_32 ? regOBP0 : _GEN_97; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_108 = _T_32 ? regOBP1 : _GEN_98; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_109 = _T_32 ? regWY : _GEN_99; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_110 = _T_32 ? regWX : _GEN_100; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_111 = _T_32 ? regBOOT : _GEN_101; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_112 = _T_31 ? io_writeData : regSTAT; // @[IORegisters.scala 216:21 129:24 269:28]
  wire [7:0] _GEN_113 = _T_31 ? regSCY : _GEN_102; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_114 = _T_31 ? regSCX : _GEN_103; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_115 = _T_31 ? regLYC : _GEN_104; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_116 = _T_31 ? regDMA : _GEN_105; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_117 = _T_31 ? regBGP : _GEN_106; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_118 = _T_31 ? regOBP0 : _GEN_107; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_119 = _T_31 ? regOBP1 : _GEN_108; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_120 = _T_31 ? regWY : _GEN_109; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_121 = _T_31 ? regWX : _GEN_110; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_122 = _T_31 ? regBOOT : _GEN_111; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_123 = _T_30 ? io_writeData : regLCDC; // @[IORegisters.scala 216:21 128:24 268:28]
  wire [7:0] _GEN_124 = _T_30 ? regSTAT : _GEN_112; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_125 = _T_30 ? regSCY : _GEN_113; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_126 = _T_30 ? regSCX : _GEN_114; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_127 = _T_30 ? regLYC : _GEN_115; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_128 = _T_30 ? regDMA : _GEN_116; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_129 = _T_30 ? regBGP : _GEN_117; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_130 = _T_30 ? regOBP0 : _GEN_118; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_131 = _T_30 ? regOBP1 : _GEN_119; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_132 = _T_30 ? regWY : _GEN_120; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_133 = _T_30 ? regWX : _GEN_121; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_134 = _T_30 ? regBOOT : _GEN_122; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_135 = _T_29 ? io_writeData : regNR52; // @[IORegisters.scala 216:21 123:24 265:28]
  wire [7:0] _GEN_136 = _T_29 ? regLCDC : _GEN_123; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_137 = _T_29 ? regSTAT : _GEN_124; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_138 = _T_29 ? regSCY : _GEN_125; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_139 = _T_29 ? regSCX : _GEN_126; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_140 = _T_29 ? regLYC : _GEN_127; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_141 = _T_29 ? regDMA : _GEN_128; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_142 = _T_29 ? regBGP : _GEN_129; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_143 = _T_29 ? regOBP0 : _GEN_130; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_144 = _T_29 ? regOBP1 : _GEN_131; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_145 = _T_29 ? regWY : _GEN_132; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_146 = _T_29 ? regWX : _GEN_133; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_147 = _T_29 ? regBOOT : _GEN_134; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_148 = _T_28 ? io_writeData : regNR51; // @[IORegisters.scala 216:21 122:24 264:28]
  wire [7:0] _GEN_149 = _T_28 ? regNR52 : _GEN_135; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_150 = _T_28 ? regLCDC : _GEN_136; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_151 = _T_28 ? regSTAT : _GEN_137; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_152 = _T_28 ? regSCY : _GEN_138; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_153 = _T_28 ? regSCX : _GEN_139; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_154 = _T_28 ? regLYC : _GEN_140; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_155 = _T_28 ? regDMA : _GEN_141; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_156 = _T_28 ? regBGP : _GEN_142; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_157 = _T_28 ? regOBP0 : _GEN_143; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_158 = _T_28 ? regOBP1 : _GEN_144; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_159 = _T_28 ? regWY : _GEN_145; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_160 = _T_28 ? regWX : _GEN_146; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_161 = _T_28 ? regBOOT : _GEN_147; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_162 = _T_27 ? io_writeData : regNR50; // @[IORegisters.scala 216:21 121:24 263:28]
  wire [7:0] _GEN_163 = _T_27 ? regNR51 : _GEN_148; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_164 = _T_27 ? regNR52 : _GEN_149; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_165 = _T_27 ? regLCDC : _GEN_150; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_166 = _T_27 ? regSTAT : _GEN_151; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_167 = _T_27 ? regSCY : _GEN_152; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_168 = _T_27 ? regSCX : _GEN_153; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_169 = _T_27 ? regLYC : _GEN_154; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_170 = _T_27 ? regDMA : _GEN_155; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_171 = _T_27 ? regBGP : _GEN_156; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_172 = _T_27 ? regOBP0 : _GEN_157; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_173 = _T_27 ? regOBP1 : _GEN_158; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_174 = _T_27 ? regWY : _GEN_159; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_175 = _T_27 ? regWX : _GEN_160; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_176 = _T_27 ? regBOOT : _GEN_161; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_177 = _T_26 ? io_writeData : regNR44; // @[IORegisters.scala 216:21 120:24 262:28]
  wire [7:0] _GEN_178 = _T_26 ? regNR50 : _GEN_162; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_179 = _T_26 ? regNR51 : _GEN_163; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_180 = _T_26 ? regNR52 : _GEN_164; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_181 = _T_26 ? regLCDC : _GEN_165; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_182 = _T_26 ? regSTAT : _GEN_166; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_183 = _T_26 ? regSCY : _GEN_167; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_184 = _T_26 ? regSCX : _GEN_168; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_185 = _T_26 ? regLYC : _GEN_169; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_186 = _T_26 ? regDMA : _GEN_170; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_187 = _T_26 ? regBGP : _GEN_171; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_188 = _T_26 ? regOBP0 : _GEN_172; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_189 = _T_26 ? regOBP1 : _GEN_173; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_190 = _T_26 ? regWY : _GEN_174; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_191 = _T_26 ? regWX : _GEN_175; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_192 = _T_26 ? regBOOT : _GEN_176; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_193 = _T_25 ? io_writeData : regNR43; // @[IORegisters.scala 216:21 119:24 261:28]
  wire [7:0] _GEN_194 = _T_25 ? regNR44 : _GEN_177; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_195 = _T_25 ? regNR50 : _GEN_178; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_196 = _T_25 ? regNR51 : _GEN_179; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_197 = _T_25 ? regNR52 : _GEN_180; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_198 = _T_25 ? regLCDC : _GEN_181; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_199 = _T_25 ? regSTAT : _GEN_182; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_200 = _T_25 ? regSCY : _GEN_183; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_201 = _T_25 ? regSCX : _GEN_184; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_202 = _T_25 ? regLYC : _GEN_185; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_203 = _T_25 ? regDMA : _GEN_186; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_204 = _T_25 ? regBGP : _GEN_187; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_205 = _T_25 ? regOBP0 : _GEN_188; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_206 = _T_25 ? regOBP1 : _GEN_189; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_207 = _T_25 ? regWY : _GEN_190; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_208 = _T_25 ? regWX : _GEN_191; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_209 = _T_25 ? regBOOT : _GEN_192; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_210 = _T_24 ? io_writeData : regNR42; // @[IORegisters.scala 216:21 118:24 260:28]
  wire [7:0] _GEN_211 = _T_24 ? regNR43 : _GEN_193; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_212 = _T_24 ? regNR44 : _GEN_194; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_213 = _T_24 ? regNR50 : _GEN_195; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_214 = _T_24 ? regNR51 : _GEN_196; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_215 = _T_24 ? regNR52 : _GEN_197; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_216 = _T_24 ? regLCDC : _GEN_198; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_217 = _T_24 ? regSTAT : _GEN_199; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_218 = _T_24 ? regSCY : _GEN_200; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_219 = _T_24 ? regSCX : _GEN_201; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_220 = _T_24 ? regLYC : _GEN_202; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_221 = _T_24 ? regDMA : _GEN_203; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_222 = _T_24 ? regBGP : _GEN_204; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_223 = _T_24 ? regOBP0 : _GEN_205; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_224 = _T_24 ? regOBP1 : _GEN_206; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_225 = _T_24 ? regWY : _GEN_207; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_226 = _T_24 ? regWX : _GEN_208; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_227 = _T_24 ? regBOOT : _GEN_209; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_228 = _T_23 ? io_writeData : regNR41; // @[IORegisters.scala 216:21 117:24 259:28]
  wire [7:0] _GEN_229 = _T_23 ? regNR42 : _GEN_210; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_230 = _T_23 ? regNR43 : _GEN_211; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_231 = _T_23 ? regNR44 : _GEN_212; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_232 = _T_23 ? regNR50 : _GEN_213; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_233 = _T_23 ? regNR51 : _GEN_214; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_234 = _T_23 ? regNR52 : _GEN_215; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_235 = _T_23 ? regLCDC : _GEN_216; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_236 = _T_23 ? regSTAT : _GEN_217; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_237 = _T_23 ? regSCY : _GEN_218; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_238 = _T_23 ? regSCX : _GEN_219; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_239 = _T_23 ? regLYC : _GEN_220; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_240 = _T_23 ? regDMA : _GEN_221; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_241 = _T_23 ? regBGP : _GEN_222; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_242 = _T_23 ? regOBP0 : _GEN_223; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_243 = _T_23 ? regOBP1 : _GEN_224; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_244 = _T_23 ? regWY : _GEN_225; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_245 = _T_23 ? regWX : _GEN_226; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_246 = _T_23 ? regBOOT : _GEN_227; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_247 = _T_22 ? io_writeData : regNR34; // @[IORegisters.scala 216:21 116:24 258:28]
  wire [7:0] _GEN_248 = _T_22 ? regNR41 : _GEN_228; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_249 = _T_22 ? regNR42 : _GEN_229; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_250 = _T_22 ? regNR43 : _GEN_230; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_251 = _T_22 ? regNR44 : _GEN_231; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_252 = _T_22 ? regNR50 : _GEN_232; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_253 = _T_22 ? regNR51 : _GEN_233; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_254 = _T_22 ? regNR52 : _GEN_234; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_255 = _T_22 ? regLCDC : _GEN_235; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_256 = _T_22 ? regSTAT : _GEN_236; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_257 = _T_22 ? regSCY : _GEN_237; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_258 = _T_22 ? regSCX : _GEN_238; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_259 = _T_22 ? regLYC : _GEN_239; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_260 = _T_22 ? regDMA : _GEN_240; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_261 = _T_22 ? regBGP : _GEN_241; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_262 = _T_22 ? regOBP0 : _GEN_242; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_263 = _T_22 ? regOBP1 : _GEN_243; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_264 = _T_22 ? regWY : _GEN_244; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_265 = _T_22 ? regWX : _GEN_245; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_266 = _T_22 ? regBOOT : _GEN_246; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_267 = _T_21 ? io_writeData : regNR33; // @[IORegisters.scala 216:21 115:24 257:28]
  wire [7:0] _GEN_268 = _T_21 ? regNR34 : _GEN_247; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_269 = _T_21 ? regNR41 : _GEN_248; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_270 = _T_21 ? regNR42 : _GEN_249; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_271 = _T_21 ? regNR43 : _GEN_250; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_272 = _T_21 ? regNR44 : _GEN_251; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_273 = _T_21 ? regNR50 : _GEN_252; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_274 = _T_21 ? regNR51 : _GEN_253; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_275 = _T_21 ? regNR52 : _GEN_254; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_276 = _T_21 ? regLCDC : _GEN_255; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_277 = _T_21 ? regSTAT : _GEN_256; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_278 = _T_21 ? regSCY : _GEN_257; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_279 = _T_21 ? regSCX : _GEN_258; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_280 = _T_21 ? regLYC : _GEN_259; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_281 = _T_21 ? regDMA : _GEN_260; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_282 = _T_21 ? regBGP : _GEN_261; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_283 = _T_21 ? regOBP0 : _GEN_262; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_284 = _T_21 ? regOBP1 : _GEN_263; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_285 = _T_21 ? regWY : _GEN_264; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_286 = _T_21 ? regWX : _GEN_265; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_287 = _T_21 ? regBOOT : _GEN_266; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_288 = _T_20 ? io_writeData : regNR32; // @[IORegisters.scala 216:21 114:24 256:28]
  wire [7:0] _GEN_289 = _T_20 ? regNR33 : _GEN_267; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_290 = _T_20 ? regNR34 : _GEN_268; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_291 = _T_20 ? regNR41 : _GEN_269; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_292 = _T_20 ? regNR42 : _GEN_270; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_293 = _T_20 ? regNR43 : _GEN_271; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_294 = _T_20 ? regNR44 : _GEN_272; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_295 = _T_20 ? regNR50 : _GEN_273; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_296 = _T_20 ? regNR51 : _GEN_274; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_297 = _T_20 ? regNR52 : _GEN_275; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_298 = _T_20 ? regLCDC : _GEN_276; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_299 = _T_20 ? regSTAT : _GEN_277; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_300 = _T_20 ? regSCY : _GEN_278; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_301 = _T_20 ? regSCX : _GEN_279; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_302 = _T_20 ? regLYC : _GEN_280; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_303 = _T_20 ? regDMA : _GEN_281; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_304 = _T_20 ? regBGP : _GEN_282; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_305 = _T_20 ? regOBP0 : _GEN_283; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_306 = _T_20 ? regOBP1 : _GEN_284; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_307 = _T_20 ? regWY : _GEN_285; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_308 = _T_20 ? regWX : _GEN_286; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_309 = _T_20 ? regBOOT : _GEN_287; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_310 = _T_19 ? io_writeData : regNR31; // @[IORegisters.scala 216:21 113:24 255:28]
  wire [7:0] _GEN_311 = _T_19 ? regNR32 : _GEN_288; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_312 = _T_19 ? regNR33 : _GEN_289; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_313 = _T_19 ? regNR34 : _GEN_290; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_314 = _T_19 ? regNR41 : _GEN_291; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_315 = _T_19 ? regNR42 : _GEN_292; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_316 = _T_19 ? regNR43 : _GEN_293; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_317 = _T_19 ? regNR44 : _GEN_294; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_318 = _T_19 ? regNR50 : _GEN_295; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_319 = _T_19 ? regNR51 : _GEN_296; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_320 = _T_19 ? regNR52 : _GEN_297; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_321 = _T_19 ? regLCDC : _GEN_298; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_322 = _T_19 ? regSTAT : _GEN_299; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_323 = _T_19 ? regSCY : _GEN_300; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_324 = _T_19 ? regSCX : _GEN_301; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_325 = _T_19 ? regLYC : _GEN_302; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_326 = _T_19 ? regDMA : _GEN_303; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_327 = _T_19 ? regBGP : _GEN_304; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_328 = _T_19 ? regOBP0 : _GEN_305; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_329 = _T_19 ? regOBP1 : _GEN_306; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_330 = _T_19 ? regWY : _GEN_307; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_331 = _T_19 ? regWX : _GEN_308; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_332 = _T_19 ? regBOOT : _GEN_309; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_333 = _T_18 ? io_writeData : regNR30; // @[IORegisters.scala 216:21 112:24 254:28]
  wire [7:0] _GEN_334 = _T_18 ? regNR31 : _GEN_310; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_335 = _T_18 ? regNR32 : _GEN_311; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_336 = _T_18 ? regNR33 : _GEN_312; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_337 = _T_18 ? regNR34 : _GEN_313; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_338 = _T_18 ? regNR41 : _GEN_314; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_339 = _T_18 ? regNR42 : _GEN_315; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_340 = _T_18 ? regNR43 : _GEN_316; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_341 = _T_18 ? regNR44 : _GEN_317; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_342 = _T_18 ? regNR50 : _GEN_318; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_343 = _T_18 ? regNR51 : _GEN_319; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_344 = _T_18 ? regNR52 : _GEN_320; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_345 = _T_18 ? regLCDC : _GEN_321; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_346 = _T_18 ? regSTAT : _GEN_322; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_347 = _T_18 ? regSCY : _GEN_323; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_348 = _T_18 ? regSCX : _GEN_324; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_349 = _T_18 ? regLYC : _GEN_325; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_350 = _T_18 ? regDMA : _GEN_326; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_351 = _T_18 ? regBGP : _GEN_327; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_352 = _T_18 ? regOBP0 : _GEN_328; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_353 = _T_18 ? regOBP1 : _GEN_329; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_354 = _T_18 ? regWY : _GEN_330; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_355 = _T_18 ? regWX : _GEN_331; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_356 = _T_18 ? regBOOT : _GEN_332; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_357 = _T_17 ? io_writeData : regNR24; // @[IORegisters.scala 216:21 111:24 253:28]
  wire [7:0] _GEN_358 = _T_17 ? regNR30 : _GEN_333; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_359 = _T_17 ? regNR31 : _GEN_334; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_360 = _T_17 ? regNR32 : _GEN_335; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_361 = _T_17 ? regNR33 : _GEN_336; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_362 = _T_17 ? regNR34 : _GEN_337; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_363 = _T_17 ? regNR41 : _GEN_338; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_364 = _T_17 ? regNR42 : _GEN_339; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_365 = _T_17 ? regNR43 : _GEN_340; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_366 = _T_17 ? regNR44 : _GEN_341; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_367 = _T_17 ? regNR50 : _GEN_342; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_368 = _T_17 ? regNR51 : _GEN_343; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_369 = _T_17 ? regNR52 : _GEN_344; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_370 = _T_17 ? regLCDC : _GEN_345; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_371 = _T_17 ? regSTAT : _GEN_346; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_372 = _T_17 ? regSCY : _GEN_347; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_373 = _T_17 ? regSCX : _GEN_348; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_374 = _T_17 ? regLYC : _GEN_349; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_375 = _T_17 ? regDMA : _GEN_350; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_376 = _T_17 ? regBGP : _GEN_351; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_377 = _T_17 ? regOBP0 : _GEN_352; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_378 = _T_17 ? regOBP1 : _GEN_353; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_379 = _T_17 ? regWY : _GEN_354; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_380 = _T_17 ? regWX : _GEN_355; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_381 = _T_17 ? regBOOT : _GEN_356; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_382 = _T_16 ? io_writeData : regNR23; // @[IORegisters.scala 216:21 110:24 252:28]
  wire [7:0] _GEN_383 = _T_16 ? regNR24 : _GEN_357; // @[IORegisters.scala 216:21 111:24]
  wire [7:0] _GEN_384 = _T_16 ? regNR30 : _GEN_358; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_385 = _T_16 ? regNR31 : _GEN_359; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_386 = _T_16 ? regNR32 : _GEN_360; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_387 = _T_16 ? regNR33 : _GEN_361; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_388 = _T_16 ? regNR34 : _GEN_362; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_389 = _T_16 ? regNR41 : _GEN_363; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_390 = _T_16 ? regNR42 : _GEN_364; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_391 = _T_16 ? regNR43 : _GEN_365; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_392 = _T_16 ? regNR44 : _GEN_366; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_393 = _T_16 ? regNR50 : _GEN_367; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_394 = _T_16 ? regNR51 : _GEN_368; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_395 = _T_16 ? regNR52 : _GEN_369; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_396 = _T_16 ? regLCDC : _GEN_370; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_397 = _T_16 ? regSTAT : _GEN_371; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_398 = _T_16 ? regSCY : _GEN_372; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_399 = _T_16 ? regSCX : _GEN_373; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_400 = _T_16 ? regLYC : _GEN_374; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_401 = _T_16 ? regDMA : _GEN_375; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_402 = _T_16 ? regBGP : _GEN_376; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_403 = _T_16 ? regOBP0 : _GEN_377; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_404 = _T_16 ? regOBP1 : _GEN_378; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_405 = _T_16 ? regWY : _GEN_379; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_406 = _T_16 ? regWX : _GEN_380; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_407 = _T_16 ? regBOOT : _GEN_381; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_408 = _T_15 ? io_writeData : regNR22; // @[IORegisters.scala 216:21 109:24 251:28]
  wire [7:0] _GEN_409 = _T_15 ? regNR23 : _GEN_382; // @[IORegisters.scala 216:21 110:24]
  wire [7:0] _GEN_410 = _T_15 ? regNR24 : _GEN_383; // @[IORegisters.scala 216:21 111:24]
  wire [7:0] _GEN_411 = _T_15 ? regNR30 : _GEN_384; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_412 = _T_15 ? regNR31 : _GEN_385; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_413 = _T_15 ? regNR32 : _GEN_386; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_414 = _T_15 ? regNR33 : _GEN_387; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_415 = _T_15 ? regNR34 : _GEN_388; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_416 = _T_15 ? regNR41 : _GEN_389; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_417 = _T_15 ? regNR42 : _GEN_390; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_418 = _T_15 ? regNR43 : _GEN_391; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_419 = _T_15 ? regNR44 : _GEN_392; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_420 = _T_15 ? regNR50 : _GEN_393; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_421 = _T_15 ? regNR51 : _GEN_394; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_422 = _T_15 ? regNR52 : _GEN_395; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_423 = _T_15 ? regLCDC : _GEN_396; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_424 = _T_15 ? regSTAT : _GEN_397; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_425 = _T_15 ? regSCY : _GEN_398; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_426 = _T_15 ? regSCX : _GEN_399; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_427 = _T_15 ? regLYC : _GEN_400; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_428 = _T_15 ? regDMA : _GEN_401; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_429 = _T_15 ? regBGP : _GEN_402; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_430 = _T_15 ? regOBP0 : _GEN_403; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_431 = _T_15 ? regOBP1 : _GEN_404; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_432 = _T_15 ? regWY : _GEN_405; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_433 = _T_15 ? regWX : _GEN_406; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_434 = _T_15 ? regBOOT : _GEN_407; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_435 = _T_14 ? io_writeData : regNR21; // @[IORegisters.scala 216:21 108:24 250:28]
  wire [7:0] _GEN_436 = _T_14 ? regNR22 : _GEN_408; // @[IORegisters.scala 216:21 109:24]
  wire [7:0] _GEN_437 = _T_14 ? regNR23 : _GEN_409; // @[IORegisters.scala 216:21 110:24]
  wire [7:0] _GEN_438 = _T_14 ? regNR24 : _GEN_410; // @[IORegisters.scala 216:21 111:24]
  wire [7:0] _GEN_439 = _T_14 ? regNR30 : _GEN_411; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_440 = _T_14 ? regNR31 : _GEN_412; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_441 = _T_14 ? regNR32 : _GEN_413; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_442 = _T_14 ? regNR33 : _GEN_414; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_443 = _T_14 ? regNR34 : _GEN_415; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_444 = _T_14 ? regNR41 : _GEN_416; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_445 = _T_14 ? regNR42 : _GEN_417; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_446 = _T_14 ? regNR43 : _GEN_418; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_447 = _T_14 ? regNR44 : _GEN_419; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_448 = _T_14 ? regNR50 : _GEN_420; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_449 = _T_14 ? regNR51 : _GEN_421; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_450 = _T_14 ? regNR52 : _GEN_422; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_451 = _T_14 ? regLCDC : _GEN_423; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_452 = _T_14 ? regSTAT : _GEN_424; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_453 = _T_14 ? regSCY : _GEN_425; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_454 = _T_14 ? regSCX : _GEN_426; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_455 = _T_14 ? regLYC : _GEN_427; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_456 = _T_14 ? regDMA : _GEN_428; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_457 = _T_14 ? regBGP : _GEN_429; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_458 = _T_14 ? regOBP0 : _GEN_430; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_459 = _T_14 ? regOBP1 : _GEN_431; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_460 = _T_14 ? regWY : _GEN_432; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_461 = _T_14 ? regWX : _GEN_433; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_462 = _T_14 ? regBOOT : _GEN_434; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_463 = _T_13 ? io_writeData : regNR14; // @[IORegisters.scala 216:21 107:24 249:28]
  wire [7:0] _GEN_464 = _T_13 ? regNR21 : _GEN_435; // @[IORegisters.scala 216:21 108:24]
  wire [7:0] _GEN_465 = _T_13 ? regNR22 : _GEN_436; // @[IORegisters.scala 216:21 109:24]
  wire [7:0] _GEN_466 = _T_13 ? regNR23 : _GEN_437; // @[IORegisters.scala 216:21 110:24]
  wire [7:0] _GEN_467 = _T_13 ? regNR24 : _GEN_438; // @[IORegisters.scala 216:21 111:24]
  wire [7:0] _GEN_468 = _T_13 ? regNR30 : _GEN_439; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_469 = _T_13 ? regNR31 : _GEN_440; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_470 = _T_13 ? regNR32 : _GEN_441; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_471 = _T_13 ? regNR33 : _GEN_442; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_472 = _T_13 ? regNR34 : _GEN_443; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_473 = _T_13 ? regNR41 : _GEN_444; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_474 = _T_13 ? regNR42 : _GEN_445; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_475 = _T_13 ? regNR43 : _GEN_446; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_476 = _T_13 ? regNR44 : _GEN_447; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_477 = _T_13 ? regNR50 : _GEN_448; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_478 = _T_13 ? regNR51 : _GEN_449; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_479 = _T_13 ? regNR52 : _GEN_450; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_480 = _T_13 ? regLCDC : _GEN_451; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_481 = _T_13 ? regSTAT : _GEN_452; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_482 = _T_13 ? regSCY : _GEN_453; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_483 = _T_13 ? regSCX : _GEN_454; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_484 = _T_13 ? regLYC : _GEN_455; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_485 = _T_13 ? regDMA : _GEN_456; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_486 = _T_13 ? regBGP : _GEN_457; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_487 = _T_13 ? regOBP0 : _GEN_458; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_488 = _T_13 ? regOBP1 : _GEN_459; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_489 = _T_13 ? regWY : _GEN_460; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_490 = _T_13 ? regWX : _GEN_461; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_491 = _T_13 ? regBOOT : _GEN_462; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_492 = _T_12 ? io_writeData : regNR13; // @[IORegisters.scala 216:21 106:24 248:28]
  wire [7:0] _GEN_493 = _T_12 ? regNR14 : _GEN_463; // @[IORegisters.scala 216:21 107:24]
  wire [7:0] _GEN_494 = _T_12 ? regNR21 : _GEN_464; // @[IORegisters.scala 216:21 108:24]
  wire [7:0] _GEN_495 = _T_12 ? regNR22 : _GEN_465; // @[IORegisters.scala 216:21 109:24]
  wire [7:0] _GEN_496 = _T_12 ? regNR23 : _GEN_466; // @[IORegisters.scala 216:21 110:24]
  wire [7:0] _GEN_497 = _T_12 ? regNR24 : _GEN_467; // @[IORegisters.scala 216:21 111:24]
  wire [7:0] _GEN_498 = _T_12 ? regNR30 : _GEN_468; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_499 = _T_12 ? regNR31 : _GEN_469; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_500 = _T_12 ? regNR32 : _GEN_470; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_501 = _T_12 ? regNR33 : _GEN_471; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_502 = _T_12 ? regNR34 : _GEN_472; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_503 = _T_12 ? regNR41 : _GEN_473; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_504 = _T_12 ? regNR42 : _GEN_474; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_505 = _T_12 ? regNR43 : _GEN_475; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_506 = _T_12 ? regNR44 : _GEN_476; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_507 = _T_12 ? regNR50 : _GEN_477; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_508 = _T_12 ? regNR51 : _GEN_478; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_509 = _T_12 ? regNR52 : _GEN_479; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_510 = _T_12 ? regLCDC : _GEN_480; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_511 = _T_12 ? regSTAT : _GEN_481; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_512 = _T_12 ? regSCY : _GEN_482; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_513 = _T_12 ? regSCX : _GEN_483; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_514 = _T_12 ? regLYC : _GEN_484; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_515 = _T_12 ? regDMA : _GEN_485; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_516 = _T_12 ? regBGP : _GEN_486; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_517 = _T_12 ? regOBP0 : _GEN_487; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_518 = _T_12 ? regOBP1 : _GEN_488; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_519 = _T_12 ? regWY : _GEN_489; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_520 = _T_12 ? regWX : _GEN_490; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_521 = _T_12 ? regBOOT : _GEN_491; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_522 = _T_11 ? io_writeData : regNR12; // @[IORegisters.scala 216:21 105:24 247:28]
  wire [7:0] _GEN_523 = _T_11 ? regNR13 : _GEN_492; // @[IORegisters.scala 216:21 106:24]
  wire [7:0] _GEN_524 = _T_11 ? regNR14 : _GEN_493; // @[IORegisters.scala 216:21 107:24]
  wire [7:0] _GEN_525 = _T_11 ? regNR21 : _GEN_494; // @[IORegisters.scala 216:21 108:24]
  wire [7:0] _GEN_526 = _T_11 ? regNR22 : _GEN_495; // @[IORegisters.scala 216:21 109:24]
  wire [7:0] _GEN_527 = _T_11 ? regNR23 : _GEN_496; // @[IORegisters.scala 216:21 110:24]
  wire [7:0] _GEN_528 = _T_11 ? regNR24 : _GEN_497; // @[IORegisters.scala 216:21 111:24]
  wire [7:0] _GEN_529 = _T_11 ? regNR30 : _GEN_498; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_530 = _T_11 ? regNR31 : _GEN_499; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_531 = _T_11 ? regNR32 : _GEN_500; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_532 = _T_11 ? regNR33 : _GEN_501; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_533 = _T_11 ? regNR34 : _GEN_502; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_534 = _T_11 ? regNR41 : _GEN_503; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_535 = _T_11 ? regNR42 : _GEN_504; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_536 = _T_11 ? regNR43 : _GEN_505; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_537 = _T_11 ? regNR44 : _GEN_506; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_538 = _T_11 ? regNR50 : _GEN_507; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_539 = _T_11 ? regNR51 : _GEN_508; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_540 = _T_11 ? regNR52 : _GEN_509; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_541 = _T_11 ? regLCDC : _GEN_510; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_542 = _T_11 ? regSTAT : _GEN_511; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_543 = _T_11 ? regSCY : _GEN_512; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_544 = _T_11 ? regSCX : _GEN_513; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_545 = _T_11 ? regLYC : _GEN_514; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_546 = _T_11 ? regDMA : _GEN_515; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_547 = _T_11 ? regBGP : _GEN_516; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_548 = _T_11 ? regOBP0 : _GEN_517; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_549 = _T_11 ? regOBP1 : _GEN_518; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_550 = _T_11 ? regWY : _GEN_519; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_551 = _T_11 ? regWX : _GEN_520; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_552 = _T_11 ? regBOOT : _GEN_521; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_553 = _T_10 ? io_writeData : regNR11; // @[IORegisters.scala 216:21 104:24 246:28]
  wire [7:0] _GEN_554 = _T_10 ? regNR12 : _GEN_522; // @[IORegisters.scala 216:21 105:24]
  wire [7:0] _GEN_555 = _T_10 ? regNR13 : _GEN_523; // @[IORegisters.scala 216:21 106:24]
  wire [7:0] _GEN_556 = _T_10 ? regNR14 : _GEN_524; // @[IORegisters.scala 216:21 107:24]
  wire [7:0] _GEN_557 = _T_10 ? regNR21 : _GEN_525; // @[IORegisters.scala 216:21 108:24]
  wire [7:0] _GEN_558 = _T_10 ? regNR22 : _GEN_526; // @[IORegisters.scala 216:21 109:24]
  wire [7:0] _GEN_559 = _T_10 ? regNR23 : _GEN_527; // @[IORegisters.scala 216:21 110:24]
  wire [7:0] _GEN_560 = _T_10 ? regNR24 : _GEN_528; // @[IORegisters.scala 216:21 111:24]
  wire [7:0] _GEN_561 = _T_10 ? regNR30 : _GEN_529; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_562 = _T_10 ? regNR31 : _GEN_530; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_563 = _T_10 ? regNR32 : _GEN_531; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_564 = _T_10 ? regNR33 : _GEN_532; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_565 = _T_10 ? regNR34 : _GEN_533; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_566 = _T_10 ? regNR41 : _GEN_534; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_567 = _T_10 ? regNR42 : _GEN_535; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_568 = _T_10 ? regNR43 : _GEN_536; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_569 = _T_10 ? regNR44 : _GEN_537; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_570 = _T_10 ? regNR50 : _GEN_538; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_571 = _T_10 ? regNR51 : _GEN_539; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_572 = _T_10 ? regNR52 : _GEN_540; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_573 = _T_10 ? regLCDC : _GEN_541; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_574 = _T_10 ? regSTAT : _GEN_542; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_575 = _T_10 ? regSCY : _GEN_543; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_576 = _T_10 ? regSCX : _GEN_544; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_577 = _T_10 ? regLYC : _GEN_545; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_578 = _T_10 ? regDMA : _GEN_546; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_579 = _T_10 ? regBGP : _GEN_547; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_580 = _T_10 ? regOBP0 : _GEN_548; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_581 = _T_10 ? regOBP1 : _GEN_549; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_582 = _T_10 ? regWY : _GEN_550; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_583 = _T_10 ? regWX : _GEN_551; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_584 = _T_10 ? regBOOT : _GEN_552; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_585 = _T_9 ? io_writeData : regNR10; // @[IORegisters.scala 216:21 103:24 245:28]
  wire [7:0] _GEN_586 = _T_9 ? regNR11 : _GEN_553; // @[IORegisters.scala 216:21 104:24]
  wire [7:0] _GEN_587 = _T_9 ? regNR12 : _GEN_554; // @[IORegisters.scala 216:21 105:24]
  wire [7:0] _GEN_588 = _T_9 ? regNR13 : _GEN_555; // @[IORegisters.scala 216:21 106:24]
  wire [7:0] _GEN_589 = _T_9 ? regNR14 : _GEN_556; // @[IORegisters.scala 216:21 107:24]
  wire [7:0] _GEN_590 = _T_9 ? regNR21 : _GEN_557; // @[IORegisters.scala 216:21 108:24]
  wire [7:0] _GEN_591 = _T_9 ? regNR22 : _GEN_558; // @[IORegisters.scala 216:21 109:24]
  wire [7:0] _GEN_592 = _T_9 ? regNR23 : _GEN_559; // @[IORegisters.scala 216:21 110:24]
  wire [7:0] _GEN_593 = _T_9 ? regNR24 : _GEN_560; // @[IORegisters.scala 216:21 111:24]
  wire [7:0] _GEN_594 = _T_9 ? regNR30 : _GEN_561; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_595 = _T_9 ? regNR31 : _GEN_562; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_596 = _T_9 ? regNR32 : _GEN_563; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_597 = _T_9 ? regNR33 : _GEN_564; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_598 = _T_9 ? regNR34 : _GEN_565; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_599 = _T_9 ? regNR41 : _GEN_566; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_600 = _T_9 ? regNR42 : _GEN_567; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_601 = _T_9 ? regNR43 : _GEN_568; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_602 = _T_9 ? regNR44 : _GEN_569; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_603 = _T_9 ? regNR50 : _GEN_570; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_604 = _T_9 ? regNR51 : _GEN_571; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_605 = _T_9 ? regNR52 : _GEN_572; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_606 = _T_9 ? regLCDC : _GEN_573; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_607 = _T_9 ? regSTAT : _GEN_574; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_608 = _T_9 ? regSCY : _GEN_575; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_609 = _T_9 ? regSCX : _GEN_576; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_610 = _T_9 ? regLYC : _GEN_577; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_611 = _T_9 ? regDMA : _GEN_578; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_612 = _T_9 ? regBGP : _GEN_579; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_613 = _T_9 ? regOBP0 : _GEN_580; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_614 = _T_9 ? regOBP1 : _GEN_581; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_615 = _T_9 ? regWY : _GEN_582; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_616 = _T_9 ? regWX : _GEN_583; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_617 = _T_9 ? regBOOT : _GEN_584; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_618 = _T_8 ? io_writeData : _GEN_2; // @[IORegisters.scala 216:21 242:26]
  wire [7:0] _GEN_619 = _T_8 ? regNR10 : _GEN_585; // @[IORegisters.scala 216:21 103:24]
  wire [7:0] _GEN_620 = _T_8 ? regNR11 : _GEN_586; // @[IORegisters.scala 216:21 104:24]
  wire [7:0] _GEN_621 = _T_8 ? regNR12 : _GEN_587; // @[IORegisters.scala 216:21 105:24]
  wire [7:0] _GEN_622 = _T_8 ? regNR13 : _GEN_588; // @[IORegisters.scala 216:21 106:24]
  wire [7:0] _GEN_623 = _T_8 ? regNR14 : _GEN_589; // @[IORegisters.scala 216:21 107:24]
  wire [7:0] _GEN_624 = _T_8 ? regNR21 : _GEN_590; // @[IORegisters.scala 216:21 108:24]
  wire [7:0] _GEN_625 = _T_8 ? regNR22 : _GEN_591; // @[IORegisters.scala 216:21 109:24]
  wire [7:0] _GEN_626 = _T_8 ? regNR23 : _GEN_592; // @[IORegisters.scala 216:21 110:24]
  wire [7:0] _GEN_627 = _T_8 ? regNR24 : _GEN_593; // @[IORegisters.scala 216:21 111:24]
  wire [7:0] _GEN_628 = _T_8 ? regNR30 : _GEN_594; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_629 = _T_8 ? regNR31 : _GEN_595; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_630 = _T_8 ? regNR32 : _GEN_596; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_631 = _T_8 ? regNR33 : _GEN_597; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_632 = _T_8 ? regNR34 : _GEN_598; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_633 = _T_8 ? regNR41 : _GEN_599; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_634 = _T_8 ? regNR42 : _GEN_600; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_635 = _T_8 ? regNR43 : _GEN_601; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_636 = _T_8 ? regNR44 : _GEN_602; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_637 = _T_8 ? regNR50 : _GEN_603; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_638 = _T_8 ? regNR51 : _GEN_604; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_639 = _T_8 ? regNR52 : _GEN_605; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_640 = _T_8 ? regLCDC : _GEN_606; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_641 = _T_8 ? regSTAT : _GEN_607; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_642 = _T_8 ? regSCY : _GEN_608; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_643 = _T_8 ? regSCX : _GEN_609; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_644 = _T_8 ? regLYC : _GEN_610; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_645 = _T_8 ? regDMA : _GEN_611; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_646 = _T_8 ? regBGP : _GEN_612; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_647 = _T_8 ? regOBP0 : _GEN_613; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_648 = _T_8 ? regOBP1 : _GEN_614; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_649 = _T_8 ? regWY : _GEN_615; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_650 = _T_8 ? regWX : _GEN_616; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_651 = _T_8 ? regBOOT : _GEN_617; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_652 = _T_7 ? io_writeData : regTAC; // @[IORegisters.scala 216:21 239:27 71:24]
  wire [7:0] _GEN_653 = _T_7 ? _GEN_2 : _GEN_618; // @[IORegisters.scala 216:21]
  wire [7:0] _GEN_654 = _T_7 ? regNR10 : _GEN_619; // @[IORegisters.scala 216:21 103:24]
  wire [7:0] _GEN_655 = _T_7 ? regNR11 : _GEN_620; // @[IORegisters.scala 216:21 104:24]
  wire [7:0] _GEN_656 = _T_7 ? regNR12 : _GEN_621; // @[IORegisters.scala 216:21 105:24]
  wire [7:0] _GEN_657 = _T_7 ? regNR13 : _GEN_622; // @[IORegisters.scala 216:21 106:24]
  wire [7:0] _GEN_658 = _T_7 ? regNR14 : _GEN_623; // @[IORegisters.scala 216:21 107:24]
  wire [7:0] _GEN_659 = _T_7 ? regNR21 : _GEN_624; // @[IORegisters.scala 216:21 108:24]
  wire [7:0] _GEN_660 = _T_7 ? regNR22 : _GEN_625; // @[IORegisters.scala 216:21 109:24]
  wire [7:0] _GEN_661 = _T_7 ? regNR23 : _GEN_626; // @[IORegisters.scala 216:21 110:24]
  wire [7:0] _GEN_662 = _T_7 ? regNR24 : _GEN_627; // @[IORegisters.scala 216:21 111:24]
  wire [7:0] _GEN_663 = _T_7 ? regNR30 : _GEN_628; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_664 = _T_7 ? regNR31 : _GEN_629; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_665 = _T_7 ? regNR32 : _GEN_630; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_666 = _T_7 ? regNR33 : _GEN_631; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_667 = _T_7 ? regNR34 : _GEN_632; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_668 = _T_7 ? regNR41 : _GEN_633; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_669 = _T_7 ? regNR42 : _GEN_634; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_670 = _T_7 ? regNR43 : _GEN_635; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_671 = _T_7 ? regNR44 : _GEN_636; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_672 = _T_7 ? regNR50 : _GEN_637; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_673 = _T_7 ? regNR51 : _GEN_638; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_674 = _T_7 ? regNR52 : _GEN_639; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_675 = _T_7 ? regLCDC : _GEN_640; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_676 = _T_7 ? regSTAT : _GEN_641; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_677 = _T_7 ? regSCY : _GEN_642; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_678 = _T_7 ? regSCX : _GEN_643; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_679 = _T_7 ? regLYC : _GEN_644; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_680 = _T_7 ? regDMA : _GEN_645; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_681 = _T_7 ? regBGP : _GEN_646; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_682 = _T_7 ? regOBP0 : _GEN_647; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_683 = _T_7 ? regOBP1 : _GEN_648; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_684 = _T_7 ? regWY : _GEN_649; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_685 = _T_7 ? regWX : _GEN_650; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_686 = _T_7 ? regBOOT : _GEN_651; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_687 = _T_6 ? io_writeData : regTMA; // @[IORegisters.scala 216:21 238:27 70:24]
  wire [7:0] _GEN_688 = _T_6 ? regTAC : _GEN_652; // @[IORegisters.scala 216:21 71:24]
  wire [7:0] _GEN_689 = _T_6 ? _GEN_2 : _GEN_653; // @[IORegisters.scala 216:21]
  wire [7:0] _GEN_690 = _T_6 ? regNR10 : _GEN_654; // @[IORegisters.scala 216:21 103:24]
  wire [7:0] _GEN_691 = _T_6 ? regNR11 : _GEN_655; // @[IORegisters.scala 216:21 104:24]
  wire [7:0] _GEN_692 = _T_6 ? regNR12 : _GEN_656; // @[IORegisters.scala 216:21 105:24]
  wire [7:0] _GEN_693 = _T_6 ? regNR13 : _GEN_657; // @[IORegisters.scala 216:21 106:24]
  wire [7:0] _GEN_694 = _T_6 ? regNR14 : _GEN_658; // @[IORegisters.scala 216:21 107:24]
  wire [7:0] _GEN_695 = _T_6 ? regNR21 : _GEN_659; // @[IORegisters.scala 216:21 108:24]
  wire [7:0] _GEN_696 = _T_6 ? regNR22 : _GEN_660; // @[IORegisters.scala 216:21 109:24]
  wire [7:0] _GEN_697 = _T_6 ? regNR23 : _GEN_661; // @[IORegisters.scala 216:21 110:24]
  wire [7:0] _GEN_698 = _T_6 ? regNR24 : _GEN_662; // @[IORegisters.scala 216:21 111:24]
  wire [7:0] _GEN_699 = _T_6 ? regNR30 : _GEN_663; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_700 = _T_6 ? regNR31 : _GEN_664; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_701 = _T_6 ? regNR32 : _GEN_665; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_702 = _T_6 ? regNR33 : _GEN_666; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_703 = _T_6 ? regNR34 : _GEN_667; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_704 = _T_6 ? regNR41 : _GEN_668; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_705 = _T_6 ? regNR42 : _GEN_669; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_706 = _T_6 ? regNR43 : _GEN_670; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_707 = _T_6 ? regNR44 : _GEN_671; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_708 = _T_6 ? regNR50 : _GEN_672; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_709 = _T_6 ? regNR51 : _GEN_673; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_710 = _T_6 ? regNR52 : _GEN_674; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_711 = _T_6 ? regLCDC : _GEN_675; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_712 = _T_6 ? regSTAT : _GEN_676; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_713 = _T_6 ? regSCY : _GEN_677; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_714 = _T_6 ? regSCX : _GEN_678; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_715 = _T_6 ? regLYC : _GEN_679; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_716 = _T_6 ? regDMA : _GEN_680; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_717 = _T_6 ? regBGP : _GEN_681; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_718 = _T_6 ? regOBP0 : _GEN_682; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_719 = _T_6 ? regOBP1 : _GEN_683; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_720 = _T_6 ? regWY : _GEN_684; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_721 = _T_6 ? regWX : _GEN_685; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_722 = _T_6 ? regBOOT : _GEN_686; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_723 = _T_5 ? io_writeData : regTIMA; // @[IORegisters.scala 216:21 237:28 69:24]
  wire [7:0] _GEN_724 = _T_5 ? regTMA : _GEN_687; // @[IORegisters.scala 216:21 70:24]
  wire [7:0] _GEN_725 = _T_5 ? regTAC : _GEN_688; // @[IORegisters.scala 216:21 71:24]
  wire [7:0] _GEN_726 = _T_5 ? _GEN_2 : _GEN_689; // @[IORegisters.scala 216:21]
  wire [7:0] _GEN_727 = _T_5 ? regNR10 : _GEN_690; // @[IORegisters.scala 216:21 103:24]
  wire [7:0] _GEN_728 = _T_5 ? regNR11 : _GEN_691; // @[IORegisters.scala 216:21 104:24]
  wire [7:0] _GEN_729 = _T_5 ? regNR12 : _GEN_692; // @[IORegisters.scala 216:21 105:24]
  wire [7:0] _GEN_730 = _T_5 ? regNR13 : _GEN_693; // @[IORegisters.scala 216:21 106:24]
  wire [7:0] _GEN_731 = _T_5 ? regNR14 : _GEN_694; // @[IORegisters.scala 216:21 107:24]
  wire [7:0] _GEN_732 = _T_5 ? regNR21 : _GEN_695; // @[IORegisters.scala 216:21 108:24]
  wire [7:0] _GEN_733 = _T_5 ? regNR22 : _GEN_696; // @[IORegisters.scala 216:21 109:24]
  wire [7:0] _GEN_734 = _T_5 ? regNR23 : _GEN_697; // @[IORegisters.scala 216:21 110:24]
  wire [7:0] _GEN_735 = _T_5 ? regNR24 : _GEN_698; // @[IORegisters.scala 216:21 111:24]
  wire [7:0] _GEN_736 = _T_5 ? regNR30 : _GEN_699; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_737 = _T_5 ? regNR31 : _GEN_700; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_738 = _T_5 ? regNR32 : _GEN_701; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_739 = _T_5 ? regNR33 : _GEN_702; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_740 = _T_5 ? regNR34 : _GEN_703; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_741 = _T_5 ? regNR41 : _GEN_704; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_742 = _T_5 ? regNR42 : _GEN_705; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_743 = _T_5 ? regNR43 : _GEN_706; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_744 = _T_5 ? regNR44 : _GEN_707; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_745 = _T_5 ? regNR50 : _GEN_708; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_746 = _T_5 ? regNR51 : _GEN_709; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_747 = _T_5 ? regNR52 : _GEN_710; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_748 = _T_5 ? regLCDC : _GEN_711; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_749 = _T_5 ? regSTAT : _GEN_712; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_750 = _T_5 ? regSCY : _GEN_713; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_751 = _T_5 ? regSCX : _GEN_714; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_752 = _T_5 ? regLYC : _GEN_715; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_753 = _T_5 ? regDMA : _GEN_716; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_754 = _T_5 ? regBGP : _GEN_717; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_755 = _T_5 ? regOBP0 : _GEN_718; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_756 = _T_5 ? regOBP1 : _GEN_719; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_757 = _T_5 ? regWY : _GEN_720; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_758 = _T_5 ? regWX : _GEN_721; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_759 = _T_5 ? regBOOT : _GEN_722; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_760 = _T_4 ? 8'h0 : _GEN_0; // @[IORegisters.scala 216:21 236:27]
  wire [7:0] _GEN_761 = _T_4 ? regTIMA : _GEN_723; // @[IORegisters.scala 216:21 69:24]
  wire [7:0] _GEN_762 = _T_4 ? regTMA : _GEN_724; // @[IORegisters.scala 216:21 70:24]
  wire [7:0] _GEN_763 = _T_4 ? regTAC : _GEN_725; // @[IORegisters.scala 216:21 71:24]
  wire [7:0] _GEN_764 = _T_4 ? _GEN_2 : _GEN_726; // @[IORegisters.scala 216:21]
  wire [7:0] _GEN_765 = _T_4 ? regNR10 : _GEN_727; // @[IORegisters.scala 216:21 103:24]
  wire [7:0] _GEN_766 = _T_4 ? regNR11 : _GEN_728; // @[IORegisters.scala 216:21 104:24]
  wire [7:0] _GEN_767 = _T_4 ? regNR12 : _GEN_729; // @[IORegisters.scala 216:21 105:24]
  wire [7:0] _GEN_768 = _T_4 ? regNR13 : _GEN_730; // @[IORegisters.scala 216:21 106:24]
  wire [7:0] _GEN_769 = _T_4 ? regNR14 : _GEN_731; // @[IORegisters.scala 216:21 107:24]
  wire [7:0] _GEN_770 = _T_4 ? regNR21 : _GEN_732; // @[IORegisters.scala 216:21 108:24]
  wire [7:0] _GEN_771 = _T_4 ? regNR22 : _GEN_733; // @[IORegisters.scala 216:21 109:24]
  wire [7:0] _GEN_772 = _T_4 ? regNR23 : _GEN_734; // @[IORegisters.scala 216:21 110:24]
  wire [7:0] _GEN_773 = _T_4 ? regNR24 : _GEN_735; // @[IORegisters.scala 216:21 111:24]
  wire [7:0] _GEN_774 = _T_4 ? regNR30 : _GEN_736; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_775 = _T_4 ? regNR31 : _GEN_737; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_776 = _T_4 ? regNR32 : _GEN_738; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_777 = _T_4 ? regNR33 : _GEN_739; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_778 = _T_4 ? regNR34 : _GEN_740; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_779 = _T_4 ? regNR41 : _GEN_741; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_780 = _T_4 ? regNR42 : _GEN_742; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_781 = _T_4 ? regNR43 : _GEN_743; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_782 = _T_4 ? regNR44 : _GEN_744; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_783 = _T_4 ? regNR50 : _GEN_745; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_784 = _T_4 ? regNR51 : _GEN_746; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_785 = _T_4 ? regNR52 : _GEN_747; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_786 = _T_4 ? regLCDC : _GEN_748; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_787 = _T_4 ? regSTAT : _GEN_749; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_788 = _T_4 ? regSCY : _GEN_750; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_789 = _T_4 ? regSCX : _GEN_751; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_790 = _T_4 ? regLYC : _GEN_752; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_791 = _T_4 ? regDMA : _GEN_753; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_792 = _T_4 ? regBGP : _GEN_754; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_793 = _T_4 ? regOBP0 : _GEN_755; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_794 = _T_4 ? regOBP1 : _GEN_756; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_795 = _T_4 ? regWY : _GEN_757; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_796 = _T_4 ? regWX : _GEN_758; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_797 = _T_4 ? regBOOT : _GEN_759; // @[IORegisters.scala 216:21 144:24]
  wire [7:0] _GEN_798 = _T_3 ? io_writeData : regSC; // @[IORegisters.scala 216:21 225:15 58:22]
  wire [7:0] _GEN_801 = _T_3 ? _GEN_0 : _GEN_760; // @[IORegisters.scala 216:21]
  wire [7:0] _GEN_802 = _T_3 ? regTIMA : _GEN_761; // @[IORegisters.scala 216:21 69:24]
  wire [7:0] _GEN_803 = _T_3 ? regTMA : _GEN_762; // @[IORegisters.scala 216:21 70:24]
  wire [7:0] _GEN_804 = _T_3 ? regTAC : _GEN_763; // @[IORegisters.scala 216:21 71:24]
  wire [7:0] _GEN_805 = _T_3 ? _GEN_2 : _GEN_764; // @[IORegisters.scala 216:21]
  wire [7:0] _GEN_806 = _T_3 ? regNR10 : _GEN_765; // @[IORegisters.scala 216:21 103:24]
  wire [7:0] _GEN_807 = _T_3 ? regNR11 : _GEN_766; // @[IORegisters.scala 216:21 104:24]
  wire [7:0] _GEN_808 = _T_3 ? regNR12 : _GEN_767; // @[IORegisters.scala 216:21 105:24]
  wire [7:0] _GEN_809 = _T_3 ? regNR13 : _GEN_768; // @[IORegisters.scala 216:21 106:24]
  wire [7:0] _GEN_810 = _T_3 ? regNR14 : _GEN_769; // @[IORegisters.scala 216:21 107:24]
  wire [7:0] _GEN_811 = _T_3 ? regNR21 : _GEN_770; // @[IORegisters.scala 216:21 108:24]
  wire [7:0] _GEN_812 = _T_3 ? regNR22 : _GEN_771; // @[IORegisters.scala 216:21 109:24]
  wire [7:0] _GEN_813 = _T_3 ? regNR23 : _GEN_772; // @[IORegisters.scala 216:21 110:24]
  wire [7:0] _GEN_814 = _T_3 ? regNR24 : _GEN_773; // @[IORegisters.scala 216:21 111:24]
  wire [7:0] _GEN_815 = _T_3 ? regNR30 : _GEN_774; // @[IORegisters.scala 216:21 112:24]
  wire [7:0] _GEN_816 = _T_3 ? regNR31 : _GEN_775; // @[IORegisters.scala 216:21 113:24]
  wire [7:0] _GEN_817 = _T_3 ? regNR32 : _GEN_776; // @[IORegisters.scala 216:21 114:24]
  wire [7:0] _GEN_818 = _T_3 ? regNR33 : _GEN_777; // @[IORegisters.scala 216:21 115:24]
  wire [7:0] _GEN_819 = _T_3 ? regNR34 : _GEN_778; // @[IORegisters.scala 216:21 116:24]
  wire [7:0] _GEN_820 = _T_3 ? regNR41 : _GEN_779; // @[IORegisters.scala 216:21 117:24]
  wire [7:0] _GEN_821 = _T_3 ? regNR42 : _GEN_780; // @[IORegisters.scala 216:21 118:24]
  wire [7:0] _GEN_822 = _T_3 ? regNR43 : _GEN_781; // @[IORegisters.scala 216:21 119:24]
  wire [7:0] _GEN_823 = _T_3 ? regNR44 : _GEN_782; // @[IORegisters.scala 216:21 120:24]
  wire [7:0] _GEN_824 = _T_3 ? regNR50 : _GEN_783; // @[IORegisters.scala 216:21 121:24]
  wire [7:0] _GEN_825 = _T_3 ? regNR51 : _GEN_784; // @[IORegisters.scala 216:21 122:24]
  wire [7:0] _GEN_826 = _T_3 ? regNR52 : _GEN_785; // @[IORegisters.scala 216:21 123:24]
  wire [7:0] _GEN_827 = _T_3 ? regLCDC : _GEN_786; // @[IORegisters.scala 216:21 128:24]
  wire [7:0] _GEN_828 = _T_3 ? regSTAT : _GEN_787; // @[IORegisters.scala 216:21 129:24]
  wire [7:0] _GEN_829 = _T_3 ? regSCY : _GEN_788; // @[IORegisters.scala 216:21 130:24]
  wire [7:0] _GEN_830 = _T_3 ? regSCX : _GEN_789; // @[IORegisters.scala 216:21 131:24]
  wire [7:0] _GEN_831 = _T_3 ? regLYC : _GEN_790; // @[IORegisters.scala 216:21 133:24]
  wire [7:0] _GEN_832 = _T_3 ? regDMA : _GEN_791; // @[IORegisters.scala 216:21 134:24]
  wire [7:0] _GEN_833 = _T_3 ? regBGP : _GEN_792; // @[IORegisters.scala 216:21 135:24]
  wire [7:0] _GEN_834 = _T_3 ? regOBP0 : _GEN_793; // @[IORegisters.scala 216:21 136:24]
  wire [7:0] _GEN_835 = _T_3 ? regOBP1 : _GEN_794; // @[IORegisters.scala 216:21 137:24]
  wire [7:0] _GEN_836 = _T_3 ? regWY : _GEN_795; // @[IORegisters.scala 216:21 138:24]
  wire [7:0] _GEN_837 = _T_3 ? regWX : _GEN_796; // @[IORegisters.scala 216:21 139:24]
  wire [7:0] _GEN_838 = _T_3 ? regBOOT : _GEN_797; // @[IORegisters.scala 216:21 144:24]
  assign io_readData = 8'h0 == io_addr ? regP1 : _GEN_45; // @[IORegisters.scala 152:19 154:27]
  assign io_ppuLcdc = regLCDC; // @[IORegisters.scala 291:14]
  assign io_ppuBgp = regBGP; // @[IORegisters.scala 296:14]
  always @(posedge clock) begin
    if (reset) begin // @[IORegisters.scala 52:22]
      regP1 <= 8'hff; // @[IORegisters.scala 52:22]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (_T_1) begin // @[IORegisters.scala 216:21]
        regP1 <= _regP1_T; // @[IORegisters.scala 218:26]
      end
    end
    if (reset) begin // @[IORegisters.scala 57:22]
      regSB <= 8'h0; // @[IORegisters.scala 57:22]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (_T_2) begin // @[IORegisters.scala 216:21]
          regSB <= io_writeData; // @[IORegisters.scala 222:15]
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 58:22]
      regSC <= 8'h7e; // @[IORegisters.scala 58:22]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regSC <= _GEN_798;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 68:24]
      regDIV <= 8'hab; // @[IORegisters.scala 68:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (_T_1) begin // @[IORegisters.scala 216:21]
        regDIV <= _GEN_0;
      end else if (_T_2) begin // @[IORegisters.scala 216:21]
        regDIV <= _GEN_0;
      end else begin
        regDIV <= _GEN_801;
      end
    end else begin
      regDIV <= _GEN_0;
    end
    if (reset) begin // @[IORegisters.scala 69:24]
      regTIMA <= 8'h0; // @[IORegisters.scala 69:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regTIMA <= _GEN_802;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 70:24]
      regTMA <= 8'h0; // @[IORegisters.scala 70:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regTMA <= _GEN_803;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 71:24]
      regTAC <= 8'hf8; // @[IORegisters.scala 71:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regTAC <= _GEN_804;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 73:27]
      divCounter <= 16'h0; // @[IORegisters.scala 73:27]
    end else if (divCounter == 16'hff) begin // @[IORegisters.scala 77:30]
      divCounter <= 16'h0; // @[IORegisters.scala 79:16]
    end else begin
      divCounter <= _divCounter_T_1; // @[IORegisters.scala 76:14]
    end
    if (reset) begin // @[IORegisters.scala 85:22]
      regIF <= 8'he1; // @[IORegisters.scala 85:22]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (_T_1) begin // @[IORegisters.scala 216:21]
        regIF <= _GEN_2;
      end else if (_T_2) begin // @[IORegisters.scala 216:21]
        regIF <= _GEN_2;
      end else begin
        regIF <= _GEN_805;
      end
    end else begin
      regIF <= _GEN_2;
    end
    if (reset) begin // @[IORegisters.scala 103:24]
      regNR10 <= 8'h80; // @[IORegisters.scala 103:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR10 <= _GEN_806;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 104:24]
      regNR11 <= 8'hbf; // @[IORegisters.scala 104:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR11 <= _GEN_807;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 105:24]
      regNR12 <= 8'hf3; // @[IORegisters.scala 105:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR12 <= _GEN_808;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 106:24]
      regNR13 <= 8'hff; // @[IORegisters.scala 106:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR13 <= _GEN_809;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 107:24]
      regNR14 <= 8'hbf; // @[IORegisters.scala 107:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR14 <= _GEN_810;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 108:24]
      regNR21 <= 8'h3f; // @[IORegisters.scala 108:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR21 <= _GEN_811;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 109:24]
      regNR22 <= 8'h0; // @[IORegisters.scala 109:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR22 <= _GEN_812;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 110:24]
      regNR23 <= 8'hff; // @[IORegisters.scala 110:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR23 <= _GEN_813;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 111:24]
      regNR24 <= 8'hbf; // @[IORegisters.scala 111:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR24 <= _GEN_814;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 112:24]
      regNR30 <= 8'h7f; // @[IORegisters.scala 112:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR30 <= _GEN_815;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 113:24]
      regNR31 <= 8'hff; // @[IORegisters.scala 113:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR31 <= _GEN_816;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 114:24]
      regNR32 <= 8'h9f; // @[IORegisters.scala 114:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR32 <= _GEN_817;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 115:24]
      regNR33 <= 8'hff; // @[IORegisters.scala 115:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR33 <= _GEN_818;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 116:24]
      regNR34 <= 8'hbf; // @[IORegisters.scala 116:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR34 <= _GEN_819;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 117:24]
      regNR41 <= 8'hff; // @[IORegisters.scala 117:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR41 <= _GEN_820;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 118:24]
      regNR42 <= 8'h0; // @[IORegisters.scala 118:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR42 <= _GEN_821;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 119:24]
      regNR43 <= 8'h0; // @[IORegisters.scala 119:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR43 <= _GEN_822;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 120:24]
      regNR44 <= 8'hbf; // @[IORegisters.scala 120:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR44 <= _GEN_823;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 121:24]
      regNR50 <= 8'h77; // @[IORegisters.scala 121:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR50 <= _GEN_824;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 122:24]
      regNR51 <= 8'hf3; // @[IORegisters.scala 122:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR51 <= _GEN_825;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 123:24]
      regNR52 <= 8'hf1; // @[IORegisters.scala 123:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regNR52 <= _GEN_826;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 128:24]
      regLCDC <= 8'h91; // @[IORegisters.scala 128:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regLCDC <= _GEN_827;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 129:24]
      regSTAT <= 8'h85; // @[IORegisters.scala 129:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regSTAT <= _GEN_828;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 130:24]
      regSCY <= 8'h0; // @[IORegisters.scala 130:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regSCY <= _GEN_829;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 131:24]
      regSCX <= 8'h0; // @[IORegisters.scala 131:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regSCX <= _GEN_830;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 133:24]
      regLYC <= 8'h0; // @[IORegisters.scala 133:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regLYC <= _GEN_831;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 134:24]
      regDMA <= 8'hff; // @[IORegisters.scala 134:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regDMA <= _GEN_832;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 135:24]
      regBGP <= 8'hfc; // @[IORegisters.scala 135:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regBGP <= _GEN_833;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 136:24]
      regOBP0 <= 8'h0; // @[IORegisters.scala 136:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regOBP0 <= _GEN_834;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 137:24]
      regOBP1 <= 8'h0; // @[IORegisters.scala 137:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regOBP1 <= _GEN_835;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 138:24]
      regWY <= 8'h0; // @[IORegisters.scala 138:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regWY <= _GEN_836;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 139:24]
      regWX <= 8'h0; // @[IORegisters.scala 139:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regWX <= _GEN_837;
        end
      end
    end
    if (reset) begin // @[IORegisters.scala 144:24]
      regBOOT <= 8'hff; // @[IORegisters.scala 144:24]
    end else if (io_write) begin // @[IORegisters.scala 215:18]
      if (!(_T_1)) begin // @[IORegisters.scala 216:21]
        if (!(_T_2)) begin // @[IORegisters.scala 216:21]
          regBOOT <= _GEN_838;
        end
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_write & ~_T_1 & ~_T_2 & _T_3 & io_writeData[7] & ~reset) begin
          $fwrite(32'h80000002,"[SERIAL] 0x%x '%c'\n",regSB,regSB); // @[IORegisters.scala 231:17]
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
  regP1 = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  regSB = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  regSC = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  regDIV = _RAND_3[7:0];
  _RAND_4 = {1{`RANDOM}};
  regTIMA = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  regTMA = _RAND_5[7:0];
  _RAND_6 = {1{`RANDOM}};
  regTAC = _RAND_6[7:0];
  _RAND_7 = {1{`RANDOM}};
  divCounter = _RAND_7[15:0];
  _RAND_8 = {1{`RANDOM}};
  regIF = _RAND_8[7:0];
  _RAND_9 = {1{`RANDOM}};
  regNR10 = _RAND_9[7:0];
  _RAND_10 = {1{`RANDOM}};
  regNR11 = _RAND_10[7:0];
  _RAND_11 = {1{`RANDOM}};
  regNR12 = _RAND_11[7:0];
  _RAND_12 = {1{`RANDOM}};
  regNR13 = _RAND_12[7:0];
  _RAND_13 = {1{`RANDOM}};
  regNR14 = _RAND_13[7:0];
  _RAND_14 = {1{`RANDOM}};
  regNR21 = _RAND_14[7:0];
  _RAND_15 = {1{`RANDOM}};
  regNR22 = _RAND_15[7:0];
  _RAND_16 = {1{`RANDOM}};
  regNR23 = _RAND_16[7:0];
  _RAND_17 = {1{`RANDOM}};
  regNR24 = _RAND_17[7:0];
  _RAND_18 = {1{`RANDOM}};
  regNR30 = _RAND_18[7:0];
  _RAND_19 = {1{`RANDOM}};
  regNR31 = _RAND_19[7:0];
  _RAND_20 = {1{`RANDOM}};
  regNR32 = _RAND_20[7:0];
  _RAND_21 = {1{`RANDOM}};
  regNR33 = _RAND_21[7:0];
  _RAND_22 = {1{`RANDOM}};
  regNR34 = _RAND_22[7:0];
  _RAND_23 = {1{`RANDOM}};
  regNR41 = _RAND_23[7:0];
  _RAND_24 = {1{`RANDOM}};
  regNR42 = _RAND_24[7:0];
  _RAND_25 = {1{`RANDOM}};
  regNR43 = _RAND_25[7:0];
  _RAND_26 = {1{`RANDOM}};
  regNR44 = _RAND_26[7:0];
  _RAND_27 = {1{`RANDOM}};
  regNR50 = _RAND_27[7:0];
  _RAND_28 = {1{`RANDOM}};
  regNR51 = _RAND_28[7:0];
  _RAND_29 = {1{`RANDOM}};
  regNR52 = _RAND_29[7:0];
  _RAND_30 = {1{`RANDOM}};
  regLCDC = _RAND_30[7:0];
  _RAND_31 = {1{`RANDOM}};
  regSTAT = _RAND_31[7:0];
  _RAND_32 = {1{`RANDOM}};
  regSCY = _RAND_32[7:0];
  _RAND_33 = {1{`RANDOM}};
  regSCX = _RAND_33[7:0];
  _RAND_34 = {1{`RANDOM}};
  regLYC = _RAND_34[7:0];
  _RAND_35 = {1{`RANDOM}};
  regDMA = _RAND_35[7:0];
  _RAND_36 = {1{`RANDOM}};
  regBGP = _RAND_36[7:0];
  _RAND_37 = {1{`RANDOM}};
  regOBP0 = _RAND_37[7:0];
  _RAND_38 = {1{`RANDOM}};
  regOBP1 = _RAND_38[7:0];
  _RAND_39 = {1{`RANDOM}};
  regWY = _RAND_39[7:0];
  _RAND_40 = {1{`RANDOM}};
  regWX = _RAND_40[7:0];
  _RAND_41 = {1{`RANDOM}};
  regBOOT = _RAND_41[7:0];
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
  input         io_cpuRead,
  input         io_cpuWrite,
  input  [7:0]  io_cpuWriteData,
  output [7:0]  io_cpuReadData,
  input  [7:0]  io_ppuLY,
  input         io_ppuVblankIRQ,
  output [7:0]  io_ppuLcdc,
  output [7:0]  io_ppuBgp,
  input  [31:0] io_extRomLoadAddr,
  input  [7:0]  io_extRomLoadData,
  input         io_extRomLoadEn
);
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_24;
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_23;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
`endif // RANDOMIZE_REG_INIT
  wire [15:0] bootRom_io_address; // @[MemoryMap.scala 59:23]
  wire [7:0] bootRom_io_dataOut; // @[MemoryMap.scala 59:23]
  wire  bootRom_io_valid; // @[MemoryMap.scala 59:23]
  wire  bootRom_io_enabled; // @[MemoryMap.scala 59:23]
  wire  ioRegs_clock; // @[MemoryMap.scala 68:22]
  wire  ioRegs_reset; // @[MemoryMap.scala 68:22]
  wire [7:0] ioRegs_io_addr; // @[MemoryMap.scala 68:22]
  wire  ioRegs_io_write; // @[MemoryMap.scala 68:22]
  wire [7:0] ioRegs_io_writeData; // @[MemoryMap.scala 68:22]
  wire [7:0] ioRegs_io_readData; // @[MemoryMap.scala 68:22]
  wire  ioRegs_io_vblankIRQ; // @[MemoryMap.scala 68:22]
  wire [7:0] ioRegs_io_ppuLcdc; // @[MemoryMap.scala 68:22]
  wire [7:0] ioRegs_io_ppuLy; // @[MemoryMap.scala 68:22]
  wire [7:0] ioRegs_io_ppuBgp; // @[MemoryMap.scala 68:22]
  reg [7:0] rom [0:1048575]; // @[MemoryMap.scala 77:24]
  wire  rom_cartRomOut_en; // @[MemoryMap.scala 77:24]
  wire [19:0] rom_cartRomOut_addr; // @[MemoryMap.scala 77:24]
  wire [7:0] rom_cartRomOut_data; // @[MemoryMap.scala 77:24]
  wire [7:0] rom_MPORT_data; // @[MemoryMap.scala 77:24]
  wire [19:0] rom_MPORT_addr; // @[MemoryMap.scala 77:24]
  wire  rom_MPORT_mask; // @[MemoryMap.scala 77:24]
  wire  rom_MPORT_en; // @[MemoryMap.scala 77:24]
  reg  rom_cartRomOut_en_pipe_0;
  reg [19:0] rom_cartRomOut_addr_pipe_0;
  reg [7:0] vram [0:8191]; // @[MemoryMap.scala 86:25]
  wire  vram_rdata_MPORT_en; // @[MemoryMap.scala 86:25]
  wire [12:0] vram_rdata_MPORT_addr; // @[MemoryMap.scala 86:25]
  wire [7:0] vram_rdata_MPORT_data; // @[MemoryMap.scala 86:25]
  wire  vram_io_ppuVramData_MPORT_en; // @[MemoryMap.scala 86:25]
  wire [12:0] vram_io_ppuVramData_MPORT_addr; // @[MemoryMap.scala 86:25]
  wire [7:0] vram_io_ppuVramData_MPORT_data; // @[MemoryMap.scala 86:25]
  wire [7:0] vram_MPORT_1_data; // @[MemoryMap.scala 86:25]
  wire [12:0] vram_MPORT_1_addr; // @[MemoryMap.scala 86:25]
  wire  vram_MPORT_1_mask; // @[MemoryMap.scala 86:25]
  wire  vram_MPORT_1_en; // @[MemoryMap.scala 86:25]
  reg  vram_rdata_MPORT_en_pipe_0;
  reg [12:0] vram_rdata_MPORT_addr_pipe_0;
  reg  vram_io_ppuVramData_MPORT_en_pipe_0;
  reg [12:0] vram_io_ppuVramData_MPORT_addr_pipe_0;
  reg [7:0] extRam [0:8191]; // @[MemoryMap.scala 87:27]
  wire  extRam_rdata_MPORT_1_en; // @[MemoryMap.scala 87:27]
  wire [12:0] extRam_rdata_MPORT_1_addr; // @[MemoryMap.scala 87:27]
  wire [7:0] extRam_rdata_MPORT_1_data; // @[MemoryMap.scala 87:27]
  wire [7:0] extRam_MPORT_2_data; // @[MemoryMap.scala 87:27]
  wire [12:0] extRam_MPORT_2_addr; // @[MemoryMap.scala 87:27]
  wire  extRam_MPORT_2_mask; // @[MemoryMap.scala 87:27]
  wire  extRam_MPORT_2_en; // @[MemoryMap.scala 87:27]
  reg  extRam_rdata_MPORT_1_en_pipe_0;
  reg [12:0] extRam_rdata_MPORT_1_addr_pipe_0;
  reg [7:0] wram [0:8191]; // @[MemoryMap.scala 88:25]
  wire  wram_rdata_MPORT_2_en; // @[MemoryMap.scala 88:25]
  wire [12:0] wram_rdata_MPORT_2_addr; // @[MemoryMap.scala 88:25]
  wire [7:0] wram_rdata_MPORT_2_data; // @[MemoryMap.scala 88:25]
  wire  wram_rdata_MPORT_3_en; // @[MemoryMap.scala 88:25]
  wire [12:0] wram_rdata_MPORT_3_addr; // @[MemoryMap.scala 88:25]
  wire [7:0] wram_rdata_MPORT_3_data; // @[MemoryMap.scala 88:25]
  wire [7:0] wram_MPORT_3_data; // @[MemoryMap.scala 88:25]
  wire [12:0] wram_MPORT_3_addr; // @[MemoryMap.scala 88:25]
  wire  wram_MPORT_3_mask; // @[MemoryMap.scala 88:25]
  wire  wram_MPORT_3_en; // @[MemoryMap.scala 88:25]
  wire [7:0] wram_MPORT_4_data; // @[MemoryMap.scala 88:25]
  wire [12:0] wram_MPORT_4_addr; // @[MemoryMap.scala 88:25]
  wire  wram_MPORT_4_mask; // @[MemoryMap.scala 88:25]
  wire  wram_MPORT_4_en; // @[MemoryMap.scala 88:25]
  reg  wram_rdata_MPORT_2_en_pipe_0;
  reg [12:0] wram_rdata_MPORT_2_addr_pipe_0;
  reg  wram_rdata_MPORT_3_en_pipe_0;
  reg [12:0] wram_rdata_MPORT_3_addr_pipe_0;
  reg [7:0] oam [0:159]; // @[MemoryMap.scala 89:25]
  wire  oam_rdata_MPORT_4_en; // @[MemoryMap.scala 89:25]
  wire [7:0] oam_rdata_MPORT_4_addr; // @[MemoryMap.scala 89:25]
  wire [7:0] oam_rdata_MPORT_4_data; // @[MemoryMap.scala 89:25]
  wire  oam_io_ppuOamData_MPORT_en; // @[MemoryMap.scala 89:25]
  wire [7:0] oam_io_ppuOamData_MPORT_addr; // @[MemoryMap.scala 89:25]
  wire [7:0] oam_io_ppuOamData_MPORT_data; // @[MemoryMap.scala 89:25]
  wire [7:0] oam_MPORT_5_data; // @[MemoryMap.scala 89:25]
  wire [7:0] oam_MPORT_5_addr; // @[MemoryMap.scala 89:25]
  wire  oam_MPORT_5_mask; // @[MemoryMap.scala 89:25]
  wire  oam_MPORT_5_en; // @[MemoryMap.scala 89:25]
  reg  oam_rdata_MPORT_4_en_pipe_0;
  reg [7:0] oam_rdata_MPORT_4_addr_pipe_0;
  reg  oam_io_ppuOamData_MPORT_en_pipe_0;
  reg [7:0] oam_io_ppuOamData_MPORT_addr_pipe_0;
  reg [7:0] hram [0:126]; // @[MemoryMap.scala 90:17]
  wire  hram_rdata_MPORT_5_en; // @[MemoryMap.scala 90:17]
  wire [6:0] hram_rdata_MPORT_5_addr; // @[MemoryMap.scala 90:17]
  wire [7:0] hram_rdata_MPORT_5_data; // @[MemoryMap.scala 90:17]
  wire [7:0] hram_MPORT_6_data; // @[MemoryMap.scala 90:17]
  wire [6:0] hram_MPORT_6_addr; // @[MemoryMap.scala 90:17]
  wire  hram_MPORT_6_mask; // @[MemoryMap.scala 90:17]
  wire  hram_MPORT_6_en; // @[MemoryMap.scala 90:17]
  reg  bootRomEnable; // @[MemoryMap.scala 60:30]
  reg  ramEnabled; // @[MemoryMap.scala 92:27]
  reg [7:0] regIE; // @[MemoryMap.scala 94:22]
  wire [7:0] bootOut = bootRom_io_valid ? bootRom_io_dataOut : 8'h0; // @[MemoryMap.scala 106:20]
  wire  _T_1 = io_cpuAddress < 16'h8000; // @[MemoryMap.scala 121:30]
  wire  _T_2 = io_cpuAddress < 16'ha000; // @[MemoryMap.scala 125:30]
  wire [15:0] _rdata_T_1 = io_cpuAddress - 16'h8000; // @[MemoryMap.scala 126:40]
  wire  _T_3 = io_cpuAddress < 16'hc000; // @[MemoryMap.scala 129:30]
  wire [15:0] _rdata_T_5 = io_cpuAddress - 16'ha000; // @[MemoryMap.scala 130:58]
  wire [7:0] _rdata_T_8 = ramEnabled ? extRam_rdata_MPORT_1_data : 8'hff; // @[MemoryMap.scala 130:19]
  wire  _T_4 = io_cpuAddress < 16'he000; // @[MemoryMap.scala 133:30]
  wire [15:0] _rdata_T_10 = io_cpuAddress - 16'hc000; // @[MemoryMap.scala 134:40]
  wire  _T_5 = io_cpuAddress < 16'hfe00; // @[MemoryMap.scala 137:30]
  wire [15:0] _rdata_T_14 = io_cpuAddress - 16'he000; // @[MemoryMap.scala 138:40]
  wire  _T_6 = io_cpuAddress < 16'hfea0; // @[MemoryMap.scala 141:30]
  wire [15:0] _rdata_T_18 = io_cpuAddress - 16'hfe00; // @[MemoryMap.scala 142:39]
  wire  _T_7 = io_cpuAddress < 16'hff00; // @[MemoryMap.scala 145:30]
  wire  _T_8 = io_cpuAddress < 16'hff80; // @[MemoryMap.scala 149:30]
  wire [15:0] ioAddr = io_cpuAddress - 16'hff00; // @[MemoryMap.scala 150:34]
  wire  _T_10 = ioAddr == 16'h50; // @[MemoryMap.scala 156:25]
  wire  _rdata_T_21 = bootRomEnable ? 1'h0 : 1'h1; // @[MemoryMap.scala 157:21]
  wire [7:0] _GEN_21 = ioAddr == 16'h50 ? {{7'd0}, _rdata_T_21} : ioRegs_io_readData; // @[MemoryMap.scala 156:37 157:15 160:15]
  wire [7:0] _GEN_22 = ioAddr == 16'h44 ? io_ppuLY : _GEN_21; // @[MemoryMap.scala 153:31 154:15]
  wire  _T_11 = io_cpuAddress < 16'hffff; // @[MemoryMap.scala 164:30]
  wire [15:0] _rdata_T_23 = io_cpuAddress - 16'hff80; // @[MemoryMap.scala 165:35]
  wire [7:0] _GEN_26 = io_cpuAddress < 16'hffff ? hram_rdata_MPORT_5_data : regIE; // @[MemoryMap.scala 164:42 165:13 169:13]
  wire [15:0] _GEN_27 = io_cpuAddress < 16'hff80 ? ioAddr : 16'h0; // @[MemoryMap.scala 110:18 149:42 151:22]
  wire [7:0] _GEN_28 = io_cpuAddress < 16'hff80 ? _GEN_22 : _GEN_26; // @[MemoryMap.scala 149:42]
  wire  _GEN_31 = io_cpuAddress < 16'hff80 ? 1'h0 : _T_11; // @[MemoryMap.scala 149:42 90:17]
  wire [7:0] _GEN_32 = io_cpuAddress < 16'hff00 ? 8'hff : _GEN_28; // @[MemoryMap.scala 145:42 146:13]
  wire [15:0] _GEN_33 = io_cpuAddress < 16'hff00 ? 16'h0 : _GEN_27; // @[MemoryMap.scala 110:18 145:42]
  wire  _GEN_36 = io_cpuAddress < 16'hff00 ? 1'h0 : _GEN_31; // @[MemoryMap.scala 145:42 90:17]
  wire [7:0] _GEN_40 = io_cpuAddress < 16'hfea0 ? oam_rdata_MPORT_4_data : _GEN_32; // @[MemoryMap.scala 141:42 142:13]
  wire [15:0] _GEN_41 = io_cpuAddress < 16'hfea0 ? 16'h0 : _GEN_33; // @[MemoryMap.scala 110:18 141:42]
  wire  _GEN_44 = io_cpuAddress < 16'hfea0 ? 1'h0 : _GEN_36; // @[MemoryMap.scala 141:42 90:17]
  wire [7:0] _GEN_48 = io_cpuAddress < 16'hfe00 ? wram_rdata_MPORT_3_data : _GEN_40; // @[MemoryMap.scala 137:42 138:13]
  wire  _GEN_49 = io_cpuAddress < 16'hfe00 ? 1'h0 : _T_6; // @[MemoryMap.scala 137:42 89:25]
  wire [15:0] _GEN_52 = io_cpuAddress < 16'hfe00 ? 16'h0 : _GEN_41; // @[MemoryMap.scala 110:18 137:42]
  wire  _GEN_55 = io_cpuAddress < 16'hfe00 ? 1'h0 : _GEN_44; // @[MemoryMap.scala 137:42 90:17]
  wire [7:0] _GEN_59 = io_cpuAddress < 16'he000 ? wram_rdata_MPORT_2_data : _GEN_48; // @[MemoryMap.scala 133:42 134:13]
  wire  _GEN_60 = io_cpuAddress < 16'he000 ? 1'h0 : _T_5; // @[MemoryMap.scala 133:42 88:25]
  wire  _GEN_63 = io_cpuAddress < 16'he000 ? 1'h0 : _GEN_49; // @[MemoryMap.scala 133:42 89:25]
  wire [15:0] _GEN_66 = io_cpuAddress < 16'he000 ? 16'h0 : _GEN_52; // @[MemoryMap.scala 110:18 133:42]
  wire  _GEN_69 = io_cpuAddress < 16'he000 ? 1'h0 : _GEN_55; // @[MemoryMap.scala 133:42 90:17]
  wire [7:0] _GEN_73 = io_cpuAddress < 16'hc000 ? _rdata_T_8 : _GEN_59; // @[MemoryMap.scala 129:42 130:13]
  wire  _GEN_74 = io_cpuAddress < 16'hc000 ? 1'h0 : _T_4; // @[MemoryMap.scala 129:42 88:25]
  wire  _GEN_77 = io_cpuAddress < 16'hc000 ? 1'h0 : _GEN_60; // @[MemoryMap.scala 129:42 88:25]
  wire  _GEN_80 = io_cpuAddress < 16'hc000 ? 1'h0 : _GEN_63; // @[MemoryMap.scala 129:42 89:25]
  wire [15:0] _GEN_83 = io_cpuAddress < 16'hc000 ? 16'h0 : _GEN_66; // @[MemoryMap.scala 110:18 129:42]
  wire  _GEN_86 = io_cpuAddress < 16'hc000 ? 1'h0 : _GEN_69; // @[MemoryMap.scala 129:42 90:17]
  wire [7:0] _GEN_90 = io_cpuAddress < 16'ha000 ? vram_rdata_MPORT_data : _GEN_73; // @[MemoryMap.scala 125:42 126:13]
  wire  _GEN_91 = io_cpuAddress < 16'ha000 ? 1'h0 : _T_3; // @[MemoryMap.scala 125:42 87:27]
  wire  _GEN_94 = io_cpuAddress < 16'ha000 ? 1'h0 : _GEN_74; // @[MemoryMap.scala 125:42 88:25]
  wire  _GEN_97 = io_cpuAddress < 16'ha000 ? 1'h0 : _GEN_77; // @[MemoryMap.scala 125:42 88:25]
  wire  _GEN_100 = io_cpuAddress < 16'ha000 ? 1'h0 : _GEN_80; // @[MemoryMap.scala 125:42 89:25]
  wire [15:0] _GEN_103 = io_cpuAddress < 16'ha000 ? 16'h0 : _GEN_83; // @[MemoryMap.scala 110:18 125:42]
  wire  _GEN_106 = io_cpuAddress < 16'ha000 ? 1'h0 : _GEN_86; // @[MemoryMap.scala 125:42 90:17]
  wire [7:0] _GEN_107 = io_cpuAddress < 16'h8000 ? rom_cartRomOut_data : _GEN_90; // @[MemoryMap.scala 121:42 122:13]
  wire  _GEN_108 = io_cpuAddress < 16'h8000 ? 1'h0 : _T_2; // @[MemoryMap.scala 121:42 86:25]
  wire  _GEN_111 = io_cpuAddress < 16'h8000 ? 1'h0 : _GEN_91; // @[MemoryMap.scala 121:42 87:27]
  wire  _GEN_114 = io_cpuAddress < 16'h8000 ? 1'h0 : _GEN_94; // @[MemoryMap.scala 121:42 88:25]
  wire  _GEN_117 = io_cpuAddress < 16'h8000 ? 1'h0 : _GEN_97; // @[MemoryMap.scala 121:42 88:25]
  wire  _GEN_120 = io_cpuAddress < 16'h8000 ? 1'h0 : _GEN_100; // @[MemoryMap.scala 121:42 89:25]
  wire [15:0] _GEN_123 = io_cpuAddress < 16'h8000 ? 16'h0 : _GEN_103; // @[MemoryMap.scala 110:18 121:42]
  wire  _GEN_126 = io_cpuAddress < 16'h8000 ? 1'h0 : _GEN_106; // @[MemoryMap.scala 121:42 90:17]
  wire [7:0] _GEN_127 = bootRom_io_valid ? bootOut : _GEN_107; // @[MemoryMap.scala 117:28 118:13]
  wire  _GEN_128 = bootRom_io_valid ? 1'h0 : _GEN_108; // @[MemoryMap.scala 117:28 86:25]
  wire  _GEN_131 = bootRom_io_valid ? 1'h0 : _GEN_111; // @[MemoryMap.scala 117:28 87:27]
  wire  _GEN_134 = bootRom_io_valid ? 1'h0 : _GEN_114; // @[MemoryMap.scala 117:28 88:25]
  wire  _GEN_137 = bootRom_io_valid ? 1'h0 : _GEN_117; // @[MemoryMap.scala 117:28 88:25]
  wire  _GEN_140 = bootRom_io_valid ? 1'h0 : _GEN_120; // @[MemoryMap.scala 117:28 89:25]
  wire [15:0] _GEN_143 = bootRom_io_valid ? 16'h0 : _GEN_123; // @[MemoryMap.scala 110:18 117:28]
  wire  _GEN_146 = bootRom_io_valid ? 1'h0 : _GEN_126; // @[MemoryMap.scala 117:28 90:17]
  wire [15:0] _GEN_163 = io_cpuRead ? _GEN_143 : 16'h0; // @[MemoryMap.scala 110:18 114:20]
  wire [7:0] _ramEnabled_T = io_cpuWriteData & 8'hf; // @[MemoryMap.scala 181:38]
  wire  _GEN_172 = io_cpuWriteData != 8'h0 ? 1'h0 : bootRomEnable; // @[MemoryMap.scala 217:39 218:25 60:30]
  wire  _GEN_173 = _T_10 ? _GEN_172 : bootRomEnable; // @[MemoryMap.scala 216:31 60:30]
  wire [15:0] _GEN_174 = _T_10 ? _GEN_163 : ioAddr; // @[MemoryMap.scala 216:31 221:24]
  wire  _GEN_175 = _T_10 ? 1'h0 : 1'h1; // @[MemoryMap.scala 111:19 216:31 222:25]
  wire [7:0] _GEN_176 = _T_10 ? 8'h0 : io_cpuWriteData; // @[MemoryMap.scala 112:23 216:31 223:29]
  wire [7:0] _GEN_182 = _T_11 ? regIE : io_cpuWriteData; // @[MemoryMap.scala 226:42 230:13 94:22]
  wire  _GEN_183 = _T_8 ? _GEN_173 : bootRomEnable; // @[MemoryMap.scala 213:42 60:30]
  wire [15:0] _GEN_184 = _T_8 ? _GEN_174 : _GEN_163; // @[MemoryMap.scala 213:42]
  wire  _GEN_185 = _T_8 & _GEN_175; // @[MemoryMap.scala 111:19 213:42]
  wire [7:0] _GEN_186 = _T_8 ? _GEN_176 : 8'h0; // @[MemoryMap.scala 112:23 213:42]
  wire [7:0] _GEN_192 = _T_8 ? regIE : _GEN_182; // @[MemoryMap.scala 213:42 94:22]
  wire  _GEN_193 = _T_7 ? bootRomEnable : _GEN_183; // @[MemoryMap.scala 210:42 60:30]
  wire [15:0] _GEN_194 = _T_7 ? _GEN_163 : _GEN_184; // @[MemoryMap.scala 210:42]
  wire  _GEN_195 = _T_7 ? 1'h0 : _GEN_185; // @[MemoryMap.scala 111:19 210:42]
  wire [7:0] _GEN_196 = _T_7 ? 8'h0 : _GEN_186; // @[MemoryMap.scala 112:23 210:42]
  wire [7:0] _GEN_202 = _T_7 ? regIE : _GEN_192; // @[MemoryMap.scala 210:42 94:22]
  wire  _GEN_208 = _T_6 ? bootRomEnable : _GEN_193; // @[MemoryMap.scala 207:42 60:30]
  wire [15:0] _GEN_209 = _T_6 ? _GEN_163 : _GEN_194; // @[MemoryMap.scala 207:42]
  wire  _GEN_210 = _T_6 ? 1'h0 : _GEN_195; // @[MemoryMap.scala 111:19 207:42]
  wire [7:0] _GEN_211 = _T_6 ? 8'h0 : _GEN_196; // @[MemoryMap.scala 112:23 207:42]
  wire [7:0] _GEN_217 = _T_6 ? regIE : _GEN_202; // @[MemoryMap.scala 207:42 94:22]
  wire  _GEN_228 = _T_5 ? bootRomEnable : _GEN_208; // @[MemoryMap.scala 204:42 60:30]
  wire [15:0] _GEN_229 = _T_5 ? _GEN_163 : _GEN_209; // @[MemoryMap.scala 204:42]
  wire  _GEN_230 = _T_5 ? 1'h0 : _GEN_210; // @[MemoryMap.scala 111:19 204:42]
  wire [7:0] _GEN_231 = _T_5 ? 8'h0 : _GEN_211; // @[MemoryMap.scala 112:23 204:42]
  wire [7:0] _GEN_237 = _T_5 ? regIE : _GEN_217; // @[MemoryMap.scala 204:42 94:22]
  wire  _GEN_253 = _T_4 ? bootRomEnable : _GEN_228; // @[MemoryMap.scala 201:42 60:30]
  wire [15:0] _GEN_254 = _T_4 ? _GEN_163 : _GEN_229; // @[MemoryMap.scala 201:42]
  wire  _GEN_255 = _T_4 ? 1'h0 : _GEN_230; // @[MemoryMap.scala 111:19 201:42]
  wire [7:0] _GEN_256 = _T_4 ? 8'h0 : _GEN_231; // @[MemoryMap.scala 112:23 201:42]
  wire [7:0] _GEN_262 = _T_4 ? regIE : _GEN_237; // @[MemoryMap.scala 201:42 94:22]
  wire  _GEN_265 = _T_3 & ramEnabled; // @[MemoryMap.scala 196:42 87:27]
  wire  _GEN_283 = _T_3 ? bootRomEnable : _GEN_253; // @[MemoryMap.scala 196:42 60:30]
  wire [15:0] _GEN_284 = _T_3 ? _GEN_163 : _GEN_254; // @[MemoryMap.scala 196:42]
  wire  _GEN_285 = _T_3 ? 1'h0 : _GEN_255; // @[MemoryMap.scala 111:19 196:42]
  wire [7:0] _GEN_286 = _T_3 ? 8'h0 : _GEN_256; // @[MemoryMap.scala 112:23 196:42]
  wire [7:0] _GEN_292 = _T_3 ? regIE : _GEN_262; // @[MemoryMap.scala 196:42 94:22]
  wire  _GEN_300 = _T_2 ? 1'h0 : _GEN_265; // @[MemoryMap.scala 193:42 87:27]
  wire  _GEN_318 = _T_2 ? bootRomEnable : _GEN_283; // @[MemoryMap.scala 193:42 60:30]
  wire [15:0] _GEN_319 = _T_2 ? _GEN_163 : _GEN_284; // @[MemoryMap.scala 193:42]
  wire  _GEN_320 = _T_2 ? 1'h0 : _GEN_285; // @[MemoryMap.scala 111:19 193:42]
  wire [7:0] _GEN_321 = _T_2 ? 8'h0 : _GEN_286; // @[MemoryMap.scala 112:23 193:42]
  wire [7:0] _GEN_327 = _T_2 ? regIE : _GEN_292; // @[MemoryMap.scala 193:42 94:22]
  wire  _GEN_335 = _T_1 ? 1'h0 : _GEN_300; // @[MemoryMap.scala 190:42 87:27]
  wire  _GEN_353 = _T_1 ? bootRomEnable : _GEN_318; // @[MemoryMap.scala 190:42 60:30]
  wire [15:0] _GEN_354 = _T_1 ? _GEN_163 : _GEN_319; // @[MemoryMap.scala 190:42]
  wire  _GEN_355 = _T_1 ? 1'h0 : _GEN_320; // @[MemoryMap.scala 111:19 190:42]
  wire [7:0] _GEN_356 = _T_1 ? 8'h0 : _GEN_321; // @[MemoryMap.scala 112:23 190:42]
  wire [7:0] _GEN_362 = _T_1 ? regIE : _GEN_327; // @[MemoryMap.scala 190:42 94:22]
  wire  _GEN_366 = io_cpuAddress < 16'h6000 ? 1'h0 : _GEN_108; // @[MemoryMap.scala 187:42 86:25]
  wire  _GEN_371 = io_cpuAddress < 16'h6000 ? 1'h0 : _GEN_335; // @[MemoryMap.scala 187:42 87:27]
  wire  _GEN_376 = io_cpuAddress < 16'h6000 ? 1'h0 : _GEN_114; // @[MemoryMap.scala 187:42 88:25]
  wire  _GEN_381 = io_cpuAddress < 16'h6000 ? 1'h0 : _GEN_117; // @[MemoryMap.scala 187:42 88:25]
  wire  _GEN_386 = io_cpuAddress < 16'h6000 ? 1'h0 : _GEN_120; // @[MemoryMap.scala 187:42 89:25]
  wire  _GEN_389 = io_cpuAddress < 16'h6000 ? bootRomEnable : _GEN_353; // @[MemoryMap.scala 187:42 60:30]
  wire [15:0] _GEN_390 = io_cpuAddress < 16'h6000 ? _GEN_163 : _GEN_354; // @[MemoryMap.scala 187:42]
  wire  _GEN_391 = io_cpuAddress < 16'h6000 ? 1'h0 : _GEN_355; // @[MemoryMap.scala 111:19 187:42]
  wire [7:0] _GEN_392 = io_cpuAddress < 16'h6000 ? 8'h0 : _GEN_356; // @[MemoryMap.scala 112:23 187:42]
  wire  _GEN_395 = io_cpuAddress < 16'h6000 ? 1'h0 : _GEN_126; // @[MemoryMap.scala 187:42 90:17]
  wire [7:0] _GEN_398 = io_cpuAddress < 16'h6000 ? regIE : _GEN_362; // @[MemoryMap.scala 187:42 94:22]
  wire  _GEN_403 = io_cpuAddress < 16'h4000 ? 1'h0 : _GEN_366; // @[MemoryMap.scala 183:42 86:25]
  wire  _GEN_408 = io_cpuAddress < 16'h4000 ? 1'h0 : _GEN_371; // @[MemoryMap.scala 183:42 87:27]
  wire  _GEN_413 = io_cpuAddress < 16'h4000 ? 1'h0 : _GEN_376; // @[MemoryMap.scala 183:42 88:25]
  wire  _GEN_418 = io_cpuAddress < 16'h4000 ? 1'h0 : _GEN_381; // @[MemoryMap.scala 183:42 88:25]
  wire  _GEN_423 = io_cpuAddress < 16'h4000 ? 1'h0 : _GEN_386; // @[MemoryMap.scala 183:42 89:25]
  wire  _GEN_426 = io_cpuAddress < 16'h4000 ? bootRomEnable : _GEN_389; // @[MemoryMap.scala 183:42 60:30]
  wire [15:0] _GEN_427 = io_cpuAddress < 16'h4000 ? _GEN_163 : _GEN_390; // @[MemoryMap.scala 183:42]
  wire  _GEN_428 = io_cpuAddress < 16'h4000 ? 1'h0 : _GEN_391; // @[MemoryMap.scala 111:19 183:42]
  wire [7:0] _GEN_429 = io_cpuAddress < 16'h4000 ? 8'h0 : _GEN_392; // @[MemoryMap.scala 112:23 183:42]
  wire  _GEN_432 = io_cpuAddress < 16'h4000 ? 1'h0 : _GEN_395; // @[MemoryMap.scala 183:42 90:17]
  wire  _GEN_441 = io_cpuAddress < 16'h2000 ? 1'h0 : _GEN_403; // @[MemoryMap.scala 180:36 86:25]
  wire  _GEN_446 = io_cpuAddress < 16'h2000 ? 1'h0 : _GEN_408; // @[MemoryMap.scala 180:36 87:27]
  wire  _GEN_451 = io_cpuAddress < 16'h2000 ? 1'h0 : _GEN_413; // @[MemoryMap.scala 180:36 88:25]
  wire  _GEN_456 = io_cpuAddress < 16'h2000 ? 1'h0 : _GEN_418; // @[MemoryMap.scala 180:36 88:25]
  wire  _GEN_461 = io_cpuAddress < 16'h2000 ? 1'h0 : _GEN_423; // @[MemoryMap.scala 180:36 89:25]
  wire  _GEN_464 = io_cpuAddress < 16'h2000 ? bootRomEnable : _GEN_426; // @[MemoryMap.scala 180:36 60:30]
  wire [15:0] _GEN_465 = io_cpuAddress < 16'h2000 ? _GEN_163 : _GEN_427; // @[MemoryMap.scala 180:36]
  wire  _GEN_466 = io_cpuAddress < 16'h2000 ? 1'h0 : _GEN_428; // @[MemoryMap.scala 111:19 180:36]
  wire [7:0] _GEN_467 = io_cpuAddress < 16'h2000 ? 8'h0 : _GEN_429; // @[MemoryMap.scala 112:23 180:36]
  wire  _GEN_470 = io_cpuAddress < 16'h2000 ? 1'h0 : _GEN_432; // @[MemoryMap.scala 180:36 90:17]
  wire  _GEN_502 = io_cpuWrite ? _GEN_464 : bootRomEnable; // @[MemoryMap.scala 178:21 60:30]
  wire [15:0] _GEN_503 = io_cpuWrite ? _GEN_465 : _GEN_163; // @[MemoryMap.scala 178:21]
  BootRom bootRom ( // @[MemoryMap.scala 59:23]
    .io_address(bootRom_io_address),
    .io_dataOut(bootRom_io_dataOut),
    .io_valid(bootRom_io_valid),
    .io_enabled(bootRom_io_enabled)
  );
  IORegisters ioRegs ( // @[MemoryMap.scala 68:22]
    .clock(ioRegs_clock),
    .reset(ioRegs_reset),
    .io_addr(ioRegs_io_addr),
    .io_write(ioRegs_io_write),
    .io_writeData(ioRegs_io_writeData),
    .io_readData(ioRegs_io_readData),
    .io_vblankIRQ(ioRegs_io_vblankIRQ),
    .io_ppuLcdc(ioRegs_io_ppuLcdc),
    .io_ppuLy(ioRegs_io_ppuLy),
    .io_ppuBgp(ioRegs_io_ppuBgp)
  );
  assign rom_cartRomOut_en = rom_cartRomOut_en_pipe_0;
  assign rom_cartRomOut_addr = rom_cartRomOut_addr_pipe_0;
  assign rom_cartRomOut_data = rom[rom_cartRomOut_addr]; // @[MemoryMap.scala 77:24]
  assign rom_MPORT_data = io_extRomLoadData;
  assign rom_MPORT_addr = io_extRomLoadAddr[19:0];
  assign rom_MPORT_mask = 1'h1;
  assign rom_MPORT_en = io_extRomLoadEn;
  assign vram_rdata_MPORT_en = vram_rdata_MPORT_en_pipe_0;
  assign vram_rdata_MPORT_addr = vram_rdata_MPORT_addr_pipe_0;
  assign vram_rdata_MPORT_data = vram[vram_rdata_MPORT_addr]; // @[MemoryMap.scala 86:25]
  assign vram_io_ppuVramData_MPORT_en = vram_io_ppuVramData_MPORT_en_pipe_0;
  assign vram_io_ppuVramData_MPORT_addr = vram_io_ppuVramData_MPORT_addr_pipe_0;
  assign vram_io_ppuVramData_MPORT_data = vram[vram_io_ppuVramData_MPORT_addr]; // @[MemoryMap.scala 86:25]
  assign vram_MPORT_1_data = io_cpuWriteData;
  assign vram_MPORT_1_addr = _rdata_T_1[12:0];
  assign vram_MPORT_1_mask = 1'h1;
  assign vram_MPORT_1_en = io_cpuWrite & _GEN_441;
  assign extRam_rdata_MPORT_1_en = extRam_rdata_MPORT_1_en_pipe_0;
  assign extRam_rdata_MPORT_1_addr = extRam_rdata_MPORT_1_addr_pipe_0;
  assign extRam_rdata_MPORT_1_data = extRam[extRam_rdata_MPORT_1_addr]; // @[MemoryMap.scala 87:27]
  assign extRam_MPORT_2_data = io_cpuWriteData;
  assign extRam_MPORT_2_addr = _rdata_T_5[12:0];
  assign extRam_MPORT_2_mask = 1'h1;
  assign extRam_MPORT_2_en = io_cpuWrite & _GEN_446;
  assign wram_rdata_MPORT_2_en = wram_rdata_MPORT_2_en_pipe_0;
  assign wram_rdata_MPORT_2_addr = wram_rdata_MPORT_2_addr_pipe_0;
  assign wram_rdata_MPORT_2_data = wram[wram_rdata_MPORT_2_addr]; // @[MemoryMap.scala 88:25]
  assign wram_rdata_MPORT_3_en = wram_rdata_MPORT_3_en_pipe_0;
  assign wram_rdata_MPORT_3_addr = wram_rdata_MPORT_3_addr_pipe_0;
  assign wram_rdata_MPORT_3_data = wram[wram_rdata_MPORT_3_addr]; // @[MemoryMap.scala 88:25]
  assign wram_MPORT_3_data = io_cpuWriteData;
  assign wram_MPORT_3_addr = _rdata_T_10[12:0];
  assign wram_MPORT_3_mask = 1'h1;
  assign wram_MPORT_3_en = io_cpuWrite & _GEN_451;
  assign wram_MPORT_4_data = io_cpuWriteData;
  assign wram_MPORT_4_addr = _rdata_T_14[12:0];
  assign wram_MPORT_4_mask = 1'h1;
  assign wram_MPORT_4_en = io_cpuWrite & _GEN_456;
  assign oam_rdata_MPORT_4_en = oam_rdata_MPORT_4_en_pipe_0;
  assign oam_rdata_MPORT_4_addr = oam_rdata_MPORT_4_addr_pipe_0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign oam_rdata_MPORT_4_data = oam[oam_rdata_MPORT_4_addr]; // @[MemoryMap.scala 89:25]
  `else
  assign oam_rdata_MPORT_4_data = oam_rdata_MPORT_4_addr >= 8'ha0 ? _RAND_17[7:0] : oam[oam_rdata_MPORT_4_addr]; // @[MemoryMap.scala 89:25]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign oam_io_ppuOamData_MPORT_en = oam_io_ppuOamData_MPORT_en_pipe_0;
  assign oam_io_ppuOamData_MPORT_addr = oam_io_ppuOamData_MPORT_addr_pipe_0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign oam_io_ppuOamData_MPORT_data = oam[oam_io_ppuOamData_MPORT_addr]; // @[MemoryMap.scala 89:25]
  `else
  assign oam_io_ppuOamData_MPORT_data = oam_io_ppuOamData_MPORT_addr >= 8'ha0 ? _RAND_18[7:0] :
    oam[oam_io_ppuOamData_MPORT_addr]; // @[MemoryMap.scala 89:25]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign oam_MPORT_5_data = io_cpuWriteData;
  assign oam_MPORT_5_addr = _rdata_T_18[7:0];
  assign oam_MPORT_5_mask = 1'h1;
  assign oam_MPORT_5_en = io_cpuWrite & _GEN_461;
  assign hram_rdata_MPORT_5_en = io_cpuRead & _GEN_146;
  assign hram_rdata_MPORT_5_addr = _rdata_T_23[6:0];
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign hram_rdata_MPORT_5_data = hram[hram_rdata_MPORT_5_addr]; // @[MemoryMap.scala 90:17]
  `else
  assign hram_rdata_MPORT_5_data = hram_rdata_MPORT_5_addr >= 7'h7f ? _RAND_24[7:0] : hram[hram_rdata_MPORT_5_addr]; // @[MemoryMap.scala 90:17]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign hram_MPORT_6_data = io_cpuWriteData;
  assign hram_MPORT_6_addr = _rdata_T_23[6:0];
  assign hram_MPORT_6_mask = 1'h1;
  assign hram_MPORT_6_en = io_cpuWrite & _GEN_470;
  assign io_cpuReadData = io_cpuRead ? _GEN_127 : 8'h0; // @[MemoryMap.scala 114:20 108:26]
  assign io_ppuLcdc = ioRegs_io_ppuLcdc; // @[MemoryMap.scala 246:14]
  assign io_ppuBgp = ioRegs_io_ppuBgp; // @[MemoryMap.scala 251:14]
  assign bootRom_io_address = io_cpuAddress; // @[MemoryMap.scala 63:22]
  assign bootRom_io_enabled = bootRomEnable; // @[MemoryMap.scala 62:22]
  assign ioRegs_clock = clock;
  assign ioRegs_reset = reset;
  assign ioRegs_io_addr = _GEN_503[7:0];
  assign ioRegs_io_write = io_cpuWrite & _GEN_466; // @[MemoryMap.scala 111:19 178:21]
  assign ioRegs_io_writeData = io_cpuWrite ? _GEN_467 : 8'h0; // @[MemoryMap.scala 178:21 112:23]
  assign ioRegs_io_vblankIRQ = io_ppuVblankIRQ; // @[MemoryMap.scala 69:23]
  assign ioRegs_io_ppuLy = io_ppuLY; // @[MemoryMap.scala 72:19]
  always @(posedge clock) begin
    if (rom_MPORT_en & rom_MPORT_mask) begin
      rom[rom_MPORT_addr] <= rom_MPORT_data; // @[MemoryMap.scala 77:24]
    end
    rom_cartRomOut_en_pipe_0 <= io_cpuRead;
    if (io_cpuRead) begin
      rom_cartRomOut_addr_pipe_0 <= {{4'd0}, io_cpuAddress};
    end
    if (vram_MPORT_1_en & vram_MPORT_1_mask) begin
      vram[vram_MPORT_1_addr] <= vram_MPORT_1_data; // @[MemoryMap.scala 86:25]
    end
    vram_rdata_MPORT_en_pipe_0 <= io_cpuRead & _GEN_128;
    if (io_cpuRead & _GEN_128) begin
      vram_rdata_MPORT_addr_pipe_0 <= _rdata_T_1[12:0];
    end
    vram_io_ppuVramData_MPORT_en_pipe_0 <= 1'h0;
    if (1'h0) begin
      vram_io_ppuVramData_MPORT_addr_pipe_0 <= 13'h0;
    end
    if (extRam_MPORT_2_en & extRam_MPORT_2_mask) begin
      extRam[extRam_MPORT_2_addr] <= extRam_MPORT_2_data; // @[MemoryMap.scala 87:27]
    end
    extRam_rdata_MPORT_1_en_pipe_0 <= io_cpuRead & _GEN_131;
    if (io_cpuRead & _GEN_131) begin
      extRam_rdata_MPORT_1_addr_pipe_0 <= _rdata_T_5[12:0];
    end
    if (wram_MPORT_3_en & wram_MPORT_3_mask) begin
      wram[wram_MPORT_3_addr] <= wram_MPORT_3_data; // @[MemoryMap.scala 88:25]
    end
    if (wram_MPORT_4_en & wram_MPORT_4_mask) begin
      wram[wram_MPORT_4_addr] <= wram_MPORT_4_data; // @[MemoryMap.scala 88:25]
    end
    wram_rdata_MPORT_2_en_pipe_0 <= io_cpuRead & _GEN_134;
    if (io_cpuRead & _GEN_134) begin
      wram_rdata_MPORT_2_addr_pipe_0 <= _rdata_T_10[12:0];
    end
    wram_rdata_MPORT_3_en_pipe_0 <= io_cpuRead & _GEN_137;
    if (io_cpuRead & _GEN_137) begin
      wram_rdata_MPORT_3_addr_pipe_0 <= _rdata_T_14[12:0];
    end
    if (oam_MPORT_5_en & oam_MPORT_5_mask) begin
      oam[oam_MPORT_5_addr] <= oam_MPORT_5_data; // @[MemoryMap.scala 89:25]
    end
    oam_rdata_MPORT_4_en_pipe_0 <= io_cpuRead & _GEN_140;
    if (io_cpuRead & _GEN_140) begin
      oam_rdata_MPORT_4_addr_pipe_0 <= _rdata_T_18[7:0];
    end
    oam_io_ppuOamData_MPORT_en_pipe_0 <= 1'h0;
    if (1'h0) begin
      oam_io_ppuOamData_MPORT_addr_pipe_0 <= 8'h0;
    end
    if (hram_MPORT_6_en & hram_MPORT_6_mask) begin
      hram[hram_MPORT_6_addr] <= hram_MPORT_6_data; // @[MemoryMap.scala 90:17]
    end
    bootRomEnable <= reset | _GEN_502; // @[MemoryMap.scala 60:{30,30}]
    if (reset) begin // @[MemoryMap.scala 92:27]
      ramEnabled <= 1'h0; // @[MemoryMap.scala 92:27]
    end else if (io_cpuWrite) begin // @[MemoryMap.scala 178:21]
      if (io_cpuAddress < 16'h2000) begin // @[MemoryMap.scala 180:36]
        ramEnabled <= _ramEnabled_T == 8'ha; // @[MemoryMap.scala 181:18]
      end
    end
    if (reset) begin // @[MemoryMap.scala 94:22]
      regIE <= 8'h0; // @[MemoryMap.scala 94:22]
    end else if (io_cpuWrite) begin // @[MemoryMap.scala 178:21]
      if (!(io_cpuAddress < 16'h2000)) begin // @[MemoryMap.scala 180:36]
        if (!(io_cpuAddress < 16'h4000)) begin // @[MemoryMap.scala 183:42]
          regIE <= _GEN_398;
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
  _RAND_17 = {1{`RANDOM}};
  _RAND_18 = {1{`RANDOM}};
  _RAND_24 = {1{`RANDOM}};
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1048576; initvar = initvar+1)
    rom[initvar] = _RAND_0[7:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    vram[initvar] = _RAND_3[7:0];
  _RAND_8 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    extRam[initvar] = _RAND_8[7:0];
  _RAND_11 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    wram[initvar] = _RAND_11[7:0];
  _RAND_16 = {1{`RANDOM}};
  for (initvar = 0; initvar < 160; initvar = initvar+1)
    oam[initvar] = _RAND_16[7:0];
  _RAND_23 = {1{`RANDOM}};
  for (initvar = 0; initvar < 127; initvar = initvar+1)
    hram[initvar] = _RAND_23[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  rom_cartRomOut_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  rom_cartRomOut_addr_pipe_0 = _RAND_2[19:0];
  _RAND_4 = {1{`RANDOM}};
  vram_rdata_MPORT_en_pipe_0 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  vram_rdata_MPORT_addr_pipe_0 = _RAND_5[12:0];
  _RAND_6 = {1{`RANDOM}};
  vram_io_ppuVramData_MPORT_en_pipe_0 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  vram_io_ppuVramData_MPORT_addr_pipe_0 = _RAND_7[12:0];
  _RAND_9 = {1{`RANDOM}};
  extRam_rdata_MPORT_1_en_pipe_0 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  extRam_rdata_MPORT_1_addr_pipe_0 = _RAND_10[12:0];
  _RAND_12 = {1{`RANDOM}};
  wram_rdata_MPORT_2_en_pipe_0 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  wram_rdata_MPORT_2_addr_pipe_0 = _RAND_13[12:0];
  _RAND_14 = {1{`RANDOM}};
  wram_rdata_MPORT_3_en_pipe_0 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  wram_rdata_MPORT_3_addr_pipe_0 = _RAND_15[12:0];
  _RAND_19 = {1{`RANDOM}};
  oam_rdata_MPORT_4_en_pipe_0 = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  oam_rdata_MPORT_4_addr_pipe_0 = _RAND_20[7:0];
  _RAND_21 = {1{`RANDOM}};
  oam_io_ppuOamData_MPORT_en_pipe_0 = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  oam_io_ppuOamData_MPORT_addr_pipe_0 = _RAND_22[7:0];
  _RAND_25 = {1{`RANDOM}};
  bootRomEnable = _RAND_25[0:0];
  _RAND_26 = {1{`RANDOM}};
  ramEnabled = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  regIE = _RAND_27[7:0];
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
  output [1:0]  io_pixelColor
);
  wire  cpu_clock; // @[GameBoySoc.scala 47:19]
  wire  cpu_reset; // @[GameBoySoc.scala 47:19]
  wire [15:0] cpu_io_memAddr; // @[GameBoySoc.scala 47:19]
  wire  cpu_io_memRead; // @[GameBoySoc.scala 47:19]
  wire  cpu_io_memWrite; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_memWriteData; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_memReadData; // @[GameBoySoc.scala 47:19]
  wire [15:0] cpu_io_dbg_pc; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_dbg_opcode; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_dbg_a; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_dbg_f; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_dbg_b; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_dbg_c; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_dbg_d; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_dbg_e; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_dbg_h; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_dbg_l; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_dbg_state; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_dbg_tcycle; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_dbg_mcycle; // @[GameBoySoc.scala 47:19]
  wire [7:0] cpu_io_dbg_IR; // @[GameBoySoc.scala 47:19]
  wire  ppu_clock; // @[GameBoySoc.scala 52:19]
  wire  ppu_reset; // @[GameBoySoc.scala 52:19]
  wire [7:0] ppu_io_lcdc; // @[GameBoySoc.scala 52:19]
  wire [7:0] ppu_io_ly; // @[GameBoySoc.scala 52:19]
  wire [7:0] ppu_io_bgp; // @[GameBoySoc.scala 52:19]
  wire  ppu_io_vblankIRQ; // @[GameBoySoc.scala 52:19]
  wire  ppu_io_pixelValid; // @[GameBoySoc.scala 52:19]
  wire [7:0] ppu_io_pixelX; // @[GameBoySoc.scala 52:19]
  wire [7:0] ppu_io_pixelY; // @[GameBoySoc.scala 52:19]
  wire [1:0] ppu_io_pixelColor; // @[GameBoySoc.scala 52:19]
  wire  memory_clock; // @[GameBoySoc.scala 57:22]
  wire  memory_reset; // @[GameBoySoc.scala 57:22]
  wire [15:0] memory_io_cpuAddress; // @[GameBoySoc.scala 57:22]
  wire  memory_io_cpuRead; // @[GameBoySoc.scala 57:22]
  wire  memory_io_cpuWrite; // @[GameBoySoc.scala 57:22]
  wire [7:0] memory_io_cpuWriteData; // @[GameBoySoc.scala 57:22]
  wire [7:0] memory_io_cpuReadData; // @[GameBoySoc.scala 57:22]
  wire [7:0] memory_io_ppuLY; // @[GameBoySoc.scala 57:22]
  wire  memory_io_ppuVblankIRQ; // @[GameBoySoc.scala 57:22]
  wire [7:0] memory_io_ppuLcdc; // @[GameBoySoc.scala 57:22]
  wire [7:0] memory_io_ppuBgp; // @[GameBoySoc.scala 57:22]
  wire [31:0] memory_io_extRomLoadAddr; // @[GameBoySoc.scala 57:22]
  wire [7:0] memory_io_extRomLoadData; // @[GameBoySoc.scala 57:22]
  wire  memory_io_extRomLoadEn; // @[GameBoySoc.scala 57:22]
  LR35902_Core cpu ( // @[GameBoySoc.scala 47:19]
    .clock(cpu_clock),
    .reset(cpu_reset),
    .io_memAddr(cpu_io_memAddr),
    .io_memRead(cpu_io_memRead),
    .io_memWrite(cpu_io_memWrite),
    .io_memWriteData(cpu_io_memWriteData),
    .io_memReadData(cpu_io_memReadData),
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
    .io_dbg_state(cpu_io_dbg_state),
    .io_dbg_tcycle(cpu_io_dbg_tcycle),
    .io_dbg_mcycle(cpu_io_dbg_mcycle),
    .io_dbg_IR(cpu_io_dbg_IR)
  );
  PPU ppu ( // @[GameBoySoc.scala 52:19]
    .clock(ppu_clock),
    .reset(ppu_reset),
    .io_lcdc(ppu_io_lcdc),
    .io_ly(ppu_io_ly),
    .io_bgp(ppu_io_bgp),
    .io_vblankIRQ(ppu_io_vblankIRQ),
    .io_pixelValid(ppu_io_pixelValid),
    .io_pixelX(ppu_io_pixelX),
    .io_pixelY(ppu_io_pixelY),
    .io_pixelColor(ppu_io_pixelColor)
  );
  MemoryMap memory ( // @[GameBoySoc.scala 57:22]
    .clock(memory_clock),
    .reset(memory_reset),
    .io_cpuAddress(memory_io_cpuAddress),
    .io_cpuRead(memory_io_cpuRead),
    .io_cpuWrite(memory_io_cpuWrite),
    .io_cpuWriteData(memory_io_cpuWriteData),
    .io_cpuReadData(memory_io_cpuReadData),
    .io_ppuLY(memory_io_ppuLY),
    .io_ppuVblankIRQ(memory_io_ppuVblankIRQ),
    .io_ppuLcdc(memory_io_ppuLcdc),
    .io_ppuBgp(memory_io_ppuBgp),
    .io_extRomLoadAddr(memory_io_extRomLoadAddr),
    .io_extRomLoadData(memory_io_extRomLoadData),
    .io_extRomLoadEn(memory_io_extRomLoadEn)
  );
  assign io_dbg_pc = cpu_io_dbg_pc; // @[GameBoySoc.scala 120:17]
  assign io_dbg_opcode = cpu_io_dbg_opcode; // @[GameBoySoc.scala 121:17]
  assign io_dbg_a = cpu_io_dbg_a; // @[GameBoySoc.scala 122:17]
  assign io_dbg_f = cpu_io_dbg_f; // @[GameBoySoc.scala 123:17]
  assign io_dbg_b = cpu_io_dbg_b; // @[GameBoySoc.scala 124:17]
  assign io_dbg_c = cpu_io_dbg_c; // @[GameBoySoc.scala 125:17]
  assign io_dbg_d = cpu_io_dbg_d; // @[GameBoySoc.scala 126:17]
  assign io_dbg_e = cpu_io_dbg_e; // @[GameBoySoc.scala 127:17]
  assign io_dbg_h = cpu_io_dbg_h; // @[GameBoySoc.scala 128:17]
  assign io_dbg_l = cpu_io_dbg_l; // @[GameBoySoc.scala 129:17]
  assign io_dbg_state = cpu_io_dbg_state; // @[GameBoySoc.scala 130:17]
  assign io_dbg_tcycle = cpu_io_dbg_tcycle; // @[GameBoySoc.scala 131:17]
  assign io_dbg_mcycle = cpu_io_dbg_mcycle; // @[GameBoySoc.scala 132:17]
  assign io_dbg_IR = cpu_io_dbg_IR; // @[GameBoySoc.scala 133:17]
  assign io_dbg_ly = ppu_io_ly; // @[GameBoySoc.scala 134:17]
  assign io_pixelValid = ppu_io_pixelValid; // @[GameBoySoc.scala 112:17]
  assign io_pixelX = ppu_io_pixelX; // @[GameBoySoc.scala 113:17]
  assign io_pixelY = ppu_io_pixelY; // @[GameBoySoc.scala 114:17]
  assign io_pixelColor = ppu_io_pixelColor; // @[GameBoySoc.scala 115:17]
  assign cpu_clock = clock;
  assign cpu_reset = reset;
  assign cpu_io_memReadData = memory_io_cpuReadData; // @[GameBoySoc.scala 66:26]
  assign ppu_clock = clock;
  assign ppu_reset = reset;
  assign ppu_io_lcdc = memory_io_ppuLcdc; // @[GameBoySoc.scala 86:15]
  assign ppu_io_bgp = memory_io_ppuBgp; // @[GameBoySoc.scala 91:15]
  assign memory_clock = clock;
  assign memory_reset = reset;
  assign memory_io_cpuAddress = cpu_io_memAddr; // @[GameBoySoc.scala 62:26]
  assign memory_io_cpuRead = cpu_io_memRead; // @[GameBoySoc.scala 63:26]
  assign memory_io_cpuWrite = cpu_io_memWrite; // @[GameBoySoc.scala 64:26]
  assign memory_io_cpuWriteData = cpu_io_memWriteData; // @[GameBoySoc.scala 65:26]
  assign memory_io_ppuLY = ppu_io_ly; // @[GameBoySoc.scala 98:26]
  assign memory_io_ppuVblankIRQ = ppu_io_vblankIRQ; // @[GameBoySoc.scala 99:26]
  assign memory_io_extRomLoadAddr = io_extRomLoadAddr; // @[GameBoySoc.scala 105:28]
  assign memory_io_extRomLoadData = io_extRomLoadData; // @[GameBoySoc.scala 106:28]
  assign memory_io_extRomLoadEn = io_extRomLoadEn; // @[GameBoySoc.scala 107:28]
endmodule
