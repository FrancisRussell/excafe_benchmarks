#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 2.06 seconds (wall clock).

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
    const double var_4 = x[2][0] + var_2;
    const double var_5 = x[1][1] + var_0;
    const double var_6 = -var_4*var_5 + var_1*var_3;
    const double var_7 = var_6;
    const double var_8 = std::abs(var_7);
    const double var_9 = var_3*var_4 + var_1*var_5;
    const double var_10 = w[0][3] + w[0][5] + 2.0000000000000000000000000*w[0][4];
    const double var_11 = var_6;
    const double var_12 = w[1][1] + w[1][2];
    const double var_13 = w[1][0] + w[1][2];
    const double var_14 = w[1][0] + w[1][1];
    const double var_15 = var_13*w[0][1] + var_12*w[0][0] + var_14*w[0][2];
    const double var_16 = w[0][3]*w[1][0] + w[0][2]*w[1][5] + w[0][5]*w[1][2] + w[0][1]*w[1][4] + w[0][0]*w[1][3] + 0.2500000000000000000000000*var_15 + w[0][4]*w[1][1];
    const double var_17 = 2.0000000000000000000000000*w[0][3] + w[0][5] + w[0][4];
    const double var_18 = 2.0000000000000000000000000*w[0][5] + w[0][4] + w[0][3];
    const double var_19 = var_17*w[1][3] + var_10*w[1][4] + var_18*w[1][5];
    const double var_20 = w[0][1]*w[1][1] + w[0][2]*w[1][2] + w[0][0]*w[1][0];
    const double var_21 = 0.2500000000000000000000000*var_20 + 0.6666666666666666296592325*var_19;
    const double var_22 = -0.1666666666666666574148081*var_16 + var_21;
    const double var_23 = 0.0666666666666666657414808*var_22*var_8*var_9/(var_11*var_11);
    const double var_24 = var_1*var_1 + var_4*var_4;
    const double var_25 = -1.3333333333333332593184650*var_19 + -0.5000000000000000000000000*var_20 + 0.3333333333333333148296163*var_16;
    const double var_26 = var_3*var_3 + var_5*var_5;
    const double var_27 = var_26 + var_24;
    const double var_28 = var_25*var_9 + var_22*var_27;
    A[0] = 0.0666666666666666657414808*var_28*var_8/(var_11*var_11);
    const double var_29 = 0.1666666666666666574148081*var_16 + -var_21;
    A[5] = 0.0666666666666666657414808*var_29*var_8*var_9/(var_11*var_11);
    A[7] = A[5];
    A[2] = 0.0666666666666666657414808*var_26*var_29*var_8/(var_11*var_11) + var_23;
    A[6] = A[2];
    A[1] = 0.0666666666666666657414808*var_24*var_29*var_8/(var_11*var_11) + var_23;
    A[8] = 0.0666666666666666657414808*var_22*var_26*var_8/(var_11*var_11);
    A[3] = A[1];
    A[4] = 0.0666666666666666657414808*var_22*var_24*var_8/(var_11*var_11);
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
