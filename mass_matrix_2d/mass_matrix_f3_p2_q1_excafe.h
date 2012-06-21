#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 58.14 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = 2.0000000000000000000000000*w[1][5];
    const double var_1 = var_0 + -0.3333333333333333148296163*w[1][2];
    const double var_2 = w[0][2]*w[2][1] + w[0][1]*w[2][2];
    const double var_3 = w[0][3]*w[2][0] + w[0][0]*w[2][3];
    const double var_4 = 0.0317460317460317442694873*w[0][3]*w[2][3] + -0.0079365079365079360673718*var_2 + 0.0011904761904761905835781*w[0][0]*w[2][0] + -0.0039682539682539680336859*var_3;
    const double var_5 = w[0][2]*w[2][4] + w[0][4]*w[2][2];
    const double var_6 = w[0][2]*w[1][4]*w[2][2] + var_5*w[1][2];
    const double var_7 = w[0][1]*w[2][5] + w[0][5]*w[2][1];
    const double var_8 = var_7*w[1][1] + w[0][1]*w[1][5]*w[2][1];
    const double var_9 = var_6 + var_8;
    const double var_10 = w[0][2]*w[2][5] + w[0][5]*w[2][2];
    const double var_11 = 0.0416666666666666643537020*w[1][2];
    const double var_12 = w[0][4]*w[2][0] + w[0][0]*w[2][4];
    const double var_13 = w[0][1]*w[2][4] + w[0][4]*w[2][1];
    const double var_14 = -0.1333333333333333314829616*var_13;
    const double var_15 = w[0][1]*w[2][0] + w[0][0]*w[2][1];
    const double var_16 = w[0][2]*w[2][0] + w[0][0]*w[2][2];
    const double var_17 = var_2 + var_16;
    const double var_18 = w[0][2]*w[2][2];
    const double var_19 = w[0][1]*w[2][1];
    const double var_20 = w[0][0]*w[2][0];
    const double var_21 = var_20 + var_19;
    const double var_22 = var_18 + 0.2000000000000000111022302*var_15 + 0.5000000000000000000000000*var_21 + -0.1000000000000000055511151*var_17;
    const double var_23 = 0.0833333333333333287074041*var_22;
    const double var_24 = var_14 + -0.1000000000000000055511151*var_12 + var_23;
    const double var_25 = w[0][3]*w[2][1] + w[0][1]*w[2][3];
    const double var_26 = -0.1000000000000000055511151*var_25;
    const double var_27 = var_26 + var_24;
    const double var_28 = w[1][0] + w[1][2];
    const double var_29 = -w[1][3] + 0.1666666666666666574148081*w[1][0];
    const double var_30 = w[0][5]*w[1][3] + w[0][3]*w[1][5];
    const double var_31 = w[1][4] + var_0;
    const double var_32 = -0.0083333333333333332176851*w[1][1];
    const double var_33 = 0.1000000000000000055511151*var_29;
    const double var_34 = var_11 + -0.0666666666666666657414808*var_31 + var_33 + var_32;
    const double var_35 = 2.0000000000000000000000000*w[1][3];
    const double var_36 = w[1][4] + var_35;
    const double var_37 = 0.0416666666666666643537020*w[1][0];
    const double var_38 = 0.1666666666666666574148081*w[1][2] + -w[1][5];
    const double var_39 = 0.1000000000000000055511151*var_38;
    const double var_40 = -0.0666666666666666657414808*var_36 + var_32 + var_37 + var_39;
    const double var_41 = w[1][1] + var_28;
    const double var_42 = w[0][4]*w[1][4];
    const double var_43 = 0.2500000000000000000000000*w[1][1] + -0.2000000000000000111022302*w[1][4] + -0.0250000000000000013877788*var_28;
    const double var_44 = w[0][4]*w[1][3] + w[0][3]*w[1][4];
    const double var_45 = var_44 + var_1*w[0][5];
    const double var_46 = 0.4000000000000000222044605*var_45;
    const double var_47 = w[0][5]*w[1][4] + w[0][4]*w[1][5];
    const double var_48 = w[0][3]*w[1][3];
    const double var_49 = 0.8000000000000000444089210*var_48 + -0.1333333333333333314829616*w[0][3]*w[1][0] + 0.4000000000000000222044605*var_47;
    const double var_50 = w[0][3]*w[1][2] + w[0][5]*w[1][0];
    const double var_51 = var_49 + 0.3333333333333333148296163*var_43*w[0][1] + var_46 + var_34*w[0][2] + -0.1000000000000000055511151*var_50 + 0.5333333333333333259318465*var_30 + -0.0666666666666666657414808*var_41*w[0][4] + var_40*w[0][0] + 0.4000000000000000222044605*var_42;
    const double var_52 = w[1][5] + var_35;
    const double var_53 = -0.0083333333333333332176851*w[1][2];
    const double var_54 = 0.1666666666666666574148081*w[1][1] + -w[1][4];
    const double var_55 = 0.1000000000000000055511151*var_54;
    const double var_56 = -0.0666666666666666657414808*var_52 + var_53 + var_37 + var_55;
    const double var_57 = 2.0000000000000000000000000*w[1][4];
    const double var_58 = w[1][5] + var_57;
    const double var_59 = 0.0416666666666666643537020*w[1][1];
    const double var_60 = var_53 + -0.0666666666666666657414808*var_58 + var_59 + var_33;
    const double var_61 = w[1][0] + w[1][1];
    const double var_62 = -0.2000000000000000111022302*w[1][5] + -0.0250000000000000013877788*var_61 + 0.2500000000000000000000000*w[1][2];
    const double var_63 = var_60*w[2][1] + 0.3333333333333333148296163*var_62*w[2][2] + var_56*w[2][0];
    const double var_64 = -0.1333333333333333314829616*w[1][0]*w[2][3];
    const double var_65 = var_63 + var_64 + -0.1000000000000000055511151*w[1][1]*w[2][3];
    const double var_66 = -x[0][1];
    const double var_67 = x[1][1] + var_66;
    const double var_68 = -x[0][0];
    const double var_69 = x[2][0] + var_68;
    const double var_70 = x[1][0] + var_68;
    const double var_71 = x[2][1] + var_66;
    const double var_72 = -var_67*var_69 + var_70*var_71;
    const double var_73 = std::abs(var_72);
    const double var_74 = var_5*w[1][0] + var_12*w[1][2] + var_16*w[1][4];
    const double var_75 = 0.1333333333333333314829616*var_30 + var_42;
    const double var_76 = w[0][1]*w[1][4]*w[2][1] + var_13*w[1][1];
    const double var_77 = 0.1904761904761904656169236*var_75*w[2][4] + -0.0190476190476190493372499*var_13*w[1][4] + -0.0079365079365079360673718*var_74 + 0.0035714285714285713170535*var_76;
    const double var_78 = w[0][2]*w[2][3] + w[0][3]*w[2][2];
    const double var_79 = var_78*w[1][1] + var_25*w[1][2] + var_2*w[1][3];
    const double var_80 = 0.1333333333333333314829616*var_47 + var_48;
    const double var_81 = w[0][0]*w[1][3]*w[2][0] + var_3*w[1][0];
    const double var_82 = -0.0190476190476190493372499*var_3*w[1][3] + -0.0079365079365079360673718*var_79 + 0.1904761904761904656169236*var_80*w[2][3] + 0.0035714285714285713170535*var_81;
    const double var_83 = -0.0079365079365079360673718*var_16 + -0.0039682539682539680336859*var_13 + 0.0011904761904761905835781*w[0][1]*w[2][1] + 0.0317460317460317442694873*w[0][4]*w[2][4];
    const double var_84 = w[0][4]*w[2][3] + w[0][3]*w[2][4];
    const double var_85 = var_83 + var_4 + 0.0011904761904761905835781*var_15 + 0.0158730158730158721347436*var_84 + 0.0833333333333333287074041*var_18;
    const double var_86 = w[1][3] + var_57;
    const double var_87 = 0.6666666666666666296592325*w[1][1];
    const double var_88 = -0.5000000000000000000000000*w[1][0] + -var_87;
    const double var_89 = 0.8000000000000000444089210*var_42 + 0.4000000000000000222044605*var_30;
    const double var_90 = w[0][5]*w[1][5];
    const double var_91 = var_89 + var_49 + 0.3333333333333333148296163*var_62*w[0][2] + var_60*w[0][1] + 0.2000000000000000111022302*var_88*w[0][4] + var_56*w[0][0] + -0.1000000000000000055511151*w[0][3]*w[1][1] + 0.5333333333333333259318465*var_44 + -0.0666666666666666657414808*var_41*w[0][5] + 0.4000000000000000222044605*var_90;
    const double var_92 = -0.4000000000000000222044605*w[0][3]*w[2][3];
    const double var_93 = -0.4000000000000000222044605*w[0][4]*w[2][4];
    const double var_94 = var_92 + -0.1666666666666666574148081*var_18 + -0.2666666666666666629659233*var_84 + -0.0166666666666666664353702*var_15 + 0.0250000000000000013877788*var_17 + var_93;
    const double var_95 = w[2][4] + w[2][3];
    const double var_96 = 0.2000000000000000111022302*var_88*w[2][4] + var_65 + 0.4000000000000000222044605*var_95*w[1][5];
    const double var_97 = var_2*w[1][4] + var_5*w[1][1];
    const double var_98 = var_16*w[1][3] + var_78*w[1][0];
    const double var_99 = var_98 + var_97;
    const double var_100 = w[0][1]*w[1][3]*w[2][1] + var_25*w[1][1];
    const double var_101 = w[0][0]*w[1][4]*w[2][0] + var_12*w[1][0];
    const double var_102 = var_101 + var_100;
    const double var_103 = 0.6666666666666666296592325*var_25 + var_12;
    const double var_104 = var_13 + var_12;
    const double var_105 = 0.6666666666666666296592325*var_104 + var_25;
    const double var_106 = var_105*w[1][3] + 0.3333333333333333148296163*var_3*var_58 + var_103*w[1][4];
    const double var_107 = 0.3333333333333333148296163*var_48 + 0.2000000000000000111022302*var_47;
    const double var_108 = 0.3333333333333333148296163*var_42 + 0.2000000000000000111022302*var_30;
    const double var_109 = var_107*w[2][4] + 0.3333333333333333148296163*var_44*var_95 + var_108*w[2][3];
    const double var_110 = var_27*w[1][5] + 0.1250000000000000000000000*var_102 + var_96*w[0][5] + 0.3333333333333333148296163*var_36*var_78 + var_61*var_94 + var_91*w[2][5] + -0.4000000000000000222044605*var_106 + -0.0833333333333333287074041*var_99 + 4.0000000000000000000000000*var_109;
    const double var_111 = var_25*w[1][0] + var_15*w[1][3];
    const double var_112 = var_15*w[1][4] + var_12*w[1][1];
    const double var_113 = var_111 + var_112;
    const double var_114 = -0.1428571428571428492126927*w[0][0]*w[2][0] + 0.5000000000000000000000000*var_3;
    const double var_115 = -0.1428571428571428492126927*w[0][1]*w[2][1] + 0.5000000000000000000000000*var_13;
    const double var_116 = var_114*w[1][1] + var_115*w[1][0];
    const double var_117 = w[0][2]*w[1][3]*w[2][2] + var_78*w[1][2];
    const double var_118 = var_117 + var_6;
    const double var_119 = 0.0055555555555555557675773*var_116 + 0.0027777777777777778837887*var_113 + 0.0158730158730158721347436*var_5*var_86 + 0.0476190476190476164042309*var_110 + var_85*w[1][2] + var_77 + var_82 + 0.0357142857142857123031732*var_118;
    A[8] = 0.0666666666666666657414808*var_119*var_73;
    const double var_120 = var_15 + var_16;
    const double var_121 = var_19 + var_18;
    const double var_122 = var_20 + 0.2000000000000000111022302*var_2 + -0.1000000000000000055511151*var_120 + 0.5000000000000000000000000*var_121;
    const double var_123 = 0.0833333333333333287074041*var_122;
    const double var_124 = -0.1333333333333333314829616*var_10;
    const double var_125 = var_123 + -0.1000000000000000055511151*var_7 + var_124;
    const double var_126 = var_7 + 0.6666666666666666296592325*var_5;
    const double var_127 = -0.5000000000000000000000000*w[0][1]*w[2][1] + var_13;
    const double var_128 = w[0][5]*w[2][0] + w[0][0]*w[2][5];
    const double var_129 = -0.1000000000000000055511151*var_128;
    const double var_130 = -0.1333333333333333314829616*w[1][2]*w[2][5];
    const double var_131 = 0.0011904761904761905835781*w[0][2]*w[2][2] + -0.0079365079365079360673718*var_15 + 0.0317460317460317442694873*w[0][5]*w[2][5] + -0.0039682539682539680336859*var_10;
    const double var_132 = w[0][5]*w[2][4] + w[0][4]*w[2][5];
    const double var_133 = var_131 + 0.0011904761904761905835781*var_2 + var_83 + 0.0833333333333333287074041*var_20 + 0.0158730158730158721347436*var_132;
    const double var_134 = w[1][3] + var_0;
    const double var_135 = w[2][5] + w[2][3];
    const double var_136 = var_3 + var_78;
    const double var_137 = -0.8000000000000000444089210*var_136*w[1][5] + var_25*var_52 + var_134*var_7 + 4.0000000000000000000000000*var_135*var_30;
    const double var_138 = -w[0][3]*w[1][0]*w[2][3] + -0.2500000000000000000000000*var_79 + var_29*var_3;
    const double var_139 = w[0][2]*w[1][5]*w[2][2] + var_10*w[1][2];
    const double var_140 = 2.6666666666666665186369300*w[1][5] + -0.5000000000000000000000000*w[1][2];
    const double var_141 = 4.0000000000000000000000000*var_44 + var_140*w[0][5];
    const double var_142 = w[2][5] + w[2][4];
    const double var_143 = var_142*var_48 + -var_5*w[1][4] + -0.3333333333333333148296163*var_13*var_134 + -var_126*w[1][5];
    const double var_144 = -0.0083333333333333332176851*w[1][0];
    const double var_145 = var_144 + -0.0666666666666666657414808*var_86 + var_59 + var_39;
    const double var_146 = var_144 + -0.0666666666666666657414808*var_134 + var_11 + var_55;
    const double var_147 = w[1][1] + w[1][2];
    const double var_148 = 0.2500000000000000000000000*w[1][0] + -0.2000000000000000111022302*w[1][3] + -0.0250000000000000013877788*var_147;
    const double var_149 = 0.5000000000000000000000000*w[1][2] + var_87;
    const double var_150 = -0.2000000000000000111022302*var_149*w[0][4] + 0.3333333333333333148296163*var_148*w[0][0] + var_145*w[0][1] + -0.0666666666666666657414808*var_41*w[0][3] + var_146*w[0][2] + -0.1000000000000000055511151*w[0][5]*w[1][1] + 0.4000000000000000222044605*var_48 + 0.5333333333333333259318465*var_47 + var_89 + var_46;
    const double var_151 = var_128*w[1][0] + w[0][0]*w[1][5]*w[2][0];
    const double var_152 = var_146*w[2][2] + var_145*w[2][1] + 0.3333333333333333148296163*var_148*w[2][0];
    const double var_153 = var_152 + -0.1000000000000000055511151*w[1][1]*w[2][5] + var_130;
    const double var_154 = var_40*w[2][0] + 0.3333333333333333148296163*var_43*w[2][1] + var_34*w[2][2];
    const double var_155 = var_154 + var_130 + -0.1000000000000000055511151*w[1][0]*w[2][5];
    const double var_156 = var_15 + var_2;
    const double var_157 = var_20 + var_18;
    const double var_158 = var_19 + 0.2000000000000000111022302*var_16 + 0.5000000000000000000000000*var_157 + -0.1000000000000000055511151*var_156;
    const double var_159 = 0.0833333333333333287074041*var_158;
    const double var_160 = var_159 + var_129 + var_124;
    const double var_161 = var_2*w[1][1] + var_15*var_61 + var_16*w[1][0];
    const double var_162 = -0.5000000000000000000000000*var_17 + var_128 + var_7;
    const double var_163 = var_10 + -0.5000000000000000000000000*w[0][2]*w[2][2];
    const double var_164 = var_162*w[1][2] + var_17*w[1][5] + var_163*var_61;
    const double var_165 = var_42 + var_48;
    const double var_166 = var_30 + 4.0000000000000000000000000*w[0][5]*w[1][5] + var_47 + 0.6666666666666666296592325*var_165;
    const double var_167 = var_44 + 2.0000000000000000000000000*var_166;
    const double var_168 = var_160*w[1][3] + 0.0500000000000000027755576*var_18*w[1][5] + var_150*w[2][4] + var_51*w[2][3] + var_153*w[0][4] + var_155*w[0][3] + var_125*w[1][4] + 0.0083333333333333332176851*var_164 + -0.0208333333333333321768510*var_161 + 0.1666666666666666574148081*var_151 + 0.4000000000000000222044605*var_167*w[2][5];
    const double var_169 = -0.1333333333333333314829616*var_3;
    const double var_170 = var_169 + -0.1000000000000000055511151*var_78 + var_159;
    const double var_171 = var_170 + var_129;
    const double var_172 = -0.4000000000000000222044605*w[0][5]*w[2][5];
    const double var_173 = var_172 + -0.2666666666666666629659233*var_132 + 0.0250000000000000013877788*var_120 + -0.0166666666666666664353702*var_2 + -0.1666666666666666574148081*var_20 + var_93;
    const double var_174 = var_2*w[1][5] + var_7*w[1][2];
    const double var_175 = var_111 + var_174;
    const double var_176 = var_128*w[1][2] + var_16*w[1][5];
    const double var_177 = var_176 + var_98;
    const double var_178 = 2.6666666666666665186369300*w[0][4]*w[1][4] + 4.0000000000000000000000000*var_30 + var_141 + 2.0000000000000000000000000*var_47 + -0.6666666666666666296592325*w[0][5]*w[1][0] + 16.0000000000000000000000000*w[0][3]*w[1][3];
    const double var_179 = var_16*w[1][1] + var_2*w[1][0] + var_15*w[1][2];
    const double var_180 = 0.0027777777777777778837887*var_179;
    const double var_181 = w[1][0] + -0.1666666666666666574148081*var_147;
    const double var_182 = var_180 + 0.0416666666666666643537020*var_181*w[0][0]*w[2][0];
    const double var_183 = w[1][1] + -0.1666666666666666574148081*var_28;
    const double var_184 = 0.0416666666666666643537020*var_183*w[0][1]*w[2][1];
    const double var_185 = var_128*w[1][1] + var_15*w[1][5] + var_7*w[1][0];
    const double var_186 = var_10*var_38 + -0.2500000000000000000000000*var_185 + -w[0][5]*w[1][2]*w[2][5];
    const double var_187 = 0.3333333333333333148296163*var_168 + var_182 + 0.0555555555555555524716027*var_8 + var_184 + 0.1000000000000000055511151*var_186;
    A[1] = 0.0095238095238095246686250*var_187*var_73;
    const double var_188 = -0.1428571428571428492126927*w[0][2]*w[2][2] + 0.5000000000000000000000000*var_10;
    const double var_189 = 0.8000000000000000444089210*var_44 + 1.3333333333333332593184650*w[0][5]*w[1][5];
    const double var_190 = w[0][5]*w[2][3] + w[0][3]*w[2][5];
    const double var_191 = var_92 + 0.0250000000000000013877788*var_156 + var_172 + -0.2666666666666666629659233*var_190 + -0.0166666666666666664353702*var_16 + -0.1666666666666666574148081*var_19;
    const double var_192 = var_155 + -0.1000000000000000055511151*w[1][2]*w[2][3] + var_64;
    const double var_193 = var_78 + 0.6666666666666666296592325*var_128;
    const double var_194 = var_135*var_42 + -var_193*w[1][3] + -0.3333333333333333148296163*var_10*var_36 + -var_128*w[1][5];
    const double var_195 = var_151 + var_117;
    const double var_196 = 0.1250000000000000000000000*var_195 + var_192*w[0][4] + -0.0833333333333333287074041*var_175 + var_51*w[2][4] + 0.4000000000000000222044605*var_194 + var_191*var_28 + 0.3333333333333333148296163*var_137 + var_171*w[1][4] + var_189*w[2][3] + 4.0000000000000000000000000*var_107*w[2][5];
    const double var_197 = w[1][2] + -0.1666666666666666574148081*var_61;
    const double var_198 = 0.0416666666666666643537020*var_197*w[0][2]*w[2][2];
    const double var_199 = 2.6666666666666665186369300*w[1][3] + var_88;
    const double var_200 = 16.0000000000000000000000000*w[0][4]*w[1][4] + 2.0000000000000000000000000*var_30 + var_141 + -0.6666666666666666296592325*w[0][5]*w[1][1] + 4.0000000000000000000000000*var_47 + var_199*w[0][3];
    const double var_201 = -0.1000000000000000055511151*var_5;
    const double var_202 = var_201 + var_14 + var_123;
    const double var_203 = var_15*w[1][0] + var_16*var_28 + var_2*w[1][2];
    const double var_204 = var_12 + -0.5000000000000000000000000*var_156 + var_5;
    const double var_205 = var_156*w[1][4] + var_204*w[1][1] + var_127*var_28;
    const double var_206 = 0.0500000000000000027755576*var_19*w[1][4] + -0.0208333333333333321768510*var_203 + var_150*w[2][5] + var_63*w[0][3] + 0.2000000000000000111022302*var_200*w[2][4] + var_202*w[1][5] + 0.1666666666666666574148081*var_6 + var_152*w[0][5] + var_24*w[1][3] + 0.0083333333333333332176851*var_205 + var_91*w[2][3];
    const double var_207 = -w[0][4]*w[1][1]*w[2][4] + -0.2500000000000000000000000*var_74 + var_13*var_54;
    const double var_208 = var_182 + var_198 + 0.0555555555555555524716027*var_101 + 0.3333333333333333148296163*var_206 + 0.1000000000000000055511151*var_207;
    const double var_209 = var_26 + var_169 + var_23;
    const double var_210 = var_15*w[1][1] + var_147*var_2 + var_16*w[1][2];
    const double var_211 = var_78 + -0.5000000000000000000000000*var_120 + var_25;
    const double var_212 = var_3 + -0.5000000000000000000000000*w[0][0]*w[2][0];
    const double var_213 = var_211*w[1][0] + var_120*w[1][3] + var_147*var_212;
    const double var_214 = -0.0208333333333333321768510*var_210 + 0.1666666666666666574148081*var_100 + var_65*w[0][4] + var_154*w[0][5] + 0.0500000000000000027755576*var_20*w[1][3] + var_209*w[1][4] + var_91*w[2][4] + 0.2000000000000000111022302*var_178*w[2][3] + var_51*w[2][5] + var_170*w[1][5] + 0.0083333333333333332176851*var_213;
    A[2] = 0.0095238095238095246686250*var_208*var_73;
    A[6] = A[2];
    const double var_215 = var_188*w[1][0] + var_114*w[1][2];
    const double var_216 = 0.3333333333333333148296163*var_214 + var_184 + var_180 + 0.0555555555555555524716027*var_117 + var_198 + 0.1000000000000000055511151*var_138;
    A[5] = 0.0095238095238095246686250*var_216*var_73;
    A[7] = A[5];
    const double var_217 = 0.1333333333333333314829616*var_44 + var_90;
    const double var_218 = var_7 + var_10;
    const double var_219 = 4.0000000000000000000000000*var_142*var_47 + -0.8000000000000000444089210*var_218*w[1][4] + var_12*var_58 + var_128*var_31;
    const double var_220 = -0.0190476190476190493372499*var_10*w[1][5] + -0.0079365079365079360673718*var_185 + 0.1904761904761904656169236*var_217*w[2][5] + 0.0035714285714285713170535*var_139;
    const double var_221 = var_176 + var_112;
    const double var_222 = -0.2000000000000000111022302*var_149*w[0][3] + var_189;
    const double var_223 = var_201 + var_125;
    const double var_224 = var_223*w[1][3] + 0.4000000000000000222044605*var_143 + 0.3333333333333333148296163*var_219 + var_153*w[0][3] + var_147*var_173 + 0.1250000000000000000000000*var_9 + -0.0833333333333333287074041*var_221 + var_150*w[2][3] + 4.0000000000000000000000000*var_108*w[2][5] + var_222*w[2][4];
    const double var_225 = var_151 + var_101;
    const double var_226 = var_174 + var_97;
    const double var_227 = var_115*w[1][2] + var_188*w[1][1];
    const double var_228 = var_220 + var_77 + 0.0476190476190476164042309*var_224 + 0.0055555555555555557675773*var_227 + 0.0027777777777777778837887*var_226 + var_133*w[1][0] + 0.0357142857142857123031732*var_225;
    A[0] = 0.0666666666666666657414808*var_228*var_73;
    A[3] = A[1];
    const double var_229 = var_8 + var_100;
    const double var_230 = 0.0833333333333333287074041*var_19 + var_4 + var_131 + 0.0011904761904761905835781*var_16 + 0.0158730158730158721347436*var_190;
    const double var_231 = 0.0027777777777777778837887*var_177 + var_82 + var_220 + 0.0476190476190476164042309*var_196 + var_230*w[1][1] + 0.0357142857142857123031732*var_229 + 0.0055555555555555557675773*var_215;
    A[4] = 0.0666666666666666657414808*var_231*var_73;
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
