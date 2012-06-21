#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 16.97 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = -w[0][1]*w[1][1]*w[2][1];
    const double var_1 = 0.0500000000000000027755576*var_0;
    const double var_2 = w[0][2]*w[1][2]*w[2][2];
    const double var_3 = 0.0071428571428571426341070*var_2;
    const double var_4 = w[0][1]*w[2][0] + w[0][0]*w[2][1];
    const double var_5 = w[0][1]*w[1][0]*w[2][1] + var_4*w[1][1];
    const double var_6 = w[0][1]*w[2][2] + w[0][2]*w[2][1];
    const double var_7 = w[0][1]*w[1][2]*w[2][1] + var_6*w[1][1];
    const double var_8 = var_5 + var_7;
    const double var_9 = w[0][2]*w[2][0] + w[0][0]*w[2][2];
    const double var_10 = w[0][0]*w[1][2]*w[2][0] + var_9*w[1][0];
    const double var_11 = w[0][2]*w[1][0]*w[2][2] + var_9*w[1][2];
    const double var_12 = var_11 + var_10;
    const double var_13 = w[0][0]*w[1][1]*w[2][0] + var_4*w[1][0];
    const double var_14 = var_6*w[1][2] + w[0][2]*w[1][1]*w[2][2];
    const double var_15 = var_13 + var_14;
    const double var_16 = 23.0000000000000000000000000*w[0][1]*w[1][1]*w[2][1];
    const double var_17 = 1.9500000000000001776356839*var_15 + var_12 + var_16;
    const double var_18 = var_8 + 0.2000000000000000111022302*var_17;
    const double var_19 = -x[0][1];
    const double var_20 = x[1][1] + var_19;
    const double var_21 = -x[0][0];
    const double var_22 = x[2][0] + var_21;
    const double var_23 = x[1][0] + var_21;
    const double var_24 = x[2][1] + var_19;
    const double var_25 = -var_20*var_22 + var_23*var_24;
    const double var_26 = std::abs(var_25);
    const double var_27 = var_9*w[1][1] + var_4*w[1][2] + var_6*w[1][0];
    const double var_28 = 0.0004748376623376623440267*var_26*var_27;
    const double var_29 = w[0][0]*w[1][0]*w[2][0];
    const double var_30 = w[0][1]*w[1][1]*w[2][1];
    const double var_31 = 0.1000000000000000055511151*var_30;
    const double var_32 = 23.0000000000000000000000000*w[0][2]*w[1][2]*w[2][2];
    const double var_33 = 0.2000000000000000111022302*var_32;
    const double var_34 = 0.1000000000000000055511151*var_5;
    const double var_35 = 0.5000000000000000000000000*var_7;
    const double var_36 = 0.5000000000000000000000000*var_14;
    const double var_37 = 0.2000000000000000111022302*var_13 + var_29 + 1.5000000000000000000000000*var_11 + var_33 + 0.2600000000000000088817842*var_35 + var_34 + 0.7800000000000000266453526*var_10 + var_31 + var_36;
    A[66] = var_28 + 0.0024350649350649354422937*var_26*var_37;
    const double var_38 = -var_10;
    const double var_39 = -0.0001826298701298701364880*var_26*var_27;
    const double var_40 = var_2 + var_30;
    const double var_41 = var_14 + var_7;
    const double var_42 = var_13 + var_10;
    const double var_43 = var_11 + var_5;
    const double var_44 = 0.1085714285714285687323155*var_43 + 0.0371428571428571441259692*var_42 + 0.0200000000000000004163336*var_29 + 0.7142857142857143015746146*var_40 + 0.1200000000000000094368957*var_41;
    A[34] = var_39 + -0.0042613636363636369155938*var_26*var_44;
    const double var_45 = var_29 + var_5;
    const double var_46 = 0.0357142857142857123031732*var_16;
    const double var_47 = 0.1000000000000000055511151*var_11;
    const double var_48 = 0.2214285714285714190552312*var_7 + 0.0464285714285714301574615*var_10 + var_46 + 0.0535714285714285684547598*var_13 + 0.0857142857142857150787307*var_14 + 0.1357142857142857039765005*var_45 + var_3 + 0.2500000000000000000000000*var_47;
    A[43] = A[34];
    const double var_49 = var_2 + var_7;
    const double var_50 = -2.7000000000000001776356839*var_30;
    const double var_51 = 0.5000000000000000000000000*var_10;
    const double var_52 = var_50 + var_51 + -0.7500000000000000000000000*var_5 + -0.4500000000000000111022302*var_14 + -0.2500000000000000000000000*var_11 + var_13 + -0.6750000000000000444089210*var_49;
    const double var_53 = -0.0000405844155844155843804*var_26*var_27;
    const double var_54 = 0.0024350649350649354422937*var_26*var_29 + var_53;
    A[7] = 0.0001623376623376623375215*var_26*var_52 + var_54;
    A[70] = A[7];
    const double var_55 = var_13 + var_5;
    const double var_56 = var_11 + var_14;
    const double var_57 = var_10 + var_7;
    const double var_58 = var_29 + var_30;
    const double var_59 = 0.1250000000000000000000000*var_27;
    const double var_60 = 15.8750000000000000000000000*w[0][2]*w[1][2]*w[2][2] + 0.2500000000000000000000000*var_57 + 0.5000000000000000000000000*var_58 + 0.1666666666666666574148081*var_55 + var_59 + var_56;
    A[22] = 0.0002164502164502164500287*var_26*var_60;
    const double var_61 = 0.5000000000000000000000000*var_13;
    const double var_62 = 0.0003165584415584415446145*var_26*var_27;
    const double var_63 = 23.0000000000000000000000000*w[0][0]*w[1][0]*w[2][0];
    const double var_64 = var_63 + var_41 + 1.9500000000000001776356839*var_43;
    const double var_65 = 0.2000000000000000111022302*var_64 + var_42;
    A[57] = var_62 + 0.0004870129870129870125646*var_26*var_40 + 0.0012175324675324677211469*var_26*var_65;
    A[75] = A[57];
    const double var_66 = 0.0000243506493506493506282*var_26*var_27;
    const double var_67 = 4.4500000000000001776356839*w[0][0]*w[1][0]*w[2][0];
    const double var_68 = -var_7;
    const double var_69 = -var_5;
    const double var_70 = -w[0][2]*w[1][2]*w[2][2];
    const double var_71 = 0.0500000000000000027755576*var_70;
    const double var_72 = 7.2500000000000000000000000*var_0;
    const double var_73 = 0.1000000000000000055511151*var_14;
    const double var_74 = 0.6000000000000000888178420*var_13 + var_67 + var_71 + 0.2250000000000000055511151*var_11 + var_72 + 0.7250000000000000888178420*var_10 + 0.7500000000000000000000000*var_69 + 0.2500000000000000000000000*var_68 + var_73;
    A[17] = var_66 + 0.0001623376623376623375215*var_26*var_74;
    const double var_75 = 0.0002191558441558441692066*var_26*var_27;
    const double var_76 = 0.0285714285714285705364279*var_10 + 0.0428571428571428575393654*var_13;
    const double var_77 = 0.1250000000000000000000000*var_29;
    const double var_78 = -var_30;
    const double var_79 = 0.0357142857142857123031732*var_78;
    const double var_80 = -var_14;
    const double var_81 = var_5 + var_80;
    const double var_82 = 0.5000000000000000000000000*var_11;
    const double var_83 = var_81 + var_82;
    const double var_84 = var_79 + var_76 + -0.0142857142857142852682140*var_49 + 0.0107142857142857143848413*var_83 + var_77;
    A[79] = var_75 + 0.0409090909090909088385857*var_26*var_84;
    A[97] = A[79];
    const double var_85 = var_2 + var_10;
    const double var_86 = 0.0428571428571428575393654*var_5 + 0.0285714285714285705364279*var_7;
    const double var_87 = 0.1250000000000000000000000*var_30;
    const double var_88 = -var_29;
    const double var_89 = 0.0357142857142857123031732*var_88;
    const double var_90 = -var_11;
    const double var_91 = var_13 + var_90;
    const double var_92 = var_91 + var_36;
    const double var_93 = var_89 + var_86 + -0.0142857142857142852682140*var_85 + 0.0107142857142857143848413*var_92 + var_87;
    const double var_94 = 1.3000000000000000444089210*w[0][1]*w[1][1]*w[2][1];
    const double var_95 = -0.0142857142857142852682140*var_32;
    const double var_96 = 0.0714285714285714246063463*var_88;
    const double var_97 = var_95 + var_96 + 0.0142857142857142852682140*var_90 + 0.1071428571428571369095195*var_14 + 0.2071428571428571285828468*var_5 + 0.3785714285714285587403083*var_7 + var_94 + var_76;
    const double var_98 = 0.1085714285714285687323155*var_57 + 0.7142857142857143015746146*var_58 + 0.1200000000000000094368957*var_55 + 0.0371428571428571441259692*var_56 + 0.0200000000000000004163336*var_2;
    A[78] = var_39 + -0.0042613636363636369155938*var_26*var_98;
    const double var_99 = -0.0142857142857142852682140*var_63;
    const double var_100 = 1.9500000000000001776356839*var_57 + var_55 + var_32;
    const double var_101 = 0.5000000000000000000000000*var_100 + var_58;
    const double var_102 = 7.2500000000000000000000000*var_70;
    const double var_103 = 0.2000000000000000111022302*var_27;
    const double var_104 = 1.3000000000000000444089210*w[0][0]*w[1][0]*w[2][0];
    const double var_105 = 0.0285714285714285705364279*var_14 + 0.0428571428571428575393654*var_11;
    const double var_106 = -0.0142857142857142852682140*var_16;
    const double var_107 = -var_2;
    const double var_108 = 0.0714285714285714246063463*var_107;
    const double var_109 = 0.0142857142857142852682140*var_68 + 0.3785714285714285587403083*var_13 + 0.2071428571428571285828468*var_10 + var_108 + var_104 + 0.1071428571428571369095195*var_5 + var_106 + var_105;
    const double var_110 = 4.4500000000000001776356839*w[0][1]*w[1][1]*w[2][1];
    const double var_111 = -var_13;
    const double var_112 = -w[0][0]*w[1][0]*w[2][0];
    const double var_113 = 7.2500000000000000000000000*var_112;
    const double var_114 = 0.7250000000000000888178420*var_7 + var_110 + 0.2500000000000000000000000*var_38 + 0.6000000000000000888178420*var_5 + var_71 + var_113 + 0.2250000000000000055511151*var_14 + 0.7500000000000000000000000*var_111 + var_47;
    A[8] = var_66 + 0.0001623376623376623375215*var_114*var_26;
    A[80] = A[8];
    const double var_115 = var_29 + var_11;
    const double var_116 = 0.0428571428571428575393654*var_7 + 0.0285714285714285705364279*var_5;
    const double var_117 = 0.0357142857142857123031732*var_107;
    const double var_118 = var_38 + var_14;
    const double var_119 = var_118 + var_61;
    const double var_120 = var_117 + var_116 + -0.0142857142857142852682140*var_115 + var_87 + 0.0107142857142857143848413*var_119;
    const double var_121 = 0.0428571428571428575393654*var_14 + 0.0285714285714285705364279*var_11;
    const double var_122 = 0.1250000000000000000000000*var_2;
    const double var_123 = var_7 + var_111;
    const double var_124 = var_123 + var_51;
    const double var_125 = var_79 + var_121 + var_122 + -0.0142857142857142852682140*var_45 + 0.0107142857142857143848413*var_124;
    const double var_126 = 0.0000365259740259740259423*var_26*var_27;
    const double var_127 = var_13 + var_30;
    const double var_128 = 0.0357142857142857123031732*var_63;
    const double var_129 = var_128 + 0.2214285714285714190552312*var_10 + 0.0464285714285714301574615*var_7 + 0.0535714285714285684547598*var_5 + 0.1357142857142857039765005*var_127 + 0.0857142857142857150787307*var_11 + var_3 + 0.2500000000000000000000000*var_73;
    const double var_130 = 0.1000000000000000055511151*var_7;
    const double var_131 = var_1 + var_102 + 0.6000000000000000888178420*var_10 + 0.7500000000000000000000000*var_90 + 0.2500000000000000000000000*var_80 + 0.2250000000000000055511151*var_5 + 0.7250000000000000888178420*var_13 + var_67 + var_130;
    A[25] = var_66 + 0.0001623376623376623375215*var_131*var_26;
    A[52] = A[25];
    const double var_132 = -0.0001582792207792207723072*var_26*var_27;
    A[37] = var_132 + -0.0034090909090909089253219*var_26*var_48;
    const double var_133 = var_50 + -0.2500000000000000000000000*var_10 + -0.4500000000000000111022302*var_13 + var_14 + -0.6750000000000000444089210*var_45 + -0.7500000000000000000000000*var_7 + var_82;
    const double var_134 = 0.0024350649350649354422937*var_2*var_26 + var_53;
    A[24] = 0.0001623376623376623375215*var_133*var_26 + var_134;
    A[42] = A[24];
    A[58] = var_132 + -0.0034090909090909089253219*var_129*var_26;
    const double var_135 = 0.1000000000000000055511151*var_2;
    const double var_136 = 0.0071428571428571426341070*var_30;
    const double var_137 = var_29 + var_2;
    const double var_138 = 0.2500000000000000000000000*var_15 + var_8 + 0.5000000000000000000000000*var_137 + var_59 + 0.1666666666666666574148081*var_12 + 15.8750000000000000000000000*w[0][1]*w[1][1]*w[2][1];
    const double var_139 = 0.1000000000000000055511151*var_10;
    const double var_140 = 0.2000000000000000111022302*var_16;
    const double var_141 = -0.0000852272727272727339751*var_26*var_27;
    const double var_142 = 0.0535714285714285684547598*var_11 + 0.0464285714285714301574615*var_14 + 0.2500000000000000000000000*var_130 + 0.1357142857142857039765005*var_85 + 0.0857142857142857150787307*var_5 + var_128 + 0.2214285714285714190552312*var_13 + var_136;
    const double var_143 = var_11 + var_68;
    const double var_144 = 0.5000000000000000000000000*var_5;
    const double var_145 = var_143 + var_144;
    const double var_146 = -0.0000004509379509379509376*var_26*var_27;
    const double var_147 = 0.3083333333333333481363070*w[0][2]*w[1][2]*w[2][2] + 0.2000000000000000111022302*var_55 + 0.0138888888888888881179007*var_56 + 0.0500000000000000027755576*var_57 + 1.5833333333333332593184650*var_58;
    A[1] = var_146 + 0.0001623376623376623375215*var_147*var_26;
    A[10] = A[1];
    const double var_148 = 0.0357142857142857123031732*var_32;
    const double var_149 = var_148 + 0.0464285714285714301574615*var_13 + 0.2214285714285714190552312*var_14 + 0.0535714285714285684547598*var_10 + 0.2500000000000000000000000*var_34 + 0.0857142857142857150787307*var_7 + 0.1357142857142857039765005*var_115 + var_136;
    A[45] = var_132 + -0.0034090909090909089253219*var_149*var_26;
    A[54] = A[45];
    const double var_150 = 0.0138888888888888881179007*var_8 + 1.5833333333333332593184650*var_137 + 0.3083333333333333481363070*w[0][1]*w[1][1]*w[2][1] + 0.2000000000000000111022302*var_12 + 0.0500000000000000027755576*var_15;
    A[46] = var_62 + 0.0012175324675324677211469*var_26*var_56 + 0.0004870129870129870125646*var_101*var_26;
    const double var_151 = var_69 + var_10;
    const double var_152 = var_35 + var_151;
    const double var_153 = -0.0142857142857142852682140*var_127 + var_105 + var_89 + var_122 + 0.0107142857142857143848413*var_152;
    A[69] = var_75 + 0.0409090909090909088385857*var_153*var_26;
    A[96] = A[69];
    const double var_154 = var_29 + -0.1857142857142857206298459*var_41 + -0.0285714285714285705364279*var_42 + -0.8857142857142856762209249*var_40;
    A[68] = var_141 + -0.0002922077922077922075388*var_26*var_43 + 0.0008522727272727272313305*var_154*var_26;
    A[49] = var_75 + 0.0409090909090909088385857*var_125*var_26;
    const double var_155 = -2.7000000000000001776356839*var_2;
    const double var_156 = var_155 + -0.7500000000000000000000000*var_14 + -0.2500000000000000000000000*var_13 + var_7 + -0.6750000000000000444089210*var_115 + var_144 + -0.4500000000000000111022302*var_10;
    const double var_157 = 0.0024350649350649354422937*var_26*var_30 + var_53;
    A[13] = 0.0001623376623376623375215*var_156*var_26 + var_157;
    A[31] = A[13];
    const double var_158 = 0.1000000000000000055511151*var_29;
    const double var_159 = 0.1000000000000000055511151*var_13;
    const double var_160 = var_82 + var_33 + 0.7800000000000000266453526*var_7 + var_158 + var_159 + 1.5000000000000000000000000*var_14 + 0.2000000000000000111022302*var_5 + var_30 + 0.2600000000000000088817842*var_51;
    const double var_161 = 4.4500000000000001776356839*w[0][2]*w[1][2]*w[2][2];
    const double var_162 = 0.7500000000000000000000000*var_38 + var_161 + var_1 + 0.2250000000000000055511151*var_7 + var_113 + 0.7250000000000000888178420*var_14 + 0.6000000000000000888178420*var_11 + 0.2500000000000000000000000*var_111 + var_34;
    const double var_163 = -2.7000000000000001776356839*var_29;
    A[39] = var_75 + 0.0409090909090909088385857*var_120*var_26;
    A[93] = A[39];
    const double var_164 = 0.5000000000000000000000000*var_40 + 15.8750000000000000000000000*w[0][0]*w[1][0]*w[2][0] + 0.2500000000000000000000000*var_43 + var_42 + 0.1666666666666666574148081*var_41 + var_59;
    const double var_165 = 0.2071428571428571285828468*var_7 + var_99 + var_94 + 0.0142857142857142852682140*var_38 + 0.1071428571428571369095195*var_13 + 0.3785714285714285587403083*var_5 + var_121 + var_108;
    A[67] = var_132 + -0.0034090909090909089253219*var_142*var_26;
    A[76] = A[67];
    const double var_166 = 0.2000000000000000111022302*var_63;
    const double var_167 = 0.2600000000000000088817842*var_82 + 1.5000000000000000000000000*var_13 + 0.7800000000000000266453526*var_5 + 0.2000000000000000111022302*var_7 + var_166 + var_30 + var_135 + var_73 + var_51;
    const double var_168 = 1.5833333333333332593184650*var_40 + 0.2000000000000000111022302*var_41 + 0.0500000000000000027755576*var_43 + 0.0138888888888888881179007*var_42 + 0.3083333333333333481363070*w[0][0]*w[1][0]*w[2][0];
    A[12] = var_146 + 0.0001623376623376623375215*var_168*var_26;
    A[21] = A[12];
    const double var_169 = var_30 + var_14;
    const double var_170 = 0.0071428571428571426341070*var_29;
    const double var_171 = var_148 + 0.2214285714285714190552312*var_11 + 0.1357142857142857039765005*var_169 + 0.2500000000000000000000000*var_159 + 0.0464285714285714301574615*var_5 + 0.0857142857142857150787307*var_10 + 0.0535714285714285684547598*var_7 + var_170;
    A[27] = var_126 + 0.0005681818181818181542203*var_109*var_26;
    A[72] = A[27];
    A[3] = var_126 + 0.0005681818181818181542203*var_26*var_97;
    A[30] = A[3];
    const double var_172 = -0.8857142857142856762209249*var_58 + -0.1857142857142857206298459*var_55 + var_2 + -0.0285714285714285705364279*var_56;
    const double var_173 = 0.0714285714285714246063463*var_78;
    const double var_174 = var_95 + 0.0142857142857142852682140*var_80 + var_86 + 0.3785714285714285587403083*var_10 + 0.1071428571428571369095195*var_11 + var_104 + 0.2071428571428571285828468*var_13 + var_173;
    A[15] = var_126 + 0.0005681818181818181542203*var_174*var_26;
    const double var_175 = var_163 + -0.2500000000000000000000000*var_7 + var_36 + -0.6750000000000000444089210*var_127 + -0.7500000000000000000000000*var_10 + var_11 + -0.4500000000000000111022302*var_5;
    const double var_176 = 0.0500000000000000027755576*var_112;
    const double var_177 = var_161 + 0.6000000000000000888178420*var_14 + 0.7250000000000000888178420*var_11 + var_159 + var_72 + 0.2500000000000000000000000*var_69 + 0.2250000000000000055511151*var_10 + 0.7500000000000000000000000*var_68 + var_176;
    A[14] = var_66 + 0.0001623376623376623375215*var_177*var_26;
    A[41] = A[14];
    const double var_178 = var_163 + -0.7500000000000000000000000*var_13 + -0.2500000000000000000000000*var_14 + -0.4500000000000000111022302*var_11 + -0.6750000000000000444089210*var_85 + var_5 + var_35;
    const double var_179 = 1.3000000000000000444089210*w[0][2]*w[1][2]*w[2][2];
    const double var_180 = 0.0428571428571428575393654*var_10 + 0.0285714285714285705364279*var_13;
    const double var_181 = var_106 + 0.0142857142857142852682140*var_69 + 0.2071428571428571285828468*var_11 + 0.3785714285714285587403083*var_14 + 0.1071428571428571369095195*var_7 + var_179 + var_180 + var_96;
    A[4] = var_126 + 0.0005681818181818181542203*var_181*var_26;
    A[40] = A[4];
    A[2] = var_146 + 0.0001623376623376623375215*var_150*var_26;
    A[20] = A[2];
    const double var_182 = var_55 + var_12 + var_41;
    const double var_183 = 0.4500000000000000111022302*var_27 + var_29 + var_40 + 0.6000000000000000888178420*var_182;
    A[89] = var_75 + 0.0409090909090909088385857*var_26*var_93;
    const double var_184 = var_99 + var_173 + 0.0142857142857142852682140*var_111 + 0.1071428571428571369095195*var_10 + 0.2071428571428571285828468*var_14 + 0.3785714285714285587403083*var_11 + var_179 + var_116;
    A[16] = var_126 + 0.0005681818181818181542203*var_184*var_26;
    A[36] = var_132 + -0.0034090909090909089253219*var_171*var_26;
    A[98] = A[89];
    const double var_185 = var_155 + var_10 + -0.7500000000000000000000000*var_11 + -0.6750000000000000444089210*var_169 + -0.4500000000000000111022302*var_7 + var_61 + -0.2500000000000000000000000*var_5;
    A[5] = 0.0001623376623376623375215*var_185*var_26 + var_54;
    A[73] = A[37];
    A[6] = var_66 + 0.0001623376623376623375215*var_162*var_26;
    A[63] = A[36];
    const double var_186 = 0.1085714285714285687323155*var_15 + 0.0200000000000000004163336*var_30 + 0.7142857142857143015746146*var_137 + 0.1200000000000000094368957*var_12 + 0.0371428571428571441259692*var_8;
    A[56] = var_39 + -0.0042613636363636369155938*var_186*var_26;
    A[65] = A[56];
    A[28] = var_126 + 0.0005681818181818181542203*var_165*var_26;
    A[77] = var_28 + 0.0024350649350649354422937*var_167*var_26;
    const double var_187 = var_166 + var_61 + 0.2600000000000000088817842*var_144 + 1.5000000000000000000000000*var_10 + var_2 + var_130 + 0.2000000000000000111022302*var_14 + 0.7800000000000000266453526*var_11 + var_31;
    A[55] = var_28 + 0.0024350649350649354422937*var_187*var_26;
    const double var_188 = -0.0285714285714285705364279*var_8 + var_30 + -0.8857142857142856762209249*var_137 + -0.1857142857142857206298459*var_12;
    A[47] = var_141 + -0.0002922077922077922075388*var_15*var_26 + 0.0008522727272727272313305*var_188*var_26;
    A[74] = A[47];
    const double var_189 = var_46 + 0.0857142857142857150787307*var_13 + 0.0535714285714285684547598*var_14 + 0.0464285714285714301574615*var_11 + 0.2214285714285714190552312*var_5 + 0.2500000000000000000000000*var_139 + 0.1357142857142857039765005*var_49 + var_170;
    A[48] = var_132 + -0.0034090909090909089253219*var_189*var_26;
    A[84] = A[48];
    A[64] = A[46];
    const double var_190 = -0.5000000000000000000000000*var_42 + 0.3000000000000000444089210*var_43 + 1.5500000000000000444089210*var_41 + 3.1000000000000000888178420*var_40 + var_29 + var_103;
    A[9] = 0.0001623376623376623375215*var_190*var_26;
    const double var_191 = 0.3000000000000000444089210*var_57 + 3.1000000000000000888178420*var_58 + 1.5500000000000000444089210*var_55 + -0.5000000000000000000000000*var_56 + var_2 + var_103;
    A[29] = 0.0001623376623376623375215*var_191*var_26;
    A[85] = A[58];
    const double var_192 = var_117 + var_180 + -0.0142857142857142852682140*var_169 + var_77 + 0.0107142857142857143848413*var_145;
    A[50] = A[5];
    const double var_193 = 0.6000000000000000888178420*var_7 + 0.2500000000000000000000000*var_90 + var_102 + 0.7500000000000000000000000*var_80 + var_176 + 0.7250000000000000888178420*var_5 + var_139 + 0.2250000000000000055511151*var_13 + var_110;
    A[99] = 0.0087662337662337656840617*var_183*var_26;
    A[87] = A[78];
    A[60] = A[6];
    A[90] = A[9];
    const double var_194 = var_35 + 0.2000000000000000111022302*var_10 + var_47 + var_140 + 1.5000000000000000000000000*var_5 + 0.7800000000000000266453526*var_13 + var_29 + var_135 + 0.2600000000000000088817842*var_36;
    A[88] = var_28 + 0.0024350649350649354422937*var_194*var_26;
    const double var_195 = 3.1000000000000000888178420*var_137 + 1.5500000000000000444089210*var_12 + 0.3000000000000000444089210*var_15 + -0.5000000000000000000000000*var_8 + var_30 + var_103;
    A[19] = 0.0001623376623376623375215*var_195*var_26;
    A[26] = 0.0001623376623376623375215*var_175*var_26 + var_134;
    A[62] = A[26];
    A[59] = var_75 + 0.0409090909090909088385857*var_192*var_26;
    A[95] = A[59];
    A[86] = A[68];
    A[82] = A[28];
    A[92] = A[29];
    A[11] = 0.0002164502164502164500287*var_138*var_26;
    A[44] = var_28 + 0.0024350649350649354422937*var_160*var_26;
    A[51] = A[15];
    const double var_196 = var_140 + 1.5000000000000000000000000*var_7 + 0.2600000000000000088817842*var_61 + var_158 + var_144 + var_139 + var_2 + 0.2000000000000000111022302*var_11 + 0.7800000000000000266453526*var_14;
    A[23] = var_66 + 0.0001623376623376623375215*var_193*var_26;
    A[18] = 0.0001623376623376623375215*var_178*var_26 + var_157;
    A[38] = var_62 + 0.0012175324675324677211469*var_18*var_26 + 0.0004870129870129870125646*var_137*var_26;
    A[83] = A[38];
    A[35] = var_141 + -0.0002922077922077922075388*var_26*var_57 + 0.0008522727272727272313305*var_172*var_26;
    A[0] = 0.0002164502164502164500287*var_164*var_26;
    A[32] = A[23];
    A[81] = A[18];
    A[33] = var_28 + 0.0024350649350649354422937*var_196*var_26;
    A[53] = A[35];
    A[61] = A[16];
    A[94] = A[49];
    A[71] = A[17];
    A[91] = A[19];
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
