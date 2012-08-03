#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 50.29 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = -x[0][0];
    const double var_1 = x[1][0] + var_0;
    const double var_2 = -x[0][1];
    const double var_3 = x[1][1] + var_2;
    const double var_4 = var_1*var_1 + var_3*var_3;
    const double var_5 = var_4*w[0][4];
    const double var_6 = x[2][1] + var_2;
    const double var_7 = x[2][0] + var_0;
    const double var_8 = var_7*var_7 + var_6*var_6;
    const double var_9 = var_8*w[0][5];
    const double var_10 = var_9 + var_5;
    const double var_11 = var_8*w[0][1];
    const double var_12 = var_3*var_6 + var_1*var_7;
    const double var_13 = var_12*w[0][2];
    const double var_14 = var_13 + var_11;
    const double var_15 = -var_3*var_7 + var_1*var_6;
    const double var_16 = var_15;
    const double var_17 = std::abs(var_16);
    const double var_18 = var_15;
    const double var_19 = w[0][2] + w[0][0];
    const double var_20 = -w[0][0];
    const double var_21 = var_20*var_8;
    const double var_22 = var_8*w[0][3];
    const double var_23 = w[0][5] + w[0][3];
    const double var_24 = 14.6000000000000014210854715*var_12*w[0][1] + 7.4000000000000003552713679*var_12*var_23;
    const double var_25 = -0.2375000000000000166533454*var_8*w[0][2];
    const double var_26 = 0.2000000000000000111022302*var_12;
    const double var_27 = var_8 + var_26;
    const double var_28 = 0.2000000000000000111022302*var_22 + -0.3750000000000000000000000*var_27*w[0][4] + 0.0250000000000000013877788*var_21 + 0.2125000000000000222044605*var_12*var_19 + 0.5125000000000000666133815*var_8*w[0][1] + var_25 + 0.1000000000000000055511151*var_9 + -0.1250000000000000000000000*var_24;
    A[13] = 0.2142857142857142738190390*var_17*var_28/(var_18*var_18);
    const double var_29 = var_12*w[0][4];
    const double var_30 = -var_29;
    const double var_31 = var_30 + var_22;
    const double var_32 = var_4*w[0][5];
    const double var_33 = -var_8*w[0][3];
    const double var_34 = var_4*w[0][1];
    const double var_35 = var_12*w[0][5];
    const double var_36 = 0.5000000000000000000000000*var_8*w[0][0];
    const double var_37 = 0.0142857142857142852682140*var_36;
    const double var_38 = 0.0107142857142857143848413*var_34 + -0.0642857142857142793701541*var_4*w[0][4] + var_37 + 0.0250000000000000013877788*var_35;
    const double var_39 = var_12*w[0][3];
    const double var_40 = 0.0750000000000000111022302*var_39;
    const double var_41 = 0.0607142857142857136909520*var_12*w[0][0] + var_40;
    const double var_42 = -0.0107142857142857143848413*var_8*w[0][5];
    const double var_43 = -var_12;
    const double var_44 = var_43*w[0][1];
    const double var_45 = -var_4*w[0][3];
    const double var_46 = 0.0714285714285714246063463*var_11 + var_45;
    const double var_47 = var_8*w[0][4];
    const double var_48 = 0.0178571428571428561515866*var_47;
    const double var_49 = var_4*w[0][2];
    const double var_50 = -var_49;
    const double var_51 = 0.0071428571428571426341070*var_50;
    const double var_52 = var_48 + 0.0285714285714285705364279*var_44 + var_41 + var_42 + var_51 + 0.0142857142857142852682140*var_13 + 0.0714285714285714246063463*var_32 + 0.0392857142857142849212693*var_4*w[0][0] + 0.0035714285714285713170535*var_29 + var_38 + 0.0500000000000000027755576*var_46 + 0.0178571428571428561515866*var_33;
    A[67] = 2.2500000000000000000000000*var_17*var_52/(var_18*var_18);
    const double var_53 = var_43*w[0][2];
    const double var_54 = var_53 + var_33;
    const double var_55 = 60.3333333333333285963817616*var_23 + 111.0000000000000000000000000*w[0][1] + 24.3333333333333321490954404*w[0][4] + -9.0000000000000000000000000*var_19;
    const double var_56 = var_8 + var_4;
    const double var_57 = var_49 + var_11;
    const double var_58 = var_32 + var_47;
    const double var_59 = var_8*w[0][2];
    const double var_60 = var_34 + var_59;
    const double var_61 = w[0][3] + var_20;
    const double var_62 = w[0][5] + w[0][4];
    const double var_63 = w[0][2] + w[0][1];
    const double var_64 = -6.2000000000000001776356839*var_62 + var_63 + -5.4000000000000003552713679*w[0][3];
    const double var_65 = 0.2750000000000000222044605*var_56*var_61 + 0.1250000000000000000000000*var_12*var_64 + 0.1500000000000000222044605*var_10 + -0.6500000000000000222044605*var_12*w[0][0] + 0.0375000000000000055511151*var_60 + 0.0125000000000000006938894*var_57 + -0.2000000000000000111022302*var_58;
    const double var_66 = var_4*w[0][3];
    const double var_67 = -var_35;
    const double var_68 = var_66 + var_67;
    const double var_69 = var_12*w[0][0];
    const double var_70 = 0.0071428571428571426341070*var_69 + -0.1214285714285714273819039*var_12*w[0][3];
    const double var_71 = 0.0071428571428571426341070*var_5;
    const double var_72 = var_20*var_4;
    const double var_73 = -var_32;
    const double var_74 = 0.0285714285714285705364279*var_72 + 0.1000000000000000055511151*var_73;
    const double var_75 = -var_13;
    const double var_76 = -var_47;
    const double var_77 = var_76 + var_22;
    const double var_78 = var_75 + var_77;
    const double var_79 = var_12*w[0][1];
    const double var_80 = var_79 + var_49;
    const double var_81 = 0.0285714285714285705364279*var_80 + var_37 + 0.0428571428571428575393654*var_78 + 0.5000000000000000000000000*var_74 + var_71 + -0.1357142857142857039765005*var_12*w[0][4] + -0.0071428571428571426341070*var_56*w[0][1] + var_70 + 0.0357142857142857123031732*var_68;
    const double var_82 = var_45 + var_44;
    A[69] = 6.7500000000000000000000000*var_17*var_81/(var_18*var_18);
    A[96] = A[69];
    const double var_83 = var_12*var_20;
    const double var_84 = var_56*w[0][0];
    const double var_85 = 0.0357142857142857123031732*var_83 + 0.1607142857142856984253854*var_12*w[0][3] + 0.0178571428571428561515866*var_84;
    const double var_86 = -var_11;
    const double var_87 = -var_34;
    const double var_88 = 0.1500000000000000222044605*var_5 + var_87;
    const double var_89 = 0.0357142857142857123031732*var_9;
    const double var_90 = 0.0035714285714285713170535*var_59 + var_89;
    const double var_91 = -0.0750000000000000111022302*var_12*w[0][2];
    const double var_92 = 0.0714285714285714246063463*var_49 + var_33;
    const double var_93 = var_79 + var_92;
    const double var_94 = var_85 + -0.0321428571428571396850771*var_12*w[0][4] + 0.0464285714285714301574615*var_4*w[0][5] + -0.0607142857142857136909520*var_4*w[0][3] + 0.1428571428571428492126927*var_91 + -0.0821428571428571424606346*var_12*w[0][5] + var_90 + 0.0214285714285714287696827*var_47 + 0.0714285714285714246063463*var_88 + 0.0285714285714285705364279*var_86 + 0.1000000000000000055511151*var_93;
    A[3] = 0.7500000000000000000000000*var_17*var_94/(var_18*var_18);
    const double var_95 = -var_59;
    const double var_96 = 0.1500000000000000222044605*var_9 + var_95;
    const double var_97 = -0.5500000000000000444089210*var_12*w[0][4];
    const double var_98 = -var_12*w[0][3];
    const double var_99 = 0.0500000000000000027755576*var_83;
    const double var_100 = 0.1500000000000000222044605*var_98 + var_99;
    const double var_101 = 0.2500000000000000000000000*var_11;
    const double var_102 = var_100 + 0.6000000000000000888178420*var_13 + -0.8500000000000000888178420*var_8*w[0][4] + var_96 + 0.6500000000000000222044605*var_8*w[0][3] + 0.1500000000000000222044605*var_35 + 0.2000000000000000111022302*var_36 + var_101 + var_97;
    const double var_103 = 0.0589285714285714273819039*var_23*var_4 + 0.0857142857142857150787307*var_34 + 0.0089285714285714280757933*var_5;
    A[16] = 0.0535714285714285684547598*var_102*var_17/(var_18*var_18);
    A[61] = A[16];
    const double var_104 = 6.2000000000000001776356839*w[0][3] + var_62;
    const double var_105 = var_99 + 0.1250000000000000000000000*var_104*var_12;
    const double var_106 = w[0][0] + w[0][1];
    const double var_107 = 0.5000000000000000000000000*var_4*w[0][0];
    const double var_108 = -var_4*w[0][1];
    const double var_109 = var_43*w[0][4];
    const double var_110 = 0.0125000000000000006938894*var_69 + 0.2250000000000000055511151*var_98;
    const double var_111 = var_43*w[0][5];
    const double var_112 = var_79 + var_111;
    const double var_113 = 11.0000000000000000000000000*w[0][3];
    const double var_114 = 9.0000000000000000000000000*w[0][5] + var_113;
    const double var_115 = 41.0000000000000000000000000*w[0][2] + 3.0000000000000000000000000*var_114 + 19.0000000000000000000000000*w[0][4];
    const double var_116 = 0.0625000000000000000000000*var_112 + -0.2875000000000000333066907*var_12*w[0][2] + 0.2250000000000000055511151*var_107 + 0.2000000000000000111022302*var_109 + 0.0750000000000000111022302*var_108 + var_110 + 0.0062500000000000003469447*var_115*var_4;
    const double var_117 = 0.3142857142857142793701541*var_98 + -0.2571428571428571174806166*var_12*w[0][0];
    const double var_118 = 20.5000000000000000000000000*w[0][0] + 13.5000000000000000000000000*w[0][3];
    const double var_119 = 9.0000000000000000000000000*w[0][1];
    const double var_120 = var_118 + 16.5000000000000000000000000*w[0][4] + 9.5000000000000000000000000*w[0][5] + var_119;
    const double var_121 = -var_4*w[0][4];
    const double var_122 = 0.0214285714285714287696827*var_121;
    const double var_123 = 0.0142857142857142852682140*var_50;
    const double var_124 = var_122 + var_117 + 0.1428571428571428492126927*var_34 + 0.0142857142857142852682140*var_120*var_8 + 0.2142857142857142738190390*var_109 + 0.1214285714285714273819039*var_4*w[0][3] + -0.2714285714285714079530010*var_12*w[0][1] + 0.0857142857142857150787307*var_95 + -0.0928571428571428603149229*var_4*w[0][5] + 0.0428571428571428575393654*var_67 + 0.1000000000000000055511151*var_13 + 0.0357142857142857123031732*var_72 + var_123;
    const double var_125 = 0.0678571428571428519882502*var_43*w[0][3] + 0.0303571428571428568454760*var_12*w[0][0];
    const double var_126 = -var_56 + var_12;
    const double var_127 = 0.0125000000000000006938894*var_126*w[0][1] + 0.0660714285714285726180961*var_4*w[0][4];
    const double var_128 = 0.0089285714285714280757933*var_49;
    const double var_129 = 0.2000000000000000111022302*var_8 + var_43;
    const double var_130 = 9.5000000000000000000000000*w[0][3];
    const double var_131 = 2.6000000000000000888178420*w[0][0] + 0.2000000000000000111022302*var_130;
    const double var_132 = var_131 + 2.5000000000000000000000000*w[0][5];
    const double var_133 = 0.0178571428571428561515866*var_36;
    const double var_134 = var_127 + -0.0214285714285714287696827*var_12*w[0][5] + -0.1142857142857142821457117*var_12*w[0][4] + 0.0178571428571428561515866*var_132*var_4 + var_128 + var_125 + 0.0428571428571428575393654*var_22 + 0.0267857142857142842273799*var_129*w[0][2] + var_89 + 0.1071428571428571369095195*var_47 + var_133;
    const double var_135 = 0.4714285714285714190552312*w[0][3];
    const double var_136 = 0.7500000000000000000000000*w[0][1] + 0.2571428571428571174806166*w[0][4] + 0.4142857142857142571656937*w[0][5] + var_135;
    const double var_137 = 0.1071428571428571369095195*var_8*w[0][2];
    const double var_138 = 0.0714285714285714246063463*var_24 + -0.0285714285714285705364279*var_36 + -0.1214285714285714273819039*var_12*var_19 + 0.0428571428571428575393654*var_29 + -var_136*var_8 + var_137;
    A[18] = 0.3750000000000000000000000*var_138*var_17/(var_18*var_18);
    A[81] = A[18];
    const double var_139 = var_43 + 0.5000000000000000000000000*var_56;
    const double var_140 = -0.5000000000000000000000000*var_56 + var_12;
    const double var_141 = 24.3333333333333321490954404*w[0][3] + 111.0000000000000000000000000*w[0][0] + 60.3333333333333285963817616*var_62;
    const double var_142 = 9.0000000000000000000000000*var_140*var_63 + var_139*var_141;
    const double var_143 = w[0][3] + w[0][4];
    const double var_144 = 0.0178571428571428561515866*var_32;
    const double var_145 = 0.0285714285714285705364279*var_21 + 0.1000000000000000055511151*var_76;
    const double var_146 = 0.0071428571428571426341070*var_9;
    const double var_147 = 0.1071428571428571369095195*var_59 + var_146;
    A[57] = 0.6428571428571427937015414*var_17*var_65/(var_18*var_18);
    const double var_148 = var_75 + var_72;
    const double var_149 = 0.6000000000000000888178420*var_56*w[0][3];
    const double var_150 = var_12*var_63;
    const double var_151 = var_12*var_62;
    const double var_152 = -var_10 + var_60;
    const double var_153 = 0.3285714285714285698425385*var_140*w[0][0] + 0.0642857142857142793701541*var_152 + 0.4142857142857142571656937*var_139*w[0][3] + 0.0357142857142857123031732*var_57 + 0.1428571428571428492126927*var_151 + -0.0785714285714285698425385*var_58 + -0.1000000000000000055511151*var_150;
    A[9] = 0.7500000000000000000000000*var_153*var_17/(var_18*var_18);
    const double var_154 = var_43 + 0.2000000000000000111022302*var_4;
    const double var_155 = 1.4750000000000000888178420*var_12*w[0][3] + 0.1250000000000000000000000*var_83;
    const double var_156 = w[0][4] + 3.4000000000000003552713679*w[0][1];
    const double var_157 = 0.6000000000000000888178420*var_45;
    const double var_158 = -var_8 + var_12;
    const double var_159 = var_43 + var_8;
    const double var_160 = -var_5;
    const double var_161 = -18.5000000000000000000000000*var_143*var_8 + -var_4*w[0][0] + 30.5000000000000000000000000*var_158*w[0][5] + var_160 + -11.5000000000000000000000000*var_106*var_8 + 6.5000000000000000000000000*var_159*w[0][2];
    const double var_162 = 0.1000000000000000055511151*var_49 + var_155 + 0.3750000000000000000000000*var_12*var_156 + 0.3000000000000000444089210*var_32 + var_157 + 0.7500000000000000000000000*var_108 + 0.0500000000000000027755576*var_161;
    const double var_163 = 0.2000000000000000111022302*var_69 + 0.1000000000000000055511151*var_39;
    const double var_164 = 9.0000000000000000000000000*w[0][2];
    const double var_165 = -var_114 + -23.0000000000000000000000000*w[0][1] + 29.0000000000000000000000000*w[0][4] + var_164;
    const double var_166 = 0.1000000000000000055511151*var_67 + var_163 + 0.5000000000000000000000000*var_36 + 0.0500000000000000027755576*var_165*var_8 + 0.2000000000000000111022302*var_53;
    const double var_167 = 7.4000000000000003552713679*var_12*var_143 + 14.6000000000000014210854715*var_12*w[0][2];
    const double var_168 = -0.2375000000000000166533454*var_4*w[0][1];
    const double var_169 = var_4 + var_26;
    const double var_170 = 0.1000000000000000055511151*var_5 + 0.2125000000000000222044605*var_106*var_12 + 0.2000000000000000111022302*var_66 + var_168 + 0.5125000000000000666133815*var_4*w[0][2] + 0.0250000000000000013877788*var_72 + -0.1250000000000000000000000*var_167 + -0.3750000000000000000000000*var_169*w[0][5];
    const double var_171 = 0.6000000000000000888178420*var_58;
    const double var_172 = var_10 + -var_12*var_62;
    const double var_173 = var_171 + var_43*w[0][3] + var_149 + 0.2000000000000000111022302*var_172;
    const double var_174 = 0.0071428571428571426341070*var_86;
    const double var_175 = -var_79;
    const double var_176 = var_73 + var_66;
    const double var_177 = var_176 + var_175;
    const double var_178 = 0.0142857142857142852682140*var_107;
    const double var_179 = 0.0428571428571428575393654*var_177 + var_146 + -0.0071428571428571426341070*var_56*w[0][2] + 0.5000000000000000000000000*var_145 + -0.1357142857142857039765005*var_12*w[0][5] + var_70 + 0.0285714285714285705364279*var_14 + 0.0357142857142857123031732*var_31 + var_178;
    A[89] = 6.7500000000000000000000000*var_17*var_179/(var_18*var_18);
    const double var_180 = 2.1666666666666665186369300*var_143 + 3.0000000000000000000000000*var_106 + 0.3666666666666666407614628*w[0][5];
    const double var_181 = 0.9000000000000000222044605*var_159*w[0][2] + var_158*var_180;
    A[1] = 0.0089285714285714280757933*var_17*var_181/(var_18*var_18);
    A[10] = A[1];
    const double var_182 = -var_57;
    const double var_183 = w[0][3] + 0.2000000000000000111022302*w[0][0];
    const double var_184 = -var_183*var_56 + var_58;
    const double var_185 = var_40 + var_99 + 0.0375000000000000055511151*var_10 + 0.0500000000000000027755576*var_150 + 0.0250000000000000013877788*var_182 + 0.2000000000000000111022302*var_151 + 0.0625000000000000000000000*var_184;
    A[68] = 0.6428571428571427937015414*var_17*var_185/(var_18*var_18);
    const double var_186 = 0.0214285714285714287696827*var_69 + 0.0071428571428571426341070*var_57;
    const double var_187 = -0.0107142857142857143848413*var_4*w[0][4];
    const double var_188 = var_21 + var_175;
    const double var_189 = 0.6000000000000000888178420*var_33;
    const double var_190 = 0.0857142857142857150787307*var_47 + 0.5000000000000000000000000*var_178 + var_147 + -0.0392857142857142849212693*var_12*var_23 + -0.0750000000000000111022302*var_13 + var_186 + 0.0714285714285714246063463*var_189 + var_187 + -0.0035714285714285713170535*var_29 + 0.0142857142857142852682140*var_188 + 0.0178571428571428561515866*var_176;
    A[36] = 2.2500000000000000000000000*var_17*var_190/(var_18*var_18);
    const double var_191 = 0.6000000000000000888178420*w[0][5];
    const double var_192 = -0.2000000000000000111022302*w[0][1] + w[0][3] + -w[0][4] + var_191;
    const double var_193 = 0.0089285714285714280757933*var_11;
    A[8] = 0.3750000000000000000000000*var_124*var_17/(var_18*var_18);
    A[80] = A[8];
    const double var_194 = -var_8*w[0][2];
    const double var_195 = var_13 + var_109;
    const double var_196 = 9.0000000000000000000000000*w[0][4] + var_113;
    const double var_197 = 19.0000000000000000000000000*w[0][5] + 41.0000000000000000000000000*w[0][1] + 3.0000000000000000000000000*var_196;
    const double var_198 = 0.0625000000000000000000000*var_195 + 0.2250000000000000055511151*var_36 + 0.2000000000000000111022302*var_111 + 0.0750000000000000111022302*var_194 + -0.2875000000000000333066907*var_12*w[0][1] + var_110 + 0.0062500000000000003469447*var_197*var_8;
    A[17] = 0.4285714285714285476380780*var_17*var_198/(var_18*var_18);
    const double var_199 = var_107 + 1.5000000000000000000000000*var_33 + 0.2500000000000000000000000*var_21 + var_101;
    const double var_200 = 0.0125000000000000006938894*var_126*w[0][2] + 0.0660714285714285726180961*var_8*w[0][5];
    const double var_201 = 0.0357142857142857123031732*var_5;
    const double var_202 = 2.5000000000000000000000000*w[0][4] + var_131;
    const double var_203 = 0.0178571428571428561515866*var_107;
    const double var_204 = -0.1142857142857142821457117*var_12*w[0][5] + -0.0214285714285714287696827*var_12*w[0][4] + 0.1071428571428571369095195*var_32 + 0.0267857142857142842273799*var_154*w[0][1] + 0.0178571428571428561515866*var_202*var_8 + 0.0428571428571428575393654*var_66 + var_125 + var_200 + var_201 + var_203 + var_193;
    A[77] = 9.0000000000000000000000000*var_17*var_204/(var_18*var_18);
    const double var_205 = -0.0107142857142857143848413*var_69 + 0.0839285714285714218307888*var_12*w[0][3];
    const double var_206 = 0.0250000000000000013877788*var_29 + 0.0107142857142857143848413*var_59 + -0.0642857142857142793701541*var_8*w[0][5] + var_178;
    const double var_207 = -0.1678571428571428436615776*var_12*w[0][3];
    const double var_208 = 0.1071428571428571369095195*var_34 + var_71;
    const double var_209 = var_13 + var_21;
    const double var_210 = var_123 + 0.0857142857142857150787307*var_66 + var_207 + var_206 + 0.0714285714285714246063463*var_22 + 0.0392857142857142849212693*var_8*w[0][1] + 0.1250000000000000000000000*var_35 + -0.0428571428571428575393654*var_32 + 0.0500000000000000027755576*var_76 + -0.1392857142857142904723844*var_12*w[0][1] + var_208 + 0.0071428571428571426341070*var_209;
    A[37] = 2.2500000000000000000000000*var_17*var_210/(var_18*var_18);
    A[73] = A[37];
    const double var_211 = 0.9000000000000000222044605*w[0][0] + -0.3666666666666666407614628*w[0][3] + -2.1666666666666665186369300*var_62 + -3.0000000000000000000000000*var_63;
    const double var_212 = var_201 + 0.0035714285714285713170535*var_34;
    const double var_213 = -0.0750000000000000111022302*var_12*w[0][1];
    const double var_214 = var_13 + var_46;
    const double var_215 = var_85 + 0.0714285714285714246063463*var_96 + var_212 + -0.0607142857142857136909520*var_8*w[0][3] + 0.1428571428571428492126927*var_213 + 0.0464285714285714301574615*var_8*w[0][4] + -0.0321428571428571396850771*var_12*w[0][5] + 0.0214285714285714287696827*var_32 + -0.0821428571428571424606346*var_12*w[0][4] + 0.0285714285714285705364279*var_50 + 0.1000000000000000055511151*var_214;
    A[4] = 0.7500000000000000000000000*var_17*var_215/(var_18*var_18);
    A[40] = A[4];
    const double var_216 = -var_4 + var_12;
    const double var_217 = var_43 + var_4;
    const double var_218 = 3.0000000000000000000000000*var_19 + 0.3666666666666666407614628*w[0][4] + 2.1666666666666665186369300*var_23;
    const double var_219 = 0.9000000000000000222044605*var_217*w[0][1] + var_216*var_218;
    A[2] = 0.0089285714285714280757933*var_17*var_219/(var_18*var_18);
    A[55] = 9.0000000000000000000000000*var_134*var_17/(var_18*var_18);
    const double var_220 = -var_19 + 1.5000000000000000000000000*w[0][1] + 8.5000000000000000000000000*w[0][5] + var_130;
    const double var_221 = var_158*w[0][5];
    const double var_222 = var_221 + var_175;
    const double var_223 = 0.2000000000000000111022302*var_39 + 0.0625000000000000000000000*var_83;
    const double var_224 = var_121 + var_35;
    const double var_225 = 0.0428571428571428575393654*var_83 + -0.0107142857142857143848413*var_12*w[0][3];
    const double var_226 = var_212 + var_74 + 0.0178571428571428561515866*var_49 + 0.0214285714285714287696827*var_66 + 0.0392857142857142849212693*var_12*w[0][5] + 0.0035714285714285713170535*var_79 + 0.0107142857142857143848413*var_12*w[0][4] + var_225;
    A[27] = 0.7500000000000000000000000*var_17*var_226/(var_18*var_18);
    const double var_227 = 0.0178571428571428561515866*var_111;
    const double var_228 = var_216*w[0][4];
    const double var_229 = var_19*var_4;
    const double var_230 = var_86 + var_47;
    const double var_231 = 0.0142857142857142852682140*var_54 + 0.0250000000000000013877788*var_137 + 0.0339285714285714259941251*var_12*w[0][5] + 0.0107142857142857143848413*var_9 + 0.0089285714285714280757933*var_228 + 0.0196428571428571424606346*var_230 + -0.0589285714285714273819039*var_23*var_4 + 0.0857142857142857150787307*var_216*w[0][1] + var_205 + 0.0125000000000000006938894*var_229 + 0.1000000000000000055511151*var_133;
    A[38] = 9.0000000000000000000000000*var_17*var_231/(var_18*var_18);
    A[83] = A[38];
    const double var_232 = 0.6000000000000000888178420*w[0][4];
    const double var_233 = 2.6000000000000000888178420*w[0][3];
    const double var_234 = -var_233;
    const double var_235 = -w[0][2] + 3.4000000000000003552713679*w[0][5] + -var_232 + var_234;
    const double var_236 = 0.0125000000000000006938894*var_72;
    const double var_237 = 0.0312500000000000000000000*var_235*var_4 + 0.2250000000000000055511151*var_12*w[0][4] + var_223 + 0.1250000000000000000000000*var_34 + 0.0625000000000000000000000*var_35 + var_236 + 0.0125000000000000006938894*var_175 + 0.2875000000000000333066907*var_12*w[0][2];
    A[23] = 0.4285714285714285476380780*var_17*var_237/(var_18*var_18);
    A[76] = A[67];
    const double var_238 = var_118 + 16.5000000000000000000000000*w[0][5] + 9.5000000000000000000000000*w[0][4] + var_164;
    const double var_239 = -var_8*w[0][5];
    const double var_240 = 0.0214285714285714287696827*var_239;
    const double var_241 = 0.0142857142857142852682140*var_86;
    const double var_242 = 0.0142857142857142852682140*var_238*var_4 + 0.0857142857142857150787307*var_87 + 0.2142857142857142738190390*var_111 + var_240 + 0.0357142857142857123031732*var_21 + 0.0428571428571428575393654*var_30 + 0.1214285714285714273819039*var_8*w[0][3] + -0.2714285714285714079530010*var_12*w[0][2] + -0.0928571428571428603149229*var_8*w[0][4] + 0.1428571428571428492126927*var_59 + 0.1000000000000000055511151*var_79 + var_117 + var_241;
    const double var_243 = var_208 + 0.0142857142857142852682140*var_148 + 0.0178571428571428561515866*var_77 + -0.0035714285714285713170535*var_35 + -0.0392857142857142849212693*var_12*var_143 + 0.0857142857142857150787307*var_32 + -0.0750000000000000111022302*var_79 + var_42 + 0.0714285714285714246063463*var_157 + 0.5000000000000000000000000*var_37 + var_186;
    const double var_244 = -var_191 + -w[0][1] + 3.4000000000000003552713679*w[0][4] + var_234;
    const double var_245 = 0.0125000000000000006938894*var_21;
    const double var_246 = var_223 + 0.0625000000000000000000000*var_29 + 0.0125000000000000006938894*var_75 + 0.0312500000000000000000000*var_244*var_8 + 0.1250000000000000000000000*var_59 + 0.2875000000000000333066907*var_12*w[0][1] + 0.2250000000000000055511151*var_12*w[0][5] + var_245;
    A[14] = 0.4285714285714285476380780*var_17*var_246/(var_18*var_18);
    A[41] = A[14];
    A[98] = A[89];
    const double var_247 = 0.0571428571428571410728559*var_12*w[0][0] + 0.0589285714285714273819039*var_39 + 0.0017857142857142856585267*var_182;
    const double var_248 = 0.1071428571428571369095195*var_4*w[0][1];
    const double var_249 = var_146 + 0.0714285714285714246063463*var_25 + 0.0937500000000000000000000*var_72 + 0.0375000000000000055511151*var_29 + 0.0366071428571428589271441*var_8*w[0][0] + 0.0517857142857142821457117*var_224 + -0.0116071428571428575393654*var_12*w[0][1] + -0.0321428571428571396850771*var_4*w[0][3] + var_247 + 0.0142857142857142852682140*var_47 + 0.0267857142857142842273799*var_33 + -0.0589285714285714273819039*var_4*w[0][5] + 0.1250000000000000000000000*var_248 + 0.0187500000000000027755576*var_12*w[0][2];
    A[5] = 3.0000000000000000000000000*var_17*var_249/(var_18*var_18);
    const double var_250 = var_106*var_8;
    const double var_251 = var_250 + var_72;
    const double var_252 = 0.0089285714285714280757933*var_9 + 0.0857142857142857150787307*var_59 + 0.0589285714285714273819039*var_143*var_8;
    const double var_253 = 0.0089285714285714280757933*var_69 + 0.0678571428571428519882502*var_98;
    const double var_254 = 0.0178571428571428561515866*var_109;
    const double var_255 = 2.5000000000000000000000000*w[0][3];
    const double var_256 = 2.6000000000000000888178420*w[0][2] + 1.9000000000000001332267630*w[0][5] + var_255;
    const double var_257 = var_245 + var_252 + var_254 + -0.1232142857142857067520580*var_12*w[0][2] + var_127 + var_203 + var_253 + 0.0178571428571428561515866*var_256*var_4;
    A[66] = 9.0000000000000000000000000*var_17*var_257/(var_18*var_18);
    A[20] = A[2];
    const double var_258 = -0.6500000000000000222044605*var_12*w[0][3];
    const double var_259 = -0.5500000000000000444089210*var_12*w[0][5];
    const double var_260 = 0.2500000000000000000000000*var_49;
    const double var_261 = -0.8500000000000000888178420*var_4*w[0][5] + 0.1500000000000000222044605*var_29 + var_260 + 0.6000000000000000888178420*var_79 + var_88 + 0.6500000000000000222044605*var_4*w[0][3] + var_100 + var_259 + 0.2000000000000000111022302*var_107;
    const double var_262 = -w[0][5] + var_232 + w[0][3] + -0.2000000000000000111022302*w[0][2];
    const double var_263 = -var_196 + 29.0000000000000000000000000*w[0][5] + var_119 + -23.0000000000000000000000000*w[0][2];
    const double var_264 = var_229 + var_21;
    A[6] = 0.3750000000000000000000000*var_17*var_242/(var_18*var_18);
    const double var_265 = -var_106 + 1.5000000000000000000000000*w[0][2] + 8.5000000000000000000000000*w[0][4] + var_130;
    const double var_266 = 1.5000000000000000000000000*var_45 + 0.2500000000000000000000000*var_72 + var_36 + var_260;
    A[28] = 0.0535714285714285684547598*var_17*var_261/(var_18*var_18);
    const double var_267 = 1.8000000000000000444089210*var_63 + w[0][0] + -17.0000000000000000000000000*w[0][3] + -2.2000000000000001776356839*var_62;
    const double var_268 = var_10 + var_57;
    const double var_269 = 0.1000000000000000055511151*var_84 + -0.7500000000000000000000000*var_60 + -var_171 + 0.1250000000000000000000000*var_12*var_267 + 0.5000000000000000000000000*var_149 + -0.0500000000000000027755576*var_268;
    A[34] = 0.3214285714285713968507707*var_17*var_269/(var_18*var_18);
    A[43] = A[34];
    const double var_270 = 0.1500000000000000222044605*var_158*w[0][2] + 0.1000000000000000055511151*var_222 + var_97 + 0.6000000000000000888178420*var_143*var_8 + 0.0500000000000000027755576*var_251 + 0.1250000000000000000000000*var_262*var_4 + var_258;
    A[35] = 0.3214285714285713968507707*var_17*var_270/(var_18*var_18);
    A[12] = 0.0089285714285714280757933*var_12*var_17*var_211/(var_18*var_18);
    A[21] = A[12];
    A[32] = A[23];
    const double var_271 = var_75 + var_228;
    A[0] = 0.0035714285714285713170535*var_142*var_17/(var_18*var_18);
    const double var_272 = var_32 + var_50;
    A[24] = 0.2142857142857142738190390*var_17*var_170/(var_18*var_18);
    A[42] = A[24];
    const double var_273 = 0.1000000000000000055511151*var_98 + 0.0125000000000000006938894*var_126*w[0][0];
    const double var_274 = w[0][2] + -3.0000000000000000000000000*w[0][1];
    const double var_275 = var_254 + var_89 + var_193 + 0.0428571428571428575393654*var_47 + 0.0125000000000000006938894*var_50 + var_273 + 0.1071428571428571369095195*var_22 + 0.0500000000000000027755576*var_67 + 0.0053571428571428571924207*var_59 + 0.0160714285714285698425385*var_12*var_274 + var_103;
    const double var_276 = 0.7500000000000000000000000*w[0][2] + 0.2571428571428571174806166*w[0][5] + 0.4142857142857142571656937*w[0][4] + var_135;
    const double var_277 = 0.0714285714285714246063463*var_167 + -var_276*var_4 + -0.0285714285714285705364279*var_107 + -0.1214285714285714273819039*var_106*var_12 + 0.0428571428571428575393654*var_35 + var_248;
    const double var_278 = 0.0500000000000000027755576*var_263*var_4 + 0.1000000000000000055511151*var_30 + 0.5000000000000000000000000*var_107 + var_163 + 0.2000000000000000111022302*var_44;
    A[29] = 0.1071428571428571369095195*var_17*var_278/(var_18*var_18);
    A[30] = A[3];
    const double var_279 = 0.0178571428571428561515866*var_45 + var_206 + 0.0142857142857142852682140*var_79 + var_41 + var_144 + 0.0035714285714285713170535*var_35 + 0.0392857142857142849212693*var_8*w[0][0] + var_187 + 0.0714285714285714246063463*var_47 + 0.0500000000000000027755576*var_92 + 0.0285714285714285705364279*var_53 + var_174;
    A[58] = 2.2500000000000000000000000*var_17*var_279/(var_18*var_18);
    A[85] = A[58];
    const double var_280 = -var_9;
    const double var_281 = var_280 + -18.5000000000000000000000000*var_23*var_4 + -11.5000000000000000000000000*var_19*var_4 + 6.5000000000000000000000000*var_217*w[0][1] + 30.5000000000000000000000000*var_216*w[0][4] + -var_8*w[0][0];
    const double var_282 = var_259 + 0.6000000000000000888178420*var_23*var_4 + 0.1000000000000000055511151*var_271 + 0.1500000000000000222044605*var_216*w[0][1] + 0.1250000000000000000000000*var_192*var_8 + var_258 + 0.0500000000000000027755576*var_264;
    A[47] = 0.3214285714285713968507707*var_17*var_282/(var_18*var_18);
    A[72] = A[27];
    A[60] = A[6];
    const double var_283 = -3.0000000000000000000000000*w[0][2] + w[0][1];
    const double var_284 = 0.0500000000000000027755576*var_30 + 0.0053571428571428571924207*var_34 + var_227 + 0.0125000000000000006938894*var_86 + var_201 + 0.0160714285714285698425385*var_12*var_283 + var_273 + 0.1071428571428571369095195*var_66 + var_252 + 0.0428571428571428575393654*var_32 + var_128;
    A[26] = 0.3750000000000000000000000*var_17*var_277/(var_18*var_18);
    A[86] = A[68];
    A[48] = 2.2500000000000000000000000*var_17*var_243/(var_18*var_18);
    A[84] = A[48];
    const double var_285 = w[0][5] + 3.4000000000000003552713679*w[0][2];
    const double var_286 = var_189 + var_155 + 0.0500000000000000027755576*var_281 + 0.3750000000000000000000000*var_12*var_285 + 0.1000000000000000055511151*var_11 + 0.3000000000000000444089210*var_47 + 0.7500000000000000000000000*var_194;
    const double var_287 = var_33 + var_29;
    const double var_288 = var_9 + var_194;
    const double var_289 = 0.0250000000000000013877788*var_287 + 0.0071428571428571426341070*var_12*var_220 + var_174 + var_122 + -0.0857142857142857150787307*var_4*w[0][5] + 0.0285714285714285705364279*var_266 + var_48 + 0.0035714285714285713170535*var_288;
    A[79] = 13.5000000000000000000000000*var_17*var_289/(var_18*var_18);
    A[97] = A[79];
    const double var_290 = var_47 + var_13 + var_160;
    const double var_291 = var_213 + 0.0500000000000000027755576*var_50 + var_105 + 0.1500000000000000222044605*var_290 + 0.3000000000000000444089210*var_73 + 0.1000000000000000055511151*var_199 + var_157;
    A[49] = 1.9285714285714283811046243*var_17*var_291/(var_18*var_18);
    A[94] = A[49];
    const double var_292 = var_79 + var_72;
    const double var_293 = var_207 + var_38 + var_241 + 0.0714285714285714246063463*var_66 + 0.0857142857142857150787307*var_22 + var_147 + 0.0392857142857142849212693*var_4*w[0][2] + -0.0428571428571428575393654*var_47 + 0.0500000000000000027755576*var_73 + -0.1392857142857142904723844*var_12*w[0][2] + 0.1250000000000000000000000*var_29 + 0.0071428571428571426341070*var_292;
    const double var_294 = 24.3333333333333321490954404*w[0][5] + -9.0000000000000000000000000*var_106 + 60.3333333333333285963817616*var_143 + 111.0000000000000000000000000*w[0][2];
    A[50] = A[5];
    const double var_295 = var_79 + var_32 + var_280;
    const double var_296 = var_45 + var_35;
    const double var_297 = var_108 + var_5;
    const double var_298 = 0.0250000000000000013877788*var_296 + var_240 + 0.0071428571428571426341070*var_12*var_265 + 0.0035714285714285713170535*var_297 + var_144 + -0.0857142857142857150787307*var_8*w[0][4] + 0.0285714285714285705364279*var_199 + var_51;
    A[25] = 0.4285714285714285476380780*var_116*var_17/(var_18*var_18);
    A[78] = 0.3214285714285713968507707*var_162*var_17/(var_18*var_18);
    A[90] = A[9];
    A[63] = A[36];
    A[33] = 9.0000000000000000000000000*var_17*var_275/(var_18*var_18);
    A[99] = 2.8928571428571427937015414*var_17*var_173/(var_18*var_18);
    const double var_299 = 0.0500000000000000027755576*var_86 + var_91 + 0.1000000000000000055511151*var_266 + 0.3000000000000000444089210*var_76 + var_105 + var_189 + 0.1500000000000000222044605*var_295;
    A[39] = 1.9285714285714283811046243*var_17*var_299/(var_18*var_18);
    A[93] = A[39];
    const double var_300 = 2.6000000000000000888178420*w[0][1] + 1.9000000000000001332267630*w[0][4] + var_255;
    const double var_301 = var_133 + 0.0178571428571428561515866*var_300*var_8 + var_236 + var_200 + var_253 + -0.1232142857142857067520580*var_12*w[0][1] + var_103 + var_227;
    A[88] = 9.0000000000000000000000000*var_17*var_301/(var_18*var_18);
    A[75] = A[57];
    A[92] = A[29];
    A[31] = A[13];
    A[59] = 13.5000000000000000000000000*var_17*var_298/(var_18*var_18);
    A[95] = A[59];
    const double var_302 = 0.0178571428571428561515866*var_11 + 0.0107142857142857143848413*var_12*w[0][5] + var_90 + 0.0035714285714285713170535*var_13 + 0.0214285714285714287696827*var_22 + 0.0392857142857142849212693*var_12*w[0][4] + var_225 + var_145;
    A[15] = 0.7500000000000000000000000*var_17*var_302/(var_18*var_18);
    A[51] = A[15];
    A[71] = A[17];
    A[22] = 0.0017857142857142856585267*var_17*var_294*var_4/(var_18*var_18);
    A[56] = 0.3214285714285713968507707*var_17*var_286/(var_18*var_18);
    A[65] = A[56];
    A[45] = 2.2500000000000000000000000*var_17*var_293/(var_18*var_18);
    const double var_303 = var_239 + var_29;
    const double var_304 = -0.0589285714285714273819039*var_8*w[0][4] + var_71 + 0.0937500000000000000000000*var_21 + 0.0714285714285714246063463*var_168 + var_247 + 0.0375000000000000055511151*var_35 + 0.1250000000000000000000000*var_137 + -0.0116071428571428575393654*var_12*w[0][2] + -0.0321428571428571396850771*var_8*w[0][3] + 0.0267857142857142842273799*var_45 + 0.0142857142857142852682140*var_32 + 0.0366071428571428589271441*var_4*w[0][0] + 0.0187500000000000027755576*var_12*w[0][1] + 0.0517857142857142821457117*var_303;
    A[7] = 3.0000000000000000000000000*var_17*var_304/(var_18*var_18);
    A[74] = A[47];
    A[19] = 0.1071428571428571369095195*var_166*var_17/(var_18*var_18);
    A[91] = A[19];
    A[70] = A[7];
    const double var_305 = 0.0142857142857142852682140*var_82 + 0.0857142857142857150787307*var_158*w[0][2] + -0.0589285714285714273819039*var_143*var_8 + 0.0339285714285714259941251*var_12*w[0][4] + var_205 + 0.0196428571428571424606346*var_272 + 0.0125000000000000006938894*var_250 + 0.0107142857142857143848413*var_5 + 0.0089285714285714280757933*var_221 + 0.0250000000000000013877788*var_248 + 0.1000000000000000055511151*var_203;
    A[46] = 9.0000000000000000000000000*var_17*var_305/(var_18*var_18);
    A[11] = 0.0017857142857142856585267*var_17*var_55*var_8/(var_18*var_18);
    A[87] = A[78];
    A[64] = A[46];
    A[52] = A[25];
    A[54] = A[45];
    A[53] = A[35];
    A[82] = A[28];
    A[44] = 9.0000000000000000000000000*var_17*var_284/(var_18*var_18);
    A[62] = A[26];
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
