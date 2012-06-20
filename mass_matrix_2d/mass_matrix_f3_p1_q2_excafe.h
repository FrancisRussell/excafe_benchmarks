#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 3.30 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = -1.0000000000000000000000000*x[0][0];
    const double var_1 = x[1][0] + var_0;
    const double var_2 = -1.0000000000000000000000000*x[0][1];
    const double var_3 = var_2 + x[2][1];
    const double var_4 = x[2][0] + var_0;
    const double var_5 = var_2 + x[1][1];
    const double var_6 = var_1*var_3 + -1.0000000000000000000000000*var_4*var_5;
    const double var_7 = std::abs(var_6);
    const double var_8 = w[0][0]*w[1][2] + w[0][2]*w[1][0];
    const double var_9 = w[0][2]*w[1][2]*w[2][0] + var_8*w[2][2];
    const double var_10 = w[0][1]*w[1][0] + w[0][0]*w[1][1];
    const double var_11 = var_10*w[2][1] + w[0][1]*w[1][1]*w[2][0];
    const double var_12 = var_9 + var_11;
    const double var_13 = w[0][0]*w[1][0]*w[2][0];
    const double var_14 = w[0][1]*w[1][2] + w[0][2]*w[1][1];
    const double var_15 = var_8*w[2][1] + var_14*w[2][0] + var_10*w[2][2];
    const double var_16 = w[0][1]*w[1][1]*w[2][2] + var_14*w[2][1];
    const double var_17 = var_14*w[2][2] + w[0][2]*w[1][2]*w[2][1];
    const double var_18 = var_17 + var_16;
    const double var_19 = var_18 + var_15;
    const double var_20 = var_8*w[2][0] + w[0][0]*w[1][0]*w[2][2];
    const double var_21 = w[0][0]*w[1][0]*w[2][1] + var_10*w[2][0];
    const double var_22 = var_20 + var_21;
    const double var_23 = w[0][2]*w[1][2]*w[2][2];
    const double var_24 = w[0][1]*w[1][1]*w[2][1];
    const double var_25 = var_23 + var_24;
    const double var_26 = var_22 + var_25;
    const double var_27 = 0.4000000000000000222044605*var_26 + var_13 + 0.2000000000000000111022302*var_19;
    A[29] = 0.0052910052910052907115812*var_27*var_7 + 0.0015873015873015873002105*var_12*var_7;
    A[34] = A[29];
    const double var_28 = 0.3333333333333333148296163*var_16 + 0.1666666666666666574148081*var_11;
    const double var_29 = 0.3333333333333333148296163*var_20 + 0.1666666666666666574148081*var_21;
    const double var_30 = -0.2500000000000000000000000*var_13;
    const double var_31 = var_17 + var_9;
    const double var_32 = var_23 + 0.2500000000000000000000000*var_31;
    const double var_33 = -1.0000000000000000000000000*var_32;
    const double var_34 = var_30 + var_33 + var_28 + -0.5000000000000000000000000*var_29;
    const double var_35 = -0.0001322751322751322840526*var_15*var_7;
    const double var_36 = 0.0039682539682539680336859*var_24*var_7 + var_35;
    A[9] = 0.0015873015873015873002105*var_34*var_7 + var_36;
    const double var_37 = var_16 + var_11;
    const double var_38 = 0.2500000000000000000000000*var_37 + var_24;
    const double var_39 = -1.0000000000000000000000000*var_38;
    const double var_40 = 0.3333333333333333148296163*var_17 + 0.1666666666666666574148081*var_9;
    const double var_41 = 0.1666666666666666574148081*var_20 + 0.3333333333333333148296163*var_21;
    const double var_42 = var_39 + var_30 + var_40 + -0.5000000000000000000000000*var_41;
    const double var_43 = 0.0039682539682539680336859*var_23*var_7 + var_35;
    A[15] = 0.0015873015873015873002105*var_42*var_7 + var_43;
    A[20] = A[15];
    const double var_44 = var_20 + var_9;
    const double var_45 = var_44 + var_15;
    const double var_46 = 0.2500000000000000000000000*var_22 + var_13;
    const double var_47 = var_18 + 0.3333333333333333148296163*var_12;
    const double var_48 = -0.0357142857142857123031732*var_47 + -0.1666666666666666574148081*var_25 + 0.0476190476190476164042309*var_46;
    A[8] = 0.0055555555555555557675773*var_48*var_7;
    const double var_49 = var_13 + var_24;
    const double var_50 = var_20 + var_16;
    const double var_51 = var_11 + var_21;
    const double var_52 = var_51 + 0.3333333333333333148296163*var_50;
    const double var_53 = -0.0357142857142857123031732*var_52 + -0.1666666666666666574148081*var_49 + 0.0476190476190476164042309*var_32;
    A[1] = 0.0055555555555555557675773*var_53*var_7;
    A[6] = A[1];
    const double var_54 = var_17 + var_21;
    const double var_55 = var_44 + 0.3333333333333333148296163*var_54;
    const double var_56 = var_51 + var_15;
    const double var_57 = 0.1000000000000000055511151*var_31;
    const double var_58 = 0.0333333333333333328707404*var_50 + 0.0166666666666666664353702*var_56 + var_57 + 0.0500000000000000027755576*var_49 + var_23;
    A[13] = A[8];
    const double var_59 = -0.2500000000000000000000000*var_23;
    const double var_60 = 0.1666666666666666574148081*var_17 + 0.3333333333333333148296163*var_9;
    const double var_61 = 0.1666666666666666574148081*var_16 + 0.3333333333333333148296163*var_11;
    const double var_62 = -1.0000000000000000000000000*var_46;
    const double var_63 = -0.5000000000000000000000000*var_60 + var_61 + var_62 + var_59;
    A[11] = 0.0015873015873015873002105*var_63*var_7 + var_36;
    A[31] = A[11];
    const double var_64 = var_23 + var_31;
    const double var_65 = -0.0002645502645502645681051*var_15*var_7;
    const double var_66 = 0.1000000000000000055511151*var_22;
    const double var_67 = -1.0000000000000000000000000*var_66 + 0.2000000000000000111022302*var_13 + -0.5000000000000000000000000*var_18 + -1.0000000000000000000000000*var_25;
    A[3] = 0.0013227513227513226778953*var_67*var_7 + var_65 + -0.0003968253968253968250526*var_12*var_7;
    A[18] = A[3];
    const double var_68 = var_23 + var_13;
    const double var_69 = 0.1000000000000000055511151*var_37;
    const double var_70 = 0.0333333333333333328707404*var_54 + var_24 + var_69 + 0.0500000000000000027755576*var_68 + 0.0166666666666666664353702*var_45;
    A[7] = 0.0079365079365079360673718*var_7*var_70;
    const double var_71 = -1.0000000000000000000000000*var_69 + -0.5000000000000000000000000*var_44 + 0.2000000000000000111022302*var_24 + -1.0000000000000000000000000*var_68;
    A[10] = var_65 + -0.0003968253968253968250526*var_54*var_7 + 0.0013227513227513226778953*var_7*var_71;
    const double var_72 = -0.2500000000000000000000000*var_24;
    const double var_73 = var_72 + var_33 + -0.5000000000000000000000000*var_28 + var_29;
    const double var_74 = 0.0039682539682539680336859*var_13*var_7 + var_35;
    A[4] = 0.0015873015873015873002105*var_7*var_73 + var_74;
    const double var_75 = var_60 + var_72 + -0.5000000000000000000000000*var_61 + var_62;
    A[16] = 0.0015873015873015873002105*var_7*var_75 + var_43;
    A[26] = A[16];
    const double var_76 = var_49 + var_31;
    const double var_77 = var_23 + 0.4000000000000000222044605*var_76 + 0.2000000000000000111022302*var_56;
    const double var_78 = var_37 + var_68;
    const double var_79 = 0.2000000000000000111022302*var_45 + var_24 + 0.4000000000000000222044605*var_78;
    A[23] = 0.0015873015873015873002105*var_54*var_7 + 0.0052910052910052907115812*var_7*var_79;
    const double var_80 = var_13 + 0.0333333333333333328707404*var_12 + 0.0500000000000000027755576*var_25 + var_66 + 0.0166666666666666664353702*var_19;
    A[0] = 0.0079365079365079360673718*var_7*var_80;
    const double var_81 = var_22 + var_13;
    const double var_82 = 0.0666666666666666657414808*var_81 + 0.4000000000000000222044605*var_47 + 0.6666666666666666296592325*var_25;
    const double var_83 = var_37 + var_24;
    A[24] = A[4];
    A[22] = 0.0052910052910052907115812*var_7*var_77 + 0.0015873015873015873002105*var_50*var_7;
    A[25] = A[10];
    const double var_84 = 0.0015873015873015873002105*var_15*var_7;
    A[21] = 0.0158730158730158721347436*var_7*var_82 + var_84;
    const double var_85 = 0.4000000000000000222044605*var_52 + 0.6666666666666666296592325*var_49 + 0.0666666666666666657414808*var_64;
    A[35] = var_84 + 0.0158730158730158721347436*var_7*var_85;
    const double var_86 = 0.0666666666666666657414808*var_83 + 0.6666666666666666296592325*var_68 + 0.4000000000000000222044605*var_55;
    const double var_87 = var_39 + -0.5000000000000000000000000*var_40 + var_41 + var_59;
    A[5] = 0.0015873015873015873002105*var_7*var_87 + var_74;
    const double var_88 = 0.0476190476190476164042309*var_38 + -0.1666666666666666574148081*var_68 + -0.0357142857142857123031732*var_55;
    A[2] = 0.0055555555555555557675773*var_7*var_88;
    A[19] = A[9];
    const double var_89 = -0.5000000000000000000000000*var_51 + 0.2000000000000000111022302*var_23 + -1.0000000000000000000000000*var_57 + -1.0000000000000000000000000*var_49;
    A[17] = var_65 + 0.0013227513227513226778953*var_7*var_89 + -0.0003968253968253968250526*var_50*var_7;
    A[32] = A[17];
    A[28] = 0.0158730158730158721347436*var_7*var_86 + var_84;
    A[33] = A[23];
    A[12] = A[2];
    A[27] = A[22];
    A[30] = A[5];
    A[14] = 0.0079365079365079360673718*var_58*var_7;
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
