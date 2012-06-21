#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 1.13 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = -x[0][1];
    const double var_1 = x[1][1] + var_0;
    const double var_2 = -x[0][0];
    const double var_3 = x[2][0] + var_2;
    const double var_4 = x[1][0] + var_2;
    const double var_5 = x[2][1] + var_0;
    const double var_6 = -var_1*var_3 + var_4*var_5;
    const double var_7 = std::abs(var_6);
    const double var_8 = w[0][3] + -0.5000000000000000000000000*w[0][0];
    const double var_9 = 0.0064285714285714284574325*var_7*var_8;
    const double var_10 = -0.5000000000000000000000000*w[0][1];
    const double var_11 = 3.0000000000000000000000000*w[0][4] + var_10;
    const double var_12 = 0.0032142857142857142287162*var_11*var_7;
    const double var_13 = -w[0][5];
    const double var_14 = 0.0032142857142857142287162*var_13*var_7;
    const double var_15 = 0.0040178571428571424606346*var_7*w[0][2];
    const double var_16 = var_15 + var_14;
    A[69] = var_12 + var_9 + var_16;
    const double var_17 = -w[0][3];
    const double var_18 = 0.0032142857142857142287162*var_17*var_7;
    const double var_19 = 0.0012053571428571427815585*var_7*w[0][0];
    const double var_20 = var_19 + var_18;
    const double var_21 = -w[0][4];
    const double var_22 = -0.0020089285714285712303173*var_7*w[0][1] + 0.0016071428571428571143581*var_21*var_7;
    const double var_23 = 0.0048214285714285711262339*var_17*var_7;
    const double var_24 = 0.0004017857142857142785895*var_7*w[0][0] + var_23;
    const double var_25 = 0.0012053571428571427815585*var_7*w[0][2];
    const double var_26 = var_25 + var_14;
    A[37] = var_24 + var_22 + var_26;
    const double var_27 = w[0][0] + w[0][1];
    const double var_28 = w[0][3] + w[0][4];
    const double var_29 = 0.0027777777777777778837887*w[0][2] + 0.0206349206349206344690561*w[0][5] + 0.0178571428571428561515866*var_27 + 0.0031746031746031746004211*var_28;
    const double var_30 = w[0][5] + -0.5000000000000000000000000*var_27;
    A[46] = 0.0032142857142857142287162*var_30*var_7 + 0.0080357142857142849212693*var_28*var_7 + var_15;
    A[73] = A[37];
    const double var_31 = w[0][0] + w[0][2];
    const double var_32 = 0.0007142857142857142850947*var_7*w[0][5];
    const double var_33 = -0.0013392857142857142981052*var_7*w[0][2] + var_32;
    const double var_34 = 0.0007589285714285714211369*var_7*w[0][0];
    const double var_35 = -0.0001339285714285714352315*var_7*w[0][1];
    A[25] = var_34 + var_33 + var_35;
    const double var_36 = 0.0032142857142857142287162*var_21*var_7;
    const double var_37 = 0.0048214285714285711262339*var_13*var_7;
    A[78] = var_36 + -0.0020089285714285712303173*var_27*var_7 + var_25 + var_18 + var_37;
    const double var_38 = w[0][3] + w[0][5];
    const double var_39 = 0.0027777777777777778837887*w[0][1] + 0.0206349206349206344690561*w[0][4] + 0.0031746031746031746004211*var_38 + 0.0178571428571428561515866*var_31;
    A[2] = 0.0125000000000000006938894*var_39*var_7;
    A[20] = A[2];
    const double var_40 = -0.0004464285714285714146317*var_7*w[0][0];
    const double var_41 = w[0][2] + w[0][1];
    const double var_42 = w[0][3] + -0.5000000000000000000000000*var_41;
    const double var_43 = w[0][5] + w[0][4];
    const double var_44 = 0.3333333333333333148296163*var_42 + var_43 + 2.7500000000000000000000000*w[0][0];
    const double var_45 = 0.0007142857142857142850947*var_7*w[0][4];
    const double var_46 = -0.0004910714285714286048840*var_7*w[0][1] + var_45;
    const double var_47 = w[0][5] + -0.5000000000000000000000000*w[0][2];
    const double var_48 = 0.0064285714285714284574325*var_47*var_7;
    const double var_49 = 3.0000000000000000000000000*w[0][1] + var_21;
    const double var_50 = 0.0008928571428571428292634*var_49*var_7;
    A[18] = var_50 + var_40;
    A[81] = A[18];
    const double var_51 = -0.0020089285714285712303173*var_7*w[0][2] + 0.0016071428571428571143581*var_13*var_7;
    const double var_52 = -0.0004910714285714286048840*var_7*w[0][2] + var_32;
    const double var_53 = -0.5000000000000000000000000*var_31;
    const double var_54 = w[0][4] + var_53;
    const double var_55 = 0.0040178571428571424606346*var_7*w[0][1];
    A[38] = 0.0032142857142857142287162*var_54*var_7 + var_55 + 0.0080357142857142849212693*var_38*var_7;
    A[83] = A[38];
    const double var_56 = -0.0004464285714285714146317*var_7*w[0][2];
    const double var_57 = 0.0048214285714285711262339*var_21*var_7;
    const double var_58 = 0.0004017857142857142785895*var_7*w[0][1] + var_57;
    const double var_59 = 0.0178571428571428561515866*var_41 + 0.0031746031746031746004211*var_43 + 0.0027777777777777778837887*w[0][0] + 0.0206349206349206344690561*w[0][3];
    const double var_60 = w[0][0] + 0.6000000000000000888178420*var_42;
    const double var_61 = 0.0080357142857142849212693*var_60*var_7;
    const double var_62 = 0.0080357142857142849212693*var_7*w[0][5];
    const double var_63 = 0.0241071428571428547638078*var_7*w[0][4];
    A[55] = var_62 + var_61 + var_63;
    const double var_64 = 0.0012500000000000000260209*var_7*w[0][3] + -0.0002232142857142857073158*var_7*w[0][0];
    const double var_65 = w[0][5] + 3.2500000000000000000000000*w[0][2];
    const double var_66 = 0.0001785714285714285712737*var_65*var_7;
    A[4] = var_66 + var_46 + var_64;
    A[40] = A[4];
    const double var_67 = 0.0012053571428571427815585*var_7*w[0][1];
    const double var_68 = var_36 + var_67;
    A[45] = var_24 + var_51 + var_68;
    const double var_69 = 0.0012500000000000000260209*var_7*w[0][4] + -0.0002232142857142857073158*var_7*w[0][1];
    const double var_70 = 0.0007142857142857142850947*var_7*w[0][3];
    const double var_71 = -0.0004910714285714286048840*var_7*w[0][0] + var_70;
    A[16] = var_69 + var_71 + var_66;
    A[61] = A[16];
    const double var_72 = w[0][4] + var_10;
    const double var_73 = w[0][3] + 3.2500000000000000000000000*w[0][0];
    const double var_74 = 0.0001785714285714285712737*var_7*var_73;
    const double var_75 = w[0][1] + 0.6000000000000000888178420*var_54;
    const double var_76 = 0.0080357142857142849212693*var_7*var_75;
    const double var_77 = w[0][2] + 0.6000000000000000888178420*var_30;
    const double var_78 = 0.0080357142857142849212693*var_7*var_77;
    const double var_79 = -0.0016071428571428571143581*var_7*w[0][0] + 0.0096428571428571422524678*var_7*w[0][3];
    const double var_80 = 0.3333333333333333148296163*var_54 + 2.7500000000000000000000000*w[0][1] + var_38;
    const double var_81 = w[0][4] + 3.2500000000000000000000000*w[0][1];
    const double var_82 = 0.0001785714285714285712737*var_7*var_81;
    A[13] = var_50 + var_56;
    const double var_83 = 0.0040178571428571424606346*var_7*w[0][0];
    A[57] = 0.0080357142857142849212693*var_43*var_7 + var_83 + 0.0032142857142857142287162*var_42*var_7;
    const double var_84 = var_55 + var_36;
    const double var_85 = -0.0020089285714285712303173*var_7*w[0][0] + 0.0016071428571428571143581*var_17*var_7;
    const double var_86 = 0.0064285714285714284574325*var_7*var_72;
    A[49] = var_86 + var_79 + var_16;
    const double var_87 = var_11 + 3.0000000000000000000000000*var_38 + var_53;
    A[99] = 0.0192857142857142845049356*var_7*var_87;
    const double var_88 = -0.0013392857142857142981052*var_7*w[0][1] + var_45;
    const double var_89 = -0.0001339285714285714352315*var_7*w[0][2];
    A[17] = var_34 + var_88 + var_89;
    A[71] = A[17];
    A[52] = A[25];
    A[34] = var_36 + -0.0020089285714285712303173*var_41*var_7 + var_14 + var_19 + var_23;
    const double var_90 = var_21 + -var_38;
    const double var_91 = 0.0016071428571428571143581*var_7*var_90;
    const double var_92 = var_83 + var_18;
    A[96] = A[69];
    const double var_93 = w[0][4] + 0.1250000000000000000000000*var_31;
    const double var_94 = 0.0080357142857142849212693*var_7*w[0][3];
    const double var_95 = -0.0016071428571428571143581*var_7*w[0][2] + 0.0096428571428571422524678*var_7*w[0][5];
    A[79] = var_86 + var_95 + var_92;
    const double var_96 = 3.0000000000000000000000000*w[0][2] + var_13;
    const double var_97 = 0.0008928571428571428292634*var_7*var_96;
    const double var_98 = -0.0004464285714285714146317*var_7*w[0][1];
    A[24] = var_97 + var_98;
    const double var_99 = w[0][2] + -0.2500000000000000000000000*var_27;
    A[75] = A[57];
    const double var_100 = 0.0241071428571428547638078*var_7*w[0][3];
    A[33] = var_62 + var_100 + var_76;
    A[0] = 0.0011904761904761905835781*var_44*var_7;
    const double var_101 = 0.0080357142857142849212693*var_7*w[0][4];
    A[44] = var_101 + var_78 + var_100;
    const double var_102 = 0.0004017857142857142785895*var_7*w[0][2] + var_37;
    A[48] = var_102 + var_22 + var_20;
    const double var_103 = 0.0241071428571428547638078*var_7*w[0][5];
    const double var_104 = w[0][0] + -0.2500000000000000000000000*var_41;
    A[43] = A[34];
    const double var_105 = 0.0007589285714285714211369*var_7*w[0][1];
    const double var_106 = -0.0001339285714285714352315*var_7*w[0][0];
    A[23] = var_105 + var_33 + var_106;
    const double var_107 = w[0][5] + 0.1250000000000000000000000*var_27;
    A[29] = 0.0021428571428571429637044*var_107*var_7;
    A[92] = A[29];
    A[19] = 0.0021428571428571429637044*var_7*var_93;
    const double var_108 = 0.0012500000000000000260209*var_7*w[0][5] + -0.0002232142857142857073158*var_7*w[0][2];
    A[28] = var_108 + var_82 + var_71;
    A[39] = var_48 + var_79 + var_84;
    const double var_109 = -0.0013392857142857142981052*var_7*w[0][0] + var_70;
    A[8] = var_89 + var_109 + var_105;
    const double var_110 = 0.0007589285714285714211369*var_7*w[0][2];
    A[67] = var_102 + var_85 + var_68;
    A[76] = A[67];
    const double var_111 = 3.0000000000000000000000000*w[0][0] + var_17;
    A[3] = var_64 + var_82 + var_52;
    A[30] = A[3];
    const double var_112 = w[0][3] + 0.1250000000000000000000000*var_41;
    A[9] = 0.0021428571428571429637044*var_112*var_7;
    A[66] = var_94 + var_78 + var_63;
    const double var_113 = 0.0008928571428571428292634*var_111*var_7;
    A[7] = var_113 + var_98;
    A[68] = var_91 + 0.0016071428571428571143581*var_104*var_7;
    const double var_114 = 0.3333333333333333148296163*var_30 + var_28 + 2.7500000000000000000000000*w[0][2];
    A[31] = A[13];
    A[80] = A[8];
    A[58] = var_58 + var_85 + var_26;
    A[6] = var_35 + var_109 + var_110;
    A[60] = A[6];
    A[77] = var_101 + var_61 + var_103;
    A[27] = var_108 + var_74 + var_46;
    A[5] = var_113 + var_56;
    A[50] = A[5];
    A[87] = A[78];
    A[12] = 0.0125000000000000006938894*var_59*var_7;
    A[11] = 0.0011904761904761905835781*var_7*var_80;
    A[32] = A[23];
    A[88] = var_103 + var_76 + var_94;
    A[59] = var_12 + var_92 + var_48;
    A[1] = 0.0125000000000000006938894*var_29*var_7;
    A[10] = A[1];
    A[35] = var_91 + 0.0016071428571428571143581*var_7*var_99;
    A[53] = A[35];
    A[15] = var_74 + var_69 + var_52;
    A[90] = A[9];
    A[36] = var_58 + var_51 + var_20;
    A[63] = A[36];
    A[93] = A[39];
    A[91] = A[19];
    A[70] = A[7];
    A[22] = 0.0011904761904761905835781*var_114*var_7;
    A[56] = var_67 + -0.0020089285714285712303173*var_31*var_7 + -0.0032142857142857142287162*var_38*var_7 + var_57;
    A[65] = A[56];
    A[89] = var_9 + var_95 + var_84;
    A[98] = A[89];
    A[26] = var_97 + var_40;
    A[62] = A[26];
    A[42] = A[24];
    A[85] = A[58];
    A[95] = A[59];
    A[14] = var_106 + var_88 + var_110;
    const double var_115 = w[0][1] + -0.2500000000000000000000000*var_31;
    A[47] = var_91 + 0.0016071428571428571143581*var_115*var_7;
    A[54] = A[45];
    A[21] = A[12];
    A[86] = A[68];
    A[41] = A[14];
    A[82] = A[28];
    A[84] = A[48];
    A[64] = A[46];
    A[97] = A[79];
    A[72] = A[27];
    A[74] = A[47];
    A[94] = A[49];
    A[51] = A[15];
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
