#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 2.28 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[0][2]*w[2][1] + w[0][1]*w[2][2];
    const double var_1 = w[0][1]*w[1][2]*w[2][1] + var_0*w[1][1];
    const double var_2 = w[0][1]*w[2][0] + w[0][0]*w[2][1];
    const double var_3 = w[0][1]*w[1][0]*w[2][1] + var_2*w[1][1];
    const double var_4 = var_3 + var_1;
    const double var_5 = 0.1000000000000000055511151*var_4;
    const double var_6 = var_0*w[1][2] + w[0][2]*w[1][1]*w[2][2];
    const double var_7 = w[0][2]*w[2][0] + w[0][0]*w[2][2];
    const double var_8 = w[0][2]*w[1][0]*w[2][2] + var_7*w[1][2];
    const double var_9 = 0.1666666666666666574148081*var_6 + 0.3333333333333333148296163*var_8;
    const double var_10 = 0.3333333333333333148296163*var_3 + 0.1666666666666666574148081*var_1;
    const double var_11 = w[0][0]*w[1][0]*w[2][0];
    const double var_12 = w[0][0]*w[1][2]*w[2][0] + var_7*w[1][0];
    const double var_13 = var_2*w[1][0] + w[0][0]*w[1][1]*w[2][0];
    const double var_14 = var_12 + var_13;
    const double var_15 = var_11 + 0.2500000000000000000000000*var_14;
    const double var_16 = -var_15;
    const double var_17 = w[0][1]*w[1][1]*w[2][1];
    const double var_18 = -0.2500000000000000000000000*var_17;
    const double var_19 = var_16 + var_18 + var_9 + -0.5000000000000000000000000*var_10;
    const double var_20 = var_11 + var_17;
    const double var_21 = w[0][2]*w[1][2]*w[2][2];
    const double var_22 = var_8 + var_6;
    const double var_23 = var_21 + 0.2500000000000000000000000*var_22;
    const double var_24 = var_12 + var_1;
    const double var_25 = var_3 + var_13;
    const double var_26 = 0.3333333333333333148296163*var_24 + var_25;
    const double var_27 = -0.0357142857142857123031732*var_26 + 0.0476190476190476164042309*var_23 + -0.1666666666666666574148081*var_20;
    const double var_28 = 0.1000000000000000055511151*var_14;
    const double var_29 = 0.1000000000000000055511151*var_22;
    const double var_30 = -x[0][1];
    const double var_31 = x[1][1] + var_30;
    const double var_32 = -x[0][0];
    const double var_33 = x[2][0] + var_32;
    const double var_34 = x[1][0] + var_32;
    const double var_35 = x[2][1] + var_30;
    const double var_36 = -var_31*var_33 + var_34*var_35;
    const double var_37 = std::abs(var_36);
    const double var_38 = 0.3333333333333333148296163*var_6 + 0.1666666666666666574148081*var_8;
    const double var_39 = 0.3333333333333333148296163*var_13 + 0.1666666666666666574148081*var_12;
    const double var_40 = -0.2500000000000000000000000*var_11;
    const double var_41 = 0.2500000000000000000000000*var_4 + var_17;
    const double var_42 = -var_41;
    const double var_43 = var_40 + var_38 + var_42 + -0.5000000000000000000000000*var_39;
    const double var_44 = var_21 + var_17;
    const double var_45 = var_1 + var_6;
    const double var_46 = -var_44 + -0.5000000000000000000000000*var_45 + -var_28 + 0.2000000000000000111022302*var_11;
    const double var_47 = var_0*w[1][0] + var_7*w[1][1] + var_2*w[1][2];
    const double var_48 = var_45 + var_47;
    const double var_49 = var_44 + var_14;
    const double var_50 = 0.2000000000000000111022302*var_48 + var_11 + 0.4000000000000000222044605*var_49;
    const double var_51 = -0.0001322751322751322840526*var_37*var_47;
    const double var_52 = var_51 + 0.0039682539682539680336859*var_21*var_37;
    A[15] = 0.0015873015873015873002105*var_37*var_43 + var_52;
    const double var_53 = var_13 + var_6;
    const double var_54 = -0.0002645502645502645681051*var_37*var_47;
    const double var_55 = var_11 + var_21;
    const double var_56 = var_12 + var_8;
    const double var_57 = 0.2000000000000000111022302*var_17 + -var_55 + -0.5000000000000000000000000*var_56 + -var_5;
    A[10] = var_54 + -0.0003968253968253968250526*var_37*var_53 + 0.0013227513227513226778953*var_37*var_57;
    const double var_58 = var_3 + var_8;
    const double var_59 = 0.0500000000000000027755576*var_44 + 0.0166666666666666664353702*var_48 + var_28 + var_11 + 0.0333333333333333328707404*var_58;
    A[0] = 0.0079365079365079360673718*var_37*var_59;
    const double var_60 = -var_20 + 0.2000000000000000111022302*var_21 + -0.5000000000000000000000000*var_25 + -var_29;
    A[17] = var_54 + -0.0003968253968253968250526*var_24*var_37 + 0.0013227513227513226778953*var_37*var_60;
    const double var_61 = 0.3333333333333333148296163*var_12 + 0.1666666666666666574148081*var_13;
    const double var_62 = 0.1666666666666666574148081*var_3 + 0.3333333333333333148296163*var_1;
    const double var_63 = -var_23;
    const double var_64 = var_40 + -0.5000000000000000000000000*var_61 + var_62 + var_63;
    const double var_65 = var_51 + 0.0039682539682539680336859*var_17*var_37;
    A[9] = 0.0015873015873015873002105*var_37*var_64 + var_65;
    const double var_66 = 0.3333333333333333148296163*var_58 + var_45;
    const double var_67 = -0.0357142857142857123031732*var_66 + 0.0476190476190476164042309*var_15 + -0.1666666666666666574148081*var_44;
    const double var_68 = var_25 + var_47;
    const double var_69 = var_22 + var_21;
    const double var_70 = 0.3333333333333333148296163*var_53 + var_56;
    const double var_71 = 0.0015873015873015873002105*var_37*var_47;
    const double var_72 = 0.6666666666666666296592325*var_20 + 0.4000000000000000222044605*var_26 + 0.0666666666666666657414808*var_69;
    A[35] = var_71 + 0.0158730158730158721347436*var_37*var_72;
    const double var_73 = 0.0500000000000000027755576*var_20 + 0.0333333333333333328707404*var_24 + var_21 + 0.0166666666666666664353702*var_68 + var_29;
    const double var_74 = var_4 + var_17;
    A[19] = A[9];
    const double var_75 = -0.2500000000000000000000000*var_21;
    const double var_76 = var_75 + -0.5000000000000000000000000*var_9 + var_10 + var_16;
    A[1] = 0.0055555555555555557675773*var_27*var_37;
    A[6] = A[1];
    A[14] = 0.0079365079365079360673718*var_37*var_73;
    A[8] = 0.0055555555555555557675773*var_37*var_67;
    A[16] = 0.0015873015873015873002105*var_19*var_37 + var_52;
    const double var_77 = var_22 + var_20;
    const double var_78 = var_21 + 0.2000000000000000111022302*var_68 + 0.4000000000000000222044605*var_77;
    A[22] = 0.0015873015873015873002105*var_24*var_37 + 0.0052910052910052907115812*var_37*var_78;
    const double var_79 = var_56 + var_47;
    const double var_80 = 0.0166666666666666664353702*var_79 + 0.0500000000000000027755576*var_55 + 0.0333333333333333328707404*var_53 + var_17 + var_5;
    A[7] = 0.0079365079365079360673718*var_37*var_80;
    const double var_81 = var_4 + var_55;
    const double var_82 = var_17 + 0.2000000000000000111022302*var_79 + 0.4000000000000000222044605*var_81;
    A[23] = 0.0015873015873015873002105*var_37*var_53 + 0.0052910052910052907115812*var_37*var_82;
    A[33] = A[23];
    A[13] = A[8];
    const double var_83 = var_75 + -0.5000000000000000000000000*var_38 + var_42 + var_39;
    const double var_84 = 0.0039682539682539680336859*var_11*var_37 + var_51;
    A[5] = 0.0015873015873015873002105*var_37*var_83 + var_84;
    const double var_85 = var_63 + var_61 + -0.5000000000000000000000000*var_62 + var_18;
    A[4] = 0.0015873015873015873002105*var_37*var_85 + var_84;
    A[24] = A[4];
    A[32] = A[17];
    A[11] = 0.0015873015873015873002105*var_37*var_76 + var_65;
    A[31] = A[11];
    const double var_86 = 0.0476190476190476164042309*var_41 + -0.0357142857142857123031732*var_70 + -0.1666666666666666574148081*var_55;
    A[27] = A[22];
    A[26] = A[16];
    const double var_87 = var_11 + var_14;
    const double var_88 = 0.0666666666666666657414808*var_87 + 0.6666666666666666296592325*var_44 + 0.4000000000000000222044605*var_66;
    A[21] = var_71 + 0.0158730158730158721347436*var_37*var_88;
    A[25] = A[10];
    A[20] = A[15];
    A[3] = var_54 + -0.0003968253968253968250526*var_37*var_58 + 0.0013227513227513226778953*var_37*var_46;
    A[29] = 0.0015873015873015873002105*var_37*var_58 + 0.0052910052910052907115812*var_37*var_50;
    A[30] = A[5];
    const double var_89 = 0.0666666666666666657414808*var_74 + 0.4000000000000000222044605*var_70 + 0.6666666666666666296592325*var_55;
    A[28] = var_71 + 0.0158730158730158721347436*var_37*var_89;
    A[18] = A[3];
    A[2] = 0.0055555555555555557675773*var_37*var_86;
    A[12] = A[2];
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
