#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.68 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = -1.0000000000000000000000000*x[0][1];
    const double var_1 = var_0 + x[1][1];
    const double var_2 = -1.0000000000000000000000000*x[0][0];
    const double var_3 = x[2][0] + var_2;
    const double var_4 = var_0 + x[2][1];
    const double var_5 = var_2 + x[1][0];
    const double var_6 = -1.0000000000000000000000000*var_1*var_3 + var_4*var_5;
    const double var_7 = std::abs(var_6);
    const double var_8 = -1.0000000000000000000000000*w[0][4];
    const double var_9 = 0.0016071428571428571143581*var_7*var_8 + -0.0020089285714285712303173*var_7*w[0][1];
    const double var_10 = -1.0000000000000000000000000*w[0][3];
    const double var_11 = 0.0048214285714285711262339*var_10*var_7;
    const double var_12 = 0.0004017857142857142785895*var_7*w[0][0] + var_11;
    const double var_13 = -1.0000000000000000000000000*w[0][5];
    const double var_14 = 0.0032142857142857142287162*var_13*var_7;
    const double var_15 = 0.0012053571428571427815585*var_7*w[0][2];
    const double var_16 = var_14 + var_15;
    A[37] = var_9 + var_12 + var_16;
    A[73] = A[37];
    const double var_17 = w[0][5] + 3.2500000000000000000000000*w[0][2];
    const double var_18 = 0.0001785714285714285712737*var_17*var_7;
    const double var_19 = 0.0012500000000000000260209*var_7*w[0][3] + -0.0002232142857142857073158*var_7*w[0][0];
    const double var_20 = 0.0007142857142857142850947*var_7*w[0][4];
    const double var_21 = var_20 + -0.0004910714285714286048840*var_7*w[0][1];
    A[4] = var_19 + var_21 + var_18;
    A[40] = A[4];
    const double var_22 = -0.0004464285714285714146317*var_7*w[0][2];
    const double var_23 = var_20 + -0.0013392857142857142981052*var_7*w[0][1];
    const double var_24 = -0.0001339285714285714352315*var_7*w[0][0];
    const double var_25 = 0.0007589285714285714211369*var_7*w[0][2];
    A[14] = var_25 + var_24 + var_23;
    const double var_26 = w[0][0] + w[0][1];
    const double var_27 = w[0][5] + 0.1250000000000000000000000*var_26;
    A[29] = 0.0021428571428571429637044*var_27*var_7;
    const double var_28 = 3.0000000000000000000000000*w[0][0] + var_10;
    const double var_29 = 0.0008928571428571428292634*var_28*var_7;
    const double var_30 = -0.0004464285714285714146317*var_7*w[0][1];
    A[7] = var_29 + var_30;
    A[70] = A[7];
    const double var_31 = -0.0001339285714285714352315*var_7*w[0][2];
    const double var_32 = w[0][4] + 3.2500000000000000000000000*w[0][1];
    const double var_33 = 0.0001785714285714285712737*var_32*var_7;
    const double var_34 = 0.0007142857142857142850947*var_7*w[0][5];
    const double var_35 = -0.0004910714285714286048840*var_7*w[0][2] + var_34;
    A[3] = var_35 + var_19 + var_33;
    const double var_36 = 0.0048214285714285711262339*var_13*var_7;
    const double var_37 = 0.0004017857142857142785895*var_7*w[0][2] + var_36;
    const double var_38 = 0.0032142857142857142287162*var_10*var_7;
    const double var_39 = 0.0012053571428571427815585*var_7*w[0][0];
    const double var_40 = var_38 + var_39;
    A[48] = var_9 + var_37 + var_40;
    const double var_41 = 0.0080357142857142849212693*var_7*w[0][4];
    const double var_42 = w[0][4] + w[0][5];
    const double var_43 = var_10 + -1.0000000000000000000000000*var_42;
    const double var_44 = 0.0016071428571428571143581*var_43*var_7;
    const double var_45 = w[0][0] + w[0][2];
    const double var_46 = w[0][1] + -0.2500000000000000000000000*var_45;
    A[47] = var_44 + 0.0016071428571428571143581*var_46*var_7;
    const double var_47 = 0.0241071428571428547638078*var_7*w[0][5];
    const double var_48 = -0.0020089285714285712303173*var_7*w[0][2] + 0.0016071428571428571143581*var_13*var_7;
    const double var_49 = 0.0032142857142857142287162*var_7*var_8;
    const double var_50 = 0.0012053571428571427815585*var_7*w[0][1];
    const double var_51 = var_50 + var_49;
    A[45] = var_51 + var_12 + var_48;
    const double var_52 = 0.0096428571428571422524678*var_7*w[0][3] + -0.0016071428571428571143581*var_7*w[0][0];
    const double var_53 = -0.5000000000000000000000000*w[0][0] + w[0][3];
    const double var_54 = 0.0064285714285714284574325*var_53*var_7;
    const double var_55 = 0.0040178571428571424606346*var_7*w[0][0];
    const double var_56 = w[0][5] + -0.5000000000000000000000000*w[0][2];
    const double var_57 = 0.0064285714285714284574325*var_56*var_7;
    const double var_58 = 0.0096428571428571422524678*var_7*w[0][4] + -0.0016071428571428571143581*var_7*w[0][1];
    const double var_59 = var_38 + var_55;
    A[59] = var_57 + var_59 + var_58;
    A[95] = A[59];
    const double var_60 = -0.0013392857142857142981052*var_7*w[0][2] + var_34;
    const double var_61 = 0.0007589285714285714211369*var_7*w[0][1];
    A[23] = var_61 + var_24 + var_60;
    const double var_62 = -0.0001339285714285714352315*var_7*w[0][1];
    const double var_63 = 0.0007589285714285714211369*var_7*w[0][0];
    A[25] = var_63 + var_62 + var_60;
    A[52] = A[25];
    const double var_64 = w[0][1] + w[0][2];
    const double var_65 = w[0][3] + -0.5000000000000000000000000*var_64;
    A[57] = 0.0080357142857142849212693*var_42*var_7 + var_55 + 0.0032142857142857142287162*var_65*var_7;
    const double var_66 = 0.0241071428571428547638078*var_7*w[0][4];
    const double var_67 = 3.0000000000000000000000000*w[0][1] + var_8;
    const double var_68 = 0.0008928571428571428292634*var_67*var_7;
    const double var_69 = -0.0002232142857142857073158*var_7*w[0][2] + 0.0012500000000000000260209*var_7*w[0][5];
    const double var_70 = 0.0007142857142857142850947*var_7*w[0][3];
    const double var_71 = var_70 + -0.0004910714285714286048840*var_7*w[0][0];
    A[28] = var_69 + var_33 + var_71;
    const double var_72 = var_13 + 3.0000000000000000000000000*w[0][2];
    const double var_73 = 0.0008928571428571428292634*var_7*var_72;
    const double var_74 = -0.0004464285714285714146317*var_7*w[0][0];
    A[26] = var_73 + var_74;
    A[62] = A[26];
    const double var_75 = w[0][4] + -0.5000000000000000000000000*w[0][1];
    const double var_76 = 0.0064285714285714284574325*var_7*var_75;
    const double var_77 = -0.0016071428571428571143581*var_7*w[0][2] + 0.0096428571428571422524678*var_7*w[0][5];
    A[79] = var_76 + var_77 + var_59;
    A[54] = A[45];
    const double var_78 = w[0][3] + var_42;
    const double var_79 = w[0][1] + var_45;
    A[99] = -0.0096428571428571422524678*var_7*var_79 + 0.0578571428571428569842539*var_7*var_78;
    const double var_80 = var_70 + -0.0013392857142857142981052*var_7*w[0][0];
    const double var_81 = w[0][0] + 0.6000000000000000888178420*var_65;
    const double var_82 = 0.0080357142857142849212693*var_7*var_81;
    const double var_83 = 0.0080357142857142849212693*var_7*w[0][5];
    A[55] = var_66 + var_83 + var_82;
    const double var_84 = w[0][5] + -0.5000000000000000000000000*var_26;
    const double var_85 = w[0][4] + w[0][3];
    const double var_86 = 0.3333333333333333148296163*var_84 + var_85 + 2.7500000000000000000000000*w[0][2];
    const double var_87 = 0.6000000000000000888178420*var_84 + w[0][2];
    const double var_88 = 0.0080357142857142849212693*var_7*var_87;
    const double var_89 = 0.0080357142857142849212693*var_7*w[0][3];
    A[66] = var_66 + var_89 + var_88;
    const double var_90 = 2.7500000000000000000000000*w[0][0] + 0.3333333333333333148296163*var_65 + var_42;
    A[0] = 0.0011904761904761905835781*var_7*var_90;
    A[32] = A[23];
    const double var_91 = 0.0012500000000000000260209*var_7*w[0][4] + -0.0002232142857142857073158*var_7*w[0][1];
    const double var_92 = 3.2500000000000000000000000*w[0][0] + w[0][3];
    const double var_93 = 0.0001785714285714285712737*var_7*var_92;
    A[15] = var_35 + var_91 + var_93;
    const double var_94 = 0.0040178571428571424606346*var_7*w[0][1];
    const double var_95 = var_94 + var_49;
    A[39] = var_57 + var_52 + var_95;
    A[93] = A[39];
    A[41] = A[14];
    A[17] = var_63 + var_23 + var_31;
    A[71] = A[17];
    const double var_96 = 0.0206349206349206344690561*w[0][5] + 0.0031746031746031746004211*var_85 + 0.0178571428571428561515866*var_26 + 0.0027777777777777778837887*w[0][2];
    A[1] = 0.0125000000000000006938894*var_7*var_96;
    A[10] = A[1];
    const double var_97 = w[0][2] + -0.2500000000000000000000000*var_26;
    A[35] = var_44 + 0.0016071428571428571143581*var_7*var_97;
    A[16] = var_91 + var_71 + var_18;
    const double var_98 = w[0][4] + -0.5000000000000000000000000*var_45;
    const double var_99 = w[0][3] + w[0][5];
    A[38] = 0.0032142857142857142287162*var_7*var_98 + var_94 + 0.0080357142857142849212693*var_7*var_99;
    A[83] = A[38];
    A[82] = A[28];
    const double var_100 = 0.0040178571428571424606346*var_7*w[0][2];
    A[46] = var_100 + 0.0032142857142857142287162*var_7*var_84 + 0.0080357142857142849212693*var_7*var_85;
    A[64] = A[46];
    const double var_101 = 0.0027777777777777778837887*w[0][0] + 0.0206349206349206344690561*w[0][3] + 0.0031746031746031746004211*var_42 + 0.0178571428571428561515866*var_64;
    A[12] = 0.0125000000000000006938894*var_101*var_7;
    A[21] = A[12];
    A[61] = A[16];
    const double var_102 = 0.0016071428571428571143581*var_10*var_7 + -0.0020089285714285712303173*var_7*w[0][0];
    A[67] = var_37 + var_51 + var_102;
    A[76] = A[67];
    const double var_103 = 0.0048214285714285711262339*var_7*var_8;
    const double var_104 = 0.0004017857142857142785895*var_7*w[0][1] + var_103;
    A[36] = var_104 + var_40 + var_48;
    A[63] = A[36];
    A[8] = var_80 + var_61 + var_31;
    A[80] = A[8];
    const double var_105 = 0.0241071428571428547638078*var_7*w[0][3];
    A[44] = var_41 + var_105 + var_88;
    A[58] = var_16 + var_102 + var_104;
    const double var_106 = var_14 + var_100;
    A[69] = var_106 + var_54 + var_58;
    A[75] = A[57];
    A[49] = var_76 + var_52 + var_106;
    A[94] = A[49];
    const double var_107 = 2.7500000000000000000000000*w[0][1] + 0.3333333333333333148296163*var_98 + var_99;
    A[27] = var_21 + var_69 + var_93;
    A[72] = A[27];
    const double var_108 = w[0][4] + 0.1250000000000000000000000*var_45;
    A[96] = A[69];
    A[13] = var_22 + var_68;
    A[31] = A[13];
    A[22] = 0.0011904761904761905835781*var_7*var_86;
    A[11] = 0.0011904761904761905835781*var_107*var_7;
    const double var_109 = w[0][1] + 0.6000000000000000888178420*var_98;
    A[97] = A[79];
    const double var_110 = 0.0206349206349206344690561*w[0][4] + 0.0027777777777777778837887*w[0][1] + 0.0178571428571428561515866*var_45 + 0.0031746031746031746004211*var_99;
    A[2] = 0.0125000000000000006938894*var_110*var_7;
    A[20] = A[2];
    A[85] = A[58];
    A[18] = var_68 + var_74;
    A[81] = A[18];
    A[19] = 0.0021428571428571429637044*var_108*var_7;
    A[91] = A[19];
    A[74] = A[47];
    A[77] = var_47 + var_41 + var_82;
    const double var_111 = w[0][0] + -0.2500000000000000000000000*var_64;
    A[68] = 0.0016071428571428571143581*var_111*var_7 + var_44;
    A[86] = A[68];
    A[51] = A[15];
    A[6] = var_25 + var_80 + var_62;
    A[24] = var_73 + var_30;
    A[53] = A[35];
    A[5] = var_22 + var_29;
    const double var_112 = 0.0080357142857142849212693*var_109*var_7;
    A[30] = A[3];
    A[60] = A[6];
    A[56] = var_50 + -0.0020089285714285712303173*var_45*var_7 + var_38 + var_14 + var_103;
    A[50] = A[5];
    A[89] = var_77 + var_95 + var_54;
    A[98] = A[89];
    A[78] = var_15 + var_36 + var_49 + -0.0020089285714285712303173*var_26*var_7 + var_38;
    A[87] = A[78];
    A[34] = -0.0032142857142857142287162*var_42*var_7 + -0.0020089285714285712303173*var_64*var_7 + var_39 + var_11;
    A[65] = A[56];
    const double var_113 = w[0][3] + 0.1250000000000000000000000*var_64;
    A[9] = 0.0021428571428571429637044*var_113*var_7;
    A[90] = A[9];
    A[33] = var_112 + var_83 + var_105;
    A[92] = A[29];
    A[43] = A[34];
    A[88] = var_89 + var_47 + var_112;
    A[84] = A[48];
    A[42] = A[24];
  }

  void tabulate_tensor(double* const A,
                       const double* const* w,
                       const ufc::cell& c,
                       unsigned int num_quadrature_points,
                       const double* const* quadrature_points,
                       const double* quadrature_weights) const
  {
    assert(0 && "This function is not implemented!");
  }
};

extern "C" ufc::cell_integral* newExcafeCellIntegral_0()
{
  return new ExcafeCellIntegral_0();
}
