#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 2.37 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    A[69] = 0.0000000000000000000000000;
    const double var_0 = -x[0][1];
    const double var_1 = x[2][1] + var_0;
    const double var_2 = -x[0][0];
    const double var_3 = x[1][0] + var_2;
    const double var_4 = x[1][1] + var_0;
    const double var_5 = x[2][0] + var_2;
    const double var_6 = var_1*var_3 + -var_4*var_5;
    const double var_7 = var_6;
    const double var_8 = std::abs(var_7);
    const double var_9 = var_6;
    const double var_10 = var_3*var_5 + var_1*var_4;
    const double var_11 = var_3*w[0][5] + var_1*w[0][1];
    const double var_12 = var_4*w[0][2] + var_5*w[0][4];
    const double var_13 = -var_11 + var_12;
    const double var_14 = -var_5*w[0][3] + var_13;
    const double var_15 = var_3*w[0][3] + var_14;
    const double var_16 = -var_4;
    const double var_17 = var_1 + var_16;
    const double var_18 = var_17*w[0][0];
    const double var_19 = var_15 + var_18;
    A[15] = 0.6666666666666666296592325*var_10*var_19*var_8/(var_9*var_9*var_9);
    A[37] = A[15];
    A[46] = 0.0000000000000000000000000;
    A[73] = 0.0000000000000000000000000;
    const double var_20 = var_11 + -var_12;
    const double var_21 = -var_3*w[0][3] + var_20;
    const double var_22 = -var_1*w[0][0] + var_5*w[0][3];
    const double var_23 = var_21 + var_22;
    const double var_24 = var_4*w[0][0];
    const double var_25 = var_23 + var_24;
    const double var_26 = var_3*var_3 + var_4*var_4;
    A[26] = 0.5000000000000000000000000*var_25*var_26*var_8/(var_9*var_9*var_9);
    A[104] = A[26];
    A[14] = 0.1666666666666666574148081*var_10*var_25*var_8/(var_9*var_9*var_9);
    A[25] = A[14];
    const double var_27 = var_13 + var_18;
    const double var_28 = var_21 + var_24;
    const double var_29 = -var_1*var_3*var_3*w[0][0] + var_26*var_28 + var_4*var_4*var_5*w[0][3];
    const double var_30 = var_22 + var_20 + var_24;
    const double var_31 = -var_3*var_5*var_5*w[0][3];
    const double var_32 = var_3*var_3*var_5*w[0][3];
    const double var_33 = var_31 + var_1*var_17*var_4*w[0][0] + var_32;
    const double var_34 = 3.0000000000000000000000000*var_33 + var_30*var_5*var_5 + var_29 + var_1*var_1*var_23;
    const double var_35 = var_27*var_3*var_5 + var_1*var_15*var_4 + 0.5000000000000000000000000*var_34;
    A[0] = var_35*var_8/(var_9*var_9*var_9);
    A[78] = A[0];
    A[20] = 0.0000000000000000000000000;
    A[100] = 0.0000000000000000000000000;
    A[132] = 0.0000000000000000000000000;
    A[81] = 0.0000000000000000000000000;
    A[127] = 0.0000000000000000000000000;
    const double var_36 = 2.0000000000000000000000000*var_3*w[0][3] + var_14 + var_18;
    const double var_37 = var_1*var_15 + -var_3*var_5*w[0][0];
    const double var_38 = var_1 + -2.0000000000000000000000000*var_4;
    const double var_39 = var_4*var_5*w[0][3] + var_37 + var_1*var_38*w[0][0];
    const double var_40 = var_10*var_28 + var_36*var_5*var_5 + var_1*var_39;
    A[5] = 0.6666666666666666296592325*var_40*var_8/(var_9*var_9*var_9);
    A[83] = A[5];
    const double var_41 = -var_1*var_4*var_4*w[0][0] + var_32;
    const double var_42 = var_29 + var_1*var_10*w[0][0] + var_37*var_4 + var_14*var_3*var_5;
    const double var_43 = var_41 + 0.5000000000000000000000000*var_42;
    A[2] = 0.3333333333333333148296163*var_43*var_8/(var_9*var_9*var_9);
    const double var_44 = 2.0000000000000000000000000*var_1 + var_16;
    A[139] = A[5];
    A[55] = 0.0000000000000000000000000;
    A[40] = 1.3333333333333332593184650*var_40*var_8/(var_9*var_9*var_9);
    A[45] = 0.0000000000000000000000000;
    A[61] = A[5];
    A[112] = 0.0000000000000000000000000;
    A[136] = 0.0000000000000000000000000;
    A[53] = 1.3333333333333332593184650*var_10*var_19*var_8/(var_9*var_9*var_9);
    A[142] = A[53];
    A[124] = 0.0000000000000000000000000;
    const double var_45 = var_15*var_4 + var_1*var_23;
    const double var_46 = var_4*var_44*w[0][0] + var_45;
    const double var_47 = var_3 + -2.0000000000000000000000000*var_5;
    A[125] = 0.0000000000000000000000000;
    const double var_48 = var_5*var_5 + var_1*var_1;
    A[13] = 0.5000000000000000000000000*var_25*var_48*var_8/(var_9*var_9*var_9);
    A[57] = 0.0000000000000000000000000;
    A[129] = A[40];
    const double var_49 = var_30*var_5 + var_27*var_3;
    const double var_50 = var_49 + var_3*var_47*w[0][3];
    const double var_51 = var_4*var_46 + var_3*var_50;
    A[41] = 1.3333333333333332593184650*var_51*var_8/(var_9*var_9*var_9);
    A[141] = A[41];
    const double var_52 = var_49*var_5 + var_1*var_45;
    const double var_53 = var_41 + var_52;
    A[49] = 0.0000000000000000000000000;
    A[99] = 0.0000000000000000000000000;
    A[138] = A[5];
    A[71] = 0.0000000000000000000000000;
    const double var_54 = var_29 + var_52 + 2.0000000000000000000000000*var_33;
    A[39] = 1.3333333333333332593184650*var_54*var_8/(var_9*var_9*var_9);
    A[52] = A[39];
    A[34] = 0.0000000000000000000000000;
    const double var_55 = var_31 + var_1*var_1*var_4*w[0][0] + 0.5000000000000000000000000*var_53;
    A[96] = 0.0000000000000000000000000;
    A[1] = 0.3333333333333333148296163*var_55*var_8/(var_9*var_9*var_9);
    A[79] = A[1];
    A[103] = A[14];
    A[24] = A[2];
    A[113] = 0.0000000000000000000000000;
    A[114] = 0.0000000000000000000000000;
    A[75] = 0.0000000000000000000000000;
    A[33] = 0.0000000000000000000000000;
    A[18] = 0.0000000000000000000000000;
    A[44] = 0.0000000000000000000000000;
    A[4] = 0.6666666666666666296592325*var_51*var_8/(var_9*var_9*var_9);
    A[48] = A[4];
    A[123] = 0.0000000000000000000000000;
    A[43] = 0.0000000000000000000000000;
    A[133] = 0.0000000000000000000000000;
    A[23] = 0.0000000000000000000000000;
    A[92] = A[14];
    A[19] = 0.0000000000000000000000000;
    A[28] = A[4];
    A[116] = A[15];
    A[115] = A[15];
    A[101] = 0.0000000000000000000000000;
    A[117] = A[39];
    A[8] = 0.0000000000000000000000000;
    A[76] = 0.0000000000000000000000000;
    A[30] = 0.0000000000000000000000000;
    A[9] = 0.0000000000000000000000000;
    A[66] = 0.0000000000000000000000000;
    A[7] = 0.0000000000000000000000000;
    A[122] = 0.0000000000000000000000000;
    A[68] = 0.0000000000000000000000000;
    A[31] = 0.0000000000000000000000000;
    A[80] = A[2];
    A[58] = 0.0000000000000000000000000;
    A[60] = A[5];
    A[77] = 0.0000000000000000000000000;
    A[27] = A[15];
    A[120] = 0.0000000000000000000000000;
    A[108] = 0.0000000000000000000000000;
    A[50] = A[4];
    A[87] = 0.0000000000000000000000000;
    A[105] = A[15];
    A[67] = 0.0000000000000000000000000;
    A[12] = A[1];
    A[11] = 0.0000000000000000000000000;
    A[32] = 0.0000000000000000000000000;
    A[88] = 0.0000000000000000000000000;
    A[126] = A[4];
    A[59] = 0.0000000000000000000000000;
    A[106] = A[4];
    A[10] = 0.0000000000000000000000000;
    A[140] = 0.0000000000000000000000000;
    A[102] = A[2];
    A[130] = A[39];
    A[90] = A[1];
    A[119] = A[41];
    A[63] = A[41];
    A[135] = 0.0000000000000000000000000;
    A[93] = A[15];
    A[91] = A[13];
    A[70] = 0.0000000000000000000000000;
    A[22] = 0.0000000000000000000000000;
    A[65] = A[39];
    A[143] = A[39];
    A[98] = 0.0000000000000000000000000;
    A[107] = 0.0000000000000000000000000;
    A[29] = 0.0000000000000000000000000;
    A[89] = 0.0000000000000000000000000;
    A[62] = 0.0000000000000000000000000;
    A[42] = 0.0000000000000000000000000;
    A[17] = A[5];
    A[85] = 0.0000000000000000000000000;
    A[95] = A[5];
    A[47] = 0.0000000000000000000000000;
    A[109] = 0.0000000000000000000000000;
    A[6] = 0.0000000000000000000000000;
    A[54] = 0.0000000000000000000000000;
    A[118] = A[40];
    A[110] = 0.0000000000000000000000000;
    A[16] = 0.0000000000000000000000000;
    A[21] = 0.0000000000000000000000000;
    A[86] = 0.0000000000000000000000000;
    A[38] = A[15];
    A[3] = 0.0000000000000000000000000;
    A[111] = 0.0000000000000000000000000;
    A[35] = 0.0000000000000000000000000;
    A[128] = A[4];
    A[82] = A[4];
    A[84] = 0.0000000000000000000000000;
    A[137] = 0.0000000000000000000000000;
    A[36] = 0.0000000000000000000000000;
    A[56] = 0.0000000000000000000000000;
    A[64] = A[53];
    A[97] = 0.0000000000000000000000000;
    A[72] = 0.0000000000000000000000000;
    A[134] = 0.0000000000000000000000000;
    A[131] = A[53];
    A[121] = 0.0000000000000000000000000;
    A[74] = 0.0000000000000000000000000;
    A[94] = 0.0000000000000000000000000;
    A[51] = A[40];
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