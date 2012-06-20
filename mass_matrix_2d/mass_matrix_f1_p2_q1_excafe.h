#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.05 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = -1.0000000000000000000000000*x[0][0];
    const double var_1 = x[1][0] + var_0;
    const double var_2 = w[0][3] + w[0][4] + -0.2500000000000000000000000*w[0][2];
    const double var_3 = -1.0000000000000000000000000*x[0][1];
    const double var_4 = var_3 + x[1][1];
    const double var_5 = x[2][0] + var_0;
    const double var_6 = var_3 + x[2][1];
    const double var_7 = var_1*var_6 + -1.0000000000000000000000000*var_4*var_5;
    const double var_8 = std::abs(var_7);
    const double var_9 = w[0][3] + w[0][5] + -0.2500000000000000000000000*w[0][1];
    const double var_10 = w[0][4] + 0.5000000000000000000000000*var_9;
    A[2] = 0.0222222222222222230703093*var_10*var_8;
    A[6] = A[2];
    const double var_11 = w[0][4] + -0.1666666666666666574148081*w[0][1];
    const double var_12 = -0.1666666666666666574148081*w[0][0] + w[0][3];
    const double var_13 = var_12 + 0.3333333333333333148296163*w[0][5] + var_11 + 0.5000000000000000000000000*w[0][2];
    const double var_14 = w[0][4] + -0.2500000000000000000000000*w[0][0] + w[0][5];
    const double var_15 = w[0][3] + 0.5000000000000000000000000*var_14;
    const double var_16 = w[0][5] + -0.1666666666666666574148081*w[0][2];
    const double var_17 = 0.5000000000000000000000000*w[0][0] + 0.3333333333333333148296163*w[0][3] + var_11 + var_16;
    A[0] = 0.0333333333333333328707404*var_17*var_8;
    const double var_18 = w[0][5] + 0.5000000000000000000000000*var_2;
    A[8] = 0.0333333333333333328707404*var_13*var_8;
    A[1] = 0.0222222222222222230703093*var_18*var_8;
    A[3] = A[1];
    const double var_19 = var_12 + 0.3333333333333333148296163*w[0][4] + 0.5000000000000000000000000*w[0][1] + var_16;
    A[4] = 0.0333333333333333328707404*var_19*var_8;
    A[5] = 0.0222222222222222230703093*var_15*var_8;
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
