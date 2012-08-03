#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 4.01 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[0][0]*w[1][0];
    const double var_1 = w[0][2]*w[1][2];
    const double var_2 = w[0][1]*w[1][1];
    const double var_3 = 0.3333333333333333148296163*var_1 + var_2;
    const double var_4 = w[0][2]*w[1][0] + w[0][0]*w[1][2];
    const double var_5 = 0.1666666666666666574148081*var_4;
    const double var_6 = var_0 + -var_3 + var_5;
    const double var_7 = -x[0][1];
    const double var_8 = x[2][1] + var_7;
    const double var_9 = -x[0][0];
    const double var_10 = x[1][0] + var_9;
    const double var_11 = x[1][1] + var_7;
    const double var_12 = x[2][0] + var_9;
    const double var_13 = var_11*var_8 + var_10*var_12;
    const double var_14 = var_8*var_8 + var_12*var_12;
    const double var_15 = var_11*var_11 + var_10*var_10;
    const double var_16 = var_15*w[0][2]*w[1][2] + var_14*w[0][1]*w[1][1] + -var_13*var_4;
    const double var_17 = var_0 + var_1;
    const double var_18 = w[0][2]*w[1][1] + w[0][1]*w[1][2];
    const double var_19 = w[0][1]*w[1][0] + w[0][0]*w[1][1];
    const double var_20 = 0.3333333333333333148296163*var_4;
    const double var_21 = var_19 + var_20 + 4.0000000000000000000000000*w[0][1]*w[1][1];
    const double var_22 = var_21 + var_18;
    const double var_23 = 0.6666666666666666296592325*var_17 + var_22;
    const double var_24 = 2.0000000000000000000000000*var_19 + var_4;
    const double var_25 = 0.1000000000000000055511151*var_18 + 0.8000000000000000444089210*var_0;
    const double var_26 = var_19 + var_18;
    const double var_27 = var_26 + var_5;
    const double var_28 = 0.0666666666666666657414808*var_17 + var_2 + 0.2000000000000000111022302*var_27;
    const double var_29 = 0.1666666666666666574148081*var_19;
    const double var_30 = 0.3333333333333333148296163*var_18;
    const double var_31 = var_29 + var_30 + var_2;
    const double var_32 = 0.3333333333333333148296163*var_0;
    const double var_33 = var_20 + var_1 + var_32;
    const double var_34 = var_31 + -var_33;
    const double var_35 = 0.2000000000000000111022302*var_14*var_34 + -var_13*var_28;
    const double var_36 = -var_11*var_12 + var_10*var_8;
    const double var_37 = var_36;
    const double var_38 = std::abs(var_37);
    const double var_39 = var_36;
    const double var_40 = 0.2000000000000000111022302*var_17 + 0.0111111111111111115351546*var_4 + 0.0222222222222222230703093*var_2 + 0.0555555555555555524716027*var_26;
    const double var_41 = -var_13;
    const double var_42 = var_15 + var_41;
    A[2] = 0.2500000000000000000000000*var_38*var_40*var_42/(var_39*var_39);
    const double var_43 = var_4 + var_18;
    const double var_44 = var_2 + var_0;
    const double var_45 = 2.6000000000000000888178420*w[0][2]*w[1][2] + 0.4666666666666666740681535*var_44 + 0.2333333333333333370340767*var_19 + 0.5000000000000000000000000*var_43;
    const double var_46 = var_2 + var_1;
    const double var_47 = 0.3333333333333333148296163*var_2 + var_1;
    const double var_48 = var_14 + var_15;
    const double var_49 = var_48*w[0][0]*w[1][0];
    const double var_50 = var_4 + var_19;
    const double var_51 = 0.5000000000000000000000000*var_50;
    const double var_52 = var_51 + -0.6666666666666666296592325*var_18 + 2.0000000000000000000000000*var_0;
    const double var_53 = var_15*var_19;
    const double var_54 = var_14*var_4;
    const double var_55 = var_18*var_48;
    const double var_56 = -var_54 + -4.0000000000000000000000000*var_13*var_46 + -var_53 + var_55;
    const double var_57 = 0.3333333333333333148296163*var_56;
    const double var_58 = var_15*var_4 + var_14*var_19;
    const double var_59 = var_57 + var_14*var_47 + -var_49 + var_15*var_3 + var_13*var_52 + -0.1666666666666666574148081*var_58;
    A[3] = 0.0666666666666666657414808*var_38*var_59/(var_39*var_39);
    A[18] = A[3];
    const double var_60 = 0.3333333333333333148296163*var_19;
    const double var_61 = var_60 + var_2 + var_32;
    const double var_62 = 0.6666666666666666296592325*var_18 + var_61;
    const double var_63 = 0.0222222222222222230703093*var_0 + 0.2000000000000000111022302*var_46 + 0.0111111111111111115351546*var_18 + 0.1111111111111111049432054*var_51;
    A[8] = 0.2500000000000000000000000*var_13*var_38*var_63/(var_39*var_39);
    A[13] = A[8];
    const double var_64 = var_43 + var_29;
    const double var_65 = 0.0666666666666666657414808*var_44 + 0.2000000000000000111022302*var_64 + var_1;
    const double var_66 = var_5 + var_1 + var_30;
    const double var_67 = -var_61 + var_66;
    const double var_68 = -var_13*var_65 + 0.2000000000000000111022302*var_15*var_67;
    A[15] = 0.3333333333333333148296163*var_38*var_68/(var_39*var_39);
    A[20] = A[15];
    const double var_69 = var_19 + var_1;
    A[12] = A[2];
    const double var_70 = var_54 + -var_14*var_18 + var_13*var_24;
    const double var_71 = var_0 + -var_47 + var_29;
    const double var_72 = var_4 + var_2;
    const double var_73 = 0.1333333333333333314829616*var_72;
    const double var_74 = var_29 + 0.2666666666666666629659233*w[0][2]*w[1][2] + var_25 + var_73;
    const double var_75 = 0.0555555555555555524716027*var_18 + 0.2000000000000000111022302*var_0;
    const double var_76 = 0.1555555555555555580227178*w[0][2]*w[1][2] + var_75 + 0.0666666666666666657414808*var_2;
    const double var_77 = -0.3333333333333333148296163*var_15*var_74 + 0.0222222222222222230703093*var_70 + 0.0666666666666666657414808*var_14*var_71 + var_13*var_76;
    const double var_78 = 4.0000000000000000000000000*w[0][2]*w[1][2] + var_60;
    const double var_79 = var_43 + var_78;
    const double var_80 = -w[0][1]*w[1][1] + var_0;
    const double var_81 = 1.3333333333333332593184650*var_13*var_18;
    const double var_82 = var_81 + 0.6666666666666666296592325*var_14*var_80 + 4.0000000000000000000000000*var_13*var_3 + 0.3333333333333333148296163*var_70 + -var_15*var_23;
    const double var_83 = var_0 + -2.0000000000000000000000000*var_18;
    const double var_84 = 0.1666666666666666574148081*var_13*var_18;
    const double var_85 = 0.6666666666666666296592325*var_49;
    const double var_86 = -w[0][2]*w[1][2] + var_0;
    const double var_87 = 0.2222222222222222098864108*var_13*var_83;
    const double var_88 = 2.0000000000000000000000000*var_4 + var_19;
    const double var_89 = var_53 + -var_15*var_18 + var_13*var_88;
    const double var_90 = 0.6666666666666666296592325*var_44 + var_79;
    const double var_91 = var_81 + 0.6666666666666666296592325*var_15*var_86 + 4.0000000000000000000000000*var_13*var_47 + 0.3333333333333333148296163*var_89 + -var_14*var_90;
    A[22] = 0.1333333333333333314829616*var_38*var_91/(var_39*var_39);
    A[9] = 0.3333333333333333148296163*var_35*var_38/(var_39*var_39);
    const double var_92 = 0.1333333333333333314829616*var_69;
    const double var_93 = -var_66 + var_61;
    const double var_94 = -0.1666666666666666574148081*var_13*var_4 + var_84 + 0.6666666666666666296592325*var_13*var_80 + var_15*var_93;
    A[17] = 0.0666666666666666657414808*var_38*var_94/(var_39*var_39);
    const double var_95 = -var_1*var_13;
    const double var_96 = 2.0000000000000000000000000*var_95;
    const double var_97 = 0.1666666666666666574148081*var_18 + 0.2666666666666666629659233*w[0][0]*w[1][0];
    const double var_98 = var_97 + 0.1000000000000000055511151*var_19 + 0.8000000000000000444089210*var_1 + var_73;
    const double var_99 = -var_15*var_98 + var_13*var_65;
    const double var_100 = var_14 + var_41;
    const double var_101 = var_97 + 0.8000000000000000444089210*var_2 + 0.1000000000000000055511151*var_4 + var_92;
    const double var_102 = -var_101*var_14 + var_13*var_28;
    A[11] = 0.3333333333333333148296163*var_102*var_38/(var_39*var_39);
    A[19] = A[9];
    const double var_103 = var_33 + -var_31;
    const double var_104 = var_84 + -0.1666666666666666574148081*var_13*var_19 + 0.6666666666666666296592325*var_13*var_86 + var_103*var_14;
    A[10] = 0.0666666666666666657414808*var_104*var_38/(var_39*var_39);
    A[25] = A[10];
    const double var_105 = 4.0000000000000000000000000*var_44 + var_43;
    const double var_106 = 4.0000000000000000000000000*var_17 + var_43;
    const double var_107 = var_14*w[0][0]*w[1][0] + -var_13*var_72 + var_48*w[0][1]*w[1][1] + var_53 + var_106*var_15;
    const double var_108 = 0.4666666666666666740681535*var_17 + 0.2333333333333333370340767*var_4 + 2.6000000000000000888178420*w[0][1]*w[1][1] + 0.5000000000000000000000000*var_26;
    A[16] = 0.3333333333333333148296163*var_38*var_99/(var_39*var_39);
    A[26] = A[16];
    const double var_109 = var_100*var_19 + var_15*w[0][0]*w[1][0] + var_48*w[0][2]*w[1][2] + var_95 + var_105*var_14;
    const double var_110 = 0.6666666666666666296592325*var_19 + 2.6666666666666665186369300*w[0][0]*w[1][0] + var_18;
    const double var_111 = 0.6666666666666666296592325*var_16;
    const double var_112 = -var_85 + -var_110*var_13 + var_57 + var_111;
    A[27] = A[22];
    const double var_113 = 0.4666666666666666740681535*var_46 + 0.2333333333333333370340767*var_18 + var_51 + 2.6000000000000000888178420*w[0][0]*w[1][0];
    const double var_114 = 0.5000000000000000000000000*var_48 + var_41;
    const double var_115 = var_5 + 0.2666666666666666629659233*w[0][1]*w[1][1] + var_92 + var_25;
    const double var_116 = 0.1555555555555555580227178*w[0][1]*w[1][1] + 0.0666666666666666657414808*var_1 + var_75;
    const double var_117 = 0.0222222222222222230703093*var_89 + -0.3333333333333333148296163*var_115*var_14 + var_116*var_13 + 0.0666666666666666657414808*var_15*var_6;
    A[7] = 0.0833333333333333287074041*var_108*var_14*var_38/(var_39*var_39);
    const double var_118 = var_87 + 0.2222222222222222098864108*var_109 + -2.0000000000000000000000000*var_13*var_2 + 0.3333333333333333148296163*var_15*var_22;
    A[35] = 0.4000000000000000222044605*var_118*var_38/(var_39*var_39);
    A[29] = 0.1333333333333333314829616*var_112*var_38/(var_39*var_39);
    A[34] = A[29];
    A[5] = var_117*var_38/(var_39*var_39);
    A[30] = A[5];
    A[14] = 0.0833333333333333287074041*var_15*var_38*var_45/(var_39*var_39);
    const double var_119 = var_87 + 0.2222222222222222098864108*var_107 + 0.3333333333333333148296163*var_14*var_79 + var_96;
    const double var_120 = 0.0111111111111111115351546*var_19 + 0.0555555555555555524716027*var_43 + 0.0222222222222222230703093*var_1 + 0.2000000000000000111022302*var_44;
    A[1] = 0.2500000000000000000000000*var_100*var_120*var_38/(var_39*var_39);
    const double var_121 = var_85 + var_111 + var_55 + var_54 + var_14*var_78 + var_96 + var_15*var_21 + -2.0000000000000000000000000*var_13*var_62;
    A[4] = var_38*var_77/(var_39*var_39);
    A[24] = A[4];
    A[28] = 0.4000000000000000222044605*var_119*var_38/(var_39*var_39);
    A[23] = 0.1333333333333333314829616*var_38*var_82/(var_39*var_39);
    A[6] = A[1];
    A[32] = A[17];
    A[0] = 0.1666666666666666574148081*var_113*var_114*var_38/(var_39*var_39);
    A[33] = A[23];
    A[31] = A[11];
    A[21] = 0.1333333333333333314829616*var_121*var_38/(var_39*var_39);
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
