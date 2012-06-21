#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.10 seconds (wall clock).

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
    const double var_8 = w[0][0] + w[0][1];
    const double var_9 = w[0][3] + w[0][5];
    const double var_10 = w[0][4] + w[0][6];
    const double var_11 = w[0][8] + w[0][7];
    const double var_12 = 3.0000000000000000000000000*w[0][9];
    const double var_13 = var_11 + 0.5000000000000000000000000*var_9 + 0.1666666666666666574148081*w[0][2] + 0.0833333333333333287074041*var_8 + -0.2500000000000000000000000*var_10 + var_12;
    A[1] = 0.0071428571428571426341070*var_13*var_7;
    const double var_14 = 0.0833333333333333287074041*w[0][2] + var_12;
    const double var_15 = w[0][4] + w[0][7];
    const double var_16 = w[0][3] + w[0][8];
    const double var_17 = w[0][6] + w[0][5];
    const double var_18 = -0.2500000000000000000000000*var_16 + var_14 + 0.0833333333333333287074041*w[0][0] + 0.1666666666666666574148081*w[0][1] + var_17 + 0.5000000000000000000000000*var_15;
    const double var_19 = w[0][8] + w[0][6];
    const double var_20 = w[0][7] + w[0][5];
    const double var_21 = 0.9000000000000000222044605*w[0][9];
    const double var_22 = 0.0666666666666666657414808*w[0][2] + var_21;
    const double var_23 = w[0][3] + w[0][4];
    const double var_24 = 0.2000000000000000111022302*w[0][0] + 0.7500000000000000000000000*var_20 + 0.0666666666666666657414808*w[0][1] + var_22 + -0.1500000000000000222044605*var_19 + -0.0500000000000000027755576*var_23;
    A[0] = 0.0357142857142857123031732*var_24*var_7;
    A[2] = 0.0071428571428571426341070*var_18*var_7;
    const double var_25 = var_14 + 0.1666666666666666574148081*w[0][0] + -0.2500000000000000000000000*var_20 + 0.0833333333333333287074041*w[0][1] + 0.5000000000000000000000000*var_19 + var_23;
    const double var_26 = -0.0500000000000000027755576*var_11 + 0.2000000000000000111022302*w[0][2] + -0.1500000000000000222044605*var_9 + 0.0666666666666666657414808*var_8 + 0.7500000000000000000000000*var_10 + var_21;
    A[8] = 0.0357142857142857123031732*var_26*var_7;
    A[3] = A[1];
    const double var_27 = -0.1500000000000000222044605*var_15 + 0.0666666666666666657414808*w[0][0] + 0.2000000000000000111022302*w[0][1] + var_22 + -0.0500000000000000027755576*var_17 + 0.7500000000000000000000000*var_16;
    A[4] = 0.0357142857142857123031732*var_27*var_7;
    A[5] = 0.0071428571428571426341070*var_25*var_7;
    A[6] = A[2];
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
