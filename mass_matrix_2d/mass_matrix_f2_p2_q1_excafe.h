#include <cassert>
#include <cassert>
#include <cmath>
#include <ufc.h>

// Common sub-expression elimination pass took 0 minutes and 0.61 seconds (wall clock).

class ExcafeCellIntegral_0 : public ufc::cell_integral
{
public:
  void tabulate_tensor(double* const A, const double* const* w, const ufc::cell& c) const
  {
    const double * const * x = c.coordinates;

    const double var_0 = w[1][2] + w[1][1];
    const double var_1 = -0.2500000000000000000000000*var_0;
    const double var_2 = w[1][5] + w[1][4];
    const double var_3 = var_2 + var_1;
    const double var_4 = -x[0][0];
    const double var_5 = x[1][0] + var_4;
    const double var_6 = w[0][2]*w[1][1] + w[0][1]*w[1][2];
    const double var_7 = 0.3333333333333333148296163*w[1][3];
    const double var_8 = -0.0833333333333333287074041*var_0 + 0.5000000000000000000000000*var_2 + var_7;
    const double var_9 = w[0][2] + w[0][1];
    const double var_10 = 2.0000000000000000000000000*w[0][5]*w[1][5] + 0.0833333333333333287074041*w[0][2]*w[1][2];
    const double var_11 = 2.0000000000000000000000000*w[0][4]*w[1][4] + 0.0833333333333333287074041*w[0][1]*w[1][1];
    const double var_12 = w[0][0]*w[1][0];
    const double var_13 = 0.5000000000000000000000000*w[1][0];
    const double var_14 = var_13 + var_2 + var_7;
    const double var_15 = var_13 + var_1 + 0.5000000000000000000000000*w[1][3];
    const double var_16 = var_15 + w[1][4];
    const double var_17 = w[1][5] + var_15;
    const double var_18 = -0.2500000000000000000000000*var_14*var_9 + var_10 + var_11 + 0.5000000000000000000000000*var_3*w[0][0] + 0.0416666666666666643537020*var_6 + var_8*w[0][3] + var_12 + var_17*w[0][4] + var_16*w[0][5];
    const double var_19 = w[1][3] + w[1][4];
    const double var_20 = w[1][1] + w[1][0];
    const double var_21 = 0.3333333333333333148296163*w[1][5];
    const double var_22 = -0.0833333333333333287074041*var_20 + 0.5000000000000000000000000*var_19 + var_21;
    const double var_23 = w[1][5] + w[1][3];
    const double var_24 = w[1][2] + w[1][0];
    const double var_25 = 0.3333333333333333148296163*w[1][4];
    const double var_26 = -0.0833333333333333287074041*var_24 + var_25 + 0.5000000000000000000000000*var_23;
    const double var_27 = w[0][2]*w[1][2];
    const double var_28 = 0.1250000000000000000000000*var_27;
    const double var_29 = w[0][1]*w[1][1];
    const double var_30 = 0.1250000000000000000000000*var_29;
    const double var_31 = w[0][1] + w[0][0];
    const double var_32 = w[0][2] + w[0][0];
    const double var_33 = var_32*w[1][5] + var_31*w[1][4];
    const double var_34 = -0.3333333333333333148296163*w[1][0] + var_2;
    const double var_35 = var_12 + -var_6;
    const double var_36 = 0.5000000000000000000000000*var_34*w[0][3] + var_30 + var_22*w[0][4] + var_26*w[0][5] + -0.1666666666666666574148081*w[0][0]*w[1][3] + 0.0416666666666666643537020*var_35 + var_28 + -0.0833333333333333287074041*var_33;
    const double var_37 = -x[0][1];
    const double var_38 = x[1][1] + var_37;
    const double var_39 = x[2][0] + var_4;
    const double var_40 = x[2][1] + var_37;
    const double var_41 = -var_38*var_39 + var_40*var_5;
    const double var_42 = std::abs(var_41);
    const double var_43 = 0.1250000000000000000000000*var_12;
    const double var_44 = var_32*w[1][3] + var_9*w[1][4];
    const double var_45 = w[0][0]*w[1][1] + w[0][1]*w[1][0];
    const double var_46 = -var_45 + var_27;
    const double var_47 = w[0][2]*w[1][5] + w[0][5]*w[1][2];
    const double var_48 = var_30 + 0.0416666666666666643537020*var_46 + var_26*w[0][3] + -0.1666666666666666574148081*var_47 + 0.5000000000000000000000000*var_19*w[0][5] + var_8*w[0][4] + -0.0833333333333333287074041*var_44 + var_43;
    A[1] = 0.0142857142857142852682140*var_42*w[0][5]*w[1][5] + 0.0095238095238095246686250*var_42*var_48;
    const double var_49 = 0.0833333333333333287074041*w[0][0]*w[1][0] + 2.0000000000000000000000000*w[0][3]*w[1][3];
    const double var_50 = 0.5000000000000000000000000*w[1][2];
    const double var_51 = var_50 + var_19 + var_21;
    const double var_52 = -0.2500000000000000000000000*var_20;
    const double var_53 = var_50 + 0.5000000000000000000000000*w[1][5] + var_52;
    const double var_54 = var_53 + w[1][4];
    const double var_55 = w[1][3] + var_53;
    const double var_56 = var_19 + var_52;
    const double var_57 = var_55*w[0][4] + -0.2500000000000000000000000*var_31*var_51 + var_49 + var_11 + 0.0416666666666666643537020*var_45 + var_22*w[0][5] + var_27 + var_54*w[0][3] + 0.5000000000000000000000000*var_56*w[0][2];
    A[8] = 0.0095238095238095246686250*var_42*var_57;
    const double var_58 = 0.5000000000000000000000000*w[1][1];
    A[5] = 0.0142857142857142852682140*var_42*w[0][3]*w[1][3] + 0.0095238095238095246686250*var_36*var_42;
    A[7] = A[5];
    const double var_59 = w[0][0]*w[1][2] + w[0][2]*w[1][0];
    const double var_60 = -var_59 + var_29;
    A[3] = A[1];
    const double var_61 = var_58 + var_25 + var_23;
    const double var_62 = var_31*w[1][3] + var_9*w[1][5];
    const double var_63 = -0.3333333333333333148296163*w[1][1] + var_23;
    const double var_64 = var_43 + 0.5000000000000000000000000*var_63*w[0][4] + 0.0416666666666666643537020*var_60 + var_28 + -0.0833333333333333287074041*var_62 + var_8*w[0][5] + var_22*w[0][3] + -0.1666666666666666574148081*w[0][1]*w[1][4];
    A[2] = 0.0142857142857142852682140*var_42*w[0][4]*w[1][4] + 0.0095238095238095246686250*var_42*var_64;
    A[6] = A[2];
    A[0] = 0.0095238095238095246686250*var_18*var_42;
    const double var_65 = -0.2500000000000000000000000*var_24;
    const double var_66 = var_58 + 0.5000000000000000000000000*w[1][4] + var_65;
    const double var_67 = var_23 + var_65;
    const double var_68 = w[1][3] + var_66;
    const double var_69 = w[1][5] + var_66;
    const double var_70 = var_68*w[0][5] + var_69*w[0][3] + var_29 + 0.0416666666666666643537020*var_59 + var_26*w[0][4] + var_10 + -0.2500000000000000000000000*var_32*var_61 + var_49 + 0.5000000000000000000000000*var_67*w[0][1];
    A[4] = 0.0095238095238095246686250*var_42*var_70;
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
