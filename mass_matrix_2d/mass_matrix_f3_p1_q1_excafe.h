#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.46 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[0][0]*w[2][2] + w[0][2]*w[2][0];
    const double var_1 = w[0][2]*w[1][2]*w[2][2];
    const double var_2 = w[0][1]*w[2][0] + w[0][0]*w[2][1];
    const double var_3 = var_2*w[1][0] + w[0][0]*w[1][1]*w[2][0];
    const double var_4 = w[0][1]*w[1][0]*w[2][1] + var_2*w[1][1];
    const double var_5 = var_4 + var_3;
    const double var_6 = w[0][1]*w[2][2] + w[0][2]*w[2][1];
    const double var_7 = var_6*w[1][0] + var_0*w[1][1] + var_2*w[1][2];
    const double var_8 = 0.5000000000000000000000000*var_7;
    const double var_9 = var_0*w[1][0] + w[0][0]*w[1][2]*w[2][0];
    const double var_10 = var_6*w[1][1] + w[0][1]*w[1][2]*w[2][1];
    const double var_11 = var_9 + var_10;
    const double var_12 = w[0][0]*w[1][0]*w[2][0];
    const double var_13 = w[0][1]*w[1][1]*w[2][1];
    const double var_14 = var_12 + var_13;
    const double var_15 = var_11 + 0.3333333333333333148296163*var_5 + var_14 + var_8;
    const double var_16 = var_0*w[1][2] + w[0][2]*w[1][0]*w[2][2];
    const double var_17 = w[0][2]*w[1][1]*w[2][2] + var_6*w[1][2];
    const double var_18 = var_17 + var_16;
    const double var_19 = 0.1000000000000000055511151*var_15 + var_1 + 0.2000000000000000111022302*var_18;
    const double var_20 = var_9 + var_16;
    const double var_21 = var_17 + var_3;
    const double var_22 = var_8 + var_1;
    const double var_23 = var_21 + var_12 + 0.3333333333333333148296163*var_20 + var_22;
    const double var_24 = -x[0][1];
    const double var_25 = x[1][1] + var_24;
    const double var_26 = -x[0][0];
    const double var_27 = x[2][0] + var_26;
    const double var_28 = x[1][0] + var_26;
    const double var_29 = x[2][1] + var_24;
    const double var_30 = -var_25*var_27 + var_28*var_29;
    const double var_31 = std::abs(var_30);
    const double var_32 = var_4 + var_10;
    const double var_33 = 0.1000000000000000055511151*var_23 + 0.2000000000000000111022302*var_32 + var_13;
    A[4] = 0.0238095238095238082021154*var_31*var_33;
    const double var_34 = var_4 + var_16;
    const double var_35 = var_9 + var_3;
    const double var_36 = 0.1666666666666666574148081*var_7;
    const double var_37 = var_1 + var_11;
    const double var_38 = 0.5000000000000000000000000*var_5 + 0.2500000000000000000000000*var_37 + 0.1666666666666666574148081*var_18 + var_36 + var_14;
    A[1] = 0.0047619047619047623343125*var_31*var_38;
    const double var_39 = var_13 + var_21;
    const double var_40 = var_1 + var_36;
    const double var_41 = 0.1666666666666666574148081*var_32 + 0.2500000000000000000000000*var_39 + var_12 + 0.5000000000000000000000000*var_20 + var_40;
    A[2] = 0.0047619047619047623343125*var_31*var_41;
    A[6] = A[2];
    const double var_42 = var_17 + var_10;
    const double var_43 = var_12 + var_34;
    const double var_44 = 0.2500000000000000000000000*var_43 + var_13 + 0.5000000000000000000000000*var_42 + 0.1666666666666666574148081*var_35 + var_40;
    A[5] = 0.0047619047619047623343125*var_31*var_44;
    const double var_45 = var_34 + var_13 + 0.3333333333333333148296163*var_42 + var_22;
    A[3] = A[1];
    const double var_46 = 0.1000000000000000055511151*var_45 + var_12 + 0.2000000000000000111022302*var_35;
    A[0] = 0.0238095238095238082021154*var_31*var_46;
    A[8] = 0.0238095238095238082021154*var_19*var_31;
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
