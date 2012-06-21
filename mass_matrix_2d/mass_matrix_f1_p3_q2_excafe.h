#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.36 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[0][7] + w[0][5];
    const double var_1 = -var_0;
    const double var_2 = -x[0][1];
    const double var_3 = x[1][1] + var_2;
    const double var_4 = -x[0][0];
    const double var_5 = x[2][0] + var_4;
    const double var_6 = x[1][0] + var_4;
    const double var_7 = x[2][1] + var_2;
    const double var_8 = -var_3*var_5 + var_6*var_7;
    const double var_9 = -w[0][4];
    const double var_10 = std::abs(var_8);
    const double var_11 = w[0][6] + w[0][4];
    const double var_12 = -var_11;
    const double var_13 = w[0][8] + w[0][7];
    const double var_14 = w[0][3] + var_12 + w[0][5] + 3.0000000000000000000000000*var_13;
    const double var_15 = 0.0428571428571428575393654*var_10*w[0][9];
    A[35] = 0.0071428571428571426341070*var_10*var_14 + 0.0031746031746031746004211*var_10*w[0][2] + var_15;
    const double var_16 = 0.1666666666666666574148081*w[0][0];
    const double var_17 = -w[0][3];
    const double var_18 = 0.2500000000000000000000000*var_17;
    const double var_19 = 0.0035714285714285713170535*var_10*w[0][9];
    const double var_20 = w[0][1] + w[0][0];
    const double var_21 = -w[0][5];
    const double var_22 = var_21 + 3.0000000000000000000000000*var_11 + 0.3333333333333333148296163*var_20 + var_17;
    A[14] = var_19 + 0.0047619047619047623343125*var_10*w[0][2] + 0.0017857142857142856585267*var_10*var_22;
    const double var_23 = 0.0285714285714285705364279*var_10*w[0][9];
    const double var_24 = -0.0035714285714285713170535*var_10*w[0][9];
    const double var_25 = 0.0555555555555555524716027*w[0][0];
    const double var_26 = w[0][8] + var_25;
    const double var_27 = 0.0555555555555555524716027*w[0][2];
    const double var_28 = w[0][3] + var_27;
    const double var_29 = 0.1666666666666666574148081*w[0][1];
    const double var_30 = -w[0][7];
    const double var_31 = 0.2500000000000000000000000*var_30;
    const double var_32 = -w[0][6];
    const double var_33 = 0.2500000000000000000000000*var_32;
    const double var_34 = var_28 + var_31 + -0.7500000000000000000000000*w[0][4] + var_33 + var_29 + 0.5000000000000000000000000*var_26;
    A[9] = var_24 + 0.0071428571428571426341070*var_10*var_34;
    const double var_35 = 0.0555555555555555524716027*w[0][1];
    const double var_36 = w[0][4] + var_35;
    const double var_37 = w[0][6] + var_25;
    const double var_38 = 0.1666666666666666574148081*w[0][2];
    const double var_39 = var_37 + var_18 + var_38 + -0.7500000000000000000000000*w[0][5] + 0.5000000000000000000000000*var_36 + var_31;
    A[16] = var_24 + 0.0071428571428571426341070*var_10*var_39;
    const double var_40 = w[0][1] + w[0][2];
    const double var_41 = w[0][8] + w[0][3];
    const double var_42 = -var_41;
    const double var_43 = var_42 + var_0 + var_12;
    const double var_44 = -0.1111111111111111049432054*w[0][0] + 0.5000000000000000000000000*var_43;
    A[8] = -0.0003968253968253968250526*var_10*var_40 + 0.0017857142857142856585267*var_10*var_44;
    const double var_45 = w[0][5] + w[0][6];
    const double var_46 = var_42 + w[0][7] + w[0][4] + 3.0000000000000000000000000*var_45;
    const double var_47 = var_0 + 0.1111111111111111049432054*var_40;
    A[29] = var_23 + 0.0071428571428571426341070*var_10*var_47;
    A[34] = A[29];
    const double var_48 = w[0][7] + var_35;
    const double var_49 = -w[0][8];
    const double var_50 = 0.2500000000000000000000000*var_49;
    const double var_51 = -0.0071428571428571426341070*var_10*w[0][9];
    A[3] = var_51 + 0.0035714285714285713170535*var_10*var_44;
    A[18] = A[3];
    const double var_52 = var_42 + var_11 + var_1;
    const double var_53 = w[0][5] + var_27;
    const double var_54 = var_18 + 0.5000000000000000000000000*var_53 + -0.7500000000000000000000000*w[0][8] + var_48 + var_16 + var_33;
    A[5] = var_24 + 0.0071428571428571426341070*var_10*var_54;
    const double var_55 = 0.2500000000000000000000000*var_21;
    A[13] = A[8];
    const double var_56 = w[0][0] + w[0][2];
    const double var_57 = var_30 + var_9 + 0.3333333333333333148296163*var_56 + 3.0000000000000000000000000*var_41;
    A[7] = var_19 + 0.0047619047619047623343125*var_10*w[0][1] + 0.0017857142857142856585267*var_10*var_57;
    const double var_58 = 0.5000000000000000000000000*var_37 + var_50 + var_38 + var_36 + -0.7500000000000000000000000*w[0][3] + var_55;
    A[15] = var_24 + 0.0071428571428571426341070*var_10*var_58;
    const double var_59 = w[0][3] + w[0][4];
    const double var_60 = var_1 + 3.0000000000000000000000000*var_59 + w[0][8] + w[0][6];
    A[21] = 0.0031746031746031746004211*var_10*w[0][0] + 0.0071428571428571426341070*var_10*var_60 + var_15;
    const double var_61 = var_41 + 0.1111111111111111049432054*var_56;
    const double var_62 = 0.5000000000000000000000000*var_52 + -0.1111111111111111049432054*w[0][2];
    A[1] = -0.0003968253968253968250526*var_10*var_20 + 0.0017857142857142856585267*var_10*var_62;
    A[6] = A[1];
    A[17] = var_51 + 0.0035714285714285713170535*var_10*var_62;
    A[32] = A[17];
    const double var_63 = var_1 + var_41 + var_12;
    const double var_64 = -0.1111111111111111049432054*w[0][1] + 0.5000000000000000000000000*var_63;
    A[2] = -0.0003968253968253968250526*var_10*var_56 + 0.0017857142857142856585267*var_10*var_64;
    A[12] = A[2];
    const double var_65 = 0.1111111111111111049432054*var_20 + var_11;
    const double var_66 = 0.2500000000000000000000000*var_9;
    const double var_67 = var_53 + 0.5000000000000000000000000*var_48 + -0.7500000000000000000000000*w[0][6] + var_50 + var_16 + var_66;
    A[4] = var_24 + 0.0071428571428571426341070*var_10*var_67;
    const double var_68 = var_49 + 0.3333333333333333148296163*var_40 + 3.0000000000000000000000000*var_0 + var_32;
    A[22] = var_23 + 0.0071428571428571426341070*var_10*var_65;
    A[23] = var_23 + 0.0071428571428571426341070*var_10*var_61;
    const double var_69 = var_55 + -0.7500000000000000000000000*w[0][7] + 0.5000000000000000000000000*var_28 + var_66 + var_26 + var_29;
    A[11] = var_24 + 0.0071428571428571426341070*var_10*var_69;
    A[31] = A[11];
    A[30] = A[5];
    A[26] = A[16];
    A[10] = var_51 + 0.0035714285714285713170535*var_10*var_64;
    A[25] = A[10];
    A[20] = A[15];
    A[24] = A[4];
    A[19] = A[9];
    A[28] = 0.0071428571428571426341070*var_10*var_46 + 0.0031746031746031746004211*var_10*w[0][1] + var_15;
    A[0] = var_19 + 0.0047619047619047623343125*var_10*w[0][0] + 0.0017857142857142856585267*var_10*var_68;
    A[27] = A[22];
    A[33] = A[23];
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
