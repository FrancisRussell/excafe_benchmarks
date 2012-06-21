#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 38.04 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[0][2]*w[1][8] + w[0][8]*w[1][2];
    const double var_1 = w[0][6]*w[1][1] + w[0][1]*w[1][6];
    const double var_2 = var_1 + var_0;
    const double var_3 = w[0][4]*w[1][7] + w[0][7]*w[1][4];
    const double var_4 = w[0][0]*w[1][0];
    const double var_5 = w[0][8]*w[1][4] + w[0][4]*w[1][8];
    const double var_6 = -0.5000000000000000000000000*var_5;
    const double var_7 = w[0][3]*w[1][9] + w[0][9]*w[1][3];
    const double var_8 = var_6 + -var_7;
    const double var_9 = w[0][8]*w[1][6] + w[0][6]*w[1][8];
    const double var_10 = w[0][4]*w[1][9] + w[0][9]*w[1][4];
    const double var_11 = -w[0][3]*w[1][6] + -w[0][6]*w[1][3];
    const double var_12 = 0.5000000000000000000000000*var_11;
    const double var_13 = -var_10 + var_12;
    const double var_14 = w[0][4]*w[1][4];
    const double var_15 = w[0][3]*w[1][3];
    const double var_16 = var_14 + var_15;
    const double var_17 = var_13 + var_16 + var_9 + var_8;
    const double var_18 = w[0][5]*w[1][9] + w[0][9]*w[1][5];
    const double var_19 = w[0][8]*w[1][5] + w[0][5]*w[1][8];
    const double var_20 = w[0][5]*w[1][6] + w[0][6]*w[1][5];
    const double var_21 = var_20 + var_19;
    const double var_22 = var_18 + -0.5000000000000000000000000*var_21;
    const double var_23 = w[0][9]*w[1][6] + w[0][6]*w[1][9];
    const double var_24 = var_23 + var_12;
    const double var_25 = var_24 + var_22;
    const double var_26 = w[0][5]*w[1][1] + w[0][1]*w[1][5];
    const double var_27 = var_1 + var_26;
    const double var_28 = w[0][2]*w[1][7] + w[0][7]*w[1][2];
    const double var_29 = var_26 + var_28;
    const double var_30 = w[0][3]*w[1][0] + w[0][0]*w[1][3];
    const double var_31 = var_0 + var_30;
    const double var_32 = w[0][7]*w[1][9] + w[0][9]*w[1][7];
    const double var_33 = -w[0][6]*w[1][7] + -w[0][7]*w[1][6];
    const double var_34 = 0.5000000000000000000000000*var_33;
    const double var_35 = var_32 + var_34;
    const double var_36 = w[0][1]*w[1][0] + w[0][0]*w[1][1];
    const double var_37 = w[0][5]*w[1][3] + w[0][3]*w[1][5];
    const double var_38 = w[0][6]*w[1][4] + w[0][4]*w[1][6];
    const double var_39 = w[0][9]*w[1][2] + w[0][2]*w[1][9] + 1.5000000000000000000000000*var_38;
    const double var_40 = -0.0482142857142857095276156*var_37 + 0.0079365079365079360673718*w[0][2]*w[1][2] + 0.0119047619047619041010577*var_36 + 0.0321428571428571396850771*var_39;
    const double var_41 = w[0][5]*w[1][5];
    const double var_42 = w[0][6]*w[1][6];
    const double var_43 = var_41 + var_42;
    const double var_44 = -x[0][1];
    const double var_45 = x[1][1] + var_44;
    const double var_46 = -x[0][0];
    const double var_47 = x[2][0] + var_46;
    const double var_48 = x[1][0] + var_46;
    const double var_49 = x[2][1] + var_44;
    const double var_50 = -var_45*var_47 + var_48*var_49;
    const double var_51 = std::abs(var_50);
    const double var_52 = -w[0][3]*w[1][4] + -w[0][4]*w[1][3];
    const double var_53 = w[0][2]*w[1][1] + w[0][1]*w[1][2];
    const double var_54 = w[0][5]*w[1][7] + w[0][7]*w[1][5];
    const double var_55 = w[0][0]*w[1][9] + 1.5000000000000000000000000*var_54 + w[0][9]*w[1][0];
    const double var_56 = 0.7714285714285713524418497*w[0][9]*w[1][9];
    const double var_57 = 0.0321428571428571396850771*var_55 + 0.1607142857142856984253854*var_52 + 0.0119047619047619041010577*var_53 + 0.0079365079365079360673718*w[0][0]*w[1][0] + -0.0482142857142857095276156*var_9 + var_56;
    const double var_58 = w[0][2]*w[1][0] + w[0][0]*w[1][2];
    const double var_59 = w[0][8]*w[1][8];
    const double var_60 = var_15 + var_59;
    const double var_61 = w[0][6]*w[1][2] + w[0][2]*w[1][6];
    const double var_62 = -var_61;
    const double var_63 = w[0][5]*w[1][0] + w[0][0]*w[1][5];
    const double var_64 = -var_63;
    const double var_65 = var_64 + var_62;
    const double var_66 = w[0][5]*w[1][2] + w[0][2]*w[1][5];
    const double var_67 = w[0][6]*w[1][0] + w[0][0]*w[1][6];
    const double var_68 = var_67 + var_66;
    const double var_69 = w[0][2]*w[1][3] + w[0][3]*w[1][2];
    const double var_70 = w[0][8]*w[1][0] + w[0][0]*w[1][8];
    const double var_71 = var_69 + var_70;
    const double var_72 = w[0][3]*w[1][1] + w[0][1]*w[1][3];
    const double var_73 = w[0][8]*w[1][1] + w[0][1]*w[1][8];
    const double var_74 = w[0][7]*w[1][1] + w[0][1]*w[1][7];
    const double var_75 = w[0][4]*w[1][1] + w[0][1]*w[1][4];
    const double var_76 = var_75 + var_74;
    const double var_77 = w[0][0]*w[1][4] + w[0][4]*w[1][0];
    const double var_78 = var_77 + var_28;
    const double var_79 = w[0][7]*w[1][8] + w[0][8]*w[1][7];
    const double var_80 = w[0][8]*w[1][9] + w[0][9]*w[1][8];
    const double var_81 = var_6 + -0.5000000000000000000000000*var_79 + var_80;
    const double var_82 = w[0][8]*w[1][3] + w[0][3]*w[1][8];
    const double var_83 = -w[0][3]*w[1][7] + -w[0][7]*w[1][3];
    const double var_84 = 0.5000000000000000000000000*var_83;
    const double var_85 = var_7 + var_84;
    const double var_86 = w[0][7]*w[1][7];
    const double var_87 = var_14 + var_86;
    const double var_88 = -var_18 + var_34;
    const double var_89 = -w[0][5]*w[1][4] + -w[0][4]*w[1][5];
    const double var_90 = 0.5000000000000000000000000*var_89;
    const double var_91 = -var_23 + var_90;
    const double var_92 = -var_20;
    const double var_93 = 0.5000000000000000000000000*var_92;
    const double var_94 = var_91 + var_88 + var_3 + var_43 + var_93;
    const double var_95 = -0.5000000000000000000000000*var_19 + -var_32;
    const double var_96 = var_95 + var_13;
    const double var_97 = var_82 + 0.6000000000000000888178420*var_87 + 0.1000000000000000055511151*var_94 + var_85 + var_81 + 0.2000000000000000111022302*var_96;
    const double var_98 = w[0][2]*w[1][4] + w[0][4]*w[1][2];
    const double var_99 = -var_98;
    const double var_100 = w[0][0]*w[1][7] + w[0][7]*w[1][0];
    const double var_101 = -var_100;
    const double var_102 = var_99 + var_101;
    const double var_103 = var_72 + -0.0500000000000000027755576*var_78 + -0.5000000000000000000000000*var_76 + 0.2500000000000000000000000*var_102 + 3.0000000000000000000000000*var_97 + var_73;
    const double var_104 = 0.0089285714285714280757933*var_65 + 0.1547619047619047671915382*w[0][1]*w[1][1] + var_57 + 0.6428571428571427937015414*var_60 + 0.0017857142857142856585267*var_68 + 0.0021825396825396825919996*var_58 + var_40 + 0.0375000000000000055511151*var_71 + 0.0428571428571428575393654*var_31 + 0.1071428571428571369095195*var_103;
    A[4] = 0.0250000000000000013877788*var_104*var_51;
    const double var_105 = w[0][9]*w[1][1] + w[0][1]*w[1][9] + 1.5000000000000000000000000*var_82;
    const double var_106 = -0.0482142857142857095276156*var_3 + 0.0079365079365079360673718*w[0][1]*w[1][1] + 0.0119047619047619041010577*var_58 + 0.0321428571428571396850771*var_105;
    const double var_107 = w[0][2]*w[1][2];
    const double var_108 = var_77 + var_30;
    const double var_109 = -var_3 + -var_9 + -var_37;
    const double var_110 = 2.3142857142857140573255492*w[0][9]*w[1][9] + 0.0642857142857142793701541*var_109;
    const double var_111 = var_110 + 0.3214285714285713968507707*var_54 + 0.0015873015873015873002105*var_53 + 0.1285714285714285587403083*var_52 + 0.0476190476190476164042309*var_4;
    const double var_112 = var_69 + var_66;
    const double var_113 = 0.0015873015873015873002105*var_36 + 0.3214285714285713968507707*var_38 + 0.0476190476190476164042309*var_107;
    const double var_114 = -var_73;
    const double var_115 = -var_72;
    const double var_116 = var_114 + var_115;
    const double var_117 = w[0][1]*w[1][1];
    const double var_118 = -var_80 + var_84;
    const double var_119 = -var_79;
    const double var_120 = var_118 + var_8 + var_119;
    const double var_121 = var_10 + var_90;
    const double var_122 = var_121 + var_35;
    const double var_123 = 0.2500000000000000000000000*var_31 + 4.5000000000000000000000000*var_120 + var_78 + var_76 + 0.3611111111111111049432054*var_58 + 6.7500000000000000000000000*var_60 + 13.5000000000000000000000000*var_25 + 3.0000000000000000000000000*var_105 + 9.0000000000000000000000000*var_122;
    const double var_124 = 0.0500000000000000027755576*var_27 + 0.0158730158730158721347436*var_117 + 0.3214285714285713968507707*var_87 + var_111 + var_113 + 0.9642857142857141905523122*var_43 + 0.0357142857142857123031732*var_116 + 0.0285714285714285705364279*var_123;
    A[2] = 0.0062500000000000003469447*var_124*var_51;
    A[6] = A[2];
    const double var_125 = var_75 + var_69;
    const double var_126 = var_59 + var_42;
    const double var_127 = var_91 + var_118;
    const double var_128 = var_35 + 0.5000000000000000000000000*var_119 + 0.0500000000000000027755576*var_52 + var_22 + 0.1000000000000000055511151*var_17 + var_54 + 0.6000000000000000888178420*var_126 + 0.2000000000000000111022302*var_127;
    const double var_129 = var_75 + var_67;
    const double var_130 = var_14 + var_42;
    const double var_131 = var_30 + var_26;
    const double var_132 = var_1 + var_77;
    const double var_133 = var_91 + var_13;
    const double var_134 = var_35 + var_81;
    const double var_135 = var_85 + var_22;
    const double var_136 = var_131 + 9.0000000000000000000000000*var_135 + 4.5000000000000000000000000*var_133 + 0.3611111111111111049432054*var_36 + var_112 + 0.2500000000000000000000000*var_132 + 13.5000000000000000000000000*var_134 + 3.0000000000000000000000000*var_39 + 6.7500000000000000000000000*var_130;
    const double var_137 = var_15 + var_41;
    const double var_138 = var_86 + var_59;
    const double var_139 = var_37 + var_138 + var_95 + var_118;
    const double var_140 = var_24 + var_93;
    const double var_141 = var_88 + var_8;
    const double var_142 = -0.0500000000000000027755576*var_79 + 0.1000000000000000055511151*var_139 + var_38 + 0.6000000000000000888178420*var_137 + var_140 + var_121 + 0.2000000000000000111022302*var_141;
    const double var_143 = 0.3214285714285713968507707*var_82 + 0.0015873015873015873002105*var_58 + 0.0476190476190476164042309*var_117;
    const double var_144 = var_72 + var_63;
    const double var_145 = var_74 + var_70;
    const double var_146 = var_114 + var_101;
    const double var_147 = 3.0000000000000000000000000*var_142 + -0.0500000000000000027755576*var_131 + var_98 + -0.5000000000000000000000000*var_112 + var_61;
    const double var_148 = 0.0089285714285714280757933*var_146 + var_57 + 0.0021825396825396825919996*var_36 + 0.1547619047619047671915382*w[0][2]*w[1][2] + 0.6428571428571427937015414*var_130 + -0.0267857142857142842273799*var_144 + 0.0428571428571428575393654*var_132 + 0.0017857142857142856585267*var_145 + var_106 + 0.0375000000000000055511151*var_129 + 0.1071428571428571369095195*var_147;
    A[8] = 0.0250000000000000013877788*var_148*var_51;
    const double var_149 = var_86 + var_41;
    const double var_150 = var_0 + var_28;
    const double var_151 = var_99 + var_62;
    const double var_152 = 0.0158730158730158721347436*var_107 + 0.3214285714285713968507707*var_137 + 0.0500000000000000027755576*var_150 + var_111 + var_143 + 0.0357142857142857123031732*var_151 + 0.9642857142857141905523122*var_138 + 0.0285714285714285705364279*var_136;
    A[1] = 0.0062500000000000003469447*var_152*var_51;
    A[3] = A[1];
    const double var_153 = var_101 + var_64;
    const double var_154 = var_70 + var_67;
    const double var_155 = var_85 + var_121;
    const double var_156 = var_140 + var_81;
    const double var_157 = var_149 + var_52;
    const double var_158 = var_95 + var_88;
    const double var_159 = 3.0000000000000000000000000*var_55 + 4.5000000000000000000000000*var_158 + 9.0000000000000000000000000*var_156 + var_2 + 0.3611111111111111049432054*var_53 + 13.5000000000000000000000000*var_155 + 6.7500000000000000000000000*var_157 + 0.2500000000000000000000000*var_29 + var_154;
    const double var_160 = 0.0158730158730158721347436*var_4 + 0.0357142857142857123031732*var_153 + 0.0500000000000000027755576*var_108 + var_143 + 0.9642857142857141905523122*var_16 + var_113 + 0.3214285714285713968507707*var_126 + var_110 + 0.0285714285714285705364279*var_159;
    A[5] = 0.0062500000000000003469447*var_160*var_51;
    const double var_161 = var_99 + var_115;
    const double var_162 = var_114 + var_62;
    const double var_163 = var_74 + var_66;
    const double var_164 = -0.0500000000000000027755576*var_2 + 0.2500000000000000000000000*var_162 + -0.5000000000000000000000000*var_154 + var_100 + var_63 + 3.0000000000000000000000000*var_128;
    const double var_165 = 0.0375000000000000055511151*var_163 + var_56 + 0.0428571428571428575393654*var_29 + var_40 + 0.0089285714285714280757933*var_161 + 0.0021825396825396825919996*var_53 + 0.6428571428571427937015414*var_149 + 0.0017857142857142856585267*var_125 + 0.1547619047619047671915382*w[0][0]*w[1][0] + var_106 + 0.1071428571428571369095195*var_164;
    A[0] = 0.0250000000000000013877788*var_165*var_51;
    A[7] = A[5];
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
