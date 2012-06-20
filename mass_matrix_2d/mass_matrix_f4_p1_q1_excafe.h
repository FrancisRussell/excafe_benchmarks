#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 4.02 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[0][0]*w[1][2] + w[0][2]*w[1][0];
    const double var_1 = w[0][0]*w[1][0]*w[2][2] + var_0*w[2][0];
    const double var_2 = -1.0000000000000000000000000*x[0][1];
    const double var_3 = var_2 + x[1][1];
    const double var_4 = w[0][0]*w[1][0]*w[2][0];
    const double var_5 = 0.0166666666666666664353702*var_4;
    const double var_6 = w[0][1]*w[1][0] + w[0][0]*w[1][1];
    const double var_7 = w[0][0]*w[1][0]*w[2][1] + var_6*w[2][0];
    const double var_8 = var_0*w[2][2] + w[0][2]*w[1][2]*w[2][0];
    const double var_9 = w[0][1]*w[1][2] + w[0][2]*w[1][1];
    const double var_10 = w[0][1]*w[1][1]*w[2][2] + var_9*w[2][1];
    const double var_11 = var_6*w[2][1] + w[0][1]*w[1][1]*w[2][0];
    const double var_12 = 0.0166666666666666664353702*var_11;
    const double var_13 = 0.0666666666666666657414808*var_1 + var_12;
    const double var_14 = var_0*w[2][1] + var_6*w[2][2] + var_9*w[2][0];
    const double var_15 = 0.0166666666666666664353702*var_14;
    const double var_16 = 0.1666666666666666574148081*var_4 + var_15;
    const double var_17 = var_9*w[2][2] + w[0][2]*w[1][2]*w[2][1];
    const double var_18 = 0.0166666666666666664353702*var_17;
    const double var_19 = w[0][1]*w[1][1]*w[2][1];
    const double var_20 = 0.0166666666666666664353702*var_19;
    const double var_21 = w[0][2]*w[1][2]*w[2][2];
    const double var_22 = 0.0666666666666666657414808*var_21;
    const double var_23 = var_20 + 0.0111111111111111115351546*var_10 + var_18 + var_13 + var_22 + 0.0500000000000000027755576*var_8 + var_16 + 0.0333333333333333328707404*var_7;
    const double var_24 = 0.0166666666666666664353702*var_10;
    const double var_25 = var_24 + 0.0666666666666666657414808*var_8;
    const double var_26 = 0.1666666666666666574148081*var_21 + var_15;
    const double var_27 = 0.0166666666666666664353702*var_7;
    const double var_28 = 0.0666666666666666657414808*var_4;
    const double var_29 = var_20 + 0.0500000000000000027755576*var_1 + 0.0333333333333333328707404*var_17 + var_25 + var_26 + var_27 + var_28 + 0.0111111111111111115351546*var_11;
    const double var_30 = -1.0000000000000000000000000*x[0][0];
    const double var_31 = x[1][0] + var_30;
    const double var_32 = x[2][1] + var_2;
    const double var_33 = x[2][0] + var_30;
    const double var_34 = var_31*var_32 + -1.0000000000000000000000000*var_3*var_33;
    const double var_35 = std::abs(var_34);
    const double var_36 = 0.0166666666666666664353702*var_8;
    const double var_37 = 0.0666666666666666657414808*var_7 + var_36;
    const double var_38 = 0.0666666666666666657414808*var_19;
    const double var_39 = 0.0166666666666666664353702*var_21;
    const double var_40 = 0.0333333333333333328707404*var_1 + 0.0111111111111111115351546*var_17 + var_37 + var_16 + var_24 + var_38 + 0.0500000000000000027755576*var_11 + var_39;
    const double var_41 = 0.0666666666666666657414808*var_11 + var_18;
    const double var_42 = 0.0333333333333333328707404*var_14;
    const double var_43 = 0.0500000000000000027755576*var_19 + var_42;
    const double var_44 = var_1 + var_7;
    const double var_45 = var_41 + var_25 + 0.0500000000000000027755576*var_21 + 0.1666666666666666574148081*var_44 + var_43 + var_4;
    const double var_46 = var_45*w[3][0] + var_40*w[3][1] + var_23*w[3][2];
    A[0] = 0.0178571428571428561515866*var_35*var_46;
    const double var_47 = var_17 + var_8;
    const double var_48 = 0.0166666666666666664353702*var_1;
    const double var_49 = 0.0666666666666666657414808*var_17 + var_48;
    const double var_50 = var_11 + var_10;
    const double var_51 = var_4 + var_21;
    const double var_52 = var_49 + 0.1666666666666666574148081*var_50 + var_37 + 0.0500000000000000027755576*var_51 + var_42 + var_19;
    const double var_53 = var_44 + var_47 + var_50;
    const double var_54 = var_19 + 0.3333333333333333148296163*var_14 + var_51 + 0.5000000000000000000000000*var_53;
    const double var_55 = 0.1666666666666666574148081*var_19 + var_15;
    const double var_56 = var_48 + 0.0333333333333333328707404*var_10 + var_55 + var_41 + 0.0111111111111111115351546*var_8 + 0.0500000000000000027755576*var_7 + var_28 + var_39;
    const double var_57 = var_56*w[3][1] + var_40*w[3][0] + 0.0333333333333333328707404*var_54*w[3][2];
    A[1] = 0.0178571428571428561515866*var_35*var_57;
    const double var_58 = 0.0666666666666666657414808*var_10 + var_27;
    const double var_59 = var_58 + 0.0111111111111111115351546*var_1 + var_55 + var_5 + 0.0500000000000000027755576*var_17 + var_22 + var_36 + 0.0333333333333333328707404*var_11;
    const double var_60 = var_12 + var_49 + 0.0500000000000000027755576*var_10 + var_5 + 0.0333333333333333328707404*var_8 + 0.0111111111111111115351546*var_7 + var_26 + var_38;
    const double var_61 = var_60*w[3][2] + var_59*w[3][1] + 0.0333333333333333328707404*var_54*w[3][0];
    A[5] = 0.0178571428571428561515866*var_35*var_61;
    const double var_62 = var_52*w[3][1] + var_59*w[3][2] + var_56*w[3][0];
    A[3] = A[1];
    const double var_63 = 0.0333333333333333328707404*var_54*w[3][1] + var_29*w[3][2] + var_23*w[3][0];
    A[2] = 0.0178571428571428561515866*var_35*var_63;
    const double var_64 = var_58 + 0.1666666666666666574148081*var_47 + var_13 + var_21 + var_43 + 0.0500000000000000027755576*var_4;
    A[4] = 0.0178571428571428561515866*var_35*var_62;
    A[7] = A[5];
    const double var_65 = var_29*w[3][0] + var_64*w[3][2] + var_60*w[3][1];
    A[8] = 0.0178571428571428561515866*var_35*var_65;
    A[6] = A[2];
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
