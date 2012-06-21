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
    const double var_8 = -0.0015873015873015873002105*var_7*w[0][0];
    const double var_9 = 0.0047619047619047623343125*var_7*w[0][2];
    const double var_10 = -0.0031746031746031746004211*var_7*w[0][1];
    A[15] = var_9 + var_8 + var_10;
    A[20] = A[15];
    const double var_11 = w[0][2] + w[0][0];
    const double var_12 = -var_11 + 0.2500000000000000000000000*w[0][1];
    A[2] = 0.0015873015873015873002105*var_12*var_7;
    const double var_13 = 0.0047619047619047623343125*var_7*w[0][1];
    const double var_14 = w[0][1] + w[0][0];
    const double var_15 = w[0][2] + 0.6666666666666666296592325*var_14;
    A[22] = 0.0190476190476190493372499*var_15*var_7;
    A[27] = A[22];
    const double var_16 = 0.3333333333333333148296163*w[0][2] + var_14;
    A[35] = 0.0380952380952380986744998*var_16*var_7;
    const double var_17 = -0.0015873015873015873002105*var_7*w[0][1];
    A[10] = -0.0047619047619047623343125*var_11*var_7 + var_17;
    const double var_18 = -0.0015873015873015873002105*var_7*w[0][2];
    A[17] = -0.0047619047619047623343125*var_14*var_7 + var_18;
    const double var_19 = 0.2500000000000000000000000*w[0][2] + -var_14;
    const double var_20 = w[0][1] + 0.2000000000000000111022302*var_11;
    A[7] = 0.0119047619047619041010577*var_20*var_7;
    const double var_21 = -0.0031746031746031746004211*var_7*w[0][0];
    A[16] = var_9 + var_17 + var_21;
    const double var_22 = w[0][2] + w[0][1];
    const double var_23 = 0.3333333333333333148296163*w[0][0] + var_22;
    A[11] = var_13 + var_21 + var_18;
    A[31] = A[11];
    A[12] = A[2];
    const double var_24 = w[0][1] + 0.6666666666666666296592325*var_11;
    A[23] = 0.0190476190476190493372499*var_24*var_7;
    A[33] = A[23];
    const double var_25 = 0.2500000000000000000000000*w[0][0] + -var_22;
    const double var_26 = 0.0047619047619047623343125*var_7*w[0][0];
    A[5] = var_10 + var_18 + var_26;
    A[30] = A[5];
    A[3] = -0.0047619047619047623343125*var_22*var_7 + var_8;
    A[18] = A[3];
    A[25] = A[10];
    const double var_27 = -0.0031746031746031746004211*var_7*w[0][2];
    A[4] = var_27 + var_17 + var_26;
    A[9] = var_13 + var_27 + var_8;
    A[32] = A[17];
    const double var_28 = w[0][0] + 0.6666666666666666296592325*var_22;
    const double var_29 = w[0][2] + 0.2000000000000000111022302*var_14;
    const double var_30 = 0.3333333333333333148296163*w[0][1] + var_11;
    A[8] = 0.0015873015873015873002105*var_25*var_7;
    const double var_31 = 0.2000000000000000111022302*var_22 + w[0][0];
    A[29] = 0.0190476190476190493372499*var_28*var_7;
    A[1] = 0.0015873015873015873002105*var_19*var_7;
    A[6] = A[1];
    A[19] = A[9];
    A[21] = 0.0380952380952380986744998*var_23*var_7;
    A[14] = 0.0119047619047619041010577*var_29*var_7;
    A[13] = A[8];
    A[24] = A[4];
    A[28] = 0.0380952380952380986744998*var_30*var_7;
    A[0] = 0.0119047619047619041010577*var_31*var_7;
    A[26] = A[16];
    A[34] = A[29];
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
