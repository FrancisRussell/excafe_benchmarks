#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.96 seconds (wall clock).

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
    const double var_8 = w[0][2]*w[1][2];
    const double var_9 = 0.0080357142857142849212693*var_7*var_8;
    const double var_10 = w[0][0]*w[1][2] + w[0][2]*w[1][0];
    const double var_11 = 0.0024107142857142855631170*var_10*var_7;
    const double var_12 = w[0][1]*w[1][0] + w[0][0]*w[1][1];
    const double var_13 = w[0][1]*w[1][1];
    const double var_14 = var_13 + var_12;
    const double var_15 = -0.0008035714285714285571791*var_14*var_7;
    const double var_16 = w[0][1]*w[1][2] + w[0][2]*w[1][1];
    const double var_17 = w[0][0]*w[1][0];
    const double var_18 = -var_17 + var_16;
    const double var_19 = 0.0016071428571428571143581*var_18*var_7;
    A[69] = var_9 + var_19 + var_15 + var_11;
    const double var_20 = var_8 + var_10;
    const double var_21 = -0.0012053571428571427815585*var_16*var_7;
    const double var_22 = var_12 + var_17;
    const double var_23 = -0.0008035714285714285571791*var_22*var_7;
    const double var_24 = -0.0040178571428571424606346*var_13*var_7;
    A[37] = var_23 + -0.0004017857142857142785895*var_20*var_7 + var_24 + var_21;
    const double var_25 = 0.0008035714285714285571791*var_7*var_8;
    const double var_26 = var_16 + var_10;
    const double var_27 = var_13 + var_17;
    const double var_28 = 1.5000000000000000000000000*var_27 + var_12;
    A[46] = var_9 + 0.0020089285714285712303173*var_26*var_7 + 0.0008035714285714285571791*var_28*var_7;
    A[73] = A[37];
    const double var_29 = 0.0001785714285714285712737*var_12*var_7;
    const double var_30 = -0.0013392857142857142981052*var_7*w[0][2]*w[1][2] + var_29;
    const double var_31 = 0.0009375000000000000737257*var_7*w[0][0]*w[1][0];
    const double var_32 = 0.0000446428571428571428184*var_7*w[0][1]*w[1][1];
    A[25] = var_31 + var_32 + var_30;
    const double var_33 = -0.0012053571428571427815585*var_12*var_7;
    const double var_34 = 0.2000000000000000111022302*var_26 + var_27 + 0.1000000000000000055511151*var_8;
    A[78] = var_33 + -0.0040178571428571424606346*var_34*var_7;
    const double var_35 = var_16 + var_12;
    const double var_36 = var_8 + var_17;
    const double var_37 = 0.1833333333333333203807314*w[0][1]*w[1][1] + 0.2166666666666666740681535*var_10 + 0.0333333333333333328707404*var_35 + var_36;
    A[2] = 0.0002976190476190476458945*var_37*var_7;
    A[20] = A[2];
    const double var_38 = -var_13 + var_10;
    const double var_39 = 0.0016071428571428571143581*var_38*var_7;
    const double var_40 = 0.0003125000000000000065052*var_16*var_7;
    const double var_41 = -0.0006696428571428571490526*var_7*w[0][1]*w[1][1];
    const double var_42 = var_8 + 0.0750000000000000111022302*var_12;
    const double var_43 = 0.0160714285714285698425385*var_42*var_7;
    const double var_44 = -0.0006696428571428571490526*var_7*w[0][0]*w[1][0];
    const double var_45 = 0.0026785714285714285962103*var_13*var_7;
    A[18] = var_44 + var_45 + -0.0002232142857142857073158*var_20*var_7;
    A[81] = A[18];
    const double var_46 = -0.0006696428571428571490526*var_7*w[0][2]*w[1][2];
    const double var_47 = 0.0080357142857142849212693*var_13*var_7;
    const double var_48 = var_10 + 1.5000000000000000000000000*var_36;
    A[38] = var_47 + 0.0020089285714285712303173*var_35*var_7 + 0.0008035714285714285571791*var_48*var_7;
    A[83] = A[38];
    const double var_49 = -0.0040178571428571424606346*var_17*var_7;
    const double var_50 = -var_8 + var_12;
    const double var_51 = 0.0016071428571428571143581*var_50*var_7;
    const double var_52 = 0.0010714285714285714818522*var_17*var_7 + 0.0000446428571428571428184*var_16*var_7;
    const double var_53 = 0.0020089285714285712303173*var_12*var_7 + 0.0048214285714285711262339*var_7*var_8;
    const double var_54 = 0.0750000000000000111022302*var_16 + var_17;
    const double var_55 = 0.0160714285714285698425385*var_54*var_7;
    const double var_56 = 0.0008035714285714285571791*var_13*var_7;
    const double var_57 = 0.0060267857142857136909520*var_10*var_7 + var_56;
    A[55] = var_55 + var_57 + var_53;
    const double var_58 = 0.0001785714285714285712737*var_10*var_7;
    const double var_59 = -0.0001339285714285714352315*var_7*w[0][1]*w[1][1] + var_58;
    const double var_60 = 0.0000446428571428571428184*var_12*var_7 + 0.0010714285714285714818522*var_7*var_8;
    A[4] = var_60 + var_59 + var_40;
    A[40] = A[4];
    const double var_61 = var_10 + var_17;
    const double var_62 = -0.0008035714285714285571791*var_61*var_7;
    const double var_63 = -0.0040178571428571424606346*var_7*var_8;
    A[45] = var_62 + -0.0004017857142857142785895*var_14*var_7 + var_21 + var_63;
    const double var_64 = 0.0001785714285714285712737*var_16*var_7;
    const double var_65 = -0.0001339285714285714352315*var_7*w[0][0]*w[1][0] + var_64;
    const double var_66 = 0.0003125000000000000065052*var_10*var_7;
    A[16] = var_60 + var_65 + var_66;
    A[61] = A[16];
    const double var_67 = var_13 + 0.0750000000000000111022302*var_10;
    const double var_68 = 0.0160714285714285698425385*var_67*var_7;
    const double var_69 = 0.0080357142857142849212693*var_17*var_7;
    const double var_70 = 0.0060267857142857136909520*var_12*var_7 + var_25;
    const double var_71 = var_12 + var_10;
    const double var_72 = 13.0000000000000000000000000*w[0][0]*w[1][0] + var_71 + 0.3333333333333333148296163*var_16;
    A[13] = var_46 + var_45 + -0.0002232142857142857073158*var_61*var_7;
    const double var_73 = var_8 + var_13;
    const double var_74 = 1.5000000000000000000000000*var_73 + var_16;
    A[57] = var_69 + 0.0020089285714285712303173*var_7*var_71 + 0.0008035714285714285571791*var_7*var_74;
    const double var_75 = 0.0008035714285714285571791*var_17*var_7;
    const double var_76 = 0.0060267857142857136909520*var_16*var_7 + var_75;
    const double var_77 = 0.0024107142857142855631170*var_16*var_7;
    A[49] = var_23 + var_9 + var_77 + var_39;
    const double var_78 = var_10 + var_35;
    const double var_79 = var_36 + 0.7500000000000000000000000*var_78 + var_13;
    A[99] = 0.0192857142857142845049356*var_7*var_79;
    const double var_80 = -0.0013392857142857142981052*var_7*w[0][1]*w[1][1] + var_58;
    const double var_81 = 0.0000446428571428571428184*var_7*w[0][2]*w[1][2];
    A[17] = var_31 + var_80 + var_81;
    A[71] = A[17];
    A[52] = A[25];
    const double var_82 = 0.1000000000000000055511151*var_17 + var_73 + 0.2000000000000000111022302*var_71;
    A[34] = var_21 + -0.0040178571428571424606346*var_7*var_82;
    const double var_83 = 0.1833333333333333203807314*w[0][0]*w[1][0] + var_73 + 0.2166666666666666740681535*var_16 + 0.0333333333333333328707404*var_71;
    A[96] = A[69];
    const double var_84 = 0.0000446428571428571428184*var_7*w[0][0]*w[1][0];
    const double var_85 = 0.0024107142857142855631170*var_12*var_7;
    const double var_86 = var_8 + var_16;
    const double var_87 = -0.0008035714285714285571791*var_7*var_86;
    A[79] = var_87 + var_69 + var_39 + var_85;
    const double var_88 = 0.0026785714285714285962103*var_7*var_8;
    A[24] = var_41 + -0.0002232142857142857073158*var_22*var_7 + var_88;
    const double var_89 = 13.0000000000000000000000000*w[0][2]*w[1][2] + 0.3333333333333333148296163*var_12 + var_26;
    A[75] = A[57];
    A[33] = var_68 + var_53 + var_76;
    A[0] = 0.0001984126984126984125263*var_7*var_73 + 0.0002976190476190476458945*var_7*var_72;
    const double var_90 = 0.0020089285714285712303173*var_10*var_7 + 0.0048214285714285711262339*var_13*var_7;
    A[44] = var_90 + var_43 + var_76;
    A[48] = var_87 + -0.0004017857142857142785895*var_61*var_7 + var_33 + var_24;
    const double var_91 = var_13 + var_16;
    const double var_92 = -0.0008035714285714285571791*var_7*var_91;
    const double var_93 = -0.0013392857142857142981052*var_7*w[0][0]*w[1][0] + var_64;
    const double var_94 = -0.0012053571428571427815585*var_10*var_7;
    A[43] = A[34];
    const double var_95 = 0.0009375000000000000737257*var_7*w[0][1]*w[1][1];
    A[23] = var_95 + var_30 + var_84;
    A[29] = 0.0005357142857142857409261*var_28*var_7;
    A[92] = A[29];
    A[19] = 0.0005357142857142857409261*var_48*var_7;
    const double var_96 = 0.0000446428571428571428184*var_10*var_7 + 0.0010714285714285714818522*var_13*var_7;
    const double var_97 = 0.0003125000000000000065052*var_12*var_7;
    A[28] = var_96 + var_65 + var_97;
    A[39] = var_47 + var_62 + var_77 + var_51;
    A[8] = var_95 + var_93 + var_81;
    const double var_98 = -0.0008035714285714285571791*var_20*var_7;
    A[67] = var_98 + -0.0004017857142857142785895*var_7*var_91 + var_33 + var_49;
    A[76] = A[67];
    const double var_99 = var_36 + 0.2000000000000000111022302*var_35 + 0.1000000000000000055511151*var_13;
    const double var_100 = -0.0001339285714285714352315*var_7*w[0][2]*w[1][2] + var_29;
    A[3] = var_96 + var_100 + var_40;
    A[30] = A[3];
    A[9] = 0.0005357142857142857409261*var_7*var_74;
    const double var_101 = 0.0020089285714285712303173*var_16*var_7 + 0.0048214285714285711262339*var_17*var_7;
    A[66] = var_101 + var_43 + var_57;
    const double var_102 = 0.0026785714285714285962103*var_17*var_7;
    A[7] = var_41 + -0.0002232142857142857073158*var_7*var_86 + var_102;
    const double var_103 = -0.0004017857142857142785895*var_7*var_78;
    A[68] = var_103 + -0.0012053571428571427815585*var_7*var_73 + var_75;
    A[31] = A[13];
    A[80] = A[8];
    A[58] = var_15 + -0.0004017857142857142785895*var_7*var_86 + var_94 + var_49;
    const double var_104 = 0.0009375000000000000737257*var_7*w[0][2]*w[1][2];
    A[6] = var_32 + var_93 + var_104;
    A[60] = A[6];
    A[77] = var_90 + var_55 + var_70;
    A[27] = var_52 + var_59 + var_97;
    A[5] = var_46 + -0.0002232142857142857073158*var_7*var_91 + var_102;
    A[50] = A[5];
    A[87] = A[78];
    A[12] = 0.0002976190476190476458945*var_7*var_83;
    const double var_105 = 0.3333333333333333148296163*var_10 + 13.0000000000000000000000000*w[0][1]*w[1][1] + var_35;
    A[11] = 0.0001984126984126984125263*var_36*var_7 + 0.0002976190476190476458945*var_105*var_7;
    A[32] = A[23];
    A[88] = var_68 + var_70 + var_101;
    A[59] = var_92 + var_69 + var_11 + var_51;
    const double var_106 = 0.1833333333333333203807314*w[0][2]*w[1][2] + 0.2166666666666666740681535*var_12 + var_27 + 0.0333333333333333328707404*var_26;
    A[1] = 0.0002976190476190476458945*var_106*var_7;
    A[10] = A[1];
    A[35] = var_103 + -0.0012053571428571427815585*var_27*var_7 + var_25;
    A[53] = A[35];
    A[15] = var_52 + var_66 + var_100;
    A[90] = A[9];
    A[36] = var_92 + -0.0004017857142857142785895*var_22*var_7 + var_63 + var_94;
    A[63] = A[36];
    A[93] = A[39];
    A[91] = A[19];
    A[70] = A[7];
    A[22] = 0.0001984126984126984125263*var_27*var_7 + 0.0002976190476190476458945*var_7*var_89;
    A[56] = var_94 + -0.0040178571428571424606346*var_7*var_99;
    A[65] = A[56];
    A[89] = var_47 + var_98 + var_85 + var_19;
    A[98] = A[89];
    A[26] = var_44 + -0.0002232142857142857073158*var_14*var_7 + var_88;
    A[62] = A[26];
    A[42] = A[24];
    A[85] = A[58];
    A[95] = A[59];
    A[14] = var_104 + var_80 + var_84;
    A[47] = var_103 + -0.0012053571428571427815585*var_36*var_7 + var_56;
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
