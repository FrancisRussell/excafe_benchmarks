#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.01 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = -1.0000000000000000000000000*x[0][1];
    const double var_1 = x[2][1] + var_0;
    const double var_2 = -1.0000000000000000000000000*x[0][0];
    const double var_3 = x[1][0] + var_2;
    const double var_4 = var_0 + x[1][1];
    const double var_5 = var_2 + x[2][0];
    const double var_6 = var_1*var_3 + -1.0000000000000000000000000*var_4*var_5;
    const double var_7 = std::abs(var_6);
    const double var_8 = 0.0166666666666666664353702*var_7*w[0][0];
    const double var_9 = 0.0166666666666666664353702*var_7*w[0][1];
    const double var_10 = 0.0166666666666666664353702*var_7*w[0][2];
    const double var_11 = var_9 + var_10;
    A[5] = 0.0083333333333333332176851*var_7*w[0][0] + var_11;
    const double var_12 = var_9 + var_8;
    A[1] = 0.0083333333333333332176851*var_7*w[0][2] + var_12;
    A[3] = A[1];
    const double var_13 = var_10 + var_8;
    A[2] = 0.0083333333333333332176851*var_7*w[0][1] + var_13;
    A[6] = A[2];
    A[7] = A[5];
    A[4] = 0.0500000000000000027755576*var_7*w[0][1] + var_13;
    A[8] = 0.0500000000000000027755576*var_7*w[0][2] + var_12;
    A[0] = 0.0500000000000000027755576*var_7*w[0][0] + var_11;
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
