#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.68 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = -1.0000000000000000000000000*x[0][1];
    const double var_1 = x[1][1] + var_0;
    const double var_2 = -1.0000000000000000000000000*x[0][0];
    const double var_3 = x[2][0] + var_2;
    const double var_4 = var_0 + x[2][1];
    const double var_5 = x[1][0] + var_2;
    const double var_6 = var_4*var_5 + -1.0000000000000000000000000*var_1*var_3;
    const double var_7 = std::abs(var_6);
    const double var_8 = 0.0285714285714285705364279*var_7*w[0][9];
    const double var_9 = w[0][8] + w[0][3];
    const double var_10 = w[0][0] + w[0][2];
    const double var_11 = var_9 + 0.1111111111111111049432054*var_10;
    A[23] = 0.0071428571428571426341070*var_11*var_7 + var_8;
    A[33] = A[23];
    const double var_12 = w[0][4] + w[0][6];
    const double var_13 = -1.0000000000000000000000000*var_12;
    const double var_14 = w[0][8] + w[0][7];
    const double var_15 = w[0][3] + w[0][5] + var_13 + 3.0000000000000000000000000*var_14;
    const double var_16 = 0.0428571428571428575393654*var_7*w[0][9];
    A[35] = 0.0071428571428571426341070*var_15*var_7 + 0.0031746031746031746004211*var_7*w[0][2] + var_16;
    const double var_17 = w[0][1] + w[0][2];
    const double var_18 = w[0][5] + w[0][7];
    const double var_19 = -1.0000000000000000000000000*var_9;
    const double var_20 = var_18 + var_13 + var_19;
    const double var_21 = -0.1111111111111111049432054*w[0][0] + 0.5000000000000000000000000*var_20;
    A[8] = 0.0017857142857142856585267*var_21*var_7 + -0.0003968253968253968250526*var_17*var_7;
    const double var_22 = 0.0555555555555555524716027*w[0][1];
    const double var_23 = var_22 + w[0][7];
    const double var_24 = 0.0555555555555555524716027*w[0][2];
    const double var_25 = var_24 + w[0][5];
    const double var_26 = 0.1666666666666666574148081*w[0][0];
    const double var_27 = -1.0000000000000000000000000*w[0][6];
    const double var_28 = 0.2500000000000000000000000*var_27;
    const double var_29 = -1.0000000000000000000000000*w[0][3];
    const double var_30 = 0.2500000000000000000000000*var_29;
    const double var_31 = var_30 + -0.7500000000000000000000000*w[0][8] + var_26 + 0.5000000000000000000000000*var_25 + var_28 + var_23;
    const double var_32 = -1.0000000000000000000000000*w[0][4];
    const double var_33 = 0.2500000000000000000000000*var_32;
    const double var_34 = -1.0000000000000000000000000*w[0][8];
    const double var_35 = 0.2500000000000000000000000*var_34;
    const double var_36 = -0.7500000000000000000000000*w[0][6] + var_35 + var_33 + var_26 + var_25 + 0.5000000000000000000000000*var_23;
    const double var_37 = -0.0035714285714285713170535*var_7*w[0][9];
    const double var_38 = w[0][3] + var_24;
    const double var_39 = 0.0555555555555555524716027*w[0][0];
    const double var_40 = w[0][8] + var_39;
    const double var_41 = 0.1666666666666666574148081*w[0][1];
    const double var_42 = -1.0000000000000000000000000*w[0][7];
    const double var_43 = 0.2500000000000000000000000*var_42;
    const double var_44 = var_43 + var_41 + var_38 + 0.5000000000000000000000000*var_40 + var_28 + -0.7500000000000000000000000*w[0][4];
    A[9] = 0.0071428571428571426341070*var_44*var_7 + var_37;
    A[19] = A[9];
    const double var_45 = 0.0035714285714285713170535*var_7*w[0][9];
    const double var_46 = var_32 + 3.0000000000000000000000000*var_9 + 0.3333333333333333148296163*var_10 + var_42;
    A[7] = 0.0047619047619047623343125*var_7*w[0][1] + var_45 + 0.0017857142857142856585267*var_46*var_7;
    A[5] = 0.0071428571428571426341070*var_31*var_7 + var_37;
    const double var_47 = var_39 + w[0][6];
    const double var_48 = w[0][4] + var_22;
    const double var_49 = -1.0000000000000000000000000*var_18;
    const double var_50 = var_49 + var_9 + var_13;
    const double var_51 = 0.5000000000000000000000000*var_50 + -0.1111111111111111049432054*w[0][1];
    A[2] = -0.0003968253968253968250526*var_10*var_7 + 0.0017857142857142856585267*var_51*var_7;
    A[12] = A[2];
    const double var_52 = 0.1111111111111111049432054*var_17 + var_18;
    A[30] = A[5];
    const double var_53 = 0.1666666666666666574148081*w[0][2];
    const double var_54 = -1.0000000000000000000000000*w[0][5];
    const double var_55 = 0.2500000000000000000000000*var_54;
    const double var_56 = var_35 + var_53 + var_48 + -0.7500000000000000000000000*w[0][3] + 0.5000000000000000000000000*var_47 + var_55;
    const double var_57 = -0.0071428571428571426341070*var_7*w[0][9];
    const double var_58 = var_49 + var_12 + var_19;
    const double var_59 = -0.1111111111111111049432054*w[0][2] + 0.5000000000000000000000000*var_58;
    A[17] = var_57 + 0.0035714285714285713170535*var_59*var_7;
    const double var_60 = w[0][0] + w[0][1];
    A[1] = -0.0003968253968253968250526*var_60*var_7 + 0.0017857142857142856585267*var_59*var_7;
    A[6] = A[1];
    A[3] = 0.0035714285714285713170535*var_21*var_7 + var_57;
    A[10] = var_57 + 0.0035714285714285713170535*var_51*var_7;
    A[25] = A[10];
    const double var_61 = var_29 + 0.3333333333333333148296163*var_60 + 3.0000000000000000000000000*var_12 + var_54;
    A[14] = 0.0017857142857142856585267*var_61*var_7 + var_45 + 0.0047619047619047623343125*var_7*w[0][2];
    const double var_62 = w[0][4] + w[0][3];
    const double var_63 = 0.1111111111111111049432054*var_60 + var_12;
    A[22] = 0.0071428571428571426341070*var_63*var_7 + var_8;
    A[15] = 0.0071428571428571426341070*var_56*var_7 + var_37;
    const double var_64 = var_43 + var_30 + var_53 + 0.5000000000000000000000000*var_48 + var_47 + -0.7500000000000000000000000*w[0][5];
    const double var_65 = w[0][8] + var_49 + 3.0000000000000000000000000*var_62 + w[0][6];
    A[21] = 0.0071428571428571426341070*var_65*var_7 + 0.0031746031746031746004211*var_7*w[0][0] + var_16;
    const double var_66 = 0.3333333333333333148296163*var_17 + var_27 + var_34 + 3.0000000000000000000000000*var_18;
    A[0] = var_45 + 0.0047619047619047623343125*var_7*w[0][0] + 0.0017857142857142856585267*var_66*var_7;
    A[4] = 0.0071428571428571426341070*var_36*var_7 + var_37;
    A[24] = A[4];
    A[20] = A[15];
    A[29] = 0.0071428571428571426341070*var_52*var_7 + var_8;
    A[34] = A[29];
    const double var_67 = w[0][5] + w[0][6];
    const double var_68 = w[0][4] + 3.0000000000000000000000000*var_67 + var_19 + w[0][7];
    A[28] = 0.0031746031746031746004211*var_7*w[0][1] + 0.0071428571428571426341070*var_68*var_7 + var_16;
    const double var_69 = var_41 + -0.7500000000000000000000000*w[0][7] + var_33 + 0.5000000000000000000000000*var_38 + var_40 + var_55;
    A[18] = A[3];
    A[11] = 0.0071428571428571426341070*var_69*var_7 + var_37;
    A[31] = A[11];
    A[27] = A[22];
    A[32] = A[17];
    A[16] = 0.0071428571428571426341070*var_64*var_7 + var_37;
    A[26] = A[16];
    A[13] = A[8];
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
