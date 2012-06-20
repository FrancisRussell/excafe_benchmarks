#include <cassert>
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

    const double var_0 = w[0][8] + w[0][7];
    const double var_1 = -1.0000000000000000000000000*x[0][1];
    const double var_2 = var_1 + x[1][1];
    const double var_3 = -1.0000000000000000000000000*x[0][0];
    const double var_4 = var_3 + x[2][0];
    const double var_5 = var_1 + x[2][1];
    const double var_6 = x[1][0] + var_3;
    const double var_7 = -1.0000000000000000000000000*var_2*var_4 + var_5*var_6;
    const double var_8 = std::abs(var_7);
    const double var_9 = w[0][4] + w[0][6];
    const double var_10 = w[0][3] + w[0][5];
    const double var_11 = w[0][0] + w[0][1];
    const double var_12 = 0.9000000000000000222044605*w[0][9];
    const double var_13 = -0.1500000000000000222044605*var_10 + 0.7500000000000000000000000*var_9 + -0.0500000000000000027755576*var_0 + var_12 + 0.0666666666666666657414808*var_11 + 0.2000000000000000111022302*w[0][2];
    A[8] = 0.0357142857142857123031732*var_13*var_8;
    const double var_14 = w[0][8] + w[0][6];
    const double var_15 = 3.0000000000000000000000000*w[0][9];
    const double var_16 = 0.5000000000000000000000000*var_10 + -0.2500000000000000000000000*var_9 + var_15 + var_0 + 0.1666666666666666574148081*w[0][2] + 0.0833333333333333287074041*var_11;
    const double var_17 = w[0][0] + w[0][2];
    const double var_18 = w[0][8] + w[0][3];
    const double var_19 = w[0][4] + w[0][7];
    const double var_20 = w[0][5] + w[0][6];
    const double var_21 = var_15 + 0.5000000000000000000000000*var_19 + -0.2500000000000000000000000*var_18 + var_20 + 0.1666666666666666574148081*w[0][1] + 0.0833333333333333287074041*var_17;
    A[2] = 0.0071428571428571426341070*var_21*var_8;
    const double var_22 = w[0][4] + w[0][3];
    const double var_23 = w[0][1] + w[0][2];
    const double var_24 = w[0][5] + w[0][7];
    const double var_25 = var_15 + 0.1666666666666666574148081*w[0][0] + -0.2500000000000000000000000*var_24 + var_22 + 0.5000000000000000000000000*var_14 + 0.0833333333333333287074041*var_23;
    A[5] = 0.0071428571428571426341070*var_25*var_8;
    A[7] = A[5];
    const double var_26 = -0.1500000000000000222044605*var_19 + 0.7500000000000000000000000*var_18 + -0.0500000000000000027755576*var_20 + var_12 + 0.2000000000000000111022302*w[0][1] + 0.0666666666666666657414808*var_17;
    A[4] = 0.0357142857142857123031732*var_26*var_8;
    const double var_27 = 0.2000000000000000111022302*w[0][0] + var_12 + 0.7500000000000000000000000*var_24 + -0.0500000000000000027755576*var_22 + -0.1500000000000000222044605*var_14 + 0.0666666666666666657414808*var_23;
    A[0] = 0.0357142857142857123031732*var_27*var_8;
    A[1] = 0.0071428571428571426341070*var_16*var_8;
    A[3] = A[1];
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
