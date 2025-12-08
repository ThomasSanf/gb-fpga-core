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
      reset => (UInt<1>("h0"), state) @[LR35902.scala 41:23]
    reg opcode : UInt<8>, clock with :
      reset => (UInt<1>("h0"), opcode) @[LR35902.scala 43:23]
    node _T = eq(UInt<2>("h0"), state) @[LR35902.scala 58:17]
    node _T_1 = eq(UInt<2>("h1"), state) @[LR35902.scala 58:17]
    node _T_2 = eq(UInt<2>("h2"), state) @[LR35902.scala 58:17]
    node _T_3 = eq(UInt<1>("h0"), opcode) @[LR35902.scala 84:22]
    node _PC_T = add(PC, UInt<1>("h1")) @[LR35902.scala 90:20]
    node _PC_T_1 = tail(_PC_T, 1) @[LR35902.scala 90:20]
    node _T_4 = eq(UInt<3>("h4"), opcode) @[LR35902.scala 84:22]
    node _res_T = add(B, UInt<1>("h1")) @[LR35902.scala 99:27]
    node res = tail(_res_T, 1) @[LR35902.scala 99:27]
    node z = eq(res, UInt<1>("h0")) @[LR35902.scala 104:24]
    node _h_T = and(B, UInt<4>("hf")) @[LR35902.scala 106:25]
    node h = eq(_h_T, UInt<4>("hf")) @[LR35902.scala 106:36]
    node c = bits(F, 4, 4) @[LR35902.scala 107:20]
    node F_lo = cat(c, UInt<4>("h0")) @[Cat.scala 33:92]
    node F_hi_hi = cat(z, UInt<1>("h0")) @[Cat.scala 33:92]
    node F_hi = cat(F_hi_hi, h) @[Cat.scala 33:92]
    node _F_T = cat(F_hi, F_lo) @[Cat.scala 33:92]
    node _PC_T_2 = add(PC, UInt<1>("h1")) @[LR35902.scala 111:20]
    node _PC_T_3 = tail(_PC_T_2, 1) @[LR35902.scala 111:20]
    node _GEN_0 = mux(_T_4, res, B) @[LR35902.scala 101:13 26:19 84:22]
    node _GEN_1 = mux(_T_4, _F_T, F) @[LR35902.scala 109:13 25:19 84:22]
    node _GEN_2 = mux(_T_4, _PC_T_3, PC) @[LR35902.scala 111:14 23:19 84:22]
    node _GEN_3 = mux(_T_3, _PC_T_1, _GEN_2) @[LR35902.scala 84:22 90:14]
    node _GEN_4 = mux(_T_3, B, _GEN_0) @[LR35902.scala 26:19 84:22]
    node _GEN_5 = mux(_T_3, F, _GEN_1) @[LR35902.scala 25:19 84:22]
    node _GEN_6 = mux(_T_2, _GEN_3, PC) @[LR35902.scala 58:17 23:19]
    node _GEN_7 = mux(_T_2, _GEN_4, B) @[LR35902.scala 58:17 26:19]
    node _GEN_8 = mux(_T_2, _GEN_5, F) @[LR35902.scala 58:17 25:19]
    node _GEN_9 = mux(_T_2, UInt<2>("h0"), state) @[LR35902.scala 116:13 58:17 41:23]
    node _GEN_10 = mux(_T_1, UInt<2>("h2"), _GEN_9) @[LR35902.scala 58:17 76:13]
    node _GEN_11 = mux(_T_1, PC, _GEN_6) @[LR35902.scala 58:17 23:19]
    node _GEN_12 = mux(_T_1, B, _GEN_7) @[LR35902.scala 58:17 26:19]
    node _GEN_13 = mux(_T_1, F, _GEN_8) @[LR35902.scala 58:17 25:19]
    node _GEN_14 = mux(_T, UInt<1>("h1"), UInt<1>("h0")) @[LR35902.scala 58:17 64:18 51:19]
    node _GEN_15 = mux(_T, io_memReadData, opcode) @[LR35902.scala 58:17 67:14 43:23]
    node _GEN_16 = mux(_T, UInt<2>("h1"), _GEN_10) @[LR35902.scala 58:17 69:13]
    node _GEN_17 = mux(_T, PC, _GEN_11) @[LR35902.scala 58:17 23:19]
    node _GEN_18 = mux(_T, B, _GEN_12) @[LR35902.scala 58:17 26:19]
    node _GEN_19 = mux(_T, F, _GEN_13) @[LR35902.scala 58:17 25:19]
    io_memAddress <= PC @[LR35902.scala 48:19]
    io_memRead <= _GEN_14
    io_memWrite <= UInt<1>("h0") @[LR35902.scala 49:19]
    io_memWriteData <= UInt<8>("h0") @[LR35902.scala 50:19]
    io_dbg_pc <= PC @[LR35902.scala 34:13]
    io_dbg_opcode <= opcode @[LR35902.scala 53:17]
    io_dbg_B <= B @[LR35902.scala 35:13]
    PC <= mux(reset, UInt<16>("h0"), _GEN_17) @[LR35902.scala 23:{19,19}]
    A <= mux(reset, UInt<8>("h0"), A) @[LR35902.scala 24:{19,19,19}]
    F <= mux(reset, UInt<8>("h0"), _GEN_19) @[LR35902.scala 25:{19,19}]
    B <= mux(reset, UInt<8>("h0"), _GEN_18) @[LR35902.scala 26:{19,19}]
    C <= mux(reset, UInt<8>("h0"), C) @[LR35902.scala 27:{19,19,19}]
    D <= mux(reset, UInt<8>("h0"), D) @[LR35902.scala 28:{19,19,19}]
    E <= mux(reset, UInt<8>("h0"), E) @[LR35902.scala 29:{19,19,19}]
    H <= mux(reset, UInt<8>("h0"), H) @[LR35902.scala 30:{19,19,19}]
    L <= mux(reset, UInt<8>("h0"), L) @[LR35902.scala 31:{19,19,19}]
    state <= mux(reset, UInt<2>("h0"), _GEN_16) @[LR35902.scala 41:{23,23}]
    opcode <= mux(reset, UInt<8>("h0"), _GEN_15) @[LR35902.scala 43:{23,23}]

  module Bus :
    input clock : Clock
    input reset : UInt<1>
    input io_cpuAddress : UInt<16>
    input io_cpuRead : UInt<1>
    input io_cpuWrite : UInt<1>
    input io_cpuWriteData : UInt<8>
    output io_cpuReadData : UInt<8>

    mem rom : @[Bus.scala 61:24]
      data-type => UInt<8>
      depth => 32768
      read-latency => 1
      write-latency => 1
      reader => romData
      read-under-write => undefined
    node inRomRange = lt(io_cpuAddress, UInt<16>("h8000")) @[Bus.scala 99:25]
    node _romData_T = and(io_cpuRead, inRomRange) @[Bus.scala 102:43]
    node _GEN_0 = validif(_romData_T, io_cpuAddress) @[Bus.scala 102:{25,25}]
    node _romData_WIRE = _GEN_0 @[Bus.scala 102:25]
    node _romData_T_1 = or(_romData_WIRE, UInt<15>("h0")) @[Bus.scala 102:25]
    node _romData_T_2 = bits(_romData_T_1, 14, 0) @[Bus.scala 102:25]
    node _GEN_1 = mux(_romData_T, UInt<1>("h1"), UInt<1>("h0")) @[Bus.scala 102:{25,25} 61:24]
    node _GEN_2 = validif(_romData_T, _romData_T_2) @[Bus.scala 102:{25,25}]
    node _GEN_3 = validif(_romData_T, clock) @[Bus.scala 102:{25,25}]
    node _io_cpuReadData_T = and(io_cpuRead, inRomRange) @[Bus.scala 105:36]
    node _io_cpuReadData_T_1 = mux(_io_cpuReadData_T, rom.romData.data, UInt<1>("h0")) @[Bus.scala 105:24]
    io_cpuReadData <= _io_cpuReadData_T_1 @[Bus.scala 105:18]
    rom.romData.addr <= _GEN_2
    rom.romData.en <= _GEN_1
    rom.romData.clk <= _GEN_3

  module GameBoyTop :
    input clock : Clock
    input reset : UInt<1>
    output io_dbg_pc : UInt<16>
    output io_dbg_opcode : UInt<8>

    inst cpu of LR35902 @[GameBoyTop.scala 14:19]
    inst bus of Bus @[GameBoyTop.scala 15:19]
    io_dbg_pc <= cpu.io_dbg_pc @[GameBoyTop.scala 27:17]
    io_dbg_opcode <= cpu.io_memReadData @[GameBoyTop.scala 28:17]
    cpu.clock <= clock
    cpu.reset <= reset
    cpu.io_memReadData <= bus.io_cpuReadData @[GameBoyTop.scala 24:22]
    bus.clock <= clock
    bus.reset <= reset
    bus.io_cpuAddress <= cpu.io_memAddress @[GameBoyTop.scala 18:23]
    bus.io_cpuRead <= cpu.io_memRead @[GameBoyTop.scala 19:23]
    bus.io_cpuWrite <= cpu.io_memWrite @[GameBoyTop.scala 20:23]
    bus.io_cpuWriteData <= cpu.io_memWriteData @[GameBoyTop.scala 21:23]
