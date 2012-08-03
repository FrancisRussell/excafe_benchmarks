#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.93 seconds (wall clock).

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
    const double var_4 = x[1][1] + var_0;
    const double var_5 = x[2][0] + var_2;
    const double var_6 = -var_4*var_5 + var_1*var_3;
    const double var_7 = var_1*var_4 + var_3*var_5;
    const double var_8 = var_1*var_1 + var_5*var_5;
    const double var_9 = var_8*w[0][0];
    const double var_10 = var_7*w[0][0];
    const double var_11 = var_9 + var_10;
    const double var_12 = var_11 + -var_7*w[0][2];
    const double var_13 = var_6;
    const double var_14 = std::abs(var_13);
    const double var_15 = var_6;
    const double var_16 = var_3*var_3 + var_4*var_4;
    const double var_17 = -var_16*w[0][2];
    const double var_18 = 0.2666666666666666629659233*var_7*w[0][0];
    const double var_19 = -0.1333333333333333314829616*var_8*w[0][2];
    const double var_20 = 3.5000000000000000000000000*var_7;
    const double var_21 = -var_16 + var_20;
    const double var_22 = -var_8*w[0][1];
    const double var_23 = var_7*w[0][2];
    const double var_24 = var_22 + var_23;
    const double var_25 = -3.6666666666666665186369300*var_8 + var_16;
    const double var_26 = var_18 + var_19 + 0.1666666666666666574148081*var_24 + 0.0333333333333333328707404*var_17 + 0.0666666666666666657414808*var_21*w[0][1] + 0.1000000000000000055511151*var_25*w[0][0];
    A[5] = var_14*var_26/(var_15*var_15);
    const double var_27 = w[0][0] + w[0][1];
    const double var_28 = var_27 + 3.0000000000000000000000000*w[0][2];
    const double var_29 = var_7 + var_16;
    const double var_30 = 0.3333333333333333148296163*var_29*w[0][0];
    const double var_31 = 0.5000000000000000000000000*var_27 + 2.3333333333333330372738601*w[0][2];
    const double var_32 = var_31*var_7;
    const double var_33 = w[0][2] + 0.3333333333333333148296163*var_27;
    const double var_34 = var_33*var_8;
    const double var_35 = w[0][0] + w[0][2];
    const double var_36 = w[0][1] + 0.3333333333333333148296163*var_35;
    const double var_37 = var_16*var_36;
    const double var_38 = w[0][1] + w[0][2];
    const double var_39 = w[0][0] + 2.0000000000000000000000000*var_38;
    const double var_40 = var_37 + var_34 + -0.3333333333333333148296163*var_39*var_7;
    A[21] = 0.8000000000000000444089210*var_14*var_40/(var_15*var_15);
    const double var_41 = -var_7;
    const double var_42 = var_16 + var_41;
    const double var_43 = -0.1666666666666666574148081*var_16*w[0][0];
    const double var_44 = -0.1333333333333333314829616*var_16*w[0][1];
    const double var_45 = var_44 + -0.3666666666666666407614628*var_16*w[0][2] + var_43 + 0.2000000000000000111022302*var_32;
    A[16] = var_14*var_45/(var_15*var_15);
    const double var_46 = var_8 + var_41;
    const double var_47 = 0.5000000000000000000000000*w[0][2] + var_27;
    A[1] = 0.0666666666666666657414808*var_14*var_46*var_47/(var_15*var_15);
    A[6] = A[1];
    const double var_48 = var_8 + var_16;
    const double var_49 = 4.0000000000000000000000000*var_7 + var_48;
    const double var_50 = var_22 + var_11;
    const double var_51 = var_7*w[0][1];
    const double var_52 = var_51 + -var_16*var_36;
    const double var_53 = 0.3333333333333333148296163*var_50 + var_23 + 2.0000000000000000000000000*var_52;
    A[23] = 0.4000000000000000222044605*var_14*var_53/(var_15*var_15);
    const double var_54 = var_16*w[0][2] + var_8*w[0][1];
    const double var_55 = -var_38*var_7 + 0.3333333333333333148296163*var_54;
    const double var_56 = -var_48*w[0][0] + var_55;
    const double var_57 = 0.3333333333333333148296163*var_16*w[0][1];
    const double var_58 = var_43 + -var_32 + 0.5000000000000000000000000*var_16*w[0][2] + -var_57;
    A[15] = 0.2000000000000000111022302*var_14*var_58/(var_15*var_15);
    const double var_59 = -1.3333333333333332593184650*var_7*w[0][2] + 0.3333333333333333148296163*var_42*w[0][1] + 0.6666666666666666296592325*var_16*var_35 + var_34;
    const double var_60 = 0.5000000000000000000000000*w[0][1] + var_35;
    const double var_61 = var_30 + var_17;
    const double var_62 = var_57 + -0.1666666666666666574148081*var_7*w[0][1] + 0.5000000000000000000000000*var_61;
    const double var_63 = var_51 + var_17;
    const double var_64 = 0.3333333333333333148296163*var_8*w[0][2];
    const double var_65 = var_64 + 0.5000000000000000000000000*var_22 + 0.1666666666666666574148081*var_12;
    A[10] = 0.2000000000000000111022302*var_14*var_65/(var_15*var_15);
    A[25] = A[10];
    A[2] = 0.0666666666666666657414808*var_14*var_42*var_60/(var_15*var_15);
    A[12] = A[2];
    A[20] = A[15];
    const double var_66 = -0.1666666666666666574148081*var_8*w[0][0];
    A[14] = 0.1000000000000000055511151*var_14*var_16*var_28/(var_15*var_15);
    const double var_67 = -var_33*var_8 + var_23;
    const double var_68 = 0.3333333333333333148296163*var_17 + var_30 + var_51 + 2.0000000000000000000000000*var_67;
    A[22] = 0.4000000000000000222044605*var_14*var_68/(var_15*var_15);
    A[28] = 0.8000000000000000444089210*var_14*var_59/(var_15*var_15);
    const double var_69 = 0.5000000000000000000000000*var_48 + var_41;
    const double var_70 = var_38 + 3.0000000000000000000000000*w[0][0];
    A[0] = 0.2000000000000000111022302*var_14*var_69*var_70/(var_15*var_15);
    const double var_71 = 0.5000000000000000000000000*w[0][0] + var_38;
    A[8] = 0.0666666666666666657414808*var_14*var_7*var_71/(var_15*var_15);
    A[13] = A[8];
    const double var_72 = 2.3333333333333330372738601*w[0][1] + 0.5000000000000000000000000*var_35;
    const double var_73 = var_7*var_72;
    const double var_74 = var_66 + 0.5000000000000000000000000*var_8*w[0][1] + -var_64 + -var_73;
    A[9] = 0.2000000000000000111022302*var_14*var_74/(var_15*var_15);
    A[19] = A[9];
    const double var_75 = var_19 + 0.2000000000000000111022302*var_73 + -0.3666666666666666407614628*var_8*w[0][1] + var_66;
    A[11] = var_14*var_75/(var_15*var_15);
    const double var_76 = var_55 + -0.3333333333333333148296163*var_49*w[0][0];
    A[29] = 0.4000000000000000222044605*var_14*var_76/(var_15*var_15);
    A[30] = A[5];
    const double var_77 = var_10 + var_57 + var_64 + 0.5000000000000000000000000*var_56;
    A[33] = A[23];
    A[17] = 0.2000000000000000111022302*var_14*var_62/(var_15*var_15);
    A[32] = A[17];
    const double var_78 = -var_8 + var_20;
    const double var_79 = 0.1666666666666666574148081*var_63 + -0.3666666666666666407614628*var_16*w[0][0] + var_44 + var_18 + 0.0333333333333333328707404*var_22 + 0.1000000000000000055511151*var_9 + 0.0666666666666666657414808*var_78*w[0][2];
    A[4] = var_14*var_79/(var_15*var_15);
    A[27] = A[22];
    A[31] = A[11];
    A[26] = A[16];
    const double var_80 = 0.6666666666666666296592325*var_27*var_8 + 0.3333333333333333148296163*var_46*w[0][2] + -1.3333333333333332593184650*var_7*w[0][1] + var_37;
    A[35] = 0.8000000000000000444089210*var_14*var_80/(var_15*var_15);
    const double var_81 = 3.0000000000000000000000000*w[0][1] + var_35;
    A[7] = 0.1000000000000000055511151*var_14*var_8*var_81/(var_15*var_15);
    A[3] = 0.2000000000000000111022302*var_14*var_77/(var_15*var_15);
    A[34] = A[29];
    A[24] = A[4];
    A[18] = A[3];
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
