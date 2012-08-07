#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 4.77 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = -x[0][0];
    const double var_1 = x[1][0] + var_0;
    const double var_2 = -x[0][1];
    const double var_3 = x[2][1] + var_2;
    const double var_4 = x[1][1] + var_2;
    const double var_5 = x[2][0] + var_0;
    const double var_6 = -var_4*var_5 + var_1*var_3;
    const double var_7 = w[0][14] + w[0][13];
    const double var_8 = -w[0][10] + 3.0000000000000000000000000*var_7;
    const double var_9 = w[0][4] + w[0][3];
    const double var_10 = w[0][0] + -3.0000000000000000000000000*var_9;
    const double var_11 = var_1*var_8 + var_10*var_4;
    const double var_12 = w[0][10] + -3.0000000000000000000000000*var_7;
    const double var_13 = var_12*var_5;
    const double var_14 = var_11 + var_13;
    const double var_15 = w[0][8] + w[0][7];
    const double var_16 = w[0][16] + w[0][15];
    const double var_17 = var_15*var_4 + var_16*var_5;
    const double var_18 = var_1*w[0][12] + var_3*w[0][1] + 3.0000000000000000000000000*var_17;
    const double var_19 = w[0][6] + w[0][5];
    const double var_20 = w[0][17] + w[0][18];
    const double var_21 = var_19*var_3 + var_1*var_20;
    const double var_22 = var_5*w[0][11] + 3.0000000000000000000000000*var_21 + var_4*w[0][2];
    const double var_23 = var_18 + -var_22;
    const double var_24 = var_14 + var_23;
    const double var_25 = var_6;
    const double var_26 = std::abs(var_25);
    const double var_27 = var_6;
    const double var_28 = -w[0][0] + 3.0000000000000000000000000*var_9;
    const double var_29 = -var_18 + var_22;
    const double var_30 = var_3*var_3 + var_5*var_5;
    const double var_31 = var_10*var_3;
    const double var_32 = var_28*var_4;
    const double var_33 = var_31 + var_32;
    const double var_34 = var_5*var_8;
    const double var_35 = var_33 + var_34;
    const double var_36 = var_23 + var_28*var_3;
    const double var_37 = var_36 + var_11;
    const double var_38 = var_1*var_37;
    const double var_39 = var_35*var_5 + var_38;
    const double var_40 = var_1*var_12;
    const double var_41 = var_34 + var_40;
    const double var_42 = var_41 + var_31;
    const double var_43 = var_24*var_4;
    const double var_44 = var_3*var_42 + var_43;
    const double var_45 = var_39*var_5 + var_29*var_30 + var_3*var_44;
    const double var_46 = var_28*var_3*var_3*var_4 + var_1*var_12*var_5*var_5 + 0.5000000000000000000000000*var_45;
    A[1] = 0.2500000000000000000000000*var_26*var_46/(var_27*var_27*var_27);
    A[27] = A[1];
    A[25] = 0.0000000000000000000000000;
    const double var_47 = var_3*var_3*var_8 + 3.0000000000000000000000000*var_41*var_5 + var_38;
    A[4] = 0.0000000000000000000000000;
    const double var_48 = var_14 + var_36;
    A[7] = 0.1250000000000000000000000*var_26*var_30*var_48/(var_27*var_27*var_27);
    A[28] = A[7];
    const double var_49 = var_3*var_4 + var_1*var_5;
    const double var_50 = var_36 + var_13;
    const double var_51 = var_10*var_4*var_5;
    const double var_52 = 3.0000000000000000000000000*var_3*var_33 + var_43;
    const double var_53 = var_1*var_47 + var_4*var_52 + var_30*var_50 + var_5*var_51;
    const double var_54 = var_29*var_49 + var_3*var_4*var_41 + var_1*var_33*var_5 + 0.5000000000000000000000000*var_53;
    const double var_55 = var_29 + var_41 + var_33;
    A[8] = 0.1250000000000000000000000*var_26*var_49*var_55/(var_27*var_27*var_27);
    A[34] = A[8];
    A[6] = A[1];
    const double var_56 = var_33 + var_40;
    const double var_57 = var_51 + var_3*var_4*var_8 + var_1*var_56;
    A[24] = 0.0000000000000000000000000;
    A[30] = 0.0000000000000000000000000;
    A[3] = 0.0000000000000000000000000;
    A[26] = 0.0000000000000000000000000;
    A[5] = 0.0000000000000000000000000;
    A[11] = 0.0000000000000000000000000;
    A[22] = A[1];
    const double var_58 = var_1*var_1 + var_4*var_4;
    const double var_59 = var_41 + var_32;
    const double var_60 = var_1*var_57 + var_29*var_58 + var_49*var_50 + var_4*var_4*var_59;
    const double var_61 = var_10*var_3*var_4*var_4 + var_1*var_1*var_5*var_8 + 0.5000000000000000000000000*var_60;
    A[2] = 0.2500000000000000000000000*var_26*var_61/(var_27*var_27*var_27);
    A[12] = A[2];
    A[13] = A[8];
    A[0] = 0.2500000000000000000000000*var_26*var_54/(var_27*var_27*var_27);
    A[21] = A[0];
    A[20] = 0.0000000000000000000000000;
    A[16] = 0.0000000000000000000000000;
    A[15] = 0.0000000000000000000000000;
    A[10] = 0.0000000000000000000000000;
    A[29] = A[8];
    A[14] = 0.1250000000000000000000000*var_26*var_48*var_58/(var_27*var_27*var_27);
    A[9] = 0.0000000000000000000000000;
    A[32] = 0.0000000000000000000000000;
    A[33] = A[2];
    A[31] = 0.0000000000000000000000000;
    A[18] = 0.0000000000000000000000000;
    A[35] = A[14];
    A[19] = 0.0000000000000000000000000;
    A[17] = 0.0000000000000000000000000;
    A[23] = A[2];
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
