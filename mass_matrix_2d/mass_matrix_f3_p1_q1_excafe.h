#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.33 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[0][1]*w[1][0] + w[0][0]*w[1][1];
    const double var_1 = var_0*w[2][1] + w[0][1]*w[1][1]*w[2][0];
    const double var_2 = w[0][0]*w[1][0]*w[2][1] + var_0*w[2][0];
    const double var_3 = var_1 + var_2;
    const double var_4 = w[0][1]*w[1][2] + w[0][2]*w[1][1];
    const double var_5 = w[0][0]*w[1][2] + w[0][2]*w[1][0];
    const double var_6 = var_4*w[2][0] + var_5*w[2][1] + var_0*w[2][2];
    const double var_7 = 0.5000000000000000000000000*var_6;
    const double var_8 = var_4*w[2][1] + w[0][1]*w[1][1]*w[2][2];
    const double var_9 = var_5*w[2][0] + w[0][0]*w[1][0]*w[2][2];
    const double var_10 = var_8 + var_9;
    const double var_11 = w[0][1]*w[1][1]*w[2][1];
    const double var_12 = w[0][0]*w[1][0]*w[2][0];
    const double var_13 = var_11 + var_12;
    const double var_14 = 0.3333333333333333148296163*var_3 + var_10 + var_13 + var_7;
    const double var_15 = w[0][2]*w[1][2]*w[2][2];
    const double var_16 = -1.0000000000000000000000000*x[0][0];
    const double var_17 = x[1][0] + var_16;
    const double var_18 = -1.0000000000000000000000000*x[0][1];
    const double var_19 = x[2][1] + var_18;
    const double var_20 = x[2][0] + var_16;
    const double var_21 = x[1][1] + var_18;
    const double var_22 = var_17*var_19 + -1.0000000000000000000000000*var_20*var_21;
    const double var_23 = std::abs(var_22);
    const double var_24 = var_4*w[2][2] + w[0][2]*w[1][2]*w[2][1];
    const double var_25 = w[0][2]*w[1][2]*w[2][0] + var_5*w[2][2];
    const double var_26 = var_25 + var_24;
    const double var_27 = 0.1666666666666666574148081*var_6;
    const double var_28 = var_10 + var_15;
    const double var_29 = 0.5000000000000000000000000*var_3 + 0.2500000000000000000000000*var_28 + var_27 + 0.1666666666666666574148081*var_26 + var_13;
    A[1] = 0.0047619047619047623343125*var_23*var_29;
    A[3] = A[1];
    const double var_30 = var_2 + var_24;
    const double var_31 = 0.1000000000000000055511151*var_14 + 0.2000000000000000111022302*var_26 + var_15;
    const double var_32 = var_1 + var_8;
    const double var_33 = var_25 + var_9;
    const double var_34 = var_30 + var_11;
    const double var_35 = var_15 + var_27;
    const double var_36 = var_12 + 0.2500000000000000000000000*var_34 + var_35 + 0.5000000000000000000000000*var_33 + 0.1666666666666666574148081*var_32;
    A[2] = 0.0047619047619047623343125*var_23*var_36;
    const double var_37 = var_2 + var_9;
    const double var_38 = var_8 + var_24;
    const double var_39 = var_1 + var_25;
    const double var_40 = var_15 + var_7;
    const double var_41 = 0.3333333333333333148296163*var_38 + var_11 + var_40 + var_39;
    const double var_42 = 0.2000000000000000111022302*var_37 + var_12 + 0.1000000000000000055511151*var_41;
    A[0] = 0.0238095238095238082021154*var_23*var_42;
    const double var_43 = var_12 + var_30 + 0.3333333333333333148296163*var_33 + var_40;
    const double var_44 = 0.2000000000000000111022302*var_32 + var_11 + 0.1000000000000000055511151*var_43;
    A[4] = 0.0238095238095238082021154*var_23*var_44;
    A[8] = 0.0238095238095238082021154*var_23*var_31;
    A[6] = A[2];
    const double var_45 = var_12 + var_39;
    const double var_46 = var_11 + var_35 + 0.2500000000000000000000000*var_45 + 0.5000000000000000000000000*var_38 + 0.1666666666666666574148081*var_37;
    A[5] = 0.0047619047619047623343125*var_23*var_46;
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
