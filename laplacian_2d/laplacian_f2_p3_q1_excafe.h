#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 14.44 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[0][4] + w[0][3];
    const double var_1 = w[0][4] + w[0][6];
    const double var_2 = -x[0][0];
    const double var_3 = x[2][0] + var_2;
    const double var_4 = -x[0][1];
    const double var_5 = x[2][1] + var_4;
    const double var_6 = x[1][0] + var_2;
    const double var_7 = x[1][1] + var_4;
    const double var_8 = -var_3*var_7 + var_5*var_6;
    const double var_9 = var_8;
    const double var_10 = std::abs(var_9);
    const double var_11 = var_8;
    const double var_12 = w[0][7]*w[1][5] + w[0][5]*w[1][7] + w[0][6]*w[1][4] + w[0][3]*w[1][8] + w[0][4]*w[1][6] + w[0][8]*w[1][3];
    const double var_13 = w[0][4] + w[0][8];
    const double var_14 = w[0][5] + w[0][7];
    const double var_15 = w[0][3] + w[0][6];
    const double var_16 = var_14 + var_13 + var_15;
    const double var_17 = w[1][4] + w[1][8];
    const double var_18 = w[1][3] + w[1][6];
    const double var_19 = w[1][7] + w[1][5];
    const double var_20 = var_18 + var_17 + var_19;
    const double var_21 = var_16*w[1][9] + var_20*w[0][9];
    const double var_22 = w[0][3]*w[1][3] + w[0][5]*w[1][5] + w[0][6]*w[1][6] + w[0][7]*w[1][7] + w[0][4]*w[1][4] + w[0][8]*w[1][8] + 0.3000000000000000444089210*var_21;
    const double var_23 = w[1][0] + w[1][2];
    const double var_24 = w[0][0] + w[0][2];
    const double var_25 = var_24*w[1][1] + var_23*w[0][1] + w[0][2]*w[1][0] + w[0][0]*w[1][2];
    const double var_26 = w[1][7] + w[1][8];
    const double var_27 = w[0][5] + w[0][6];
    const double var_28 = w[1][3] + w[1][4];
    const double var_29 = w[1][6] + w[1][5];
    const double var_30 = w[0][8] + w[0][7];
    const double var_31 = var_28*w[0][0] + var_26*w[0][2] + var_0*w[1][0] + var_27*w[1][1] + var_30*w[1][2] + var_29*w[0][1];
    const double var_32 = w[0][8] + w[0][3];
    const double var_33 = w[1][3] + w[1][8];
    const double var_34 = w[1][4] + w[1][6];
    const double var_35 = var_32*w[1][1] + var_14*w[1][0] + var_33*w[0][1] + var_34*w[0][2] + 1.5000000000000000000000000*var_31 + var_19*w[0][0] + var_1*w[1][2];
    const double var_36 = w[1][1] + var_23;
    const double var_37 = w[0][1] + var_24;
    const double var_38 = var_36*w[0][9] + 0.5000000000000000000000000*var_35 + var_37*w[1][9];
    const double var_39 = w[0][0]*w[1][0] + w[0][1]*w[1][1] + w[0][2]*w[1][2];
    const double var_40 = 0.3000000000000000444089210*var_38 + 2.2500000000000000000000000*var_12 + 0.6333333333333333037273860*var_39 + 4.5000000000000000000000000*var_22 + 16.1999999999999992894572642*w[0][9]*w[1][9] + 0.0916666666666666601903657*var_25;
    const double var_41 = var_18*w[0][7] + var_13*w[1][5] + w[0][8]*w[1][4] + w[0][3]*w[1][6] + w[0][4]*w[1][8] + w[0][6]*w[1][3] + var_17*w[0][5] + var_15*w[1][7];
    const double var_42 = w[0][8]*w[1][7] + w[0][7]*w[1][8] + w[0][5]*w[1][6] + w[0][6]*w[1][5] + w[0][3]*w[1][4] + w[0][4]*w[1][3];
    const double var_43 = w[0][6]*w[1][8] + w[0][5]*w[1][3] + w[0][8]*w[1][6] + w[0][7]*w[1][4] + w[0][4]*w[1][7] + w[0][3]*w[1][5];
    const double var_44 = 0.0714285714285714246063463*var_41 + 0.1000000000000000055511151*var_42 + 0.0285714285714285705364279*var_43;
    const double var_45 = -0.1428571428571428492126927*var_40 + 2.2500000000000000000000000*var_44;
    const double var_46 = var_5*var_5 + var_3*var_3;
    const double var_47 = -2.2500000000000000000000000*var_44 + 0.1428571428571428492126927*var_40;
    const double var_48 = var_3*var_6 + var_5*var_7;
    const double var_49 = 0.0625000000000000000000000*var_10*var_47*var_48/(var_11*var_11);
    A[1] = 0.0625000000000000000000000*var_10*var_45*var_46/(var_11*var_11) + var_49;
    A[3] = A[1];
    const double var_50 = var_6*var_6 + var_7*var_7;
    const double var_51 = var_46 + var_50;
    const double var_52 = var_45*var_48 + 0.5000000000000000000000000*var_47*var_51;
    A[0] = 0.1250000000000000000000000*var_10*var_52/(var_11*var_11);
    A[8] = 0.0625000000000000000000000*var_10*var_47*var_50/(var_11*var_11);
    A[2] = 0.0625000000000000000000000*var_10*var_45*var_50/(var_11*var_11) + var_49;
    A[6] = A[2];
    A[4] = 0.0625000000000000000000000*var_10*var_46*var_47/(var_11*var_11);
    A[5] = 0.0625000000000000000000000*var_10*var_45*var_48/(var_11*var_11);
    A[7] = A[5];
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
