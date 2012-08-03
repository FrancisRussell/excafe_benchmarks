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
    const double var_1 = x[2][1] + var_0;
    const double var_2 = -x[0][0];
    const double var_3 = x[1][0] + var_2;
    const double var_4 = x[1][1] + var_0;
    const double var_5 = x[2][0] + var_2;
    const double var_6 = var_1*var_3 + -var_4*var_5;
    const double var_7 = var_6;
    const double var_8 = std::abs(var_7);
    const double var_9 = var_6;
    const double var_10 = w[0][3] + w[0][5] + w[0][4];
    const double var_11 = var_3*var_5 + var_1*var_4;
    A[5] = -0.1666666666666666574148081*var_10*var_11*var_8/(var_9*var_9);
    const double var_12 = var_1*var_1 + var_5*var_5;
    const double var_13 = var_4*var_4 + var_3*var_3;
    const double var_14 = var_12 + var_13;
    const double var_15 = -var_11 + 0.5000000000000000000000000*var_14;
    A[4] = 0.1666666666666666574148081*var_10*var_12*var_8/(var_9*var_9);
    const double var_16 = var_11 + -var_13;
    A[2] = 0.1666666666666666574148081*var_10*var_16*var_8/(var_9*var_9);
    A[6] = A[2];
    const double var_17 = -var_12 + var_11;
    A[1] = 0.1666666666666666574148081*var_10*var_17*var_8/(var_9*var_9);
    A[3] = A[1];
    A[0] = 0.3333333333333333148296163*var_10*var_15*var_8/(var_9*var_9);
    A[7] = A[5];
    A[8] = 0.1666666666666666574148081*var_10*var_13*var_8/(var_9*var_9);
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
