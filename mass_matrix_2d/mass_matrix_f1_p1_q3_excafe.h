#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.18 seconds (wall clock).

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
    const double var_8 = 0.0026785714285714285962103*var_7*w[0][0];
    const double var_9 = w[0][2] + w[0][0];
    const double var_10 = 0.0120535714285714273819039*var_7*w[0][1];
    A[38] = 0.0040178571428571424606346*var_7*var_9 + var_10;
    A[83] = A[38];
    const double var_11 = 0.0002232142857142857073158*var_7*w[0][0];
    const double var_12 = 0.0026785714285714285962103*var_7*w[0][2];
    const double var_13 = 0.0002232142857142857073158*var_7*w[0][2];
    const double var_14 = -0.0008928571428571428292634*var_7*w[0][2];
    const double var_15 = -0.0004464285714285714146317*var_7*w[0][1];
    A[5] = var_15 + var_14 + var_8;
    const double var_16 = -0.0013392857142857142981052*var_7*w[0][0];
    const double var_17 = 0.0011160714285714285094742*var_7*w[0][1];
    A[8] = var_16 + var_13 + var_17;
    A[80] = A[8];
    const double var_18 = 0.0241071428571428547638078*var_7*w[0][2];
    const double var_19 = 0.0040178571428571424606346*var_7*w[0][0];
    A[44] = var_18 + var_10 + var_19;
    const double var_20 = -0.0004464285714285714146317*var_7*w[0][0];
    const double var_21 = -0.0008928571428571428292634*var_7*w[0][1];
    A[24] = var_12 + var_20 + var_21;
    A[42] = A[24];
    const double var_22 = w[0][0] + w[0][1];
    A[29] = 0.0013392857142857142981052*var_22*var_7;
    A[92] = A[29];
    const double var_23 = 0.0120535714285714273819039*var_7*w[0][0];
    A[59] = var_23;
    A[95] = A[59];
    const double var_24 = w[0][2] + w[0][1];
    const double var_25 = 0.2000000000000000111022302*w[0][0] + var_24;
    A[12] = 0.0003720238095238095031581*var_25*var_7;
    A[21] = A[12];
    const double var_26 = -0.0020089285714285712303173*var_22*var_7;
    A[36] = -0.0060267857142857136909520*var_7*w[0][2] + var_26;
    A[45] = A[36];
    const double var_27 = -0.0020089285714285712303173*var_24*var_7;
    A[58] = -0.0060267857142857136909520*var_7*w[0][0] + var_27;
    A[67] = A[58];
    const double var_28 = w[0][0] + 0.1428571428571428492126927*var_24;
    A[15] = 0.0015625000000000000867362*var_28*var_7;
    A[51] = A[15];
    const double var_29 = w[0][2] + 0.1428571428571428492126927*var_22;
    A[4] = 0.0015625000000000000867362*var_29*var_7;
    A[16] = A[4];
    const double var_30 = 0.0011160714285714285094742*var_7*w[0][2];
    const double var_31 = 0.0002232142857142857073158*var_7*w[0][1];
    A[6] = var_16 + var_30 + var_31;
    const double var_32 = -0.0013392857142857142981052*var_7*w[0][2];
    A[23] = var_11 + var_17 + var_32;
    const double var_33 = w[0][1] + 3.0000000000000000000000000*var_9;
    A[56] = -0.0020089285714285712303173*var_33*var_7;
    const double var_34 = -0.0013392857142857142981052*var_7*w[0][1];
    const double var_35 = 0.0040178571428571424606346*var_7*w[0][2];
    const double var_36 = 0.0241071428571428547638078*var_7*w[0][0];
    A[77] = var_35 + var_10 + var_36;
    A[63] = A[36];
    const double var_37 = 0.2000000000000000111022302*w[0][1] + var_9;
    const double var_38 = 0.0011160714285714285094742*var_7*w[0][0];
    const double var_39 = -0.0020089285714285712303173*var_7*var_9;
    const double var_40 = 0.0241071428571428547638078*var_7*w[0][1];
    A[88] = var_35 + var_23 + var_40;
    A[14] = var_11 + var_34 + var_30;
    A[41] = A[14];
    A[39] = var_10;
    A[89] = A[39];
    const double var_41 = 0.0120535714285714273819039*var_7*w[0][2];
    A[49] = var_41;
    A[94] = A[49];
    A[25] = var_38 + var_32 + var_31;
    A[47] = var_39;
    const double var_42 = 0.0026785714285714285962103*var_7*w[0][1];
    const double var_43 = -0.0008928571428571428292634*var_7*w[0][0];
    const double var_44 = -0.0004464285714285714146317*var_7*w[0][2];
    A[18] = var_43 + var_42 + var_44;
    A[81] = A[18];
    const double var_45 = w[0][1] + 0.1428571428571428492126927*var_9;
    A[97] = A[59];
    A[2] = 0.0003720238095238095031581*var_37*var_7;
    A[20] = A[2];
    A[68] = var_27;
    A[86] = A[68];
    const double var_46 = w[0][2] + 3.0000000000000000000000000*var_22;
    A[78] = -0.0020089285714285712303173*var_46*var_7;
    A[87] = A[78];
    A[7] = var_44 + var_8 + var_21;
    A[70] = A[7];
    const double var_47 = w[0][0] + 3.0000000000000000000000000*var_24;
    A[34] = -0.0020089285714285712303173*var_47*var_7;
    A[43] = A[34];
    const double var_48 = 0.2000000000000000111022302*w[0][2] + var_22;
    A[22] = 0.0044642857142857140378966*var_7*w[0][2] + 0.0005952380952380952917891*var_22*var_7;
    A[3] = 0.0015625000000000000867362*var_45*var_7;
    A[28] = A[3];
    A[0] = 0.0044642857142857140378966*var_7*w[0][0] + 0.0005952380952380952917891*var_24*var_7;
    A[13] = var_20 + var_42 + var_14;
    A[74] = A[47];
    A[19] = 0.0013392857142857142981052*var_7*var_9;
    A[79] = A[59];
    A[11] = 0.0044642857142857140378966*var_7*w[0][1] + 0.0005952380952380952917891*var_7*var_9;
    A[17] = var_38 + var_13 + var_34;
    A[71] = A[17];
    A[37] = -0.0060267857142857136909520*var_7*w[0][1] + var_39;
    A[84] = A[37];
    A[46] = 0.0040178571428571424606346*var_22*var_7 + var_41;
    A[64] = A[46];
    A[30] = A[3];
    A[65] = A[56];
    A[54] = A[36];
    A[82] = A[3];
    A[9] = 0.0013392857142857142981052*var_24*var_7;
    A[90] = A[9];
    A[57] = 0.0040178571428571424606346*var_24*var_7 + var_23;
    A[1] = 0.0003720238095238095031581*var_48*var_7;
    A[10] = A[1];
    const double var_49 = 0.0040178571428571424606346*var_7*w[0][1];
    A[33] = var_19 + var_41 + var_40;
    A[76] = A[58];
    A[32] = A[23];
    A[61] = A[4];
    A[75] = A[57];
    A[93] = A[39];
    A[55] = var_36 + var_41 + var_49;
    A[60] = A[6];
    A[98] = A[39];
    A[35] = var_26;
    A[53] = A[35];
    A[66] = var_18 + var_23 + var_49;
    A[85] = A[58];
    A[27] = A[15];
    A[72] = A[15];
    A[31] = A[13];
    A[26] = var_12 + var_15 + var_43;
    A[50] = A[5];
    A[73] = A[37];
    A[48] = A[37];
    A[62] = A[26];
    A[52] = A[25];
    A[91] = A[19];
    A[96] = A[49];
    const double var_50 = w[0][1] + var_9;
    A[99] = 0.0482142857142857095276156*var_50*var_7;
    A[69] = A[49];
    A[40] = A[4];
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
