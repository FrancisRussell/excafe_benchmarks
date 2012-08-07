#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.69 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = -x[0][0];
    const double var_1 = x[1][0] + var_0;
    const double var_2 = x[2][0] + var_0;
    const double var_3 = -x[0][1];
    const double var_4 = x[1][1] + var_3;
    const double var_5 = var_2*w[0][4] + var_4*w[0][2];
    const double var_6 = x[2][1] + var_3;
    const double var_7 = var_1*w[0][5] + var_6*w[0][1];
    const double var_8 = var_5 + -var_7;
    const double var_9 = -var_4 + var_6;
    const double var_10 = var_8 + var_9*w[0][0];
    const double var_11 = var_1*w[0][3] + var_10;
    A[17] = 0.0000000000000000000000000;
    const double var_12 = -var_2*var_4 + var_1*var_6;
    const double var_13 = var_12;
    const double var_14 = std::abs(var_13);
    const double var_15 = -var_2 + var_1;
    const double var_16 = var_15*w[0][3];
    const double var_17 = var_8 + var_16;
    const double var_18 = var_12;
    const double var_19 = var_4*var_6 + var_1*var_2;
    const double var_20 = var_10 + var_16;
    A[8] = 0.5000000000000000000000000*var_14*var_19*var_20/(var_18*var_18*var_18);
    A[34] = A[8];
    A[24] = 0.0000000000000000000000000;
    A[32] = 0.0000000000000000000000000;
    const double var_21 = -var_5 + var_7;
    const double var_22 = -var_6*w[0][0] + var_21;
    const double var_23 = -var_1*w[0][3] + var_4*w[0][0];
    const double var_24 = var_2*w[0][3];
    const double var_25 = var_23 + var_24;
    const double var_26 = var_25 + var_22;
    const double var_27 = var_2*var_2;
    const double var_28 = var_6*var_6 + var_27;
    A[7] = 0.5000000000000000000000000*var_14*var_26*var_28/(var_18*var_18*var_18);
    const double var_29 = var_1*var_1 + var_4*var_4;
    A[14] = 0.5000000000000000000000000*var_14*var_26*var_29/(var_18*var_18*var_18);
    const double var_30 = var_22 + var_24;
    const double var_31 = var_22 + var_23;
    A[4] = 0.0000000000000000000000000;
    A[13] = A[8];
    A[28] = A[7];
    A[9] = 0.0000000000000000000000000;
    const double var_32 = var_1*var_31;
    const double var_33 = var_25 + var_21;
    const double var_34 = var_33*var_4;
    A[30] = 0.0000000000000000000000000;
    const double var_35 = var_6*w[0][0] + var_17;
    const double var_36 = var_35*var_6 + var_34;
    const double var_37 = -var_2*w[0][3] + var_10;
    const double var_38 = var_2*var_37 + var_32;
    const double var_39 = var_36*var_6 + var_2*var_38;
    const double var_40 = var_1*var_2*var_2*w[0][3] + 0.5000000000000000000000000*var_39 + -var_4*var_6*var_6*w[0][0];
    A[1] = var_14*var_40/(var_18*var_18*var_18);
    A[27] = A[1];
    const double var_41 = -var_1*var_6*w[0][3];
    const double var_42 = -var_4*w[0][0] + var_17;
    const double var_43 = var_41 + var_1*var_2*w[0][0] + var_4*var_42;
    const double var_44 = var_4*var_43 + var_19*var_30 + var_1*var_1*var_11;
    const double var_45 = -var_1*var_1*var_2*w[0][3] + var_4*var_4*var_6*w[0][0] + 0.5000000000000000000000000*var_44;
    A[2] = var_14*var_45/(var_18*var_18*var_18);
    A[12] = A[2];
    const double var_46 = 3.0000000000000000000000000*var_15*var_2*w[0][3] + var_32;
    const double var_47 = 3.0000000000000000000000000*var_6*var_9 + var_27;
    const double var_48 = var_47*w[0][0] + var_34;
    const double var_49 = var_1*var_46 + var_28*var_30 + var_4*var_48 + var_41*var_6;
    const double var_50 = var_1*var_10*var_2 + 0.5000000000000000000000000*var_49 + var_17*var_4*var_6;
    A[0] = var_14*var_50/(var_18*var_18*var_18);
    A[15] = 0.0000000000000000000000000;
    A[22] = A[1];
    A[33] = A[2];
    A[6] = A[1];
    A[29] = A[8];
    A[20] = 0.0000000000000000000000000;
    A[5] = 0.0000000000000000000000000;
    A[26] = 0.0000000000000000000000000;
    A[3] = 0.0000000000000000000000000;
    A[16] = 0.0000000000000000000000000;
    A[18] = 0.0000000000000000000000000;
    A[11] = 0.0000000000000000000000000;
    A[19] = 0.0000000000000000000000000;
    A[10] = 0.0000000000000000000000000;
    A[21] = A[0];
    A[35] = A[14];
    A[25] = 0.0000000000000000000000000;
    A[23] = A[2];
    A[31] = 0.0000000000000000000000000;
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
