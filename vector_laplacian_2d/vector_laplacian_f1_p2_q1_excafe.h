#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 3.27 seconds (wall clock).

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
    const double var_4 = var_1*w[0][4] + var_3*w[0][11];
    const double var_5 = w[0][6] + -4.0000000000000000000000000*w[0][9];
    const double var_6 = var_3*var_5;
    const double var_7 = x[1][1] + var_0;
    const double var_8 = -0.5000000000000000000000000*w[0][0] + 2.0000000000000000000000000*w[0][3];
    const double var_9 = var_7*var_8;
    const double var_10 = x[2][0] + var_2;
    const double var_11 = 2.0000000000000000000000000*w[0][9] + -0.5000000000000000000000000*w[0][6];
    const double var_12 = var_10*var_11;
    const double var_13 = var_9 + var_6 + var_12;
    const double var_14 = var_1*var_3 + -var_10*var_7;
    const double var_15 = var_14;
    const double var_16 = std::abs(var_15);
    const double var_17 = var_14;
    const double var_18 = var_10*w[0][10] + var_7*w[0][5];
    const double var_19 = var_18 + -var_4;
    const double var_20 = var_10*w[0][7] + var_7*w[0][2];
    const double var_21 = var_1*w[0][1] + var_3*w[0][8];
    const double var_22 = -var_20 + var_21;
    const double var_23 = 2.0000000000000000000000000*var_19 + 0.5000000000000000000000000*var_22;
    const double var_24 = var_23 + var_1*var_8;
    const double var_25 = 0.5000000000000000000000000*w[0][0] + -2.0000000000000000000000000*w[0][3];
    const double var_26 = var_25*var_7 + var_11*var_3;
    const double var_27 = -2.0000000000000000000000000*w[0][9] + 0.5000000000000000000000000*w[0][6];
    const double var_28 = var_10*var_27;
    const double var_29 = var_26 + var_28;
    const double var_30 = var_29 + var_24;
    const double var_31 = var_3*var_3 + var_7*var_7;
    A[14] = 0.3333333333333333148296163*var_16*var_30*var_31/(var_17*var_17*var_17);
    A[35] = A[14];
    const double var_32 = var_1*var_7 + var_10*var_3;
    const double var_33 = var_27*var_3;
    const double var_34 = var_12 + var_33;
    const double var_35 = var_20 + -var_21;
    const double var_36 = var_4 + -var_18;
    const double var_37 = 0.5000000000000000000000000*var_35 + 2.0000000000000000000000000*var_36;
    const double var_38 = w[0][0] + -4.0000000000000000000000000*w[0][3];
    const double var_39 = var_34 + var_37 + var_1*var_38;
    const double var_40 = var_10*var_25;
    const double var_41 = var_1*var_11;
    const double var_42 = var_40 + var_41;
    const double var_43 = var_39*var_7 + var_31*var_8 + var_3*var_42;
    const double var_44 = var_1*var_25;
    const double var_45 = var_37 + var_44;
    const double var_46 = 4.0000000000000000000000000*w[0][9] + -w[0][6];
    const double var_47 = var_10*var_46;
    const double var_48 = var_45 + var_47 + var_33;
    const double var_49 = var_24 + var_28;
    const double var_50 = var_3*var_3*var_48 + var_43*var_7 + var_32*var_49;
    A[2] = 0.3333333333333333148296163*var_16*var_50/(var_17*var_17*var_17);
    A[33] = A[2];
    const double var_51 = var_23 + var_29;
    A[12] = A[2];
    const double var_52 = var_1*var_1 + var_10*var_10;
    A[7] = 0.3333333333333333148296163*var_16*var_30*var_52/(var_17*var_17*var_17);
    const double var_53 = var_26 + var_24;
    const double var_54 = var_3*var_53;
    const double var_55 = var_35 + 4.0000000000000000000000000*var_36;
    const double var_56 = 4.0000000000000000000000000*w[0][3] + -w[0][0];
    const double var_57 = var_1*var_56 + var_51;
    const double var_58 = var_1*var_34 + var_57*var_7;
    const double var_59 = var_10*var_13 + var_54;
    const double var_60 = var_1*var_58 + var_45*var_52 + var_10*var_59;
    A[1] = 0.3333333333333333148296163*var_16*var_60/(var_17*var_17*var_17);
    A[6] = A[1];
    const double var_61 = var_9 + var_44;
    A[32] = 0.0000000000000000000000000;
    const double var_62 = var_10*var_38 + var_41;
    A[16] = 0.0000000000000000000000000;
    A[3] = 0.0000000000000000000000000;
    const double var_63 = var_6 + var_47;
    A[11] = 0.0000000000000000000000000;
    const double var_64 = var_45 + var_34 + var_9;
    A[5] = 0.0000000000000000000000000;
    A[8] = 0.3333333333333333148296163*var_16*var_32*var_64/(var_17*var_17*var_17);
    A[34] = A[8];
    A[13] = A[8];
    A[19] = 0.0000000000000000000000000;
    A[4] = 0.0000000000000000000000000;
    A[30] = 0.0000000000000000000000000;
    A[10] = 0.0000000000000000000000000;
    A[20] = 0.0000000000000000000000000;
    const double var_65 = var_40 + var_3*var_56;
    const double var_66 = var_1*var_63 + var_51*var_7 + var_10*var_65;
    const double var_67 = var_1*var_62 + var_54;
    const double var_68 = var_3*var_67 + var_66*var_7 + var_32*var_55 + var_49*var_52;
    const double var_69 = 0.3333333333333333148296163*var_68 + var_10*var_3*var_34 + var_1*var_61*var_7;
    A[0] = var_16*var_69/(var_17*var_17*var_17);
    A[21] = A[0];
    A[29] = A[8];
    A[28] = A[7];
    A[24] = 0.0000000000000000000000000;
    A[23] = A[2];
    A[18] = 0.0000000000000000000000000;
    A[22] = A[1];
    A[17] = 0.0000000000000000000000000;
    A[26] = 0.0000000000000000000000000;
    A[27] = A[1];
    A[25] = 0.0000000000000000000000000;
    A[15] = 0.0000000000000000000000000;
    A[9] = 0.0000000000000000000000000;
    A[31] = 0.0000000000000000000000000;
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
