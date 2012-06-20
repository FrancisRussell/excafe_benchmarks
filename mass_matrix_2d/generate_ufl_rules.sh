#!/bin/sh

PROGRAMS=""
CLEAN_FILES=""
INTERMEDIATES=""

for NF in 1 2 3 4; do
  for P in 1 2 3; do
    for Q in 1 2 3 4; do
      OPTIONS="f${NF}_p${P}_q${Q}"

      BENCHMARK_TEMPLATE="benchmark.cpp.tmpl"
      BENCHMARK_EXECUTABLE="benchmark_${OPTIONS}"
      BENCHMARK_SOURCE="benchmark_${OPTIONS}.cpp"

      PROGRAMS="${BENCHMARK_EXECUTABLE} ${PROGRAMS}"
      
      # Generate UFL headers
      TEMPLATE_FILE="mass_matrix_f${NF}.tmpl"
      UFL_FILE="mass_matrix_${OPTIONS}.ufl"
      INTERMEDIATES="${INTERMEDIATES} ${UFL_FILE}"

      TEMPLATE_GENERATED="${UFL_FILE} ${BENCHMARK_SOURCE}"

      echo "${UFL_FILE}: ${TEMPLATE_FILE}"
      echo -e "\tm4 -DP_VALUE=${P} -DQ_VALUE=${Q} \$^ > \$@"

      FFC_BUILT_SOURCES=""
      for REPRESENTATION in tensor quadrature; do
        REP_SPECIFIC_OPTIONS="${OPTIONS}_${REPRESENTATION}"
        REP_SPECIFIC_UFL_FILE="mass_matrix_${REP_SPECIFIC_OPTIONS}.ufl"
        TEMPLATE_GENERATED="${TEMPLATE_GENERATED} ${REP_SPECIFIC_UFL_FILE}"
        INTERMEDIATES="${INTERMEDIATES} ${REP_SPECIFIC_UFL_FILE}"

        # We need two copies, one for quadrature, one for tensor.
        echo "${REP_SPECIFIC_UFL_FILE}: ${UFL_FILE}"
        echo -e "\tcp \$^ \$@"

        FFC_HEADER="mass_matrix_${REP_SPECIFIC_OPTIONS}.h"
        FFC_BUILT_SOURCES="${FFC_HEADER} ${FFC_BUILT_SOURCES}"

        echo "${FFC_HEADER}: ${REP_SPECIFIC_UFL_FILE}"
        echo -e "\tffc --optimize -r ${REPRESENTATION} --language ufc \$^" 
      done

      # Generate Excafe headers
      EXCAFE_HEADER="mass_matrix_${OPTIONS}_excafe.h"
      EXCAFE_BUILT_SOURCES="${EXCAFE_HEADER}"
      echo "${EXCAFE_HEADER}:"
      echo -e "\t\${MASS_MATRIX_2D_GENERATOR} ${NF} ${P} ${Q} ${EXCAFE_HEADER}"

      # Generate dependencies for benchmark executable
      echo "${BENCHMARK_SOURCE}: ${BENCHMARK_TEMPLATE}"
      echo -e "\tm4 -DNF_VALUE=${NF} -DP_VALUE=${P} -DQ_VALUE=${Q} \$^ > \$@"
      echo "${BENCHMARK_EXECUTABLE}: ${BENCHMARK_SOURCE} ${FFC_BUILT_SOURCES} ${EXCAFE_BUILT_SOURCES}"
      echo -e '\t${CXX} ${CXXFLAGS} ${LDFLAGS} $< -o $@'

      CLEAN_FILES="${BENCHMARK_EXECUTABLE} ${TEMPLATE_GENERATED} ${CLEAN_FILES}"
      CLEAN_FILES="${FFC_BUILT_SOURCES} ${EXCAFE_BUILT_SOURCES} ${CLEAN_FILES}"

      echo
    done
  done
done

echo "ALL_EXECUTABLES = ${PROGRAMS}"
echo "CLEAN_FILES=${CLEAN_FILES}"
echo "INTERMEDIATES=${INTERMEDIATES}"
