#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([excafe_benchmarks], [0.1], [fpr02@doc.ic.ac.uk])
#AC_CONFIG_SRCDIR([mass_matrix_2d/0mass_matrix_f3_p2_q1_tensor.h])
#AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE

# Prevent default compiler options being set
: ${CFLAGS=""}
: ${CXXFLAGS=""}

# Checks for programs.
AC_PROG_CPP
AC_PROG_CC
AC_PROG_CXX

# Checks for libraries.
AX_BOOST_BASE(1.34, [], [AC_MSG_ERROR([Could not find Boost, a required dependency.])])
AX_BOOST_SERIALIZATION

PKG_CHECK_MODULES([APR1], [apr-1])
CXXFLAGS="$CXXFLAGS $APR1_CFLAGS"
AC_SUBST(APR1_LIBS)

AC_ARG_WITH([papi],
            AC_HELP_STRING([--with-papi=PFX], [Use the PAPI installation in PFX]),
            [
              if test -f "$withval/include/papi.h"; then
                CFLAGS="$CFLAGS -I$withval/include"
                CXXFLAGS="$CXXFLAGS -I$withval/include"
                LDFLAGS="$LDFLAGS -Xlinker --rpath $withval/lib -L$withval/lib"
              else
                AC_MSG_ERROR("$withval does not appear to be a prefix for a PAPI installation")
              fi
            ]
            )

AC_TRY_COMPILE([@%:@include <papi.h>], [], [AC_MSG_NOTICE([Found PAPI.])], [AC_MSG_ERROR([Failed to find PAPI.])])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_TYPE_SIZE_T
AC_TYPE_UINT32_T

AC_CONFIG_FILES([benchmark.mk])
AC_OUTPUT
