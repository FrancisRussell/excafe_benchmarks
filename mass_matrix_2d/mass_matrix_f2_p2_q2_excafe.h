#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 8.25 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = 3.2000000000000001776356839*w[0][3]*w[1][3];
    const double var_1 = w[0][5]*w[1][4] + w[0][4]*w[1][5];
    const double var_2 = w[0][3]*w[1][0] + w[0][0]*w[1][3];
    const double var_3 = -1.0000000000000000000000000*var_2;
    const double var_4 = w[0][3]*w[1][3];
    const double var_5 = 0.5000000000000000000000000*var_3 + var_4 + -1.0000000000000000000000000*var_1;
    const double var_6 = -1.0000000000000000000000000*x[0][0];
    const double var_7 = var_6 + x[1][0];
    const double var_8 = -1.0000000000000000000000000*x[0][1];
    const double var_9 = var_8 + x[2][1];
    const double var_10 = var_6 + x[2][0];
    const double var_11 = var_8 + x[1][1];
    const double var_12 = var_7*var_9 + -1.0000000000000000000000000*var_10*var_11;
    const double var_13 = std::abs(var_12);
    const double var_14 = w[0][5]*w[1][0] + w[0][0]*w[1][5];
    const double var_15 = w[0][2]*w[1][4] + w[0][4]*w[1][2];
    const double var_16 = w[0][5]*w[1][1] + w[0][1]*w[1][5];
    const double var_17 = w[0][3]*w[1][1] + w[0][1]*w[1][3];
    const double var_18 = w[0][0]*w[1][2] + w[0][2]*w[1][0];
    const double var_19 = w[0][0]*w[1][1] + w[0][1]*w[1][0];
    const double var_20 = w[0][1]*w[1][4] + w[0][4]*w[1][1];
    const double var_21 = w[0][2]*w[1][1] + w[0][1]*w[1][2];
    const double var_22 = -0.0833333333333333287074041*var_21;
    const double var_23 = w[0][1]*w[1][1];
    const double var_24 = 0.5000000000000000000000000*var_23;
    const double var_25 = 0.0333333333333333328707404*var_18 + var_24 + 0.1666666666666666574148081*var_20 + -0.5333333333333333259318465*w[0][4]*w[1][4] + -0.0833333333333333287074041*var_19 + var_22;
    const double var_26 = w[0][2]*w[1][5] + w[0][5]*w[1][2];
    const double var_27 = w[0][4]*w[1][3] + w[0][3]*w[1][4];
    const double var_28 = 0.2500000000000000000000000*w[0][2]*w[1][2];
    const double var_29 = -1.0000000000000000000000000*var_28;
    const double var_30 = 0.0666666666666666657414808*var_29 + -0.2666666666666666629659233*var_27 + 0.0333333333333333328707404*var_26;
    const double var_31 = w[0][0]*w[1][0];
    const double var_32 = -0.0833333333333333287074041*var_31 + -0.4000000000000000222044605*var_1;
    const double var_33 = w[0][4]*w[1][0] + w[0][0]*w[1][4];
    const double var_34 = -1.0000000000000000000000000*var_33;
    const double var_35 = w[0][2]*w[1][3] + w[0][3]*w[1][2];
    const double var_36 = -1.0000000000000000000000000*var_35;
    const double var_37 = var_36 + var_3;
    const double var_38 = var_37 + var_34;
    const double var_39 = var_25 + var_30 + 0.0666666666666666657414808*var_15 + var_32 + 0.3333333333333333148296163*var_17 + 0.6666666666666666296592325*var_16 + 0.0333333333333333328707404*var_38;
    A[11] = 0.0031746031746031746004211*var_13*var_39 + -0.0009523809523809523801263*var_13*var_14;
    A[31] = A[11];
    const double var_40 = 0.1666666666666666574148081*var_31;
    const double var_41 = 1.6000000000000000888178420*var_1 + var_0 + -0.0333333333333333328707404*var_21 + -0.5333333333333333259318465*var_2 + var_40;
    const double var_42 = 3.2000000000000001776356839*w[0][5]*w[1][5];
    const double var_43 = w[0][2]*w[1][2];
    const double var_44 = 0.5000000000000000000000000*var_43;
    const double var_45 = 0.3333333333333333148296163*var_44 + -0.5333333333333333259318465*var_26 + var_42 + 1.6000000000000000888178420*var_27 + -0.0333333333333333328707404*var_19;
    const double var_46 = -1.0000000000000000000000000*var_14;
    const double var_47 = var_36 + var_46;
    const double var_48 = w[0][3]*w[1][5] + w[0][5]*w[1][3];
    const double var_49 = w[0][4]*w[1][4];
    const double var_50 = 1.3333333333333332593184650*var_48 + var_49;
    const double var_51 = var_23 + 0.2000000000000000111022302*var_18;
    const double var_52 = -1.0000000000000000000000000*var_20;
    const double var_53 = var_52 + var_34;
    const double var_54 = -1.0000000000000000000000000*var_15;
    const double var_55 = var_53 + var_54;
    const double var_56 = var_41 + 1.6000000000000000888178420*var_50 + var_45 + 0.2666666666666666629659233*var_55 + 0.3333333333333333148296163*var_51 + 0.4000000000000000222044605*var_47;
    A[23] = 0.0031746031746031746004211*var_13*var_56;
    A[33] = A[23];
    const double var_57 = var_17 + var_16;
    const double var_58 = 0.0027777777777777778837887*var_18;
    const double var_59 = 0.2500000000000000000000000*w[0][1]*w[1][1];
    const double var_60 = -1.0000000000000000000000000*var_59;
    const double var_61 = 0.5000000000000000000000000*var_52 + -1.0000000000000000000000000*var_48 + var_49;
    const double var_62 = 0.0111111111111111115351546*var_61 + var_58 + -0.0277777777777777762358014*var_57 + 0.1666666666666666574148081*var_60;
    const double var_63 = var_33 + var_14;
    const double var_64 = 0.0027777777777777778837887*var_21;
    const double var_65 = 0.2500000000000000000000000*w[0][0]*w[1][0];
    const double var_66 = -1.0000000000000000000000000*var_65;
    const double var_67 = 0.0111111111111111115351546*var_5 + 0.1666666666666666574148081*var_66 + -0.0277777777777777762358014*var_63 + var_64;
    const double var_68 = var_35 + var_15;
    const double var_69 = var_68 + var_26;
    const double var_70 = var_69 + var_28;
    const double var_71 = -0.1000000000000000055511151*w[0][5]*w[1][5] + 0.0222222222222222230703093*var_27 + var_62 + 0.0166666666666666664353702*var_19 + 0.0111111111111111115351546*var_70 + var_67;
    A[1] = 0.0095238095238095246686250*var_13*var_71;
    A[6] = A[1];
    const double var_72 = -0.0277777777777777762358014*var_51 + -0.1333333333333333314829616*var_50 + 0.0222222222222222230703093*var_20;
    const double var_73 = var_4 + 1.3333333333333332593184650*var_1;
    const double var_74 = var_31 + 0.2000000000000000111022302*var_21;
    const double var_75 = -0.1333333333333333314829616*var_73 + -0.0277777777777777762358014*var_74 + 0.0222222222222222230703093*var_2;
    const double var_76 = w[0][5]*w[1][5];
    const double var_77 = -1.0000000000000000000000000*var_17;
    const double var_78 = var_77 + var_34;
    const double var_79 = var_78 + var_19 + var_16 + var_14;
    const double var_80 = -0.4000000000000000222044605*var_76 + 0.0666666666666666657414808*var_26 + 0.0555555555555555524716027*var_68 + var_75 + -0.0888888888888888922812370*var_27 + var_72 + 0.0111111111111111115351546*var_79;
    A[17] = 0.0095238095238095246686250*var_13*var_80;
    const double var_81 = -1.0000000000000000000000000*var_26;
    const double var_82 = var_42 + var_43;
    const double var_83 = 0.2222222222222222098864108*var_82 + 0.0111111111111111115351546*var_19 + 1.0666666666666666518636930*var_27 + 0.1333333333333333314829616*var_81;
    const double var_84 = var_19 + var_18;
    const double var_85 = 0.0111111111111111115351546*var_21 + 0.0555555555555555524716027*var_2 + -0.0277777777777777762358014*var_84 + -0.1777777777777777845624740*w[0][3]*w[1][3] + var_40;
    const double var_86 = -1.0000000000000000000000000*var_16;
    const double var_87 = var_77 + var_52 + var_54;
    const double var_88 = 0.4000000000000000222044605*var_48 + 0.0833333333333333287074041*var_23;
    const double var_89 = -1.0000000000000000000000000*var_88;
    const double var_90 = var_89 + var_30;
    const double var_91 = 0.3333333333333333148296163*var_90 + 0.0222222222222222230703093*var_35 + 0.1000000000000000055511151*var_86 + 0.1111111111111111049432054*var_33 + 0.2222222222222222098864108*var_14 + var_85 + 0.0111111111111111115351546*var_87;
    A[5] = 0.0095238095238095246686250*var_13*var_91;
    const double var_92 = 1.3333333333333332593184650*var_27 + var_76;
    const double var_93 = 0.2000000000000000111022302*var_19 + var_43;
    const double var_94 = -0.1333333333333333314829616*var_92 + -0.0277777777777777762358014*var_93 + 0.0222222222222222230703093*var_26;
    const double var_95 = var_86 + var_54;
    const double var_96 = var_95 + var_17 + var_21 + var_35;
    const double var_97 = -0.0888888888888888922812370*var_1 + var_94 + -0.4000000000000000222044605*var_4 + 0.0555555555555555524716027*var_63 + 0.0666666666666666657414808*var_2 + var_72 + 0.0111111111111111115351546*var_96;
    A[3] = 0.0095238095238095246686250*var_13*var_97;
    const double var_98 = 0.2500000000000000000000000*var_19 + -1.0000000000000000000000000*var_27 + 0.5000000000000000000000000*var_81 + var_76;
    const double var_99 = 0.0333333333333333328707404*var_98 + 0.5000000000000000000000000*var_29 + -0.0833333333333333287074041*var_68;
    const double var_100 = 0.3333333333333333148296163*var_99;
    const double var_101 = var_63 + var_2;
    const double var_102 = var_101 + var_65;
    const double var_103 = 0.0222222222222222230703093*var_1 + 0.0166666666666666664353702*var_21 + 0.0111111111111111115351546*var_102 + var_62 + -0.1000000000000000055511151*w[0][3]*w[1][3] + var_100;
    const double var_104 = var_47 + var_33 + var_15 + var_18;
    const double var_105 = 0.0555555555555555524716027*var_57 + var_94 + 0.0666666666666666657414808*var_20 + 0.0111111111111111115351546*var_104 + -0.4000000000000000222044605*var_49 + var_75 + -0.0888888888888888922812370*var_48;
    A[10] = 0.0095238095238095246686250*var_105*var_13;
    const double var_106 = var_57 + var_20;
    const double var_107 = var_59 + var_106;
    const double var_108 = 0.0166666666666666664353702*var_18 + -0.1000000000000000055511151*w[0][4]*w[1][4] + 0.0222222222222222230703093*var_48 + var_100 + 0.0111111111111111115351546*var_107 + var_67;
    const double var_109 = var_0 + var_31;
    const double var_110 = 0.4000000000000000222044605*var_3;
    const double var_111 = var_110 + 0.6666666666666666296592325*var_109 + 3.2000000000000001776356839*var_1 + 0.0333333333333333328707404*var_21;
    const double var_112 = 0.3333333333333333148296163*var_111;
    const double var_113 = 0.0666666666666666657414808*var_23 + -0.1000000000000000055511151*var_18 + -0.1777777777777777845624740*var_57 + 0.4000000000000000222044605*var_52 + 4.2666666666666666074547720*w[0][4]*w[1][4] + var_83 + 0.5333333333333333259318465*var_48 + var_112;
    A[28] = 0.0095238095238095246686250*var_113*var_13;
    const double var_114 = 3.2000000000000001776356839*w[0][4]*w[1][4];
    const double var_115 = -0.0333333333333333328707404*var_18 + 0.3333333333333333148296163*var_24 + -0.5333333333333333259318465*var_20 + var_114 + 1.6000000000000000888178420*var_48;
    const double var_116 = var_3 + var_77;
    const double var_117 = var_36 + var_116;
    const double var_118 = 0.4000000000000000222044605*var_95 + 0.3333333333333333148296163*var_74 + 0.2666666666666666629659233*var_117 + var_115 + var_45 + 1.6000000000000000888178420*var_73;
    const double var_119 = var_46 + var_86;
    const double var_120 = var_44 + -0.5333333333333333259318465*w[0][5]*w[1][5] + -0.0833333333333333287074041*var_18 + 0.1666666666666666574148081*var_26 + 0.0333333333333333328707404*var_19 + var_22;
    const double var_121 = 0.0666666666666666657414808*var_66 + -0.2666666666666666629659233*var_1 + 0.0333333333333333328707404*var_2;
    const double var_122 = var_86 + var_53;
    const double var_123 = var_120 + 0.3333333333333333148296163*var_15 + var_89 + 0.6666666666666666296592325*var_35 + 0.0666666666666666657414808*var_14 + 0.0333333333333333328707404*var_122 + var_121;
    A[15] = -0.0009523809523809523801263*var_13*var_17 + 0.0031746031746031746004211*var_123*var_13;
    const double var_124 = var_36 + var_86 + var_81;
    const double var_125 = -0.2666666666666666629659233*var_48 + 0.0333333333333333328707404*var_20 + 0.0666666666666666657414808*var_60;
    const double var_126 = 0.4000000000000000222044605*var_27 + 0.0833333333333333287074041*var_43;
    const double var_127 = -1.0000000000000000000000000*var_126;
    const double var_128 = var_125 + var_127;
    const double var_129 = 0.1000000000000000055511151*var_54 + 0.0111111111111111115351546*var_124 + 0.2222222222222222098864108*var_33 + 0.1111111111111111049432054*var_14 + 0.0222222222222222230703093*var_17 + var_85 + 0.3333333333333333148296163*var_128;
    A[4] = 0.0095238095238095246686250*var_129*var_13;
    A[29] = 0.0031746031746031746004211*var_118*var_13;
    A[34] = A[29];
    const double var_130 = 0.0166666666666666664353702*var_31 + 0.0555555555555555524716027*var_1 + -0.0416666666666666643537020*var_21 + 0.2222222222222222098864108*w[0][3]*w[1][3];
    const double var_131 = 0.2222222222222222098864108*w[0][5]*w[1][5] + -0.0416666666666666643537020*var_19 + 0.0555555555555555524716027*var_27 + 0.0166666666666666664353702*var_43;
    const double var_132 = var_46 + var_81;
    const double var_133 = var_132 + var_37;
    const double var_134 = var_54 + var_34;
    const double var_135 = var_24 + 0.1666666666666666574148081*var_57 + var_58 + var_131 + var_130 + 0.0666666666666666657414808*var_49 + 0.1111111111111111049432054*var_48 + 0.0055555555555555557675773*var_134 + 0.0277777777777777762358014*var_133;
    A[7] = 0.0095238095238095246686250*var_13*var_135;
    const double var_136 = 0.2222222222222222098864108*w[0][4]*w[1][4] + 0.0555555555555555524716027*var_48 + 0.0166666666666666664353702*var_23 + -0.0416666666666666643537020*var_18;
    const double var_137 = var_95 + var_52 + var_81;
    const double var_138 = var_36 + var_77;
    const double var_139 = var_64 + 0.1111111111111111049432054*var_1 + 0.5000000000000000000000000*var_31 + 0.0055555555555555557675773*var_138 + var_131 + 0.1666666666666666574148081*var_63 + 0.0666666666666666657414808*var_4 + var_136 + 0.0277777777777777762358014*var_137;
    A[0] = 0.0095238095238095246686250*var_13*var_139;
    A[2] = 0.0095238095238095246686250*var_108*var_13;
    A[12] = A[2];
    const double var_140 = var_116 + var_46;
    const double var_141 = var_120 + 0.6666666666666666296592325*var_15 + 0.3333333333333333148296163*var_35 + 0.0333333333333333328707404*var_140 + var_125 + var_32 + 0.0666666666666666657414808*var_16;
    const double var_142 = var_132 + var_86;
    A[20] = A[15];
    A[8] = 0.0095238095238095246686250*var_103*var_13;
    A[13] = A[8];
    const double var_143 = var_114 + var_23;
    const double var_144 = 1.0666666666666666518636930*var_48 + 0.1333333333333333314829616*var_52 + 0.2222222222222222098864108*var_143 + 0.0111111111111111115351546*var_18;
    const double var_145 = 4.2666666666666666074547720*w[0][5]*w[1][5] + -0.1777777777777777845624740*var_68 + 0.4000000000000000222044605*var_81 + 0.5333333333333333259318465*var_27 + -0.1000000000000000055511151*var_19 + 0.0666666666666666657414808*var_43 + var_144 + var_112;
    A[35] = 0.0095238095238095246686250*var_13*var_145;
    const double var_146 = 0.0666666666666666657414808*var_31 + 0.5333333333333333259318465*var_1 + -0.1000000000000000055511151*var_21 + -0.1777777777777777845624740*var_63 + var_83 + 4.2666666666666666074547720*w[0][3]*w[1][3] + var_110 + var_144;
    A[21] = 0.0095238095238095246686250*var_13*var_146;
    const double var_147 = var_116 + var_53;
    const double var_148 = var_132 + var_54;
    const double var_149 = var_25 + var_127 + 0.0666666666666666657414808*var_33 + 0.6666666666666666296592325*var_17 + 0.3333333333333333148296163*var_16 + 0.0333333333333333328707404*var_148 + var_121;
    A[9] = -0.0009523809523809523801263*var_13*var_35 + 0.0031746031746031746004211*var_13*var_149;
    A[19] = A[9];
    const double var_150 = 0.2666666666666666629659233*var_142 + var_115 + 0.3333333333333333148296163*var_93 + var_41 + 1.6000000000000000888178420*var_92 + 0.4000000000000000222044605*var_78;
    A[22] = 0.0031746031746031746004211*var_13*var_150;
    A[18] = A[3];
    A[32] = A[17];
    A[16] = 0.0031746031746031746004211*var_13*var_141 + -0.0009523809523809523801263*var_13*var_33;
    A[26] = A[16];
    A[25] = A[10];
    const double var_151 = var_44 + 0.0666666666666666657414808*var_76 + var_130 + 0.1666666666666666574148081*var_68 + 0.1111111111111111049432054*var_27 + var_136 + 0.0027777777777777778837887*var_19 + 0.0277777777777777762358014*var_147 + 0.0055555555555555557675773*var_119;
    A[30] = A[5];
    A[24] = A[4];
    A[14] = 0.0095238095238095246686250*var_13*var_151;
    A[27] = A[22];
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
