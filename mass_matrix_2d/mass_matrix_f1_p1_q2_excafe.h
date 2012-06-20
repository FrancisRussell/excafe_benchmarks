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

    const double var_0 = -1.0000000000000000000000000*x[0][1];
    const double var_1 = x[2][1] + var_0;
    const double var_2 = -1.0000000000000000000000000*x[0][0];
    const double var_3 = x[1][0] + var_2;
    const double var_4 = x[1][1] + var_0;
    const double var_5 = var_2 + x[2][0];
    const double var_6 = -1.0000000000000000000000000*var_4*var_5 + var_1*var_3;
    const double var_7 = std::abs(var_6);
    const double var_8 = w[0][1] + w[0][2];
    const double var_9 = 0.3333333333333333148296163*w[0][0] + var_8;
    A[21] = 0.0380952380952380986744998*var_7*var_9;
    const double var_10 = w[0][0] + 0.6666666666666666296592325*var_8;
    A[29] = 0.0190476190476190493372499*var_10*var_7;
    const double var_11 = -0.0015873015873015873002105*var_7*w[0][2];
    const double var_12 = 0.0047619047619047623343125*var_7*w[0][1];
    const double var_13 = -0.0031746031746031746004211*var_7*w[0][0];
    A[11] = var_12 + var_13 + var_11;
    A[31] = A[11];
    const double var_14 = -0.0015873015873015873002105*var_7*w[0][0];
    const double var_15 = -0.0031746031746031746004211*var_7*w[0][2];
    A[9] = var_12 + var_14 + var_15;
    const double var_16 = w[0][0] + w[0][1];
    const double var_17 = -1.0000000000000000000000000*var_16 + 0.2500000000000000000000000*w[0][2];
    A[1] = 0.0015873015873015873002105*var_17*var_7;
    const double var_18 = 0.0047619047619047623343125*var_7*w[0][2];
    const double var_19 = 0.2500000000000000000000000*w[0][0] + -1.0000000000000000000000000*var_8;
    A[8] = 0.0015873015873015873002105*var_19*var_7;
    const double var_20 = -0.0015873015873015873002105*var_7*w[0][1];
    A[6] = A[1];
    const double var_21 = var_16 + 0.3333333333333333148296163*w[0][2];
    A[35] = 0.0380952380952380986744998*var_21*var_7;
    const double var_22 = 0.2000000000000000111022302*var_16 + w[0][2];
    const double var_23 = w[0][0] + w[0][2];
    A[10] = -0.0047619047619047623343125*var_23*var_7 + var_20;
    A[3] = var_14 + -0.0047619047619047623343125*var_7*var_8;
    const double var_24 = 0.6666666666666666296592325*var_23 + w[0][1];
    A[23] = 0.0190476190476190493372499*var_24*var_7;
    A[33] = A[23];
    A[14] = 0.0119047619047619041010577*var_22*var_7;
    A[25] = A[10];
    const double var_25 = -0.0031746031746031746004211*var_7*w[0][1];
    const double var_26 = 0.0047619047619047623343125*var_7*w[0][0];
    A[4] = var_20 + var_26 + var_15;
    A[24] = A[4];
    const double var_27 = var_23 + 0.3333333333333333148296163*w[0][1];
    const double var_28 = -1.0000000000000000000000000*var_23 + 0.2500000000000000000000000*w[0][1];
    A[2] = 0.0015873015873015873002105*var_28*var_7;
    A[12] = A[2];
    const double var_29 = 0.6666666666666666296592325*var_16 + w[0][2];
    A[15] = var_14 + var_18 + var_25;
    A[20] = A[15];
    const double var_30 = w[0][0] + 0.2000000000000000111022302*var_8;
    A[0] = 0.0119047619047619041010577*var_30*var_7;
    A[16] = var_20 + var_13 + var_18;
    A[26] = A[16];
    A[18] = A[3];
    const double var_31 = 0.2000000000000000111022302*var_23 + w[0][1];
    A[7] = 0.0119047619047619041010577*var_31*var_7;
    A[22] = 0.0190476190476190493372499*var_29*var_7;
    A[27] = A[22];
    A[17] = -0.0047619047619047623343125*var_16*var_7 + var_11;
    A[32] = A[17];
    A[34] = A[29];
    A[13] = A[8];
    A[5] = var_26 + var_11 + var_25;
    A[19] = A[9];
    A[30] = A[5];
    A[28] = 0.0380952380952380986744998*var_27*var_7;
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
