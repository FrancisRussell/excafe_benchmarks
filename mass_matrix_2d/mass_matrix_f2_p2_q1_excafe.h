#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.53 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[1][4] + w[1][5];
    const double var_1 = w[1][2] + w[1][1];
    const double var_2 = 0.3333333333333333148296163*w[1][3];
    const double var_3 = -0.0833333333333333287074041*var_1 + var_2 + 0.5000000000000000000000000*var_0;
    const double var_4 = w[1][3] + w[1][5];
    const double var_5 = w[1][2] + w[1][0];
    const double var_6 = 0.3333333333333333148296163*w[1][4];
    const double var_7 = var_6 + 0.5000000000000000000000000*var_4 + -0.0833333333333333287074041*var_5;
    const double var_8 = w[0][0]*w[1][0];
    const double var_9 = 0.1250000000000000000000000*var_8;
    const double var_10 = w[0][1]*w[1][1];
    const double var_11 = 0.1250000000000000000000000*var_10;
    const double var_12 = w[0][0] + w[0][2];
    const double var_13 = w[0][1] + w[0][2];
    const double var_14 = var_12*w[1][3] + var_13*w[1][4];
    const double var_15 = w[1][4] + w[1][3];
    const double var_16 = var_15 + -0.3333333333333333148296163*w[1][2];
    const double var_17 = w[0][1]*w[1][0] + w[0][0]*w[1][1];
    const double var_18 = w[0][2]*w[1][2];
    const double var_19 = var_18 + -1.0000000000000000000000000*var_17;
    const double var_20 = var_7*w[0][3] + 0.5000000000000000000000000*var_16*w[0][5] + var_11 + -0.1666666666666666574148081*w[0][2]*w[1][5] + var_3*w[0][4] + var_9 + 0.0416666666666666643537020*var_19 + -0.0833333333333333287074041*var_14;
    const double var_21 = -1.0000000000000000000000000*x[0][1];
    const double var_22 = var_21 + x[1][1];
    const double var_23 = w[1][0] + w[1][1];
    const double var_24 = -0.2500000000000000000000000*var_23;
    const double var_25 = var_15 + var_24;
    const double var_26 = 0.5000000000000000000000000*w[1][0];
    const double var_27 = -0.2500000000000000000000000*var_1;
    const double var_28 = 0.5000000000000000000000000*w[1][3] + var_26 + var_27;
    const double var_29 = -1.0000000000000000000000000*x[0][0];
    const double var_30 = x[1][0] + var_29;
    const double var_31 = x[2][1] + var_21;
    const double var_32 = x[2][0] + var_29;
    const double var_33 = var_30*var_31 + -1.0000000000000000000000000*var_22*var_32;
    const double var_34 = std::abs(var_33);
    const double var_35 = 0.0833333333333333287074041*w[0][2]*w[1][2] + 2.0000000000000000000000000*w[0][5]*w[1][5];
    const double var_36 = 2.0000000000000000000000000*w[0][4]*w[1][4] + 0.0833333333333333287074041*w[0][1]*w[1][1];
    const double var_37 = w[0][1]*w[1][2] + w[0][2]*w[1][1];
    const double var_38 = var_26 + var_0 + var_2;
    const double var_39 = w[1][4] + var_28;
    const double var_40 = var_28 + w[1][5];
    const double var_41 = var_27 + var_0;
    const double var_42 = var_35 + 0.5000000000000000000000000*var_41*w[0][0] + var_36 + var_8 + var_40*w[0][4] + 0.0416666666666666643537020*var_37 + var_39*w[0][5] + var_3*w[0][3] + -0.2500000000000000000000000*var_13*var_38;
    A[0] = 0.0095238095238095246686250*var_34*var_42;
    const double var_43 = 0.5000000000000000000000000*w[1][2];
    const double var_44 = var_43 + 0.5000000000000000000000000*w[1][5] + var_24;
    const double var_45 = w[1][4] + var_44;
    const double var_46 = 0.3333333333333333148296163*w[1][5];
    const double var_47 = -0.0833333333333333287074041*var_23 + 0.5000000000000000000000000*var_15 + var_46;
    const double var_48 = 0.1250000000000000000000000*var_18;
    const double var_49 = w[0][0] + w[0][1];
    const double var_50 = var_13*w[1][5] + var_49*w[1][3];
    const double var_51 = var_4 + -0.3333333333333333148296163*w[1][1];
    const double var_52 = w[0][2]*w[1][0] + w[0][0]*w[1][2];
    const double var_53 = -1.0000000000000000000000000*var_52 + var_10;
    const double var_54 = -0.0833333333333333287074041*var_50 + -0.1666666666666666574148081*w[0][1]*w[1][4] + var_48 + 0.0416666666666666643537020*var_53 + 0.5000000000000000000000000*var_51*w[0][4] + var_47*w[0][3] + var_9 + var_3*w[0][5];
    const double var_55 = w[0][0]*w[1][3] + w[0][3]*w[1][0];
    A[1] = 0.0142857142857142852682140*var_34*w[0][5]*w[1][5] + 0.0095238095238095246686250*var_20*var_34;
    const double var_56 = -1.0000000000000000000000000*var_37 + var_8;
    const double var_57 = -0.2500000000000000000000000*var_5;
    const double var_58 = 0.5000000000000000000000000*w[1][1];
    const double var_59 = 0.5000000000000000000000000*w[1][4] + var_58 + var_57;
    const double var_60 = var_49*w[1][4] + var_12*w[1][5];
    const double var_61 = 0.0416666666666666643537020*var_56 + var_48 + var_47*w[0][4] + var_11 + var_7*w[0][5] + 0.5000000000000000000000000*var_0*w[0][3] + -0.0833333333333333287074041*var_60 + -0.1666666666666666574148081*var_55;
    A[5] = 0.0142857142857142852682140*var_34*w[0][3]*w[1][3] + 0.0095238095238095246686250*var_34*var_61;
    const double var_62 = 2.0000000000000000000000000*w[0][3]*w[1][3] + 0.0833333333333333287074041*w[0][0]*w[1][0];
    const double var_63 = var_15 + var_43 + var_46;
    const double var_64 = w[1][3] + var_44;
    const double var_65 = -0.2500000000000000000000000*var_49*var_63 + var_47*w[0][5] + 0.5000000000000000000000000*var_25*w[0][2] + var_62 + var_36 + var_64*w[0][4] + var_18 + var_45*w[0][3] + 0.0416666666666666643537020*var_17;
    A[3] = A[1];
    const double var_66 = var_6 + var_4 + var_58;
    const double var_67 = var_59 + w[1][5];
    const double var_68 = var_59 + w[1][3];
    const double var_69 = var_4 + var_57;
    const double var_70 = -0.2500000000000000000000000*var_12*var_66 + var_35 + var_67*w[0][3] + var_62 + var_68*w[0][5] + 0.0416666666666666643537020*var_52 + var_10 + var_7*w[0][4] + 0.5000000000000000000000000*var_69*w[0][1];
    A[2] = 0.0142857142857142852682140*var_34*w[0][4]*w[1][4] + 0.0095238095238095246686250*var_34*var_54;
    A[4] = 0.0095238095238095246686250*var_34*var_70;
    A[7] = A[5];
    A[8] = 0.0095238095238095246686250*var_34*var_65;
    A[6] = A[2];
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
