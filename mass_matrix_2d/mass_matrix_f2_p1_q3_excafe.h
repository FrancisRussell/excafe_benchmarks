#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.85 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = -1.0000000000000000000000000*x[0][1];
    const double var_1 = x[1][1] + var_0;
    const double var_2 = -1.0000000000000000000000000*x[0][0];
    const double var_3 = x[2][0] + var_2;
    const double var_4 = var_0 + x[2][1];
    const double var_5 = x[1][0] + var_2;
    const double var_6 = -1.0000000000000000000000000*var_1*var_3 + var_4*var_5;
    const double var_7 = std::abs(var_6);
    const double var_8 = w[0][2]*w[1][0] + w[0][0]*w[1][2];
    const double var_9 = w[0][2]*w[1][2];
    const double var_10 = var_9 + var_8;
    const double var_11 = w[0][1]*w[1][2] + w[0][2]*w[1][1];
    const double var_12 = -0.0012053571428571427815585*var_11*var_7;
    const double var_13 = w[0][1]*w[1][0] + w[0][0]*w[1][1];
    const double var_14 = w[0][0]*w[1][0];
    const double var_15 = var_14 + var_13;
    const double var_16 = -0.0008035714285714285571791*var_15*var_7;
    const double var_17 = w[0][1]*w[1][1];
    const double var_18 = -0.0040178571428571424606346*var_17*var_7;
    A[37] = -0.0004017857142857142785895*var_10*var_7 + var_16 + var_12 + var_18;
    A[73] = A[37];
    const double var_19 = 0.0001785714285714285712737*var_7*var_8;
    const double var_20 = -0.0001339285714285714352315*var_7*w[0][1]*w[1][1] + var_19;
    const double var_21 = 0.0000446428571428571428184*var_13*var_7 + 0.0010714285714285714818522*var_7*var_9;
    const double var_22 = 0.0003125000000000000065052*var_11*var_7;
    A[4] = var_21 + var_20 + var_22;
    A[40] = A[4];
    const double var_23 = var_11 + var_8;
    const double var_24 = var_23 + var_13;
    const double var_25 = -1.0000000000000000000000000*var_14 + var_11;
    const double var_26 = 0.0016071428571428571143581*var_25*var_7;
    const double var_27 = -0.0013392857142857142981052*var_7*w[0][1]*w[1][1] + var_19;
    const double var_28 = 0.0000446428571428571428184*var_7*w[0][0]*w[1][0];
    const double var_29 = 0.0009375000000000000737257*var_7*w[0][2]*w[1][2];
    A[14] = var_29 + var_28 + var_27;
    const double var_30 = var_14 + var_17;
    const double var_31 = 1.5000000000000000000000000*var_30 + var_13;
    A[29] = 0.0005357142857142857409261*var_31*var_7;
    const double var_32 = var_9 + var_11;
    const double var_33 = -0.0006696428571428571490526*var_7*w[0][1]*w[1][1];
    const double var_34 = 0.0026785714285714285962103*var_14*var_7;
    A[7] = var_33 + -0.0002232142857142857073158*var_32*var_7 + var_34;
    A[70] = A[7];
    const double var_35 = var_13 + var_17;
    const double var_36 = -0.0008035714285714285571791*var_35*var_7;
    const double var_37 = 0.0001785714285714285712737*var_13*var_7;
    const double var_38 = var_37 + -0.0001339285714285714352315*var_7*w[0][2]*w[1][2];
    const double var_39 = 0.0000446428571428571428184*var_7*var_8 + 0.0010714285714285714818522*var_17*var_7;
    A[3] = var_22 + var_39 + var_38;
    const double var_40 = var_14 + var_8;
    const double var_41 = -0.0012053571428571427815585*var_13*var_7;
    const double var_42 = -0.0008035714285714285571791*var_32*var_7;
    A[48] = var_41 + var_42 + -0.0004017857142857142785895*var_40*var_7 + var_18;
    const double var_43 = 0.0024107142857142855631170*var_13*var_7;
    const double var_44 = 0.0333333333333333328707404*var_23 + var_30 + 0.1833333333333333203807314*w[0][2]*w[1][2] + 0.2166666666666666740681535*var_13;
    const double var_45 = var_9 + var_14;
    const double var_46 = -0.0004017857142857142785895*var_24*var_7;
    const double var_47 = 0.0008035714285714285571791*var_17*var_7;
    A[47] = var_46 + var_47 + -0.0012053571428571427815585*var_45*var_7;
    const double var_48 = -0.0008035714285714285571791*var_40*var_7;
    const double var_49 = -0.0040178571428571424606346*var_7*var_9;
    A[45] = var_48 + var_49 + var_12 + -0.0004017857142857142785895*var_35*var_7;
    const double var_50 = 0.0020089285714285712303173*var_13*var_7 + 0.0048214285714285711262339*var_7*var_9;
    const double var_51 = 0.0750000000000000111022302*var_8 + var_17;
    const double var_52 = 0.0160714285714285698425385*var_51*var_7;
    const double var_53 = var_9 + var_17;
    const double var_54 = 1.5000000000000000000000000*var_53 + var_11;
    const double var_55 = 0.0080357142857142849212693*var_14*var_7;
    const double var_56 = 0.0024107142857142855631170*var_7*var_8;
    const double var_57 = var_11 + var_17;
    const double var_58 = -0.0008035714285714285571791*var_57*var_7;
    const double var_59 = -1.0000000000000000000000000*var_9 + var_13;
    const double var_60 = 0.0016071428571428571143581*var_59*var_7;
    A[59] = var_58 + var_60 + var_56 + var_55;
    A[95] = A[59];
    const double var_61 = var_37 + -0.0013392857142857142981052*var_7*w[0][2]*w[1][2];
    const double var_62 = 0.0009375000000000000737257*var_7*w[0][1]*w[1][1];
    A[23] = var_61 + var_62 + var_28;
    const double var_63 = 0.0000446428571428571428184*var_7*w[0][1]*w[1][1];
    const double var_64 = 0.0009375000000000000737257*var_7*w[0][0]*w[1][0];
    A[25] = var_61 + var_63 + var_64;
    A[52] = A[25];
    const double var_65 = var_8 + var_13;
    A[57] = 0.0008035714285714285571791*var_54*var_7 + var_55 + 0.0020089285714285712303173*var_65*var_7;
    const double var_66 = 0.0060267857142857136909520*var_7*var_8 + var_47;
    const double var_67 = 0.0001785714285714285712737*var_11*var_7;
    const double var_68 = var_67 + -0.0001339285714285714352315*var_7*w[0][0]*w[1][0];
    const double var_69 = 0.0003125000000000000065052*var_13*var_7;
    A[28] = var_68 + var_69 + var_39;
    const double var_70 = -0.0006696428571428571490526*var_7*w[0][0]*w[1][0];
    const double var_71 = 0.0026785714285714285962103*var_7*var_9;
    A[26] = var_70 + var_71 + -0.0002232142857142857073158*var_35*var_7;
    A[62] = A[26];
    const double var_72 = var_8 + -1.0000000000000000000000000*var_17;
    const double var_73 = 0.0016071428571428571143581*var_7*var_72;
    A[79] = var_43 + var_55 + var_73 + var_42;
    A[54] = A[45];
    const double var_74 = 0.7500000000000000000000000*var_24 + var_53 + var_14;
    A[99] = 0.0192857142857142845049356*var_7*var_74;
    const double var_75 = var_14 + 0.0750000000000000111022302*var_11;
    const double var_76 = 0.0160714285714285698425385*var_7*var_75;
    A[55] = var_50 + var_66 + var_76;
    const double var_77 = var_11 + var_13;
    const double var_78 = var_9 + 0.0750000000000000111022302*var_13;
    const double var_79 = 0.0160714285714285698425385*var_7*var_78;
    const double var_80 = 0.0048214285714285711262339*var_14*var_7 + 0.0020089285714285712303173*var_11*var_7;
    A[66] = var_66 + var_80 + var_79;
    const double var_81 = 13.0000000000000000000000000*w[0][0]*w[1][0] + 0.3333333333333333148296163*var_11 + var_65;
    A[0] = 0.0002976190476190476458945*var_7*var_81 + 0.0001984126984126984125263*var_53*var_7;
    A[32] = A[23];
    const double var_82 = 0.0010714285714285714818522*var_14*var_7 + 0.0000446428571428571428184*var_11*var_7;
    const double var_83 = 0.0003125000000000000065052*var_7*var_8;
    A[15] = var_82 + var_83 + var_38;
    const double var_84 = 0.0080357142857142849212693*var_17*var_7;
    const double var_85 = 0.0024107142857142855631170*var_11*var_7;
    A[39] = var_48 + var_84 + var_60 + var_85;
    A[93] = A[39];
    A[41] = A[14];
    const double var_86 = 0.0000446428571428571428184*var_7*w[0][2]*w[1][2];
    A[17] = var_27 + var_64 + var_86;
    A[71] = A[17];
    A[1] = 0.0002976190476190476458945*var_44*var_7;
    A[10] = A[1];
    const double var_87 = 0.0008035714285714285571791*var_7*var_9;
    A[35] = var_87 + var_46 + -0.0012053571428571427815585*var_30*var_7;
    A[16] = var_68 + var_21 + var_83;
    const double var_88 = 1.5000000000000000000000000*var_45 + var_8;
    A[38] = var_84 + 0.0008035714285714285571791*var_7*var_88 + 0.0020089285714285712303173*var_7*var_77;
    A[83] = A[38];
    A[82] = A[28];
    const double var_89 = 0.0080357142857142849212693*var_7*var_9;
    A[46] = var_89 + 0.0008035714285714285571791*var_31*var_7 + 0.0020089285714285712303173*var_23*var_7;
    A[64] = A[46];
    const double var_90 = var_53 + 0.1833333333333333203807314*w[0][0]*w[1][0] + 0.2166666666666666740681535*var_11 + 0.0333333333333333328707404*var_65;
    A[12] = 0.0002976190476190476458945*var_7*var_90;
    A[21] = A[12];
    const double var_91 = var_53 + 0.1000000000000000055511151*var_14 + 0.2000000000000000111022302*var_65;
    A[61] = A[16];
    const double var_92 = -0.0008035714285714285571791*var_10*var_7;
    const double var_93 = -0.0040178571428571424606346*var_14*var_7;
    A[67] = -0.0004017857142857142785895*var_57*var_7 + var_92 + var_41 + var_93;
    A[76] = A[67];
    const double var_94 = var_77 + 0.3333333333333333148296163*var_8 + 13.0000000000000000000000000*w[0][1]*w[1][1];
    const double var_95 = -0.0012053571428571427815585*var_7*var_8;
    A[36] = var_58 + var_49 + var_95 + -0.0004017857142857142785895*var_15*var_7;
    A[63] = A[36];
    const double var_96 = var_67 + -0.0013392857142857142981052*var_7*w[0][0]*w[1][0];
    A[8] = var_62 + var_96 + var_86;
    A[80] = A[8];
    const double var_97 = 0.0008035714285714285571791*var_14*var_7;
    const double var_98 = var_23 + 13.0000000000000000000000000*w[0][2]*w[1][2] + 0.3333333333333333148296163*var_13;
    const double var_99 = 0.0020089285714285712303173*var_7*var_8 + 0.0048214285714285711262339*var_17*var_7;
    const double var_100 = var_97 + 0.0060267857142857136909520*var_11*var_7;
    A[44] = var_99 + var_79 + var_100;
    A[58] = var_93 + var_36 + var_95 + -0.0004017857142857142785895*var_32*var_7;
    A[69] = var_89 + var_26 + var_56 + var_36;
    A[75] = A[57];
    A[49] = var_89 + var_16 + var_85 + var_73;
    A[94] = A[49];
    A[27] = var_82 + var_20 + var_69;
    A[72] = A[27];
    const double var_101 = 0.2000000000000000111022302*var_77 + var_45 + 0.1000000000000000055511151*var_17;
    A[96] = A[69];
    const double var_102 = -0.0006696428571428571490526*var_7*w[0][2]*w[1][2];
    const double var_103 = 0.0026785714285714285962103*var_17*var_7;
    A[13] = var_103 + -0.0002232142857142857073158*var_40*var_7 + var_102;
    A[31] = A[13];
    A[22] = 0.0001984126984126984125263*var_30*var_7 + 0.0002976190476190476458945*var_7*var_98;
    A[11] = 0.0002976190476190476458945*var_7*var_94 + 0.0001984126984126984125263*var_45*var_7;
    A[97] = A[79];
    const double var_104 = 0.0333333333333333328707404*var_77 + var_45 + 0.2166666666666666740681535*var_8 + 0.1833333333333333203807314*w[0][1]*w[1][1];
    A[2] = 0.0002976190476190476458945*var_104*var_7;
    A[20] = A[2];
    A[85] = A[58];
    A[18] = -0.0002232142857142857073158*var_10*var_7 + var_70 + var_103;
    A[81] = A[18];
    A[19] = 0.0005357142857142857409261*var_7*var_88;
    A[91] = A[19];
    A[74] = A[47];
    const double var_105 = var_87 + 0.0060267857142857136909520*var_13*var_7;
    A[77] = var_99 + var_76 + var_105;
    A[68] = var_46 + var_97 + -0.0012053571428571427815585*var_53*var_7;
    A[86] = A[68];
    A[51] = A[15];
    A[6] = var_63 + var_29 + var_96;
    A[24] = var_33 + var_71 + -0.0002232142857142857073158*var_15*var_7;
    const double var_106 = 0.1000000000000000055511151*var_9 + 0.2000000000000000111022302*var_23 + var_30;
    A[53] = A[35];
    A[5] = -0.0002232142857142857073158*var_57*var_7 + var_102 + var_34;
    A[30] = A[3];
    A[60] = A[6];
    A[56] = -0.0040178571428571424606346*var_101*var_7 + var_95;
    A[50] = A[5];
    A[89] = var_26 + var_84 + var_92 + var_43;
    A[98] = A[89];
    A[78] = var_41 + -0.0040178571428571424606346*var_106*var_7;
    A[87] = A[78];
    A[34] = -0.0040178571428571424606346*var_7*var_91 + var_12;
    A[65] = A[56];
    A[9] = 0.0005357142857142857409261*var_54*var_7;
    A[90] = A[9];
    A[33] = var_50 + var_100 + var_52;
    A[92] = A[29];
    A[43] = A[34];
    A[88] = var_80 + var_105 + var_52;
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
