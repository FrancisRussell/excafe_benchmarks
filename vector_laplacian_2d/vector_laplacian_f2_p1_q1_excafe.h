#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 28.95 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = -x[0][1];
    const double var_1 = x[1][1] + var_0;
    const double var_2 = x[2][1] + var_0;
    const double var_3 = -x[0][0];
    const double var_4 = x[1][0] + var_3;
    const double var_5 = var_4*w[1][5] + var_2*w[1][1];
    const double var_6 = var_1*w[1][0] + var_5;
    const double var_7 = x[2][0] + var_3;
    const double var_8 = var_7*w[1][3];
    const double var_9 = var_6 + var_8;
    const double var_10 = var_7*w[0][4] + var_1*w[0][2];
    const double var_11 = var_4*w[0][5] + var_2*w[0][1];
    const double var_12 = var_10 + -var_11;
    const double var_13 = -var_7*w[0][3] + var_12;
    const double var_14 = -var_1*w[0][0];
    const double var_15 = var_14 + var_13;
    const double var_16 = var_15*var_9;
    const double var_17 = var_7*w[1][4] + var_1*w[1][2];
    const double var_18 = var_4*w[1][3];
    const double var_19 = var_17 + var_18;
    const double var_20 = var_4*var_6*w[0][3] + var_1*var_19*w[0][0];
    const double var_21 = -var_10 + var_11;
    const double var_22 = -var_4*w[0][3];
    const double var_23 = var_22 + var_21;
    const double var_24 = var_19*var_23;
    const double var_25 = var_20 + var_16 + var_24;
    const double var_26 = -var_4 + var_7;
    const double var_27 = var_2*var_2;
    const double var_28 = var_2*w[1][0];
    const double var_29 = var_17 + var_28;
    const double var_30 = var_5 + var_8;
    const double var_31 = var_16 + var_2*var_30*w[0][0] + var_29*var_7*w[0][3];
    const double var_32 = -var_19 + var_30;
    const double var_33 = var_21*w[1][0] + var_32*w[0][0];
    const double var_34 = var_33 + var_26*w[0][3]*w[1][0];
    const double var_35 = var_7*var_7;
    const double var_36 = var_27 + var_35;
    const double var_37 = -var_1*var_7 + var_2*var_4;
    const double var_38 = var_37;
    const double var_39 = std::abs(var_38);
    const double var_40 = var_37;
    const double var_41 = var_4*w[0][3] + var_12;
    const double var_42 = var_1*w[0][0] + var_21;
    const double var_43 = var_19*var_41 + var_42*var_6 + -var_20;
    const double var_44 = -var_17 + var_9;
    const double var_45 = var_1*w[0][0]*w[1][3] + var_44*w[0][3];
    const double var_46 = 0.5000000000000000000000000*var_45 + var_22*w[1][3];
    const double var_47 = 0.5000000000000000000000000*var_43 + var_46*var_7;
    const double var_48 = var_14 + 0.5000000000000000000000000*var_13;
    const double var_49 = -var_2*w[0][0] + var_21;
    const double var_50 = var_19 + var_28;
    const double var_51 = -var_5 + var_50;
    const double var_52 = var_4*w[0][3]*w[1][0];
    const double var_53 = var_52 + var_51*w[0][0];
    const double var_54 = var_2*var_53;
    const double var_55 = var_54 + var_49*var_7*w[1][3];
    const double var_56 = var_2*var_48*w[1][0] + var_47 + 0.5000000000000000000000000*var_55;
    const double var_57 = var_4*var_4;
    const double var_58 = var_1*var_1;
    const double var_59 = var_57 + var_58;
    A[14] = var_39*var_56*var_59/(var_40*var_40*var_40*var_40);
    A[35] = A[14];
    const double var_60 = var_13*var_29 + var_30*var_49;
    const double var_61 = 0.5000000000000000000000000*var_60;
    const double var_62 = var_2*var_29 + var_1*var_44;
    const double var_63 = var_1*var_21*w[1][0] + var_7*var_9*w[0][3] + var_62*w[0][0];
    const double var_64 = var_61 + 0.5000000000000000000000000*var_63 + -var_1*var_2*w[0][0]*w[1][0];
    const double var_65 = var_14 + var_12;
    const double var_66 = var_2*var_5*w[0][0] + 3.0000000000000000000000000*var_4*var_7*w[0][3]*w[1][3] + var_6*var_65;
    const double var_67 = var_22 + var_49;
    const double var_68 = var_50*var_67;
    const double var_69 = 0.5000000000000000000000000*var_68;
    const double var_70 = var_1*var_2*w[0][0]*w[1][0] + 0.5000000000000000000000000*var_20 + var_69;
    const double var_71 = var_2*w[0][0] + var_65;
    const double var_72 = -var_6 + var_29;
    const double var_73 = var_71*w[1][3] + var_72*w[0][3];
    const double var_74 = var_7*var_73;
    const double var_75 = -1.5000000000000000000000000*var_7*var_7*w[0][3]*w[1][3] + 0.5000000000000000000000000*var_66 + var_70 + var_74;
    const double var_76 = var_4*var_75 + var_64*var_7;
    const double var_77 = 0.5000000000000000000000000*var_17 + var_18;
    const double var_78 = var_2*var_26*w[1][0] + var_7*var_77;
    const double var_79 = -var_2 + var_1;
    const double var_80 = 1.5000000000000000000000000*var_79*w[0][0]*w[1][0] + var_33;
    const double var_81 = 0.5000000000000000000000000*var_25 + var_78*w[0][3] + var_2*var_80;
    const double var_82 = var_30*var_7 + var_4*var_51;
    const double var_83 = var_12*var_4*w[1][3] + var_2*var_50*w[0][0] + var_82*w[0][3];
    const double var_84 = var_61 + -var_4*var_7*w[0][3]*w[1][3] + 0.5000000000000000000000000*var_83;
    const double var_85 = var_2*var_84;
    const double var_86 = var_1*var_81 + var_85;
    const double var_87 = var_4*var_76 + var_1*var_86;
    A[2] = var_39*var_87/(var_40*var_40*var_40*var_40);
    A[33] = A[2];
    const double var_88 = var_4*var_7*w[0][3]*w[1][3];
    A[12] = A[2];
    const double var_89 = 3.0000000000000000000000000*var_1*var_2*w[0][0]*w[1][0] + var_13*var_30 + var_4*var_5*w[0][3];
    const double var_90 = var_58 + var_27;
    const double var_91 = var_57 + 2.0000000000000000000000000*var_90;
    const double var_92 = 2.0000000000000000000000000*var_4*var_7 + -var_91;
    const double var_93 = -var_30 + var_19;
    const double var_94 = var_52 + var_13*w[1][0] + var_93*w[0][0];
    const double var_95 = var_1*var_94;
    const double var_96 = var_2*var_34 + var_95;
    const double var_97 = var_24 + var_17*var_7*w[0][3] + 2.0000000000000000000000000*var_88 + var_92*w[0][0]*w[1][0] + var_89 + 1.5000000000000000000000000*var_96;
    const double var_98 = var_1*var_97 + var_85;
    A[7] = var_36*var_39*var_56/(var_40*var_40*var_40*var_40);
    const double var_99 = var_69 + -1.5000000000000000000000000*var_1*var_1*w[0][0]*w[1][0] + 0.5000000000000000000000000*var_89 + var_88 + var_95;
    const double var_100 = 0.5000000000000000000000000*var_30*var_36*w[0][0] + var_2*var_99 + var_1*var_47;
    const double var_101 = -var_29 + var_6;
    const double var_102 = var_49*w[1][3] + var_101*w[0][3];
    const double var_103 = var_43 + var_12*var_2*w[1][0] + var_54;
    const double var_104 = var_29*var_49;
    const double var_105 = var_16 + 3.0000000000000000000000000*var_26*var_4*w[0][3]*w[1][3] + var_104;
    const double var_106 = var_1*var_2*var_21*w[1][3] + var_29*var_36*w[0][3] + var_105*var_7 + var_103*var_4;
    const double var_107 = 0.5000000000000000000000000*var_106 + var_102*var_4*var_7 + var_1*var_78*w[0][0];
    const double var_108 = var_100*var_2 + var_107*var_7;
    A[1] = var_108*var_39/(var_40*var_40*var_40*var_40);
    A[6] = A[1];
    const double var_109 = var_47 + 0.5000000000000000000000000*var_21*var_7*w[1][3];
    A[32] = 0.0000000000000000000000000;
    const double var_110 = var_1*var_2 + var_4*var_7;
    A[16] = 0.0000000000000000000000000;
    A[3] = 0.0000000000000000000000000;
    A[11] = 0.0000000000000000000000000;
    A[5] = 0.0000000000000000000000000;
    const double var_111 = var_88 + 0.5000000000000000000000000*var_31 + var_70;
    A[8] = var_110*var_111*var_39/(var_40*var_40*var_40*var_40);
    A[34] = A[8];
    A[13] = A[8];
    A[19] = 0.0000000000000000000000000;
    const double var_112 = var_17 + 1.5000000000000000000000000*var_4*w[1][3];
    A[4] = 0.0000000000000000000000000;
    A[30] = 0.0000000000000000000000000;
    A[10] = 0.0000000000000000000000000;
    A[20] = 0.0000000000000000000000000;
    const double var_113 = var_57 + var_35;
    const double var_114 = var_102*var_4 + var_74;
    const double var_115 = -2.0000000000000000000000000*var_113*w[0][3]*w[1][3] + 1.5000000000000000000000000*var_114 + var_66 + var_104 + var_1*var_112*w[0][0];
    const double var_116 = 0.5000000000000000000000000*var_103*var_4 + var_115*var_7;
    const double var_117 = var_64*var_7*var_7 + var_116*var_4 + var_2*var_98 + var_1*var_1*var_109;
    A[0] = var_117*var_39/(var_40*var_40*var_40*var_40);
    A[21] = A[0];
    A[29] = A[8];
    A[28] = A[7];
    A[24] = 0.0000000000000000000000000;
    A[23] = A[2];
    A[18] = 0.0000000000000000000000000;
    A[22] = A[1];
    A[17] = 0.0000000000000000000000000;
    A[26] = 0.0000000000000000000000000;
    A[27] = A[1];
    A[25] = 0.0000000000000000000000000;
    A[15] = 0.0000000000000000000000000;
    A[9] = 0.0000000000000000000000000;
    A[31] = 0.0000000000000000000000000;
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
