#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.24 seconds (wall clock).

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
    const double var_9 = -0.0023809523809523811671562*var_7*var_8;
    const double var_10 = -0.0007936507936507936501053*var_7*var_8;
    const double var_11 = w[0][0]*w[1][1] + w[0][1]*w[1][0];
    const double var_12 = w[0][0]*w[1][0];
    const double var_13 = w[0][1]*w[1][1];
    const double var_14 = var_12 + var_13;
    const double var_15 = 0.3333333333333333148296163*var_11 + 0.5000000000000000000000000*var_14;
    const double var_16 = w[0][2]*w[1][1] + w[0][1]*w[1][2];
    const double var_17 = w[0][2]*w[1][0] + w[0][0]*w[1][2];
    const double var_18 = var_17 + var_16;
    const double var_19 = 0.1666666666666666574148081*var_18;
    const double var_20 = var_15 + var_19;
    A[17] = -0.0047619047619047623343125*var_20*var_7;
    const double var_21 = var_11 + var_17;
    const double var_22 = var_13 + var_8;
    const double var_23 = 0.5000000000000000000000000*var_22 + 0.3333333333333333148296163*var_16;
    const double var_24 = var_23 + var_12 + 0.5000000000000000000000000*var_21;
    A[29] = 0.0095238095238095246686250*var_24*var_7;
    A[34] = A[29];
    const double var_25 = var_12 + -0.1666666666666666574148081*var_16;
    const double var_26 = 0.0047619047619047623343125*var_25*var_7;
    const double var_27 = -0.0007936507936507936501053*var_13*var_7;
    A[4] = var_27 + var_26 + var_9;
    A[24] = A[4];
    A[32] = A[17];
    const double var_28 = -0.0023809523809523811671562*var_12*var_7;
    const double var_29 = var_12 + var_8;
    const double var_30 = var_11 + var_16;
    const double var_31 = var_13 + 0.1250000000000000000000000*var_30 + 0.0833333333333333287074041*var_29 + 0.0416666666666666643537020*var_17;
    A[7] = 0.0095238095238095246686250*var_31*var_7;
    const double var_32 = 0.0416666666666666643537020*var_11 + var_8 + 0.1250000000000000000000000*var_18 + 0.0833333333333333287074041*var_14;
    A[14] = 0.0095238095238095246686250*var_32*var_7;
    const double var_33 = -0.1666666666666666574148081*var_17 + var_13;
    const double var_34 = 0.0047619047619047623343125*var_33*var_7;
    const double var_35 = var_12 + -var_16;
    const double var_36 = -var_22 + 0.3333333333333333148296163*var_35;
    A[8] = 0.0011904761904761905835781*var_36*var_7;
    A[13] = A[8];
    const double var_37 = 0.1666666666666666574148081*var_30;
    const double var_38 = 0.6666666666666666296592325*var_29 + var_37 + 0.1111111111111111049432054*w[0][1]*w[1][1] + 0.5000000000000000000000000*var_17;
    A[28] = 0.0285714285714285705364279*var_38*var_7;
    const double var_39 = -0.0007936507936507936501053*var_12*var_7;
    A[9] = var_39 + var_34 + var_9;
    const double var_40 = var_8 + -var_11;
    const double var_41 = 0.3333333333333333148296163*var_40 + -var_14;
    const double var_42 = -0.0023809523809523811671562*var_13*var_7;
    A[5] = var_42 + var_26 + var_10;
    A[30] = A[5];
    const double var_43 = 0.5000000000000000000000000*var_18 + var_15 + var_8;
    A[22] = 0.0095238095238095246686250*var_43*var_7;
    A[27] = A[22];
    const double var_44 = -var_17 + var_13;
    const double var_45 = -var_29 + 0.3333333333333333148296163*var_44;
    A[2] = 0.0011904761904761905835781*var_45*var_7;
    A[12] = A[2];
    const double var_46 = 0.0416666666666666643537020*var_16 + 0.0833333333333333287074041*var_22 + 0.1250000000000000000000000*var_21 + var_12;
    A[0] = 0.0095238095238095246686250*var_46*var_7;
    const double var_47 = 0.1666666666666666574148081*var_21;
    const double var_48 = -0.1666666666666666574148081*var_11 + var_8;
    const double var_49 = 0.0047619047619047623343125*var_48*var_7;
    A[15] = var_39 + var_49 + var_42;
    const double var_50 = 0.3333333333333333148296163*var_17 + 0.5000000000000000000000000*var_29;
    const double var_51 = 0.5000000000000000000000000*var_30 + var_50 + var_13;
    A[23] = 0.0095238095238095246686250*var_51*var_7;
    A[33] = A[23];
    A[1] = 0.0011904761904761905835781*var_41*var_7;
    A[6] = A[1];
    A[20] = A[15];
    const double var_52 = var_23 + var_47;
    const double var_53 = 0.6666666666666666296592325*var_14 + 0.1111111111111111049432054*w[0][2]*w[1][2] + 0.5000000000000000000000000*var_11 + var_19;
    const double var_54 = var_50 + var_37;
    A[16] = var_28 + var_49 + var_27;
    A[26] = A[16];
    A[3] = -0.0047619047619047623343125*var_52*var_7;
    A[18] = A[3];
    A[11] = var_28 + var_34 + var_10;
    A[19] = A[9];
    const double var_55 = 0.5000000000000000000000000*var_16 + 0.6666666666666666296592325*var_22 + 0.1111111111111111049432054*w[0][0]*w[1][0] + var_47;
    A[10] = -0.0047619047619047623343125*var_54*var_7;
    A[21] = 0.0285714285714285705364279*var_55*var_7;
    A[35] = 0.0285714285714285705364279*var_53*var_7;
    A[25] = A[10];
    A[31] = A[11];
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
