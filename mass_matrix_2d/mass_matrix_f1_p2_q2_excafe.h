#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.11 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[0][5] + -0.1111111111111111049432054*w[0][2];
    const double var_1 = w[0][4] + -0.1111111111111111049432054*w[0][1];
    const double var_2 = -x[0][1];
    const double var_3 = x[1][1] + var_2;
    const double var_4 = -x[0][0];
    const double var_5 = x[2][0] + var_4;
    const double var_6 = x[1][0] + var_4;
    const double var_7 = x[2][1] + var_2;
    const double var_8 = -var_3*var_5 + var_6*var_7;
    const double var_9 = std::abs(var_8);
    const double var_10 = w[0][3] + w[0][4];
    const double var_11 = -2.0000000000000000000000000*w[0][5] + 0.5000000000000000000000000*w[0][2] + -var_10;
    A[17] = 0.0031746031746031746004211*var_11*var_9;
    const double var_12 = w[0][1] + w[0][0];
    const double var_13 = w[0][5] + w[0][4];
    const double var_14 = 0.0190476190476190493372499*var_13*var_9;
    const double var_15 = w[0][1] + w[0][2];
    const double var_16 = 4.0000000000000000000000000*w[0][3] + -var_15;
    A[29] = var_14 + 0.0031746031746031746004211*var_16*var_9;
    A[34] = A[29];
    const double var_17 = -0.0031746031746031746004211*var_9*w[0][3] + 0.0047619047619047623343125*var_9*w[0][0];
    const double var_18 = -0.0015873015873015873002105*var_9*w[0][2];
    A[4] = var_17 + var_18;
    A[24] = A[4];
    A[32] = A[17];
    const double var_19 = w[0][2] + w[0][0];
    const double var_20 = -var_19 + 4.0000000000000000000000000*w[0][4];
    const double var_21 = -0.0007936507936507936501053*var_19*var_9;
    const double var_22 = w[0][3] + w[0][5];
    const double var_23 = 0.3333333333333333148296163*w[0][4] + var_22;
    A[7] = var_21 + 0.0047619047619047623343125*var_23*var_9 + 0.0071428571428571426341070*var_9*w[0][1];
    const double var_24 = -0.0007936507936507936501053*var_12*var_9;
    const double var_25 = 0.3333333333333333148296163*w[0][5] + var_10;
    A[14] = var_24 + 0.0047619047619047623343125*var_25*var_9 + 0.0071428571428571426341070*var_9*w[0][2];
    const double var_26 = -w[0][3] + 0.2500000000000000000000000*w[0][0];
    const double var_27 = -0.0007936507936507936501053*var_15*var_9;
    A[8] = var_27 + 0.0015873015873015873002105*var_26*var_9;
    A[13] = A[8];
    const double var_28 = 0.0190476190476190493372499*var_22*var_9;
    A[28] = var_28 + 0.0571428571428571410728559*var_1*var_9;
    const double var_29 = -0.0031746031746031746004211*var_9*w[0][4] + 0.0047619047619047623343125*var_9*w[0][1];
    A[9] = var_29 + var_18;
    const double var_30 = -0.0015873015873015873002105*var_9*w[0][1];
    A[5] = var_17 + var_30;
    A[30] = A[5];
    const double var_31 = -0.0015873015873015873002105*var_9*w[0][0];
    const double var_32 = 0.0190476190476190493372499*var_10*var_9;
    const double var_33 = 4.0000000000000000000000000*w[0][5] + -var_12;
    A[22] = var_32 + 0.0031746031746031746004211*var_33*var_9;
    A[27] = A[22];
    const double var_34 = -w[0][5] + 0.2500000000000000000000000*w[0][2];
    const double var_35 = -w[0][4] + 0.2500000000000000000000000*w[0][1];
    A[2] = var_21 + 0.0015873015873015873002105*var_35*var_9;
    A[12] = A[2];
    const double var_36 = 0.3333333333333333148296163*w[0][3] + var_13;
    A[0] = var_27 + 0.0071428571428571426341070*var_9*w[0][0] + 0.0047619047619047623343125*var_36*var_9;
    const double var_37 = -0.0031746031746031746004211*var_9*w[0][5] + 0.0047619047619047623343125*var_9*w[0][2];
    A[15] = var_37 + var_30;
    const double var_38 = w[0][3] + -0.1111111111111111049432054*w[0][0];
    A[23] = var_28 + 0.0031746031746031746004211*var_20*var_9;
    A[33] = A[23];
    A[1] = var_24 + 0.0015873015873015873002105*var_34*var_9;
    A[6] = A[1];
    A[20] = A[15];
    const double var_39 = -var_22 + 0.5000000000000000000000000*w[0][1] + -2.0000000000000000000000000*w[0][4];
    A[16] = var_37 + var_31;
    A[26] = A[16];
    const double var_40 = -var_13 + 0.5000000000000000000000000*w[0][0] + -2.0000000000000000000000000*w[0][3];
    A[3] = 0.0031746031746031746004211*var_40*var_9;
    A[18] = A[3];
    A[11] = var_29 + var_31;
    A[19] = A[9];
    A[10] = 0.0031746031746031746004211*var_39*var_9;
    A[21] = var_14 + 0.0571428571428571410728559*var_38*var_9;
    A[35] = var_32 + 0.0571428571428571410728559*var_0*var_9;
    A[25] = A[10];
    A[31] = A[11];
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
