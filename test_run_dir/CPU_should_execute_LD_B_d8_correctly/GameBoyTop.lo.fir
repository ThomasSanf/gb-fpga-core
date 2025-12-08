FIRRTL version 1.1.0
circuit GameBoyTop :
  module LR35902 :
    input clock : Clock
    input reset : UInt<1>
    output io_memAddress : UInt<16>
    output io_memRead : UInt<1>
    output io_memWrite : UInt<1>
    output io_memWriteData : UInt<8>
    input io_memReadData : UInt<8>
    output io_dbg_pc : UInt<16>
    output io_dbg_opcode : UInt<8>
    output io_dbg_B : UInt<8>

    reg PC : UInt<16>, clock with :
      reset => (UInt<1>("h0"), PC) @[LR35902.scala 23:19]
    reg A : UInt<8>, clock with :
      reset => (UInt<1>("h0"), A) @[LR35902.scala 24:19]
    reg F : UInt<8>, clock with :
      reset => (UInt<1>("h0"), F) @[LR35902.scala 25:19]
    reg B : UInt<8>, clock with :
      reset => (UInt<1>("h0"), B) @[LR35902.scala 26:19]
    reg C : UInt<8>, clock with :
      reset => (UInt<1>("h0"), C) @[LR35902.scala 27:19]
    reg D : UInt<8>, clock with :
      reset => (UInt<1>("h0"), D) @[LR35902.scala 28:19]
    reg E : UInt<8>, clock with :
      reset => (UInt<1>("h0"), E) @[LR35902.scala 29:19]
    reg H : UInt<8>, clock with :
      reset => (UInt<1>("h0"), H) @[LR35902.scala 30:19]
    reg L : UInt<8>, clock with :
      reset => (UInt<1>("h0"), L) @[LR35902.scala 31:19]
    reg state : UInt<2>, clock with :
      reset => (UInt<1>("h0"), state) @[LR35902.scala 40:22]
    reg fetched : UInt<8>, clock with :
      reset => (UInt<1>("h0"), fetched) @[LR35902.scala 42:20]
    reg opcode : UInt<8>, clock with :
      reset => (UInt<1>("h0"), opcode) @[LR35902.scala 43:24]
    node _T = eq(UInt<2>("h0"), state) @[LR35902.scala 58:17]
    node _GEN_0 = mux(io_memRead, io_memReadData, fetched) @[LR35902.scala 67:24 68:17 42:20]
    node _T_1 = eq(UInt<2>("h1"), state) @[LR35902.scala 58:17]
    node _T_2 = eq(UInt<2>("h2"), state) @[LR35902.scala 58:17]
    node _T_3 = eq(UInt<1>("h0"), opcode) @[LR35902.scala 86:22]
    node _PC_T = add(PC, UInt<1>("h1")) @[LR35902.scala 92:20]
    node _PC_T_1 = tail(_PC_T, 1) @[LR35902.scala 92:20]
    node _T_4 = eq(UInt<3>("h4"), opcode) @[LR35902.scala 86:22]
    node _res_T = add(B, UInt<1>("h1")) @[LR35902.scala 101:27]
    node res = tail(_res_T, 1) @[LR35902.scala 101:27]
    node z = eq(res, UInt<1>("h0")) @[LR35902.scala 104:24]
    node _h_T = and(B, UInt<4>("hf")) @[LR35902.scala 106:26]
    node h = eq(_h_T, UInt<4>("hf")) @[LR35902.scala 106:37]
    node c = bits(F, 4, 4) @[LR35902.scala 107:20]
    node F_lo = cat(c, UInt<4>("h0")) @[Cat.scala 33:92]
    node F_hi_hi = cat(z, UInt<1>("h0")) @[Cat.scala 33:92]
    node F_hi = cat(F_hi_hi, h) @[Cat.scala 33:92]
    node _F_T = cat(F_hi, F_lo) @[Cat.scala 33:92]
    node _PC_T_2 = add(PC, UInt<1>("h1")) @[LR35902.scala 111:20]
    node _PC_T_3 = tail(_PC_T_2, 1) @[LR35902.scala 111:20]
    node _T_5 = eq(UInt<3>("h5"), opcode) @[LR35902.scala 86:22]
    node _res_T_1 = sub(B, UInt<1>("h1")) @[LR35902.scala 120:27]
    node res_1 = tail(_res_T_1, 1) @[LR35902.scala 120:27]
    node z_1 = eq(res_1, UInt<1>("h0")) @[LR35902.scala 123:24]
    node _h_T_1 = and(B, UInt<4>("hf")) @[LR35902.scala 125:26]
    node h_1 = eq(_h_T_1, UInt<1>("h0")) @[LR35902.scala 125:37]
    node c_1 = bits(F, 4, 4) @[LR35902.scala 126:20]
    node F_lo_1 = cat(c_1, UInt<4>("h0")) @[Cat.scala 33:92]
    node F_hi_hi_1 = cat(z_1, UInt<1>("h1")) @[Cat.scala 33:92]
    node F_hi_1 = cat(F_hi_hi_1, h_1) @[Cat.scala 33:92]
    node _F_T_1 = cat(F_hi_1, F_lo_1) @[Cat.scala 33:92]
    node _PC_T_4 = add(PC, UInt<1>("h1")) @[LR35902.scala 130:20]
    node _PC_T_5 = tail(_PC_T_4, 1) @[LR35902.scala 130:20]
    node _T_6 = eq(UInt<3>("h6"), opcode) @[LR35902.scala 86:22]
    node _PC_T_6 = add(PC, UInt<1>("h1")) @[LR35902.scala 138:20]
    node _PC_T_7 = tail(_PC_T_6, 1) @[LR35902.scala 138:20]
    node _GEN_1 = mux(_T_6, _PC_T_7, PC) @[LR35902.scala 138:14 23:19 86:22]
    node _GEN_2 = mux(_T_6, UInt<2>("h3"), state) @[LR35902.scala 139:17 40:22 86:22]
    node _GEN_3 = mux(_T_5, res_1, B) @[LR35902.scala 121:13 26:19 86:22]
    node _GEN_4 = mux(_T_5, _F_T_1, F) @[LR35902.scala 128:13 25:19 86:22]
    node _GEN_5 = mux(_T_5, _PC_T_5, _GEN_1) @[LR35902.scala 130:14 86:22]
    node _GEN_6 = mux(_T_5, UInt<2>("h0"), _GEN_2) @[LR35902.scala 131:17 86:22]
    node _GEN_7 = mux(_T_4, res, _GEN_3) @[LR35902.scala 102:13 86:22]
    node _GEN_8 = mux(_T_4, _F_T, _GEN_4) @[LR35902.scala 109:13 86:22]
    node _GEN_9 = mux(_T_4, _PC_T_3, _GEN_5) @[LR35902.scala 111:14 86:22]
    node _GEN_10 = mux(_T_4, UInt<2>("h0"), _GEN_6) @[LR35902.scala 112:17 86:22]
    node _GEN_11 = mux(_T_3, _PC_T_1, _GEN_9) @[LR35902.scala 86:22 92:14]
    node _GEN_12 = mux(_T_3, UInt<2>("h0"), _GEN_10) @[LR35902.scala 86:22 93:17]
    node _GEN_13 = mux(_T_3, B, _GEN_7) @[LR35902.scala 26:19 86:22]
    node _GEN_14 = mux(_T_3, F, _GEN_8) @[LR35902.scala 25:19 86:22]
    node _T_7 = eq(UInt<2>("h3"), state) @[LR35902.scala 58:17]
    node _PC_T_8 = add(PC, UInt<1>("h1")) @[LR35902.scala 151:16]
    node _PC_T_9 = tail(_PC_T_8, 1) @[LR35902.scala 151:16]
    node _GEN_15 = mux(_T_7, UInt<1>("h1"), UInt<1>("h0")) @[LR35902.scala 58:17 148:18 51:19]
    node _GEN_16 = mux(_T_7, io_memReadData, B) @[LR35902.scala 58:17 150:9 26:19]
    node _GEN_17 = mux(_T_7, _PC_T_9, PC) @[LR35902.scala 151:10 58:17 23:19]
    node _GEN_18 = mux(_T_7, UInt<2>("h0"), state) @[LR35902.scala 153:13 58:17 40:22]
    node _GEN_19 = mux(_T_2, _GEN_11, _GEN_17) @[LR35902.scala 58:17]
    node _GEN_20 = mux(_T_2, _GEN_12, _GEN_18) @[LR35902.scala 58:17]
    node _GEN_21 = mux(_T_2, _GEN_13, _GEN_16) @[LR35902.scala 58:17]
    node _GEN_22 = mux(_T_2, _GEN_14, F) @[LR35902.scala 58:17 25:19]
    node _GEN_23 = mux(_T_2, UInt<1>("h0"), _GEN_15) @[LR35902.scala 58:17 51:19]
    node _GEN_24 = mux(_T_1, fetched, opcode) @[LR35902.scala 58:17 78:14 43:24]
    node _GEN_25 = mux(_T_1, UInt<2>("h2"), _GEN_20) @[LR35902.scala 58:17 79:13]
    node _GEN_26 = mux(_T_1, PC, _GEN_19) @[LR35902.scala 58:17 23:19]
    node _GEN_27 = mux(_T_1, B, _GEN_21) @[LR35902.scala 58:17 26:19]
    node _GEN_28 = mux(_T_1, F, _GEN_22) @[LR35902.scala 58:17 25:19]
    node _GEN_29 = mux(_T_1, UInt<1>("h0"), _GEN_23) @[LR35902.scala 58:17 51:19]
    node _GEN_30 = mux(_T, UInt<1>("h1"), _GEN_29) @[LR35902.scala 58:17 64:18]
    node _GEN_31 = mux(_T, _GEN_0, fetched) @[LR35902.scala 58:17 42:20]
    node _GEN_32 = mux(_T, UInt<2>("h1"), _GEN_25) @[LR35902.scala 58:17 71:13]
    node _GEN_33 = mux(_T, opcode, _GEN_24) @[LR35902.scala 58:17 43:24]
    node _GEN_34 = mux(_T, PC, _GEN_26) @[LR35902.scala 58:17 23:19]
    node _GEN_35 = mux(_T, B, _GEN_27) @[LR35902.scala 58:17 26:19]
    node _GEN_36 = mux(_T, F, _GEN_28) @[LR35902.scala 58:17 25:19]
    io_memAddress <= PC @[LR35902.scala 50:19]
    io_memRead <= _GEN_30
    io_memWrite <= UInt<1>("h0") @[LR35902.scala 52:19]
    io_memWriteData <= UInt<8>("h0") @[LR35902.scala 53:19]
    io_dbg_pc <= PC @[LR35902.scala 33:13]
    io_dbg_opcode <= opcode @[LR35902.scala 45:17]
    io_dbg_B <= B @[LR35902.scala 34:13]
    PC <= mux(reset, UInt<16>("h0"), _GEN_34) @[LR35902.scala 23:{19,19}]
    A <= mux(reset, UInt<8>("h0"), A) @[LR35902.scala 24:{19,19,19}]
    F <= mux(reset, UInt<8>("h0"), _GEN_36) @[LR35902.scala 25:{19,19}]
    B <= mux(reset, UInt<8>("h0"), _GEN_35) @[LR35902.scala 26:{19,19}]
    C <= mux(reset, UInt<8>("h0"), C) @[LR35902.scala 27:{19,19,19}]
    D <= mux(reset, UInt<8>("h0"), D) @[LR35902.scala 28:{19,19,19}]
    E <= mux(reset, UInt<8>("h0"), E) @[LR35902.scala 29:{19,19,19}]
    H <= mux(reset, UInt<8>("h0"), H) @[LR35902.scala 30:{19,19,19}]
    L <= mux(reset, UInt<8>("h0"), L) @[LR35902.scala 31:{19,19,19}]
    state <= mux(reset, UInt<2>("h0"), _GEN_32) @[LR35902.scala 40:{22,22}]
    fetched <= _GEN_31
    opcode <= mux(reset, UInt<8>("h0"), _GEN_33) @[LR35902.scala 43:{24,24}]

  module Bus :
    input clock : Clock
    input reset : UInt<1>
    input io_cpuAddress : UInt<16>
    input io_cpuRead : UInt<1>
    input io_cpuWrite : UInt<1>
    input io_cpuWriteData : UInt<8>
    output io_cpuReadData : UInt<8>

    mem rom : @[Bus.scala 27:16]
      data-type => UInt<8>
      depth => 32768
      read-latency => 0
      write-latency => 1
      reader => romData
      read-under-write => undefined
    node inRange = lt(io_cpuAddress, UInt<16>("h8000")) @[Bus.scala 33:25]
    node _romData_T = bits(io_cpuAddress, 14, 0) @[Bus.scala 36:25]
    node _io_cpuReadData_T = and(io_cpuRead, inRange) @[Bus.scala 39:36]
    node _io_cpuReadData_T_1 = mux(_io_cpuReadData_T, rom.romData.data, UInt<1>("h0")) @[Bus.scala 39:24]
    io_cpuReadData <= _io_cpuReadData_T_1 @[Bus.scala 39:18]
    rom.romData.addr <= _romData_T @[Bus.scala 36:25]
    rom.romData.en <= UInt<1>("h1") @[Bus.scala 36:25]
    rom.romData.clk <= clock @[Bus.scala 36:25]

  module GameBoyTop :
    input clock : Clock
    input reset : UInt<1>
    output io_dbg_pc : UInt<16>
    output io_dbg_opcode : UInt<8>
    output io_dbg_B : UInt<8>

    inst cpu of LR35902 @[GameBoyTop.scala 16:19]
    inst bus of Bus @[GameBoyTop.scala 17:19]
    io_dbg_pc <= cpu.io_dbg_pc @[GameBoyTop.scala 29:17]
    io_dbg_opcode <= cpu.io_memReadData @[GameBoyTop.scala 30:17]
    io_dbg_B <= cpu.io_dbg_B @[GameBoyTop.scala 31:12]
    cpu.clock <= clock
    cpu.reset <= reset
    cpu.io_memReadData <= bus.io_cpuReadData @[GameBoyTop.scala 26:22]
    bus.clock <= clock
    bus.reset <= reset
    bus.io_cpuAddress <= cpu.io_memAddress @[GameBoyTop.scala 20:23]
    bus.io_cpuRead <= cpu.io_memRead @[GameBoyTop.scala 21:23]
    bus.io_cpuWrite <= cpu.io_memWrite @[GameBoyTop.scala 22:23]
    bus.io_cpuWriteData <= cpu.io_memWriteData @[GameBoyTop.scala 23:23]
