#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.07 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[0][2]*w[1][2];
    const double var_1 = w[0][0]*w[1][0];
    const double var_2 = var_1 + var_0;
    const double var_3 = w[0][1]*w[1][2] + w[0][2]*w[1][1];
    const double var_4 = w[0][1]*w[1][0] + w[0][0]*w[1][1];
    const double var_5 = var_3 + var_4;
    const double var_6 = w[0][1]*w[1][1];
    const double var_7 = var_6 + var_5;
    const double var_8 = 0.3333333333333333148296163*var_7 + var_2;
    const double var_9 = -1.0000000000000000000000000*x[0][0];
    const double var_10 = x[1][0] + var_9;
    const double var_11 = w[0][2]*w[1][0] + w[0][0]*w[1][2];
    const double var_12 = var_11 + var_3;
    const double var_13 = var_0 + var_12;
    const double var_14 = -1.0000000000000000000000000*x[0][1];
    const double var_15 = var_6 + var_0;
    const double var_16 = x[1][1] + var_14;
    const double var_17 = x[2][0] + var_9;
    const double var_18 = x[2][1] + var_14;
    const double var_19 = var_10*var_18 + -1.0000000000000000000000000*var_16*var_17;
    const double var_20 = std::abs(var_19);
    A[2] = 0.0083333333333333332176851*var_20*var_8 + 0.0055555555555555557675773*var_11*var_20;
    A[6] = A[2];
    const double var_21 = var_11 + var_4;
    const double var_22 = var_21 + var_1;
    const double var_23 = var_6 + var_1;
    const double var_24 = 0.1666666666666666574148081*var_23 + 0.0833333333333333287074041*var_4 + var_0 + 0.2500000000000000000000000*var_12;
    const double var_25 = 0.2500000000000000000000000*var_21 + 0.1666666666666666574148081*var_15 + var_1 + 0.0833333333333333287074041*var_3;
    A[0] = 0.0333333333333333328707404*var_20*var_25;
    A[8] = 0.0333333333333333328707404*var_20*var_24;
    const double var_26 = 0.5000000000000000000000000*var_13 + var_4;
    A[1] = 0.0055555555555555557675773*var_20*var_26 + 0.0083333333333333332176851*var_20*var_23;
    A[3] = A[1];
    const double var_27 = var_6 + 0.2500000000000000000000000*var_5 + 0.0833333333333333287074041*var_11 + 0.1666666666666666574148081*var_2;
    A[4] = 0.0333333333333333328707404*var_20*var_27;
    const double var_28 = var_15 + 0.3333333333333333148296163*var_22;
    A[5] = 0.0055555555555555557675773*var_20*var_3 + 0.0083333333333333332176851*var_20*var_28;
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
