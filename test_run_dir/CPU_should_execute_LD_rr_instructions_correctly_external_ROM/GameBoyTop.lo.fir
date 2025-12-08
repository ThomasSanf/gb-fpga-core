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
    output io_dbg_A : UInt<8>
    output io_dbg_C : UInt<8>
    output io_dbg_D : UInt<8>
    output io_dbg_E : UInt<8>
    output io_dbg_H : UInt<8>
    output io_dbg_L : UInt<8>

    reg PC : UInt<16>, clock with :
      reset => (UInt<1>("h0"), PC) @[LR35902.scala 29:23]
    reg A : UInt<8>, clock with :
      reset => (UInt<1>("h0"), A) @[LR35902.scala 30:23]
    reg F : UInt<8>, clock with :
      reset => (UInt<1>("h0"), F) @[LR35902.scala 31:23]
    reg B : UInt<8>, clock with :
      reset => (UInt<1>("h0"), B) @[LR35902.scala 32:23]
    reg C : UInt<8>, clock with :
      reset => (UInt<1>("h0"), C) @[LR35902.scala 33:23]
    reg D : UInt<8>, clock with :
      reset => (UInt<1>("h0"), D) @[LR35902.scala 34:23]
    reg E : UInt<8>, clock with :
      reset => (UInt<1>("h0"), E) @[LR35902.scala 35:23]
    reg H : UInt<8>, clock with :
      reset => (UInt<1>("h0"), H) @[LR35902.scala 36:23]
    reg L : UInt<8>, clock with :
      reset => (UInt<1>("h0"), L) @[LR35902.scala 37:23]
    reg immDst : UInt<3>, clock with :
      reset => (UInt<1>("h0"), immDst) @[LR35902.scala 38:19]
    reg state : UInt<2>, clock with :
      reset => (UInt<1>("h0"), state) @[LR35902.scala 87:24]
    reg fetched : UInt<8>, clock with :
      reset => (UInt<1>("h0"), fetched) @[LR35902.scala 89:20]
    reg opcode : UInt<8>, clock with :
      reset => (UInt<1>("h0"), opcode) @[LR35902.scala 90:24]
    node _T = eq(UInt<2>("h0"), state) @[LR35902.scala 105:17]
    node _T_1 = eq(UInt<2>("h1"), state) @[LR35902.scala 105:17]
    node _T_2 = eq(UInt<2>("h2"), state) @[LR35902.scala 105:17]
    node _dstIdx_T = shr(opcode, 3) @[LR35902.scala 132:29]
    node dstIdx = and(_dstIdx_T, UInt<3>("h7")) @[LR35902.scala 132:43]
    node srcIdx = and(opcode, UInt<3>("h7")) @[LR35902.scala 133:36]
    node _isLdRR_T = geq(opcode, UInt<7>("h40")) @[LR35902.scala 135:17]
    node _isLdRR_T_1 = leq(opcode, UInt<7>("h7f")) @[LR35902.scala 135:40]
    node _isLdRR_T_2 = and(_isLdRR_T, _isLdRR_T_1) @[LR35902.scala 135:29]
    node _isLdRR_T_3 = neq(dstIdx, UInt<3>("h6")) @[LR35902.scala 136:19]
    node _isLdRR_T_4 = and(_isLdRR_T_2, _isLdRR_T_3) @[LR35902.scala 135:52]
    node _isLdRR_T_5 = neq(srcIdx, UInt<3>("h6")) @[LR35902.scala 136:46]
    node isLdRR = and(_isLdRR_T_4, _isLdRR_T_5) @[LR35902.scala 136:35]
    node _value_T = eq(UInt<1>("h0"), srcIdx) @[Mux.scala 81:61]
    node _value_T_1 = mux(_value_T, B, UInt<8>("h0")) @[Mux.scala 81:58]
    node _value_T_2 = eq(UInt<1>("h1"), srcIdx) @[Mux.scala 81:61]
    node _value_T_3 = mux(_value_T_2, C, _value_T_1) @[Mux.scala 81:58]
    node _value_T_4 = eq(UInt<2>("h2"), srcIdx) @[Mux.scala 81:61]
    node _value_T_5 = mux(_value_T_4, D, _value_T_3) @[Mux.scala 81:58]
    node _value_T_6 = eq(UInt<2>("h3"), srcIdx) @[Mux.scala 81:61]
    node _value_T_7 = mux(_value_T_6, E, _value_T_5) @[Mux.scala 81:58]
    node _value_T_8 = eq(UInt<3>("h4"), srcIdx) @[Mux.scala 81:61]
    node _value_T_9 = mux(_value_T_8, H, _value_T_7) @[Mux.scala 81:58]
    node _value_T_10 = eq(UInt<3>("h5"), srcIdx) @[Mux.scala 81:61]
    node _value_T_11 = mux(_value_T_10, L, _value_T_9) @[Mux.scala 81:58]
    node _value_T_12 = eq(UInt<3>("h7"), srcIdx) @[Mux.scala 81:61]
    node value = mux(_value_T_12, A, _value_T_11) @[Mux.scala 81:58]
    node _T_3 = eq(dstIdx, UInt<1>("h0")) @[LR35902.scala 65:14]
    node _T_4 = eq(dstIdx, UInt<1>("h1")) @[LR35902.scala 67:20]
    node _T_5 = eq(dstIdx, UInt<2>("h2")) @[LR35902.scala 69:20]
    node _T_6 = eq(dstIdx, UInt<2>("h3")) @[LR35902.scala 71:20]
    node _T_7 = eq(dstIdx, UInt<3>("h4")) @[LR35902.scala 73:20]
    node _T_8 = eq(dstIdx, UInt<3>("h5")) @[LR35902.scala 75:20]
    node _T_9 = eq(dstIdx, UInt<3>("h7")) @[LR35902.scala 77:20]
    node _GEN_0 = mux(_T_9, value, A) @[LR35902.scala 30:23 77:29 78:9]
    node _GEN_1 = mux(_T_8, value, L) @[LR35902.scala 37:23 75:29 76:9]
    node _GEN_2 = mux(_T_8, A, _GEN_0) @[LR35902.scala 30:23 75:29]
    node _GEN_3 = mux(_T_7, value, H) @[LR35902.scala 36:23 73:29 74:9]
    node _GEN_4 = mux(_T_7, L, _GEN_1) @[LR35902.scala 37:23 73:29]
    node _GEN_5 = mux(_T_7, A, _GEN_2) @[LR35902.scala 30:23 73:29]
    node _GEN_6 = mux(_T_6, value, E) @[LR35902.scala 35:23 71:29 72:9]
    node _GEN_7 = mux(_T_6, H, _GEN_3) @[LR35902.scala 36:23 71:29]
    node _GEN_8 = mux(_T_6, L, _GEN_4) @[LR35902.scala 37:23 71:29]
    node _GEN_9 = mux(_T_6, A, _GEN_5) @[LR35902.scala 30:23 71:29]
    node _GEN_10 = mux(_T_5, value, D) @[LR35902.scala 34:23 69:29 70:9]
    node _GEN_11 = mux(_T_5, E, _GEN_6) @[LR35902.scala 35:23 69:29]
    node _GEN_12 = mux(_T_5, H, _GEN_7) @[LR35902.scala 36:23 69:29]
    node _GEN_13 = mux(_T_5, L, _GEN_8) @[LR35902.scala 37:23 69:29]
    node _GEN_14 = mux(_T_5, A, _GEN_9) @[LR35902.scala 30:23 69:29]
    node _GEN_15 = mux(_T_4, value, C) @[LR35902.scala 33:23 67:29 68:9]
    node _GEN_16 = mux(_T_4, D, _GEN_10) @[LR35902.scala 34:23 67:29]
    node _GEN_17 = mux(_T_4, E, _GEN_11) @[LR35902.scala 35:23 67:29]
    node _GEN_18 = mux(_T_4, H, _GEN_12) @[LR35902.scala 36:23 67:29]
    node _GEN_19 = mux(_T_4, L, _GEN_13) @[LR35902.scala 37:23 67:29]
    node _GEN_20 = mux(_T_4, A, _GEN_14) @[LR35902.scala 30:23 67:29]
    node _GEN_21 = mux(_T_3, value, B) @[LR35902.scala 32:23 65:23 66:9]
    node _GEN_22 = mux(_T_3, C, _GEN_15) @[LR35902.scala 33:23 65:23]
    node _GEN_23 = mux(_T_3, D, _GEN_16) @[LR35902.scala 34:23 65:23]
    node _GEN_24 = mux(_T_3, E, _GEN_17) @[LR35902.scala 35:23 65:23]
    node _GEN_25 = mux(_T_3, H, _GEN_18) @[LR35902.scala 36:23 65:23]
    node _GEN_26 = mux(_T_3, L, _GEN_19) @[LR35902.scala 37:23 65:23]
    node _GEN_27 = mux(_T_3, A, _GEN_20) @[LR35902.scala 30:23 65:23]
    node _PC_T = add(PC, UInt<1>("h1")) @[LR35902.scala 143:21]
    node _PC_T_1 = tail(_PC_T, 1) @[LR35902.scala 143:21]
    node _PC_T_2 = add(PC, UInt<1>("h1")) @[LR35902.scala 149:21]
    node _PC_T_3 = tail(_PC_T_2, 1) @[LR35902.scala 149:21]
    node _T_10 = eq(UInt<1>("h0"), opcode) @[LR35902.scala 155:24]
    node _T_11 = eq(UInt<3>("h4"), opcode) @[LR35902.scala 155:24]
    node _res_T = add(B, UInt<1>("h1")) @[LR35902.scala 169:29]
    node res = tail(_res_T, 1) @[LR35902.scala 169:29]
    node z = eq(res, UInt<1>("h0")) @[LR35902.scala 172:26]
    node _h_T = and(B, UInt<4>("hf")) @[LR35902.scala 174:28]
    node h = eq(_h_T, UInt<4>("hf")) @[LR35902.scala 174:39]
    node c = bits(F, 4, 4) @[LR35902.scala 175:22]
    node F_lo = cat(c, UInt<4>("h0")) @[Cat.scala 33:92]
    node F_hi_hi = cat(z, UInt<1>("h0")) @[Cat.scala 33:92]
    node F_hi = cat(F_hi_hi, h) @[Cat.scala 33:92]
    node _F_T = cat(F_hi, F_lo) @[Cat.scala 33:92]
    node _T_12 = eq(UInt<3>("h5"), opcode) @[LR35902.scala 155:24]
    node _res_T_1 = sub(B, UInt<1>("h1")) @[LR35902.scala 186:29]
    node res_1 = tail(_res_T_1, 1) @[LR35902.scala 186:29]
    node z_1 = eq(res_1, UInt<1>("h0")) @[LR35902.scala 189:26]
    node _h_T_1 = and(B, UInt<4>("hf")) @[LR35902.scala 191:28]
    node h_1 = eq(_h_T_1, UInt<1>("h0")) @[LR35902.scala 191:39]
    node c_1 = bits(F, 4, 4) @[LR35902.scala 192:22]
    node F_lo_1 = cat(c_1, UInt<4>("h0")) @[Cat.scala 33:92]
    node F_hi_hi_1 = cat(z_1, UInt<1>("h1")) @[Cat.scala 33:92]
    node F_hi_1 = cat(F_hi_hi_1, h_1) @[Cat.scala 33:92]
    node _F_T_1 = cat(F_hi_1, F_lo_1) @[Cat.scala 33:92]
    node _T_13 = eq(UInt<3>("h6"), opcode) @[LR35902.scala 155:24]
    node _T_14 = eq(UInt<4>("he"), opcode) @[LR35902.scala 155:24]
    node _T_15 = eq(UInt<5>("h16"), opcode) @[LR35902.scala 155:24]
    node _T_16 = eq(UInt<5>("h1e"), opcode) @[LR35902.scala 155:24]
    node _T_17 = eq(UInt<6>("h26"), opcode) @[LR35902.scala 155:24]
    node _T_18 = eq(UInt<6>("h2e"), opcode) @[LR35902.scala 155:24]
    node _T_19 = eq(UInt<6>("h3e"), opcode) @[LR35902.scala 155:24]
    node _GEN_28 = mux(_T_19, UInt<3>("h7"), immDst) @[LR35902.scala 155:24 241:20 38:19]
    node _GEN_29 = mux(_T_19, UInt<2>("h3"), UInt<2>("h0")) @[LR35902.scala 150:15 155:24 242:20]
    node _GEN_30 = mux(_T_18, UInt<3>("h5"), _GEN_28) @[LR35902.scala 155:24 235:20]
    node _GEN_31 = mux(_T_18, UInt<2>("h3"), _GEN_29) @[LR35902.scala 155:24 236:20]
    node _GEN_32 = mux(_T_17, UInt<3>("h4"), _GEN_30) @[LR35902.scala 155:24 229:20]
    node _GEN_33 = mux(_T_17, UInt<2>("h3"), _GEN_31) @[LR35902.scala 155:24 230:20]
    node _GEN_34 = mux(_T_16, UInt<2>("h3"), _GEN_32) @[LR35902.scala 155:24 223:20]
    node _GEN_35 = mux(_T_16, UInt<2>("h3"), _GEN_33) @[LR35902.scala 155:24 224:20]
    node _GEN_36 = mux(_T_15, UInt<2>("h2"), _GEN_34) @[LR35902.scala 155:24 217:20]
    node _GEN_37 = mux(_T_15, UInt<2>("h3"), _GEN_35) @[LR35902.scala 155:24 218:20]
    node _GEN_38 = mux(_T_14, UInt<1>("h1"), _GEN_36) @[LR35902.scala 155:24 211:20]
    node _GEN_39 = mux(_T_14, UInt<2>("h3"), _GEN_37) @[LR35902.scala 155:24 212:20]
    node _GEN_40 = mux(_T_13, UInt<1>("h0"), _GEN_38) @[LR35902.scala 155:24 204:20]
    node _GEN_41 = mux(_T_13, UInt<2>("h3"), _GEN_39) @[LR35902.scala 155:24 206:20]
    node _GEN_42 = mux(_T_12, res_1, B) @[LR35902.scala 155:24 187:15 32:23]
    node _GEN_43 = mux(_T_12, _F_T_1, F) @[LR35902.scala 155:24 194:15 31:23]
    node _GEN_44 = mux(_T_12, immDst, _GEN_40) @[LR35902.scala 155:24 38:19]
    node _GEN_45 = mux(_T_12, UInt<2>("h0"), _GEN_41) @[LR35902.scala 150:15 155:24]
    node _GEN_46 = mux(_T_11, res, _GEN_42) @[LR35902.scala 155:24 170:15]
    node _GEN_47 = mux(_T_11, _F_T, _GEN_43) @[LR35902.scala 155:24 177:15]
    node _GEN_48 = mux(_T_11, immDst, _GEN_44) @[LR35902.scala 155:24 38:19]
    node _GEN_49 = mux(_T_11, UInt<2>("h0"), _GEN_45) @[LR35902.scala 150:15 155:24]
    node _GEN_50 = mux(_T_10, B, _GEN_46) @[LR35902.scala 155:24 32:23]
    node _GEN_51 = mux(_T_10, F, _GEN_47) @[LR35902.scala 155:24 31:23]
    node _GEN_52 = mux(_T_10, immDst, _GEN_48) @[LR35902.scala 155:24 38:19]
    node _GEN_53 = mux(_T_10, UInt<2>("h0"), _GEN_49) @[LR35902.scala 150:15 155:24]
    node _GEN_54 = mux(isLdRR, _GEN_21, _GEN_50) @[LR35902.scala 138:20]
    node _GEN_55 = mux(isLdRR, _GEN_22, C) @[LR35902.scala 138:20 33:23]
    node _GEN_56 = mux(isLdRR, _GEN_23, D) @[LR35902.scala 138:20 34:23]
    node _GEN_57 = mux(isLdRR, _GEN_24, E) @[LR35902.scala 138:20 35:23]
    node _GEN_58 = mux(isLdRR, _GEN_25, H) @[LR35902.scala 138:20 36:23]
    node _GEN_59 = mux(isLdRR, _GEN_26, L) @[LR35902.scala 138:20 37:23]
    node _GEN_60 = mux(isLdRR, _GEN_27, A) @[LR35902.scala 138:20 30:23]
    node _GEN_61 = mux(isLdRR, _PC_T_1, _PC_T_3) @[LR35902.scala 138:20 143:15 149:15]
    node _GEN_62 = mux(isLdRR, UInt<2>("h0"), _GEN_53) @[LR35902.scala 138:20 144:15]
    node _GEN_63 = mux(isLdRR, F, _GEN_51) @[LR35902.scala 138:20 31:23]
    node _GEN_64 = mux(isLdRR, immDst, _GEN_52) @[LR35902.scala 138:20 38:19]
    node _T_20 = eq(UInt<2>("h3"), state) @[LR35902.scala 105:17]
    node _T_21 = eq(immDst, UInt<1>("h0")) @[LR35902.scala 65:14]
    node _T_22 = eq(immDst, UInt<1>("h1")) @[LR35902.scala 67:20]
    node _T_23 = eq(immDst, UInt<2>("h2")) @[LR35902.scala 69:20]
    node _T_24 = eq(immDst, UInt<2>("h3")) @[LR35902.scala 71:20]
    node _T_25 = eq(immDst, UInt<3>("h4")) @[LR35902.scala 73:20]
    node _T_26 = eq(immDst, UInt<3>("h5")) @[LR35902.scala 75:20]
    node _T_27 = eq(immDst, UInt<3>("h7")) @[LR35902.scala 77:20]
    node _GEN_65 = mux(_T_27, io_memReadData, A) @[LR35902.scala 30:23 77:29 78:9]
    node _GEN_66 = mux(_T_26, io_memReadData, L) @[LR35902.scala 37:23 75:29 76:9]
    node _GEN_67 = mux(_T_26, A, _GEN_65) @[LR35902.scala 30:23 75:29]
    node _GEN_68 = mux(_T_25, io_memReadData, H) @[LR35902.scala 36:23 73:29 74:9]
    node _GEN_69 = mux(_T_25, L, _GEN_66) @[LR35902.scala 37:23 73:29]
    node _GEN_70 = mux(_T_25, A, _GEN_67) @[LR35902.scala 30:23 73:29]
    node _GEN_71 = mux(_T_24, io_memReadData, E) @[LR35902.scala 35:23 71:29 72:9]
    node _GEN_72 = mux(_T_24, H, _GEN_68) @[LR35902.scala 36:23 71:29]
    node _GEN_73 = mux(_T_24, L, _GEN_69) @[LR35902.scala 37:23 71:29]
    node _GEN_74 = mux(_T_24, A, _GEN_70) @[LR35902.scala 30:23 71:29]
    node _GEN_75 = mux(_T_23, io_memReadData, D) @[LR35902.scala 34:23 69:29 70:9]
    node _GEN_76 = mux(_T_23, E, _GEN_71) @[LR35902.scala 35:23 69:29]
    node _GEN_77 = mux(_T_23, H, _GEN_72) @[LR35902.scala 36:23 69:29]
    node _GEN_78 = mux(_T_23, L, _GEN_73) @[LR35902.scala 37:23 69:29]
    node _GEN_79 = mux(_T_23, A, _GEN_74) @[LR35902.scala 30:23 69:29]
    node _GEN_80 = mux(_T_22, io_memReadData, C) @[LR35902.scala 33:23 67:29 68:9]
    node _GEN_81 = mux(_T_22, D, _GEN_75) @[LR35902.scala 34:23 67:29]
    node _GEN_82 = mux(_T_22, E, _GEN_76) @[LR35902.scala 35:23 67:29]
    node _GEN_83 = mux(_T_22, H, _GEN_77) @[LR35902.scala 36:23 67:29]
    node _GEN_84 = mux(_T_22, L, _GEN_78) @[LR35902.scala 37:23 67:29]
    node _GEN_85 = mux(_T_22, A, _GEN_79) @[LR35902.scala 30:23 67:29]
    node _GEN_86 = mux(_T_21, io_memReadData, B) @[LR35902.scala 32:23 65:23 66:9]
    node _GEN_87 = mux(_T_21, C, _GEN_80) @[LR35902.scala 33:23 65:23]
    node _GEN_88 = mux(_T_21, D, _GEN_81) @[LR35902.scala 34:23 65:23]
    node _GEN_89 = mux(_T_21, E, _GEN_82) @[LR35902.scala 35:23 65:23]
    node _GEN_90 = mux(_T_21, H, _GEN_83) @[LR35902.scala 36:23 65:23]
    node _GEN_91 = mux(_T_21, L, _GEN_84) @[LR35902.scala 37:23 65:23]
    node _GEN_92 = mux(_T_21, A, _GEN_85) @[LR35902.scala 30:23 65:23]
    node _PC_T_4 = add(PC, UInt<1>("h1")) @[LR35902.scala 256:19]
    node _PC_T_5 = tail(_PC_T_4, 1) @[LR35902.scala 256:19]
    node _GEN_93 = mux(_T_20, UInt<1>("h1"), UInt<1>("h0")) @[LR35902.scala 105:17 254:18 98:19]
    node _GEN_94 = mux(_T_20, _GEN_86, B) @[LR35902.scala 105:17 32:23]
    node _GEN_95 = mux(_T_20, _GEN_87, C) @[LR35902.scala 105:17 33:23]
    node _GEN_96 = mux(_T_20, _GEN_88, D) @[LR35902.scala 105:17 34:23]
    node _GEN_97 = mux(_T_20, _GEN_89, E) @[LR35902.scala 105:17 35:23]
    node _GEN_98 = mux(_T_20, _GEN_90, H) @[LR35902.scala 105:17 36:23]
    node _GEN_99 = mux(_T_20, _GEN_91, L) @[LR35902.scala 105:17 37:23]
    node _GEN_100 = mux(_T_20, _GEN_92, A) @[LR35902.scala 105:17 30:23]
    node _GEN_101 = mux(_T_20, _PC_T_5, PC) @[LR35902.scala 105:17 256:13 29:23]
    node _GEN_102 = mux(_T_20, UInt<2>("h0"), state) @[LR35902.scala 105:17 257:13 87:24]
    node _GEN_103 = mux(_T_2, _GEN_54, _GEN_94) @[LR35902.scala 105:17]
    node _GEN_104 = mux(_T_2, _GEN_55, _GEN_95) @[LR35902.scala 105:17]
    node _GEN_105 = mux(_T_2, _GEN_56, _GEN_96) @[LR35902.scala 105:17]
    node _GEN_106 = mux(_T_2, _GEN_57, _GEN_97) @[LR35902.scala 105:17]
    node _GEN_107 = mux(_T_2, _GEN_58, _GEN_98) @[LR35902.scala 105:17]
    node _GEN_108 = mux(_T_2, _GEN_59, _GEN_99) @[LR35902.scala 105:17]
    node _GEN_109 = mux(_T_2, _GEN_60, _GEN_100) @[LR35902.scala 105:17]
    node _GEN_110 = mux(_T_2, _GEN_61, _GEN_101) @[LR35902.scala 105:17]
    node _GEN_111 = mux(_T_2, _GEN_62, _GEN_102) @[LR35902.scala 105:17]
    node _GEN_112 = mux(_T_2, _GEN_63, F) @[LR35902.scala 105:17 31:23]
    node _GEN_113 = mux(_T_2, _GEN_64, immDst) @[LR35902.scala 105:17 38:19]
    node _GEN_114 = mux(_T_2, UInt<1>("h0"), _GEN_93) @[LR35902.scala 105:17 98:19]
    node _GEN_115 = mux(_T_1, fetched, opcode) @[LR35902.scala 105:17 120:14 90:24]
    node _GEN_116 = mux(_T_1, UInt<2>("h2"), _GEN_111) @[LR35902.scala 105:17 121:14]
    node _GEN_117 = mux(_T_1, B, _GEN_103) @[LR35902.scala 105:17 32:23]
    node _GEN_118 = mux(_T_1, C, _GEN_104) @[LR35902.scala 105:17 33:23]
    node _GEN_119 = mux(_T_1, D, _GEN_105) @[LR35902.scala 105:17 34:23]
    node _GEN_120 = mux(_T_1, E, _GEN_106) @[LR35902.scala 105:17 35:23]
    node _GEN_121 = mux(_T_1, H, _GEN_107) @[LR35902.scala 105:17 36:23]
    node _GEN_122 = mux(_T_1, L, _GEN_108) @[LR35902.scala 105:17 37:23]
    node _GEN_123 = mux(_T_1, A, _GEN_109) @[LR35902.scala 105:17 30:23]
    node _GEN_124 = mux(_T_1, PC, _GEN_110) @[LR35902.scala 105:17 29:23]
    node _GEN_125 = mux(_T_1, F, _GEN_112) @[LR35902.scala 105:17 31:23]
    node _GEN_126 = mux(_T_1, immDst, _GEN_113) @[LR35902.scala 105:17 38:19]
    node _GEN_127 = mux(_T_1, UInt<1>("h0"), _GEN_114) @[LR35902.scala 105:17 98:19]
    node _GEN_128 = mux(_T, UInt<1>("h1"), _GEN_127) @[LR35902.scala 105:17 111:18]
    node _GEN_129 = mux(_T, io_memReadData, fetched) @[LR35902.scala 105:17 112:18 89:20]
    node _GEN_130 = mux(_T, UInt<2>("h1"), _GEN_116) @[LR35902.scala 105:17 113:18]
    node _GEN_131 = mux(_T, opcode, _GEN_115) @[LR35902.scala 105:17 90:24]
    node _GEN_132 = mux(_T, B, _GEN_117) @[LR35902.scala 105:17 32:23]
    node _GEN_133 = mux(_T, C, _GEN_118) @[LR35902.scala 105:17 33:23]
    node _GEN_134 = mux(_T, D, _GEN_119) @[LR35902.scala 105:17 34:23]
    node _GEN_135 = mux(_T, E, _GEN_120) @[LR35902.scala 105:17 35:23]
    node _GEN_136 = mux(_T, H, _GEN_121) @[LR35902.scala 105:17 36:23]
    node _GEN_137 = mux(_T, L, _GEN_122) @[LR35902.scala 105:17 37:23]
    node _GEN_138 = mux(_T, A, _GEN_123) @[LR35902.scala 105:17 30:23]
    node _GEN_139 = mux(_T, PC, _GEN_124) @[LR35902.scala 105:17 29:23]
    node _GEN_140 = mux(_T, F, _GEN_125) @[LR35902.scala 105:17 31:23]
    node _GEN_141 = mux(_T, immDst, _GEN_126) @[LR35902.scala 105:17 38:19]
    io_memAddress <= PC @[LR35902.scala 97:19]
    io_memRead <= _GEN_128
    io_memWrite <= UInt<1>("h0") @[LR35902.scala 99:19]
    io_memWriteData <= UInt<8>("h0") @[LR35902.scala 100:19]
    io_dbg_pc <= PC @[LR35902.scala 40:13]
    io_dbg_opcode <= opcode @[LR35902.scala 92:17]
    io_dbg_B <= B @[LR35902.scala 41:13]
    io_dbg_A <= A @[LR35902.scala 42:13]
    io_dbg_C <= C @[LR35902.scala 43:13]
    io_dbg_D <= D @[LR35902.scala 44:13]
    io_dbg_E <= E @[LR35902.scala 45:13]
    io_dbg_H <= H @[LR35902.scala 46:13]
    io_dbg_L <= L @[LR35902.scala 47:13]
    PC <= mux(reset, UInt<16>("h0"), _GEN_139) @[LR35902.scala 29:{23,23}]
    A <= mux(reset, UInt<8>("h0"), _GEN_138) @[LR35902.scala 30:{23,23}]
    F <= mux(reset, UInt<8>("h0"), _GEN_140) @[LR35902.scala 31:{23,23}]
    B <= mux(reset, UInt<8>("h0"), _GEN_132) @[LR35902.scala 32:{23,23}]
    C <= mux(reset, UInt<8>("h0"), _GEN_133) @[LR35902.scala 33:{23,23}]
    D <= mux(reset, UInt<8>("h0"), _GEN_134) @[LR35902.scala 34:{23,23}]
    E <= mux(reset, UInt<8>("h0"), _GEN_135) @[LR35902.scala 35:{23,23}]
    H <= mux(reset, UInt<8>("h0"), _GEN_136) @[LR35902.scala 36:{23,23}]
    L <= mux(reset, UInt<8>("h0"), _GEN_137) @[LR35902.scala 37:{23,23}]
    immDst <= _GEN_141
    state <= mux(reset, UInt<2>("h0"), _GEN_130) @[LR35902.scala 87:{24,24}]
    fetched <= _GEN_129
    opcode <= mux(reset, UInt<8>("h0"), _GEN_131) @[LR35902.scala 90:{24,24}]

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
    output io_dbg_A : UInt<8>
    output io_dbg_B : UInt<8>
    output io_dbg_C : UInt<8>
    output io_dbg_D : UInt<8>
    output io_dbg_E : UInt<8>
    output io_dbg_H : UInt<8>
    output io_dbg_L : UInt<8>

    inst cpu of LR35902 @[GameBoyTop.scala 22:19]
    inst bus of Bus @[GameBoyTop.scala 23:19]
    io_dbg_pc <= cpu.io_dbg_pc @[GameBoyTop.scala 41:17]
    io_dbg_opcode <= cpu.io_dbg_opcode @[GameBoyTop.scala 42:17]
    io_dbg_A <= cpu.io_dbg_A @[GameBoyTop.scala 44:12]
    io_dbg_B <= cpu.io_dbg_B @[GameBoyTop.scala 45:12]
    io_dbg_C <= cpu.io_dbg_C @[GameBoyTop.scala 46:12]
    io_dbg_D <= cpu.io_dbg_D @[GameBoyTop.scala 47:12]
    io_dbg_E <= cpu.io_dbg_E @[GameBoyTop.scala 48:12]
    io_dbg_H <= cpu.io_dbg_H @[GameBoyTop.scala 49:12]
    io_dbg_L <= cpu.io_dbg_L @[GameBoyTop.scala 50:12]
    cpu.clock <= clock
    cpu.reset <= reset
    cpu.io_memReadData <= bus.io_cpuReadData @[GameBoyTop.scala 36:22]
    bus.clock <= clock
    bus.reset <= reset
    bus.io_cpuAddress <= cpu.io_memAddress @[GameBoyTop.scala 28:23]
    bus.io_cpuRead <= cpu.io_memRead @[GameBoyTop.scala 29:23]
    bus.io_cpuWrite <= cpu.io_memWrite @[GameBoyTop.scala 30:23]
    bus.io_cpuWriteData <= cpu.io_memWriteData @[GameBoyTop.scala 31:23]
