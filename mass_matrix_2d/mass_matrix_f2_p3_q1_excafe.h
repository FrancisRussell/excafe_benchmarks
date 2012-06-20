#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 47.32 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[0][9]*w[1][3] + w[0][3]*w[1][9];
    const double var_1 = -1.0000000000000000000000000*w[0][7]*w[1][3] + -1.0000000000000000000000000*w[0][3]*w[1][7];
    const double var_2 = 0.5000000000000000000000000*var_1;
    const double var_3 = var_2 + var_0;
    const double var_4 = w[0][9]*w[1][4] + w[0][4]*w[1][9];
    const double var_5 = -1.0000000000000000000000000*w[0][5]*w[1][4] + -1.0000000000000000000000000*w[0][4]*w[1][5];
    const double var_6 = 0.5000000000000000000000000*var_5;
    const double var_7 = var_4 + var_6;
    const double var_8 = var_3 + var_7;
    const double var_9 = w[0][0]*w[1][1] + w[0][1]*w[1][0];
    const double var_10 = w[0][4]*w[1][6] + w[0][6]*w[1][4];
    const double var_11 = 1.5000000000000000000000000*var_10 + w[0][2]*w[1][9] + w[0][9]*w[1][2];
    const double var_12 = w[0][4]*w[1][4];
    const double var_13 = w[0][6]*w[1][6];
    const double var_14 = var_12 + var_13;
    const double var_15 = w[0][3]*w[1][2] + w[0][2]*w[1][3];
    const double var_16 = w[0][2]*w[1][5] + w[0][5]*w[1][2];
    const double var_17 = var_16 + var_15;
    const double var_18 = w[0][0]*w[1][3] + w[0][3]*w[1][0];
    const double var_19 = w[0][1]*w[1][5] + w[0][5]*w[1][1];
    const double var_20 = var_19 + var_18;
    const double var_21 = w[0][4]*w[1][0] + w[0][0]*w[1][4];
    const double var_22 = w[0][6]*w[1][1] + w[0][1]*w[1][6];
    const double var_23 = var_22 + var_21;
    const double var_24 = w[0][6]*w[1][3] + w[0][3]*w[1][6];
    const double var_25 = -0.5000000000000000000000000*var_24;
    const double var_26 = -1.0000000000000000000000000*var_4 + var_25;
    const double var_27 = w[0][6]*w[1][9] + w[0][9]*w[1][6];
    const double var_28 = -1.0000000000000000000000000*var_27 + var_6;
    const double var_29 = w[0][6]*w[1][5] + w[0][5]*w[1][6];
    const double var_30 = -1.0000000000000000000000000*var_29;
    const double var_31 = var_30 + var_26 + var_28;
    const double var_32 = w[0][4]*w[1][8] + w[0][8]*w[1][4];
    const double var_33 = -0.5000000000000000000000000*var_32;
    const double var_34 = w[0][7]*w[1][8] + w[0][8]*w[1][7];
    const double var_35 = w[0][8]*w[1][9] + w[0][9]*w[1][8];
    const double var_36 = var_33 + -0.5000000000000000000000000*var_34 + var_35;
    const double var_37 = w[0][7]*w[1][9] + w[0][9]*w[1][7];
    const double var_38 = -1.0000000000000000000000000*w[0][7]*w[1][6] + -1.0000000000000000000000000*w[0][6]*w[1][7];
    const double var_39 = 0.5000000000000000000000000*var_38;
    const double var_40 = var_39 + var_37;
    const double var_41 = var_40 + var_36;
    const double var_42 = w[0][5]*w[1][9] + w[0][9]*w[1][5];
    const double var_43 = -1.0000000000000000000000000*w[0][8]*w[1][5] + -1.0000000000000000000000000*w[0][5]*w[1][8];
    const double var_44 = 0.5000000000000000000000000*var_43;
    const double var_45 = var_44 + var_42;
    const double var_46 = var_45 + var_3;
    const double var_47 = 13.5000000000000000000000000*var_41 + 6.7500000000000000000000000*var_14 + var_20 + 0.3611111111111111049432054*var_9 + 9.0000000000000000000000000*var_46 + 0.2500000000000000000000000*var_23 + 3.0000000000000000000000000*var_11 + var_17 + 4.5000000000000000000000000*var_31;
    const double var_48 = -1.0000000000000000000000000*x[0][1];
    const double var_49 = var_48 + x[1][1];
    const double var_50 = -1.0000000000000000000000000*x[0][0];
    const double var_51 = var_50 + x[2][0];
    const double var_52 = x[2][1] + var_48;
    const double var_53 = x[1][0] + var_50;
    const double var_54 = var_52*var_53 + -1.0000000000000000000000000*var_49*var_51;
    const double var_55 = w[0][2]*w[1][0] + w[0][0]*w[1][2];
    const double var_56 = w[0][1]*w[1][4] + w[0][4]*w[1][1];
    const double var_57 = w[0][1]*w[1][7] + w[0][7]*w[1][1];
    const double var_58 = var_57 + var_56;
    const double var_59 = w[0][2]*w[1][6] + w[0][6]*w[1][2];
    const double var_60 = w[0][8]*w[1][2] + w[0][2]*w[1][8];
    const double var_61 = w[0][2]*w[1][2];
    const double var_62 = 0.3214285714285713968507707*var_10 + 0.0015873015873015873002105*var_9 + 0.0476190476190476164042309*var_61;
    const double var_63 = var_39 + -1.0000000000000000000000000*var_42;
    const double var_64 = var_44 + -1.0000000000000000000000000*var_37;
    const double var_65 = var_64 + var_63;
    const double var_66 = w[0][3]*w[1][8] + w[0][8]*w[1][3];
    const double var_67 = w[0][1]*w[1][1];
    const double var_68 = 0.0476190476190476164042309*var_67 + 0.0015873015873015873002105*var_55 + 0.3214285714285713968507707*var_66;
    const double var_69 = std::abs(var_54);
    const double var_70 = w[0][3]*w[1][4] + w[0][4]*w[1][3];
    const double var_71 = -1.0000000000000000000000000*var_70;
    const double var_72 = w[0][5]*w[1][7] + w[0][7]*w[1][5];
    const double var_73 = w[0][2]*w[1][1] + w[0][1]*w[1][2];
    const double var_74 = w[0][3]*w[1][5] + w[0][5]*w[1][3];
    const double var_75 = w[0][7]*w[1][4] + w[0][4]*w[1][7];
    const double var_76 = w[0][6]*w[1][8] + w[0][8]*w[1][6];
    const double var_77 = -1.0000000000000000000000000*var_76 + -1.0000000000000000000000000*var_74 + -1.0000000000000000000000000*var_75;
    const double var_78 = 0.0642857142857142793701541*var_77 + 2.3142857142857140573255492*w[0][9]*w[1][9];
    const double var_79 = w[0][0]*w[1][0];
    const double var_80 = 0.1285714285714285587403083*var_71 + 0.0476190476190476164042309*var_79 + 0.3214285714285713968507707*var_72 + 0.0015873015873015873002105*var_73 + var_78;
    const double var_81 = w[0][7]*w[1][7];
    const double var_82 = var_12 + var_81;
    const double var_83 = w[0][5]*w[1][5];
    const double var_84 = var_13 + var_83;
    const double var_85 = var_19 + var_22;
    const double var_86 = w[0][1]*w[1][3] + w[0][3]*w[1][1];
    const double var_87 = -1.0000000000000000000000000*var_86;
    const double var_88 = w[0][1]*w[1][8] + w[0][8]*w[1][1];
    const double var_89 = -1.0000000000000000000000000*var_88;
    const double var_90 = var_87 + var_89;
    const double var_91 = w[0][9]*w[1][1] + w[0][1]*w[1][9] + 1.5000000000000000000000000*var_66;
    const double var_92 = w[0][3]*w[1][3];
    const double var_93 = w[0][8]*w[1][8];
    const double var_94 = var_93 + var_92;
    const double var_95 = w[0][2]*w[1][7] + w[0][7]*w[1][2];
    const double var_96 = var_95 + var_21;
    const double var_97 = var_18 + var_60;
    const double var_98 = -1.0000000000000000000000000*var_34;
    const double var_99 = var_40 + 0.5000000000000000000000000*var_98;
    const double var_100 = var_99 + var_7;
    const double var_101 = var_33 + -1.0000000000000000000000000*var_0;
    const double var_102 = var_2 + -1.0000000000000000000000000*var_35;
    const double var_103 = var_102 + var_101;
    const double var_104 = var_27 + var_25 + -0.5000000000000000000000000*var_29;
    const double var_105 = var_104 + var_45;
    const double var_106 = 6.7500000000000000000000000*var_94 + 0.2500000000000000000000000*var_97 + 3.0000000000000000000000000*var_91 + 0.3611111111111111049432054*var_55 + 13.5000000000000000000000000*var_105 + 4.5000000000000000000000000*var_103 + 9.0000000000000000000000000*var_100 + var_96 + var_58;
    const double var_107 = 0.9642857142857141905523122*var_84 + 0.0158730158730158721347436*var_67 + var_80 + 0.0285714285714285705364279*var_106 + var_62 + 0.0500000000000000027755576*var_85 + 0.3214285714285713968507707*var_82 + 0.0357142857142857123031732*var_90;
    A[2] = 0.0062500000000000003469447*var_107*var_69;
    const double var_108 = var_56 + var_15;
    const double var_109 = 1.5000000000000000000000000*var_72 + w[0][9]*w[1][0] + w[0][0]*w[1][9];
    const double var_110 = 0.7714285714285713524418497*w[0][9]*w[1][9];
    const double var_111 = 0.1607142857142856984253854*var_71 + 0.0119047619047619041010577*var_73 + 0.0321428571428571396850771*var_109 + 0.0079365079365079360673718*w[0][0]*w[1][0] + -0.0482142857142857095276156*var_76 + var_110;
    const double var_112 = w[0][0]*w[1][7] + w[0][7]*w[1][0];
    const double var_113 = w[0][8]*w[1][0] + w[0][0]*w[1][8];
    const double var_114 = var_57 + var_113;
    const double var_115 = var_93 + var_13;
    const double var_116 = var_12 + var_92;
    const double var_117 = -1.0000000000000000000000000*var_112;
    const double var_118 = w[0][5]*w[1][0] + w[0][0]*w[1][5];
    const double var_119 = -1.0000000000000000000000000*var_118;
    const double var_120 = var_117 + var_119;
    const double var_121 = var_18 + var_21;
    const double var_122 = w[0][6]*w[1][0] + w[0][0]*w[1][6];
    const double var_123 = var_122 + var_113;
    const double var_124 = var_19 + var_95;
    const double var_125 = var_22 + var_60;
    const double var_126 = var_104 + var_36;
    const double var_127 = var_81 + var_83;
    const double var_128 = var_127 + var_71;
    const double var_129 = 13.5000000000000000000000000*var_8 + 6.7500000000000000000000000*var_128 + 9.0000000000000000000000000*var_126 + var_125 + 0.2500000000000000000000000*var_124 + 0.3611111111111111049432054*var_73 + 4.5000000000000000000000000*var_65 + 3.0000000000000000000000000*var_109 + var_123;
    const double var_130 = 0.0158730158730158721347436*var_79 + var_68 + 0.9642857142857141905523122*var_116 + var_62 + 0.0285714285714285705364279*var_129 + 0.3214285714285713968507707*var_115 + var_78 + 0.0357142857142857123031732*var_120 + 0.0500000000000000027755576*var_121;
    A[5] = 0.0062500000000000003469447*var_130*var_69;
    A[7] = A[5];
    const double var_131 = var_57 + var_16;
    const double var_132 = w[0][2]*w[1][4] + w[0][4]*w[1][2];
    const double var_133 = var_92 + var_83;
    const double var_134 = var_93 + var_81;
    const double var_135 = var_64 + var_102 + var_134 + var_74;
    const double var_136 = var_63 + var_101;
    const double var_137 = 0.6000000000000000888178420*var_133 + 0.0500000000000000027755576*var_98 + 0.1000000000000000055511151*var_135 + var_7 + var_10 + var_104 + 0.2000000000000000111022302*var_136;
    const double var_138 = var_87 + var_119;
    const double var_139 = -0.0500000000000000027755576*var_20 + var_132 + var_59 + 3.0000000000000000000000000*var_137 + -0.5000000000000000000000000*var_17 + 0.2500000000000000000000000*var_138;
    const double var_140 = -1.0000000000000000000000000*var_59;
    const double var_141 = var_140 + var_119;
    const double var_142 = -1.0000000000000000000000000*var_132;
    const double var_143 = var_16 + var_122;
    const double var_144 = 0.0079365079365079360673718*w[0][1]*w[1][1] + 0.0321428571428571396850771*var_91 + 0.0119047619047619041010577*var_55 + -0.0482142857142857095276156*var_75;
    const double var_145 = var_117 + var_89;
    const double var_146 = var_122 + var_56;
    const double var_147 = 0.1071428571428571369095195*var_139 + var_144 + 0.6428571428571427937015414*var_14 + var_111 + 0.0375000000000000055511151*var_146 + 0.0017857142857142856585267*var_114 + 0.0021825396825396825919996*var_9 + 0.1547619047619047671915382*w[0][2]*w[1][2] + 0.0089285714285714280757933*var_145 + 0.0428571428571428575393654*var_23;
    const double var_148 = 0.0321428571428571396850771*var_11 + 0.0079365079365079360673718*w[0][2]*w[1][2] + 0.0119047619047619041010577*var_9 + -0.0482142857142857095276156*var_74;
    const double var_149 = var_113 + var_15;
    const double var_150 = 0.5000000000000000000000000*var_30;
    const double var_151 = var_84 + var_75 + var_28 + var_63 + var_150;
    const double var_152 = var_64 + var_26;
    const double var_153 = var_66 + 0.2000000000000000111022302*var_152 + var_36 + 0.1000000000000000055511151*var_151 + var_3 + 0.6000000000000000888178420*var_82;
    const double var_154 = var_117 + var_142;
    const double var_155 = var_86 + 0.2500000000000000000000000*var_154 + 3.0000000000000000000000000*var_153 + -0.0500000000000000027755576*var_96 + var_88 + -0.5000000000000000000000000*var_58;
    const double var_156 = 0.6428571428571427937015414*var_94 + var_148 + 0.0428571428571428575393654*var_97 + var_111 + 0.0021825396825396825919996*var_55 + 0.0089285714285714280757933*var_141 + 0.1071428571428571369095195*var_155 + 0.1547619047619047671915382*w[0][1]*w[1][1] + 0.0375000000000000055511151*var_149 + 0.0017857142857142856585267*var_143;
    A[4] = 0.0250000000000000013877788*var_156*var_69;
    const double var_157 = var_102 + var_28;
    const double var_158 = var_88 + var_59;
    const double var_159 = var_116 + var_76 + var_101 + var_26;
    const double var_160 = var_95 + var_60;
    const double var_161 = var_99 + var_45 + -0.0500000000000000027755576*var_70 + var_150 + var_72 + 0.2000000000000000111022302*var_157 + 0.1000000000000000055511151*var_159 + 0.6000000000000000888178420*var_115;
    const double var_162 = var_87 + var_142;
    const double var_163 = var_112 + var_118 + -0.0500000000000000027755576*var_125 + 3.0000000000000000000000000*var_161 + -0.5000000000000000000000000*var_123;
    const double var_164 = 0.1071428571428571369095195*var_163 + var_144 + var_110 + 0.6428571428571427937015414*var_127 + var_148 + -0.0267857142857142842273799*var_158 + 0.0021825396825396825919996*var_73 + 0.0017857142857142856585267*var_108 + 0.0375000000000000055511151*var_131 + 0.0089285714285714280757933*var_162 + 0.1547619047619047671915382*w[0][0]*w[1][0] + 0.0428571428571428575393654*var_124;
    const double var_165 = var_140 + var_142;
    const double var_166 = 0.9642857142857141905523122*var_134 + 0.0158730158730158721347436*var_61 + 0.3214285714285713968507707*var_133 + var_80 + var_68 + 0.0285714285714285705364279*var_47 + 0.0357142857142857123031732*var_165 + 0.0500000000000000027755576*var_160;
    A[0] = 0.0250000000000000013877788*var_164*var_69;
    A[8] = 0.0250000000000000013877788*var_147*var_69;
    A[1] = 0.0062500000000000003469447*var_166*var_69;
    A[6] = A[2];
    A[3] = A[1];
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
