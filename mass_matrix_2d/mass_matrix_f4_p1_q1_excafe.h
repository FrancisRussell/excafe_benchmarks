#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 4.61 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[1][1]*w[3][2] + w[1][2]*w[3][1];
    const double var_1 = w[1][2]*w[2][1]*w[3][2] + var_0*w[2][2];
    const double var_2 = 0.0166666666666666664353702*var_1;
    const double var_3 = w[1][0]*w[3][1] + w[1][1]*w[3][0];
    const double var_4 = w[1][0]*w[2][1]*w[3][0] + var_3*w[2][0];
    const double var_5 = 0.0166666666666666664353702*var_4;
    const double var_6 = -x[0][0];
    const double var_7 = x[1][0] + var_6;
    const double var_8 = w[1][2]*w[3][0] + w[1][0]*w[3][2];
    const double var_9 = var_8*w[2][1] + var_0*w[2][0] + var_3*w[2][2];
    const double var_10 = 0.0166666666666666664353702*var_9;
    const double var_11 = w[1][1]*w[2][0]*w[3][1] + var_3*w[2][1];
    const double var_12 = w[1][1]*w[2][2]*w[3][1] + var_0*w[2][1];
    const double var_13 = w[1][2]*w[2][0]*w[3][2] + var_8*w[2][2];
    const double var_14 = w[1][0]*w[2][2]*w[3][0] + var_8*w[2][0];
    const double var_15 = 0.0166666666666666664353702*var_11;
    const double var_16 = 0.0666666666666666657414808*var_14 + var_15;
    const double var_17 = w[1][0]*w[2][0]*w[3][0];
    const double var_18 = var_10 + 0.1666666666666666574148081*var_17;
    const double var_19 = w[1][1]*w[2][1]*w[3][1];
    const double var_20 = 0.0166666666666666664353702*var_19;
    const double var_21 = w[1][2]*w[2][2]*w[3][2];
    const double var_22 = 0.0666666666666666657414808*var_21;
    const double var_23 = var_20 + var_18 + 0.0333333333333333328707404*var_4 + var_16 + 0.0111111111111111115351546*var_12 + 0.0500000000000000027755576*var_13 + var_2 + var_22;
    const double var_24 = 0.0166666666666666664353702*var_13;
    const double var_25 = -x[0][1];
    const double var_26 = x[1][1] + var_25;
    const double var_27 = x[2][0] + var_6;
    const double var_28 = x[2][1] + var_25;
    const double var_29 = -var_26*var_27 + var_28*var_7;
    const double var_30 = std::abs(var_29);
    const double var_31 = var_1 + var_13;
    const double var_32 = var_12 + var_11;
    const double var_33 = var_14 + var_4;
    const double var_34 = var_32 + var_31 + var_33;
    const double var_35 = var_21 + var_19;
    const double var_36 = 0.3333333333333333148296163*var_9 + var_35 + 0.5000000000000000000000000*var_34 + var_17;
    const double var_37 = 0.0666666666666666657414808*var_11 + var_2;
    const double var_38 = var_10 + 0.1666666666666666574148081*var_19;
    const double var_39 = 0.0166666666666666664353702*var_14;
    const double var_40 = 0.0666666666666666657414808*var_17;
    const double var_41 = 0.0166666666666666664353702*var_21;
    const double var_42 = var_40 + var_38 + 0.0500000000000000027755576*var_4 + var_37 + 0.0333333333333333328707404*var_12 + 0.0111111111111111115351546*var_13 + var_39 + var_41;
    const double var_43 = 0.0666666666666666657414808*var_4 + var_24;
    const double var_44 = 0.0166666666666666664353702*var_12;
    const double var_45 = 0.0666666666666666657414808*var_19;
    const double var_46 = var_18 + 0.0111111111111111115351546*var_1 + 0.0500000000000000027755576*var_11 + var_43 + 0.0333333333333333328707404*var_14 + var_45 + var_44 + var_41;
    const double var_47 = var_42*w[0][1] + var_46*w[0][0] + 0.0333333333333333328707404*var_36*w[0][2];
    A[1] = 0.0178571428571428561515866*var_30*var_47;
    const double var_48 = 0.0666666666666666657414808*var_1 + var_39;
    const double var_49 = var_10 + 0.1666666666666666574148081*var_21;
    const double var_50 = 0.0166666666666666664353702*var_17;
    const double var_51 = var_49 + var_45 + 0.0111111111111111115351546*var_4 + 0.0333333333333333328707404*var_13 + var_50 + 0.0500000000000000027755576*var_12 + var_48 + var_15;
    const double var_52 = 0.0666666666666666657414808*var_13 + var_44;
    const double var_53 = 0.0111111111111111115351546*var_11 + var_52 + var_20 + var_49 + 0.0333333333333333328707404*var_1 + 0.0500000000000000027755576*var_14 + var_5 + var_40;
    const double var_54 = 0.0666666666666666657414808*var_12 + var_5;
    const double var_55 = 0.0333333333333333328707404*var_9;
    const double var_56 = 0.0500000000000000027755576*var_17 + var_55;
    const double var_57 = var_54 + var_21 + var_56 + var_16 + 0.0500000000000000027755576*var_19 + 0.1666666666666666574148081*var_31;
    const double var_58 = var_53*w[0][0] + var_57*w[0][2] + var_51*w[0][1];
    A[8] = 0.0178571428571428561515866*var_30*var_58;
    const double var_59 = var_50 + 0.0500000000000000027755576*var_1 + var_38 + 0.0333333333333333328707404*var_11 + 0.0111111111111111115351546*var_14 + var_54 + var_24 + var_22;
    const double var_60 = 0.0333333333333333328707404*var_36*w[0][0] + var_51*w[0][2] + var_59*w[0][1];
    A[5] = 0.0178571428571428561515866*var_30*var_60;
    A[7] = A[5];
    A[3] = A[1];
    const double var_61 = var_23*w[0][0] + var_53*w[0][2] + 0.0333333333333333328707404*var_36*w[0][1];
    A[2] = 0.0178571428571428561515866*var_30*var_61;
    A[6] = A[2];
    const double var_62 = 0.1666666666666666574148081*var_33 + var_37 + var_17 + var_52 + 0.0500000000000000027755576*var_35 + var_55;
    const double var_63 = var_62*w[0][0] + var_46*w[0][1] + var_23*w[0][2];
    A[0] = 0.0178571428571428561515866*var_30*var_63;
    const double var_64 = var_56 + 0.0500000000000000027755576*var_21 + var_48 + var_19 + var_43 + 0.1666666666666666574148081*var_32;
    const double var_65 = var_64*w[0][1] + var_59*w[0][2] + var_42*w[0][0];
    A[4] = 0.0178571428571428561515866*var_30*var_65;
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
