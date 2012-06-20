#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 3.47 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = -1.0000000000000000000000000*x[0][1];
    const double var_1 = x[1][1] + var_0;
    const double var_2 = -1.0000000000000000000000000*x[0][0];
    const double var_3 = x[2][0] + var_2;
    const double var_4 = x[2][1] + var_0;
    const double var_5 = x[1][0] + var_2;
    const double var_6 = -1.0000000000000000000000000*var_1*var_3 + var_4*var_5;
    const double var_7 = std::abs(var_6);
    const double var_8 = w[0][3] + w[0][5];
    const double var_9 = w[0][0] + w[0][2];
    const double var_10 = -0.0571428571428571410728559*w[0][4] + 0.0030303030303030303004019*w[0][1] + 0.0242424242424242424032155*var_9 + -0.0043290043290043290005742*var_8;
    A[22] = 0.0074074074074074076901031*var_10*var_7;
    const double var_11 = 0.3333333333333333148296163*w[0][4] + -0.1666666666666666574148081*var_9 + var_8;
    const double var_12 = -1.0000000000000000000000000*w[0][0];
    const double var_13 = 38.0000000000000000000000000*w[0][3] + var_12;
    const double var_14 = 0.0001539201539201539290554*var_13*var_7;
    const double var_15 = -1.0000000000000000000000000*w[0][2];
    const double var_16 = var_15 + 0.8888888888888888395456433*w[0][5];
    const double var_17 = 0.0034632034632034632004594*var_16*var_7;
    const double var_18 = -1.0000000000000000000000000*w[0][4];
    const double var_19 = w[0][1] + 2.6666666666666665186369300*var_18;
    const double var_20 = 0.0011544011544011544001531*var_19*var_7;
    A[74] = var_14 + var_17 + var_20;
    const double var_21 = 0.0037624926513815403796015*var_7*w[0][3] + -0.0014365881032547698960972*var_7*w[0][0];
    const double var_22 = -0.0033349366682700015522556*var_7*w[0][4] + 0.0003591470258136924740243*var_7*w[0][1];
    const double var_23 = w[0][4] + w[0][3];
    const double var_24 = w[0][0] + w[0][1];
    const double var_25 = var_23 + 0.3333333333333333148296163*w[0][5] + -0.1666666666666666574148081*var_24;
    A[32] = 0.0004008337341670675422166*var_25*var_7 + 0.0017556517556517555779527*var_7*w[0][2];
    const double var_26 = -4.0000000000000000000000000*var_23 + -11.3333333333333321490954404*w[0][5] + w[0][2];
    const double var_27 = 0.0032836299502966171531826*var_7*w[0][4] + -0.0013339746673080006642703*var_7*w[0][1];
    const double var_28 = -1.0000000000000000000000000*w[0][5];
    const double var_29 = var_15 + 2.0000000000000000000000000*var_28;
    const double var_30 = 0.0002052268718935385720739*var_29*var_7;
    const double var_31 = -1.0000000000000000000000000*w[0][3];
    const double var_32 = 0.0008209074875741542882956*var_31*var_7;
    const double var_33 = var_32 + 0.0017444284110950778084181*var_7*w[0][0];
    A[177] = var_30 + var_27 + var_33;
    A[191] = A[177];
    const double var_34 = 3.8000000000000002664535259*w[0][4] + -13.1666666666666660745477202*w[0][1] + -0.6666666666666666296592325*var_8;
    const double var_35 = 0.0000962000962000961954953*var_34*var_7;
    const double var_36 = -0.0000384800384800384822639*var_7*w[0][2];
    const double var_37 = 0.0003623536956870290260714*var_7*w[0][0];
    A[25] = var_35 + var_36 + var_37;
    A[151] = A[25];
    const double var_38 = 0.0016076104964993854270355*var_7*w[0][1];
    A[164] = 0.0004617604617604617600612*var_26*var_7 + 0.0008465608465608465962524*var_24*var_7;
    A[220] = A[164];
    const double var_39 = w[0][4] + w[0][5];
    const double var_40 = w[0][1] + w[0][2];
    const double var_41 = -1.0000000000000000000000000*var_40;
    const double var_42 = 2.0000000000000000000000000*w[0][3] + w[0][0] + var_41;
    A[209] = 0.0012313612313612314324435*var_42*var_7 + -0.0073881673881673881609800*var_39*var_7;
    const double var_43 = 0.0037624926513815403796015*var_7*w[0][4] + -0.0014365881032547698960972*var_7*w[0][1];
    const double var_44 = -0.3961038961038961248029011*w[0][4] + -0.5616883116883116811024479*var_9 + 0.1250000000000000000000000*w[0][1] + -0.0259740259740259757381686*var_8;
    A[2] = 0.0001646090534979423997391*var_44*var_7;
    const double var_45 = 2.4285714285714283811046243*var_23 + var_15 + 4.1428571428571423496123316*w[0][5];
    const double var_46 = 0.0000812356367911923582222*var_7*w[0][2] + -0.0004361071027737694521045*var_7*w[0][5];
    const double var_47 = 0.0030784030784030782558480*var_15*var_7 + 0.0009235209235209235201225*var_28*var_7;
    const double var_48 = -1.0000000000000000000000000*w[0][1];
    const double var_49 = 38.0000000000000000000000000*w[0][4] + var_48;
    const double var_50 = -1.0000000000000000000000000*var_9;
    const double var_51 = 0.0571428571428571410728559*w[0][4] + 0.0158730158730158721347436*w[0][1] + 0.0222222222222222230703093*var_50 + 0.1079365079365079416184869*var_8;
    const double var_52 = 4.0000000000000000000000000*w[0][3];
    const double var_53 = var_15 + var_52;
    const double var_54 = 23.0000000000000000000000000*w[0][4] + w[0][1];
    const double var_55 = 0.0000513067179733846430185*var_54*var_7;
    const double var_56 = 0.0000513067179733846430185*var_7*w[0][5];
    const double var_57 = -0.0009491742825076159364994*var_7*w[0][0];
    A[116] = var_56 + 0.0000769600769600769645277*var_53*var_7 + var_55 + var_57;
    const double var_58 = -0.0019496552829886164889123*var_7*w[0][1];
    A[106] = A[22];
    const double var_59 = 4.0000000000000000000000000*w[0][5];
    const double var_60 = var_48 + var_59;
    const double var_61 = w[0][0] + 23.0000000000000000000000000*w[0][3];
    const double var_62 = 0.0000513067179733846430185*var_61*var_7;
    const double var_63 = -0.0009491742825076159364994*var_7*w[0][2];
    const double var_64 = 0.0000513067179733846430185*var_7*w[0][4];
    A[66] = 0.0000769600769600769645277*var_60*var_7 + var_62 + var_64 + var_63;
    A[94] = A[66];
    const double var_65 = 0.0001539201539201539290554*var_49*var_7;
    const double var_66 = w[0][5] + -0.0969696969696969696128619*w[0][2];
    const double var_67 = 0.0112874779541446215724854*var_66*var_7;
    const double var_68 = 0.0032836299502966171531826*var_7*w[0][3] + -0.0013339746673080006642703*var_7*w[0][0];
    const double var_69 = var_48 + 2.0000000000000000000000000*var_18;
    const double var_70 = 0.0002052268718935385720739*var_69*var_7;
    const double var_71 = 0.0008209074875741542882956*var_28*var_7;
    const double var_72 = var_71 + 0.0017444284110950778084181*var_7*w[0][2];
    A[104] = var_72 + var_68 + var_70;
    A[216] = A[104];
    const double var_73 = 0.0061568061568061565116960*var_7*w[0][5];
    const double var_74 = 0.8888888888888888395456433*w[0][4] + var_48;
    const double var_75 = 0.0034632034632034632004594*var_7*var_74;
    const double var_76 = 2.6666666666666665186369300*var_28 + w[0][2];
    const double var_77 = 0.0011544011544011544001531*var_7*var_76;
    A[73] = var_14 + var_75 + var_77;
    const double var_78 = -0.0002223291112180001197467*var_7*w[0][3];
    const double var_79 = var_78 + 0.0005772005772005772000766*var_7*w[0][0];
    const double var_80 = 0.0002137779915557693323578*var_48*var_7;
    const double var_81 = -0.0495238095238095255012922*var_23 + -0.0228571428571428571230317*w[0][5] + 0.1904761904761904656169236*w[0][2] + -0.0133333333333333341891302*var_24;
    const double var_82 = var_12 + 2.0000000000000000000000000*var_31;
    const double var_83 = 0.0002052268718935385720739*var_7*var_82;
    A[59] = var_72 + var_83 + var_27;
    const double var_84 = 0.0018470418470418470402450*var_7*w[0][4];
    const double var_85 = var_84 + 0.0082090748757415420155947*var_7*w[0][1];
    const double var_86 = 4.1200000000000001065814104*var_23 + 18.4400000000000012789769244*w[0][5] + 2.0000000000000000000000000*var_24 + -1.6400000000000001243449788*w[0][2];
    const double var_87 = 4.1428571428571423496123316*w[0][3] + var_12 + 2.4285714285714283811046243*var_39;
    const double var_88 = -0.0014365881032547698960972*var_7*w[0][2] + 0.0037624926513815403796015*var_7*w[0][5];
    const double var_89 = w[0][4] + -0.0969696969696969696128619*w[0][1];
    const double var_90 = 0.0112874779541446215724854*var_7*var_89;
    const double var_91 = 0.0018470418470418470402450*var_7*w[0][3];
    const double var_92 = 0.0082090748757415420155947*var_7*w[0][0] + var_91;
    A[96] = var_90 + var_92 + var_88;
    const double var_93 = -0.0001795735129068462370121*var_7*w[0][4] + 0.0001539201539201539290554*var_7*w[0][1];
    const double var_94 = -4.3333333333333330372738601*w[0][0] + var_31;
    const double var_95 = 0.0000769600769600769645277*var_7*var_94;
    const double var_96 = -0.0009748276414943082444561*var_7*w[0][5];
    A[42] = var_96 + var_93 + var_95;
    A[182] = A[42];
    const double var_97 = var_48 + var_52;
    const double var_98 = 0.0004104537437870771441478*var_15*var_7 + 0.0011629522740633853501724*var_7*w[0][5];
    const double var_99 = 0.0016076104964993854270355*var_7*w[0][0];
    A[101] = var_84 + 0.0001026134359467692860370*var_7*var_97 + var_99 + var_98;
    A[171] = A[101];
    const double var_100 = var_23 + 6.8000000000000007105427358*w[0][5] + w[0][2];
    A[44] = 0.0000769600769600769645277*var_24*var_7 + 0.0001282667949334615939937*var_100*var_7;
    const double var_101 = -0.6666666666666666296592325*var_23 + 3.8000000000000002664535259*w[0][5] + -13.1666666666666660745477202*w[0][2];
    const double var_102 = 0.0000962000962000961954953*var_101*var_7;
    const double var_103 = -0.0000384800384800384822639*var_7*w[0][1];
    A[37] = var_103 + var_102 + var_37;
    A[107] = A[37];
    const double var_104 = var_28 + -4.3333333333333330372738601*w[0][2];
    const double var_105 = 0.0000769600769600769645277*var_104*var_7;
    const double var_106 = 4.0000000000000000000000000*w[0][4];
    const double var_107 = var_106 + var_15;
    const double var_108 = -0.0009491742825076159364994*var_7*w[0][1];
    A[69] = var_108 + var_62 + var_56 + 0.0000769600769600769645277*var_107*var_7;
    const double var_109 = var_12 + var_59;
    const double var_110 = -0.2909090909090908949607979*w[0][4] + w[0][1];
    const double var_111 = 0.0056437389770723107862427*var_110*var_7;
    const double var_112 = -0.0019496552829886164889123*var_7*w[0][2];
    const double var_113 = 0.0061568061568061565116960*var_7*w[0][3];
    A[58] = 0.0010261343594676927519493*var_109*var_7 + var_113 + var_112 + var_111;
    A[198] = A[58];
    const double var_114 = -0.0017444284110950778084181*var_7*w[0][2] + 0.0016418149751483085765913*var_7*w[0][5];
    const double var_115 = 0.0020522687189353855038987*var_31*var_7 + 0.0006156806156806157162217*var_7*w[0][0];
    const double var_116 = 0.0008209074875741542882956*var_18*var_7;
    const double var_117 = var_116 + 0.0001026134359467692860370*var_7*w[0][1];
    A[87] = var_115 + var_117 + var_114;
    A[185] = A[87];
    const double var_118 = 0.0181818181818181809350499*var_106 + 0.2424242424242424309710486*w[0][1] + -0.0464646464646464654735247*var_9 + 0.2222222222222222098864108*var_8;
    const double var_119 = 0.0020522687189353855038987*var_18*var_7 + 0.0006156806156806157162217*var_7*w[0][1];
    const double var_120 = var_32 + 0.0001026134359467692860370*var_7*w[0][0];
    A[133] = var_119 + var_120 + var_114;
    const double var_121 = -0.0002223291112180001197467*var_7*w[0][4];
    const double var_122 = 0.0005772005772005772000766*var_7*w[0][1] + var_121;
    const double var_123 = -0.0004361071027737694521045*var_7*w[0][3] + 0.0000812356367911923582222*var_7*w[0][0];
    const double var_124 = 4.1428571428571423496123316*w[0][4] + var_48 + 2.4285714285714283811046243*var_8;
    const double var_125 = 0.0011629522740633853501724*var_7*w[0][3] + 0.0004104537437870771441478*var_12*var_7;
    const double var_126 = 0.0016076104964993854270355*var_7*w[0][2];
    A[53] = var_84 + 0.0001026134359467692860370*var_60*var_7 + var_126 + var_125;
    const double var_127 = -1.0000000000000000000000000*var_24;
    const double var_128 = 2.0000000000000000000000000*w[0][5] + w[0][2] + var_127;
    const double var_129 = 0.3555555555555555691249481*w[0][0] + var_31;
    const double var_130 = 0.0023088023088023088003062*var_129*var_7;
    A[68] = var_22 + var_47 + var_130;
    A[124] = A[68];
    const double var_131 = -0.2909090909090908949607979*w[0][5] + w[0][2];
    const double var_132 = 0.0056437389770723107862427*var_131*var_7;
    const double var_133 = 0.0061568061568061565116960*var_7*w[0][4];
    const double var_134 = -0.0019496552829886164889123*var_7*w[0][0];
    A[134] = var_133 + 0.0010261343594676927519493*var_7*var_97 + var_134 + var_132;
    A[218] = A[134];
    const double var_135 = 0.0158730158730158721347436*w[0][0] + 0.0571428571428571410728559*w[0][3] + 0.0222222222222222230703093*var_41 + 0.1079365079365079416184869*var_39;
    const double var_136 = 0.0666666666666666657414808*w[0][3] + var_12;
    const double var_137 = 0.0003848003848003847819810*var_136*var_7;
    const double var_138 = 0.0000256533589866923215092*var_18*var_7 + 0.0000299289188178077050393*var_7*w[0][1];
    const double var_139 = -0.0002223291112180001197467*var_7*w[0][5];
    const double var_140 = var_139 + 0.0005772005772005772000766*var_7*w[0][2];
    A[36] = var_140 + var_138 + var_137;
    const double var_141 = 0.0030303030303030303004019*w[0][0] + -0.0571428571428571410728559*w[0][3] + 0.0242424242424242424032155*var_40 + -0.0043290043290043290005742*var_39;
    A[4] = 0.0074074074074074076901031*var_141*var_7;
    const double var_142 = -0.2222222222222222098864108*w[0][4] + var_48;
    const double var_143 = 0.0003463203463203463200459*var_142*var_7;
    const double var_144 = var_139 + 0.0000128266794933461607546*var_7*w[0][2];
    A[3] = var_143 + var_123 + var_144;
    A[45] = A[3];
    const double var_145 = w[0][0] + var_40;
    const double var_146 = 0.0002052268718935385720739*var_145*var_7;
    const double var_147 = 0.6666666666666666296592325*w[0][3] + var_39;
    A[131] = var_146 + 0.0006156806156806157162217*var_147*var_7;
    const double var_148 = -0.0009748276414943082444561*var_7*w[0][3];
    const double var_149 = 1.8571428571428569842538536*w[0][0] + w[0][3];
    const double var_150 = -0.0017957351290684624243316*var_149*var_7;
    A[193] = 0.0012313612313612314324435*var_128*var_7 + -0.0073881673881673881609800*var_23*var_7;
    A[207] = A[193];
    const double var_151 = var_28 + 0.3555555555555555691249481*w[0][2];
    const double var_152 = 0.0023088023088023088003062*var_151*var_7;
    const double var_153 = 0.3333333333333333148296163*w[0][3] + -0.1666666666666666574148081*var_40 + var_39;
    A[0] = 0.0004008337341670675422166*var_153*var_7 + 0.0017556517556517555779527*var_7*w[0][0];
    const double var_154 = 0.0000513067179733846430185*var_7*w[0][3];
    A[52] = 0.0000769600769600769645277*var_109*var_7 + var_63 + var_154 + var_55;
    const double var_155 = -0.0033349366682700015522556*var_7*w[0][3] + 0.0003591470258136924740243*var_7*w[0][0];
    const double var_156 = 0.3555555555555555691249481*w[0][1] + var_18;
    const double var_157 = 0.0023088023088023088003062*var_156*var_7;
    A[82] = var_157 + var_155 + var_47;
    A[110] = A[82];
    const double var_158 = var_106 + var_12;
    A[89] = var_113 + var_58 + 0.0010261343594676927519493*var_158*var_7 + var_132;
    const double var_159 = 0.8888888888888888395456433*w[0][3] + var_12;
    const double var_160 = 0.0034632034632034632004594*var_159*var_7;
    const double var_161 = var_15 + 38.0000000000000000000000000*w[0][5];
    const double var_162 = 0.0001539201539201539290554*var_161*var_7;
    A[162] = var_160 + var_20 + var_162;
    A[190] = A[162];
    const double var_163 = 0.0001539201539201539290554*var_7*w[0][2] + -0.0001795735129068462370121*var_7*w[0][5];
    const double var_164 = -0.3961038961038961248029011*w[0][3] + -0.5616883116883116811024479*var_40 + 0.1250000000000000000000000*w[0][0] + -0.0259740259740259757381686*var_39;
    A[17] = 0.0001646090534979423997391*var_164*var_7;
    const double var_165 = -13.1666666666666660745477202*w[0][0] + 3.8000000000000002664535259*w[0][3] + -0.6666666666666666296592325*var_39;
    A[98] = 0.0014707925819036930456529*var_7*var_9 + 0.0004788627010849232806290*var_124*var_7;
    const double var_166 = -11.3333333333333321490954404*w[0][3] + w[0][0] + -4.0000000000000000000000000*var_39;
    A[72] = 0.0004617604617604617600612*var_166*var_7 + 0.0008465608465608465962524*var_40*var_7;
    A[184] = A[72];
    const double var_167 = 0.0001710223932446154767283*var_7*w[0][3];
    const double var_168 = 0.0007952541285874619803389*var_7*w[0][2] + -0.0038480038480038481450707*var_7*w[0][5];
    const double var_169 = -0.0023088023088023088003062*var_7*w[0][4] + 0.0007952541285874619803389*var_48*var_7;
    A[145] = var_150 + var_169 + var_168;
    A[159] = A[145];
    const double var_170 = 0.0016418149751483085765913*var_7*w[0][4] + -0.0017444284110950778084181*var_7*w[0][1];
    const double var_171 = var_71 + 0.0001026134359467692860370*var_7*w[0][2];
    A[57] = var_115 + var_170 + var_171;
    const double var_172 = 0.0666666666666666657414808*w[0][4] + var_48;
    const double var_173 = 0.0003848003848003847819810*var_172*var_7;
    const double var_174 = 0.0000256533589866923215092*var_31*var_7 + 0.0000299289188178077050393*var_7*w[0][0];
    A[33] = var_140 + var_174 + var_173;
    const double var_175 = 0.0003591470258136924740243*var_7*w[0][2] + -0.0033349366682700015522556*var_7*w[0][5];
    const double var_176 = 0.0030784030784030782558480*var_12*var_7 + 0.0009235209235209235201225*var_31*var_7;
    A[114] = var_157 + var_176 + var_175;
    const double var_177 = 0.0000962000962000961954953*var_165*var_7;
    const double var_178 = 0.0003623536956870290260714*var_7*w[0][1];
    A[10] = var_177 + var_178 + var_36;
    const double var_179 = 0.0000128266794933461607546*var_7*w[0][1] + var_121;
    const double var_180 = var_15 + -0.2222222222222222098864108*w[0][5];
    const double var_181 = 0.0003463203463203463200459*var_180*var_7;
    A[173] = A[131];
    A[14] = var_148 + var_93 + var_105;
    const double var_182 = -0.0000384800384800384822639*var_7*w[0][0];
    A[34] = var_178 + var_182 + var_102;
    A[62] = A[34];
    const double var_183 = 0.0009235209235209235201225*var_18*var_7 + 0.0030784030784030782558480*var_48*var_7;
    A[55] = var_155 + var_183 + var_152;
    A[153] = A[55];
    A[117] = var_160 + var_77 + var_65;
    A[187] = A[117];
    const double var_184 = -0.1975308641975308532323652*w[0][5] + w[0][2];
    const double var_185 = 0.0017316017316017316002297*var_184*var_7;
    const double var_186 = 0.0001710223932446154767283*var_7*w[0][4];
    const double var_187 = 0.0002137779915557693323578*var_12*var_7;
    A[38] = 0.0000213777991555769345910*var_7*var_97 + var_185 + var_187 + var_186;
    A[122] = A[38];
    const double var_188 = 0.0006156806156806157162217*var_7*w[0][2] + 0.0020522687189353855038987*var_28*var_7;
    A[50] = 0.0004788627010849232806290*var_7*var_87 + 0.0014707925819036930456529*var_40*var_7;
    A[78] = A[50];
    const double var_189 = -0.0038480038480038481450707*var_7*w[0][3] + 0.0007952541285874619803389*var_7*w[0][0];
    const double var_190 = w[0][5] + 1.8571428571428569842538536*w[0][2];
    const double var_191 = -0.0017957351290684624243316*var_190*var_7;
    A[65] = var_191 + var_169 + var_189;
    A[79] = A[65];
    const double var_192 = -0.0023088023088023088003062*var_7*w[0][3] + 0.0007952541285874619803389*var_12*var_7;
    const double var_193 = -0.0013339746673080006642703*var_7*w[0][2] + 0.0032836299502966171531826*var_7*w[0][5];
    const double var_194 = var_116 + 0.0017444284110950778084181*var_7*w[0][1];
    A[88] = var_193 + var_194 + var_83;
    A[200] = A[88];
    const double var_195 = 0.0016418149751483085765913*var_7*w[0][3] + -0.0017444284110950778084181*var_7*w[0][0];
    A[149] = var_117 + var_195 + var_188;
    A[219] = A[149];
    const double var_196 = 0.1904761904761904656169236*w[0][0] + -0.0228571428571428571230317*w[0][3] + -0.0133333333333333341891302*var_40 + -0.0495238095238095255012922*var_39;
    A[115] = 0.0101010101010101018687015*var_196*var_7;
    A[157] = A[115];
    A[179] = var_170 + var_120 + var_188;
    A[221] = A[179];
    const double var_197 = 0.0002137779915557693323578*var_15*var_7;
    const double var_198 = 0.0003623536956870290260714*var_7*w[0][2];
    A[7] = var_103 + var_177 + var_198;
    A[105] = A[7];
    const double var_199 = -0.0004361071027737694521045*var_7*w[0][4] + 0.0000812356367911923582222*var_7*w[0][1];
    const double var_200 = var_78 + 0.0000128266794933461607546*var_7*w[0][0];
    A[23] = var_200 + var_199 + var_181;
    const double var_201 = 0.6666666666666666296592325*w[0][4] + var_8;
    A[84] = var_146 + 0.0006156806156806157162217*var_201*var_7;
    const double var_202 = -0.0228571428571428571230317*w[0][4] + -0.0133333333333333341891302*var_9 + 0.1904761904761904656169236*w[0][1] + -0.0495238095238095255012922*var_8;
    const double var_203 = 0.0018470418470418470402450*var_7*w[0][5];
    const double var_204 = 0.0011629522740633853501724*var_7*w[0][4] + 0.0004104537437870771441478*var_48*var_7;
    A[129] = 0.0001026134359467692860370*var_53*var_7 + var_99 + var_204 + var_203;
    const double var_205 = -0.2222222222222222098864108*w[0][3] + var_12;
    const double var_206 = 0.0003463203463203463200459*var_205*var_7;
    A[21] = var_206 + var_199 + var_144;
    A[91] = A[21];
    const double var_207 = -0.0001795735129068462370121*var_7*w[0][3] + 0.0001539201539201539290554*var_7*w[0][0];
    A[121] = A[23];
    const double var_208 = w[0][0] + -0.1975308641975308532323652*w[0][3];
    const double var_209 = 0.0017316017316017316002297*var_208*var_7;
    const double var_210 = -0.0038480038480038481450707*var_7*w[0][4] + 0.0007952541285874619803389*var_7*w[0][1];
    const double var_211 = 0.0007952541285874619803389*var_15*var_7 + -0.0023088023088023088003062*var_7*w[0][5];
    A[97] = var_211 + var_150 + var_210;
    A[111] = A[97];
    const double var_212 = 18.4400000000000012789769244*w[0][4] + -1.6400000000000001243449788*w[0][1] + 2.0000000000000000000000000*var_9 + 4.1200000000000001065814104*var_8;
    A[112] = 0.0009620009620009620362677*var_212*var_7;
    A[103] = var_119 + var_195 + var_171;
    A[201] = A[103];
    A[81] = var_126 + 0.0001026134359467692860370*var_109*var_7 + var_204 + var_91;
    A[95] = A[81];
    const double var_213 = 23.0000000000000000000000000*w[0][5] + w[0][2];
    A[16] = 0.0004008337341670675422166*var_11*var_7 + 0.0017556517556517555779527*var_7*w[0][1];
    const double var_214 = -0.0259740259740259757381686*var_23 + -0.3961038961038961248029011*w[0][5] + 0.1250000000000000000000000*w[0][2] + -0.5616883116883116811024479*var_24;
    A[199] = A[73];
    A[1] = 0.0001646090534979423997391*var_214*var_7;
    A[15] = A[1];
    A[100] = var_22 + var_176 + var_152;
    const double var_215 = 2.0000000000000000000000000*w[0][4] + w[0][1] + var_50;
    const double var_216 = -0.1975308641975308532323652*w[0][4] + w[0][1];
    const double var_217 = 0.0017316017316017316002297*var_216*var_7;
    const double var_218 = 0.0001710223932446154767283*var_7*w[0][5];
    A[26] = var_217 + 0.0000213777991555769345910*var_53*var_7 + var_218 + var_187;
    A[166] = A[26];
    A[160] = 0.0009620009620009620362677*var_7*var_86;
    A[215] = A[89];
    const double var_219 = -0.0043290043290043290005742*var_23 + -0.0571428571428571410728559*w[0][5] + 0.0242424242424242424032155*var_24 + 0.0030303030303030303004019*w[0][2];
    A[40] = 0.0074074074074074076901031*var_219*var_7;
    A[148] = var_68 + var_194 + var_30;
    const double var_220 = 0.0082090748757415420155947*var_7*w[0][2] + var_203;
    A[150] = A[10];
    const double var_221 = w[0][0] + 2.6666666666666665186369300*var_31;
    const double var_222 = 0.0011544011544011544001531*var_221*var_7;
    A[163] = var_75 + var_222 + var_162;
    A[205] = A[163];
    const double var_223 = -4.3333333333333330372738601*w[0][1] + var_18;
    const double var_224 = 6.8000000000000007105427358*w[0][3] + w[0][0] + var_39;
    A[12] = 0.0001282667949334615939937*var_224*var_7 + 0.0000769600769600769645277*var_40*var_7;
    A[210] = A[14];
    A[132] = var_193 + var_70 + var_33;
    A[188] = A[132];
    A[47] = A[33];
    const double var_225 = 0.0000769600769600769645277*var_223*var_7;
    A[43] = var_96 + var_225 + var_207;
    A[197] = A[43];
    const double var_226 = 0.0000513067179733846430185*var_213*var_7;
    A[85] = var_108 + var_226 + 0.0000769600769600769645277*var_158*var_7 + var_154;
    A[56] = 0.0169312169312169323587280*var_118*var_7;
    const double var_227 = w[0][4] + 1.8571428571428569842538536*w[0][1];
    const double var_228 = -0.0017957351290684624243316*var_227*var_7;
    A[223] = A[209];
    A[67] = 0.0101010101010101018687015*var_7*var_81;
    A[109] = A[67];
    const double var_229 = -11.3333333333333321490954404*w[0][4] + w[0][1] + -4.0000000000000000000000000*var_8;
    A[35] = var_80 + var_167 + var_185 + 0.0000213777991555769345910*var_158*var_7;
    A[77] = A[35];
    A[118] = 0.0008465608465608465962524*var_7*var_9 + 0.0004617604617604617600612*var_229*var_7;
    A[202] = A[118];
    A[13] = var_148 + var_163 + var_225;
    A[195] = A[13];
    const double var_230 = -0.0009748276414943082444561*var_7*w[0][4];
    A[29] = var_105 + var_230 + var_207;
    A[39] = var_206 + var_179 + var_46;
    A[137] = A[39];
    A[119] = var_17 + var_65 + var_222;
    A[217] = A[119];
    A[168] = A[56];
    A[108] = A[52];
    const double var_231 = -0.0969696969696969696128619*w[0][0] + w[0][3];
    A[113] = var_192 + var_191 + var_210;
    A[127] = A[113];
    A[27] = var_163 + var_95 + var_230;
    A[181] = A[27];
    const double var_232 = w[0][0] + -0.2909090909090908949607979*w[0][3];
    const double var_233 = 0.0056437389770723107862427*var_232*var_7;
    A[102] = 0.0010261343594676927519493*var_60*var_7 + var_133 + var_233 + var_112;
    A[186] = A[102];
    const double var_234 = -1.6400000000000001243449788*w[0][0] + 2.0000000000000000000000000*var_40 + 18.4400000000000012789769244*w[0][3] + 4.1200000000000001065814104*var_39;
    A[64] = 0.0009620009620009620362677*var_234*var_7;
    A[6] = 0.0000213777991555769345910*var_60*var_7 + var_209 + var_197 + var_186;
    A[90] = A[6];
    A[60] = A[4];
    const double var_235 = 6.8000000000000007105427358*w[0][4] + w[0][1] + var_8;
    A[28] = 0.0000769600769600769645277*var_7*var_9 + 0.0001282667949334615939937*var_235*var_7;
    A[128] = var_220 + var_90 + var_21;
    const double var_236 = var_15 + 0.0666666666666666657414808*w[0][5];
    const double var_237 = 0.0003848003848003847819810*var_236*var_7;
    A[19] = var_35 + var_198 + var_182;
    A[61] = A[19];
    A[9] = var_80 + var_209 + var_218 + 0.0000213777991555769345910*var_107*var_7;
    A[135] = A[9];
    const double var_238 = 0.0000299289188178077050393*var_7*w[0][2] + 0.0000256533589866923215092*var_28*var_7;
    A[11] = var_79 + var_238 + var_173;
    const double var_239 = 0.2424242424242424309710486*w[0][0] + -0.0464646464646464654735247*var_40 + 0.2222222222222222098864108*var_39 + 0.0181818181818181809350499*var_52;
    A[99] = 0.0169312169312169323587280*var_239*var_7;
    A[208] = 0.3878787878787878784514476*var_51*var_7;
    A[123] = A[53];
    A[152] = A[40];
    A[139] = A[69];
    A[147] = var_58 + var_73 + var_233 + 0.0010261343594676927519493*var_107*var_7;
    A[176] = var_67 + var_85 + var_21;
    A[156] = A[100];
    A[71] = var_183 + var_175 + var_130;
    A[169] = A[71];
    const double var_240 = 0.2222222222222222098864108*var_23 + 0.0181818181818181809350499*var_59 + -0.0464646464646464654735247*var_24 + 0.2424242424242424309710486*w[0][2];
    A[83] = 0.0169312169312169323587280*var_240*var_7;
    A[155] = A[85];
    A[130] = var_64 + 0.0000769600769600769645277*var_7*var_97 + var_226 + var_57;
    A[158] = A[130];
    A[204] = A[148];
    A[146] = 0.0014707925819036930456529*var_24*var_7 + 0.0004788627010849232806290*var_45*var_7;
    A[41] = var_143 + var_200 + var_46;
    A[167] = A[41];
    A[142] = A[114];
    const double var_241 = var_23 + 0.6666666666666666296592325*w[0][5];
    A[214] = A[74];
    A[178] = var_73 + 0.0010261343594676927519493*var_53*var_7 + var_134 + var_111;
    A[206] = A[178];
    A[212] = A[44];
    A[54] = var_38 + var_98 + 0.0001026134359467692860370*var_158*var_7 + var_91;
    A[140] = A[84];
    A[31] = A[17];
    A[5] = var_179 + var_123 + var_181;
    A[75] = A[5];
    const double var_242 = 0.0112874779541446215724854*var_231*var_7;
    A[48] = var_85 + var_88 + var_242;
    A[143] = A[129];
    const double var_243 = 0.1079365079365079416184869*var_23 + 0.0571428571428571410728559*w[0][5] + 0.0158730158730158721347436*w[0][2] + 0.0222222222222222230703093*var_127;
    A[224] = 0.3878787878787878784514476*var_243*var_7;
    A[80] = var_43 + var_220 + var_242;
    A[180] = A[12];
    A[196] = A[28];
    A[161] = var_228 + var_192 + var_168;
    A[175] = A[161];
    A[138] = A[54];
    A[51] = var_146 + 0.0006156806156806157162217*var_241*var_7;
    A[93] = A[51];
    A[192] = 0.3878787878787878784514476*var_135*var_7;
    A[49] = var_211 + var_228 + var_189;
    A[63] = A[49];
    A[70] = 0.0101010101010101018687015*var_202*var_7;
    A[154] = A[70];
    A[213] = A[59];
    A[211] = A[29];
    A[174] = A[146];
    A[141] = A[99];
    A[20] = var_174 + var_122 + var_237;
    A[76] = A[20];
    A[194] = 0.0012313612313612314324435*var_215*var_7 + -0.0073881673881673881609800*var_7*var_8;
    A[24] = var_238 + var_122 + var_137;
    A[136] = A[24];
    A[86] = var_38 + var_125 + var_203 + 0.0001026134359467692860370*var_107*var_7;
    A[8] = var_79 + var_138 + var_237;
    A[120] = A[8];
    A[222] = A[194];
    A[183] = A[57];
    A[172] = A[116];
    A[203] = A[133];
    A[18] = 0.0000213777991555769345910*var_109*var_7 + var_217 + var_167 + var_197;
    A[46] = A[18];
    A[125] = A[83];
    A[30] = A[2];
    A[165] = A[11];
    A[189] = A[147];
    A[170] = A[86];
    A[126] = A[98];
    A[144] = var_67 + var_43 + var_92;
    A[92] = A[36];
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
