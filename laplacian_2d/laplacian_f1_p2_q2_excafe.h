#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 2.19 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[0][3] + w[0][5];
    const double var_1 = w[0][0] + w[0][2];
    const double var_2 = 0.3333333333333333148296163*var_0 + 0.0666666666666666657414808*w[0][4] + 0.2000000000000000111022302*var_1;
    const double var_3 = -x[0][1];
    const double var_4 = x[2][1] + var_3;
    const double var_5 = -x[0][0];
    const double var_6 = x[1][0] + var_5;
    const double var_7 = x[1][1] + var_3;
    const double var_8 = x[2][0] + var_5;
    const double var_9 = var_6*var_8 + var_4*var_7;
    const double var_10 = var_6*var_6 + var_7*var_7;
    const double var_11 = -var_10 + var_9;
    const double var_12 = -var_9;
    const double var_13 = var_10 + var_12;
    const double var_14 = 0.5000000000000000000000000*var_13*var_2 + 0.0666666666666666657414808*var_11*w[0][1];
    const double var_15 = w[0][4] + w[0][3];
    const double var_16 = var_4*var_4 + var_8*var_8;
    const double var_17 = var_16 + var_12;
    const double var_18 = -var_16 + var_9;
    const double var_19 = w[0][0] + w[0][1];
    const double var_20 = 0.3333333333333333148296163*w[0][5];
    const double var_21 = var_19 + var_20;
    const double var_22 = 0.1666666666666666574148081*var_15*var_17 + 0.0666666666666666657414808*var_18*w[0][2] + 0.1000000000000000055511151*var_17*var_21;
    const double var_23 = 2.0000000000000000000000000*var_15 + var_20;
    const double var_24 = 0.2000000000000000111022302*w[0][2] + -0.0555555555555555524716027*var_19 + 0.1333333333333333314829616*var_23;
    const double var_25 = -var_10*w[0][5];
    const double var_26 = var_10*w[0][1];
    const double var_27 = -0.5333333333333333259318465*var_10*w[0][4] + 0.1333333333333333314829616*var_26;
    const double var_28 = 0.6666666666666666296592325*w[0][3] + 0.0333333333333333328707404*w[0][0];
    const double var_29 = 0.5000000000000000000000000*w[0][2];
    const double var_30 = var_28 + var_29;
    const double var_31 = -var_10*var_30 + 0.4000000000000000222044605*var_25 + var_27;
    const double var_32 = w[0][1] + w[0][2];
    const double var_33 = w[0][4] + w[0][5];
    const double var_34 = w[0][0] + 2.0000000000000000000000000*var_33;
    const double var_35 = var_34 + -1.1666666666666665186369300*var_32;
    const double var_36 = var_16*w[0][1] + var_10*w[0][2];
    const double var_37 = -var_16*w[0][4];
    const double var_38 = var_16 + var_10;
    const double var_39 = var_38*w[0][3];
    const double var_40 = var_25 + var_37 + var_39;
    const double var_41 = -var_38*w[0][0];
    const double var_42 = -4.0000000000000000000000000*var_34 + var_32;
    const double var_43 = var_41 + var_36 + 4.0000000000000000000000000*var_40 + var_42*var_9;
    const double var_44 = -4.0000000000000000000000000*var_9*w[0][3] + 0.3333333333333333148296163*var_43;
    const double var_45 = 0.6666666666666666296592325*var_1*var_10;
    const double var_46 = -var_7*var_8 + var_4*var_6;
    const double var_47 = var_46;
    const double var_48 = std::abs(var_47);
    const double var_49 = var_46;
    A[2] = 0.3333333333333333148296163*var_14*var_48/(var_49*var_49);
    const double var_50 = -w[0][3];
    const double var_51 = w[0][4] + var_50;
    const double var_52 = -w[0][0];
    const double var_53 = 5.3333333333333330372738601*w[0][3] + var_52;
    const double var_54 = var_53*var_9;
    const double var_55 = -var_9*w[0][4];
    const double var_56 = -2.6666666666666665186369300*var_9*w[0][3];
    const double var_57 = var_16*w[0][2] + var_56;
    const double var_58 = 0.6666666666666666296592325*var_10*w[0][4];
    const double var_59 = var_26 + -var_58;
    const double var_60 = 0.6666666666666666296592325*var_16*w[0][5];
    const double var_61 = -var_60;
    const double var_62 = var_61 + var_59 + 1.3333333333333332593184650*var_40 + 0.1666666666666666574148081*var_36 + 0.5000000000000000000000000*var_41 + var_57 + var_35*var_9;
    A[3] = 0.0666666666666666657414808*var_48*var_62/(var_49*var_49);
    A[18] = A[3];
    const double var_63 = 0.4666666666666666740681535*w[0][3] + var_33;
    const double var_64 = 0.0333333333333333328707404*w[0][3] + 0.1666666666666666574148081*var_33 + 0.1000000000000000055511151*var_32 + 0.0666666666666666657414808*var_52;
    A[8] = 0.3333333333333333148296163*var_48*var_64*var_9/(var_49*var_49);
    A[13] = A[8];
    const double var_65 = 0.6666666666666666296592325*var_9*w[0][0];
    const double var_66 = -var_9*w[0][2];
    const double var_67 = -var_26 + var_58;
    const double var_68 = 1.3333333333333332593184650*w[0][3] + -0.1666666666666666574148081*w[0][0];
    const double var_69 = var_68 + -1.3333333333333332593184650*w[0][5] + var_29;
    const double var_70 = -2.0000000000000000000000000*var_23*var_9 + var_10*var_69 + var_67;
    const double var_71 = 0.2000000000000000111022302*var_66 + 0.0555555555555555524716027*var_19*var_9 + 0.0666666666666666657414808*var_70;
    A[15] = var_48*var_71/(var_49*var_49);
    A[20] = A[15];
    A[12] = A[2];
    const double var_72 = -0.3333333333333333148296163*w[0][0] + 2.0000000000000000000000000*var_0;
    const double var_73 = var_15*var_16;
    const double var_74 = 0.5000000000000000000000000*var_15 + -0.0666666666666666657414808*var_19 + 0.4000000000000000222044605*w[0][2] + 0.2333333333333333370340767*w[0][5];
    const double var_75 = 0.5000000000000000000000000*w[0][0] + 0.4000000000000000222044605*w[0][3];
    const double var_76 = 0.3333333333333333148296163*var_75*var_9;
    const double var_77 = -w[0][1];
    const double var_78 = w[0][0] + var_77;
    const double var_79 = 2.0000000000000000000000000*var_9*w[0][5] + var_16*var_51;
    const double var_80 = var_11*w[0][4] + var_79;
    const double var_81 = var_66 + 4.0000000000000000000000000*var_80 + var_16*var_78;
    const double var_82 = var_57 + var_60;
    const double var_83 = 0.4000000000000000222044605*var_9*w[0][0] + 0.6666666666666666296592325*var_9*w[0][3] + -0.0333333333333333328707404*var_36;
    const double var_84 = 0.5000000000000000000000000*var_38 + var_12;
    const double var_85 = 0.6666666666666666296592325*var_16*var_19;
    const double var_86 = -var_9*w[0][1];
    const double var_87 = w[0][0] + -w[0][2];
    const double var_88 = w[0][5] + var_50;
    const double var_89 = var_10*var_88 + 2.0000000000000000000000000*var_9*w[0][4];
    const double var_90 = var_89 + var_18*w[0][5];
    const double var_91 = var_10*var_87 + var_86 + 4.0000000000000000000000000*var_90;
    const double var_92 = var_85 + 2.0000000000000000000000000*var_18*w[0][2] + 0.3333333333333333148296163*var_91 + -4.0000000000000000000000000*var_15*var_16 + var_54;
    A[22] = 0.1333333333333333314829616*var_48*var_92/(var_49*var_49);
    const double var_93 = -var_38;
    const double var_94 = var_9 + var_93;
    const double var_95 = -var_16*w[0][2] + var_60;
    const double var_96 = 0.5000000000000000000000000*w[0][1];
    const double var_97 = var_68 + -1.3333333333333332593184650*w[0][4] + var_96;
    const double var_98 = var_95 + -4.0000000000000000000000000*var_0*var_9 + var_16*var_97;
    const double var_99 = 0.0555555555555555524716027*var_1*var_9 + 0.0444444444444444461406185*var_55 + 0.2000000000000000111022302*var_86 + 0.0666666666666666657414808*var_98;
    A[9] = var_48*var_99/(var_49*var_49);
    const double var_100 = var_73 + var_66;
    const double var_101 = 0.1000000000000000055511151*var_10*w[0][0];
    const double var_102 = -0.1000000000000000055511151*var_10*w[0][2] + 0.1333333333333333314829616*var_55 + var_76 + 0.2666666666666666629659233*var_10*var_88 + 0.2000000000000000111022302*var_59 + 0.1666666666666666574148081*var_86 + 0.3333333333333333148296163*var_101;
    A[17] = 0.3333333333333333148296163*var_102*var_48/(var_49*var_49);
    const double var_103 = 0.2000000000000000111022302*w[0][1] + 0.2666666666666666629659233*var_0 + -0.0555555555555555524716027*var_1 + 0.0444444444444444461406185*w[0][4];
    const double var_104 = -4.0000000000000000000000000*w[0][5] + w[0][2];
    const double var_105 = 0.1333333333333333314829616*var_104*var_16;
    const double var_106 = var_28 + var_96;
    const double var_107 = 0.4000000000000000222044605*var_37 + var_105 + -var_106*var_16;
    const double var_108 = var_103*var_9 + 0.3333333333333333148296163*var_107;
    A[11] = var_108*var_48/(var_49*var_49);
    A[19] = A[9];
    const double var_109 = 1.3333333333333332593184650*var_51 + w[0][2] + 0.5000000000000000000000000*var_77 + 0.1666666666666666574148081*w[0][0];
    const double var_110 = var_109*var_16 + -0.6666666666666666296592325*var_9*w[0][5] + var_61;
    const double var_111 = var_76 + 0.1666666666666666574148081*var_66 + 0.2000000000000000111022302*var_110;
    A[10] = 0.3333333333333333148296163*var_111*var_48/(var_49*var_49);
    A[25] = A[10];
    const double var_112 = var_89 + var_9*w[0][5];
    const double var_113 = var_24*var_9 + 0.3333333333333333148296163*var_31;
    A[16] = var_113*var_48/(var_49*var_49);
    A[26] = A[16];
    const double var_114 = var_93 + 2.0000000000000000000000000*var_9;
    A[27] = A[22];
    const double var_115 = -var_36 + var_94*w[0][0];
    const double var_116 = var_73 + var_17*w[0][5];
    const double var_117 = var_26 + var_58;
    const double var_118 = 1.3333333333333332593184650*var_116 + var_85 + var_65 + var_56 + 2.0000000000000000000000000*var_86 + 0.3333333333333333148296163*var_94*w[0][2] + var_10*var_72 + var_117;
    const double var_119 = w[0][5] + var_15;
    const double var_120 = var_55 + var_10*var_119;
    const double var_121 = var_94*w[0][1] + -var_16*w[0][0];
    const double var_122 = 0.3333333333333333148296163*var_121 + 2.0000000000000000000000000*var_100 + var_65 + 1.3333333333333332593184650*var_120 + var_45 + var_82;
    const double var_123 = 0.5000000000000000000000000*var_0 + 0.4000000000000000222044605*w[0][1] + 0.2333333333333333370340767*w[0][4] + -0.0666666666666666657414808*var_1;
    A[7] = 0.3333333333333333148296163*var_123*var_16*var_48/(var_49*var_49);
    A[35] = 0.2666666666666666629659233*var_118*var_48/(var_49*var_49);
    A[29] = 0.1333333333333333314829616*var_44*var_48/(var_49*var_49);
    A[34] = A[29];
    const double var_124 = var_86 + 2.3333333333333330372738601*var_9*w[0][2] + var_16*w[0][0];
    const double var_125 = var_105 + 0.1000000000000000055511151*var_66 + var_83 + var_101 + -var_16*var_75 + 0.2000000000000000111022302*var_67 + 0.2333333333333333370340767*var_9*w[0][1] + 0.2666666666666666629659233*var_112 + 0.6666666666666666296592325*var_37;
    A[5] = 0.3333333333333333148296163*var_125*var_48/(var_49*var_49);
    A[30] = A[5];
    const double var_126 = var_9*w[0][4] + var_79;
    const double var_127 = var_16*w[0][4] + var_39 + var_10*w[0][5] + -0.6666666666666666296592325*var_33*var_9;
    const double var_128 = 2.0000000000000000000000000*var_127 + var_82 + 0.3333333333333333148296163*var_115 + var_117;
    A[14] = 0.3333333333333333148296163*var_10*var_48*var_74/(var_49*var_49);
    const double var_129 = var_38 + -2.0000000000000000000000000*var_9;
    const double var_130 = 0.4000000000000000222044605*var_129*w[0][0] + var_63*var_84 + 0.0666666666666666657414808*var_114*var_32;
    A[1] = 0.3333333333333333148296163*var_22*var_48/(var_49*var_49);
    const double var_131 = 0.6666666666666666296592325*var_25 + 0.2666666666666666629659233*var_126 + var_83 + -var_10*var_75 + 0.2000000000000000111022302*var_95 + var_27 + 0.1000000000000000055511151*var_124;
    A[4] = 0.3333333333333333148296163*var_131*var_48/(var_49*var_49);
    A[24] = A[4];
    A[28] = 0.2666666666666666629659233*var_122*var_48/(var_49*var_49);
    const double var_132 = -4.0000000000000000000000000*var_0*var_10 + var_45 + 2.0000000000000000000000000*var_11*w[0][1] + var_54 + 0.3333333333333333148296163*var_81;
    A[23] = 0.1333333333333333314829616*var_132*var_48/(var_49*var_49);
    A[6] = A[1];
    A[32] = A[17];
    A[0] = 0.3333333333333333148296163*var_130*var_48/(var_49*var_49);
    A[33] = A[23];
    A[31] = A[11];
    A[21] = 0.2666666666666666629659233*var_128*var_48/(var_49*var_49);
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
