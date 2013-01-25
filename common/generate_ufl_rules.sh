#!/bin/sh

PROGRAMS=""
CLEAN_FILES=""
INTERMEDIATES=""
ECHO="/bin/echo"
MAT_TYPE=${1:?}
FIELD_RANK=${2:?}

for NF in 1 2 3 4; do
  for P in 1 2 3; do
    for Q in 1 2 3 4; do
      OPTIONS="f${NF}_p${P}_q${Q}"

      BENCHMARK_TEMPLATE="../common/benchmark.cpp.tmpl"
      BENCHMARK_EXECUTABLE="benchmark_${OPTIONS}"
      BENCHMARK_SOURCE="benchmark_${OPTIONS}.cpp"

      PROGRAMS="${BENCHMARK_EXECUTABLE} ${PROGRAMS}"
      
      # Generate UFL headers
      TEMPLATE_FILE="${MAT_TYPE}_f${NF}.tmpl"
      UFL_FILE="${MAT_TYPE}_${OPTIONS}.ufl"
      INTERMEDIATES="${INTERMEDIATES} ${UFL_FILE}"

      TEMPLATE_GENERATED="${UFL_FILE} ${BENCHMARK_SOURCE}"

      ${ECHO} "${UFL_FILE}: ${TEMPLATE_FILE}"
      ${ECHO} -e "\tm4 -DP_VALUE=${P} -DQ_VALUE=${Q} \$^ > \$@"

      FFC_BUILT_SOURCES=""
      for REPRESENTATION in tensor quadrature; do
        REP_SPECIFIC_OPTIONS="${OPTIONS}_${REPRESENTATION}"
        REP_SPECIFIC_UFL_FILE="${MAT_TYPE}_${REP_SPECIFIC_OPTIONS}.ufl"
        TEMPLATE_GENERATED="${TEMPLATE_GENERATED} ${REP_SPECIFIC_UFL_FILE}"
        INTERMEDIATES="${INTERMEDIATES} ${REP_SPECIFIC_UFL_FILE}"

        # We need two copies, one for quadrature, one for tensor.
        ${ECHO} "${REP_SPECIFIC_UFL_FILE}: ${UFL_FILE}"
        ${ECHO} -e "\tcp \$^ \$@"

        FFC_HEADER="${MAT_TYPE}_${REP_SPECIFIC_OPTIONS}.h"
        FFC_BUILT_SOURCES="${FFC_HEADER} ${FFC_BUILT_SOURCES}"

        ${ECHO} "${FFC_HEADER}: ${REP_SPECIFIC_UFL_FILE}"
        ${ECHO} -e "\t/usr/bin/time -f \"${FFC_HEADER}: %U %M\\\\n\" ffc --optimize -r ${REPRESENTATION} --language ufc \$^" 
      done

      # Generate Excafe headers
      EXCAFE_HEADER="${MAT_TYPE}_${OPTIONS}_excafe.h"
      EXCAFE_BUILT_SOURCES="${EXCAFE_HEADER}"
      ${ECHO} "${EXCAFE_HEADER}:"
      ${ECHO} -e "\t/usr/bin/time -f \"${EXCAFE_HEADER}: %U %M\\\\n\" \${MASS_MATRIX_2D_GENERATOR} ${MAT_TYPE} ${NF} ${P} ${Q} ${EXCAFE_HEADER}"

      # Generate dependencies for benchmark executable
      ${ECHO} "${BENCHMARK_SOURCE}: ${BENCHMARK_TEMPLATE}"
      ${ECHO} -e "\tm4 -DMAT_TYPE=${MAT_TYPE} -DNF_VALUE=${NF} -DP_VALUE=${P} -DQ_VALUE=${Q} -DFIELD_RANK=${FIELD_RANK} \$^ > \$@"
      ${ECHO} "${BENCHMARK_EXECUTABLE}: ${BENCHMARK_SOURCE} ${FFC_BUILT_SOURCES} ${EXCAFE_BUILT_SOURCES}"

      CLEAN_FILES="${BENCHMARK_EXECUTABLE} ${TEMPLATE_GENERATED} ${CLEAN_FILES}"
      CLEAN_FILES="${FFC_BUILT_SOURCES} ${EXCAFE_BUILT_SOURCES} ${CLEAN_FILES}"

      ${ECHO}
    done
  done
done

${ECHO} "ALL_EXECUTABLES = ${PROGRAMS}"
${ECHO} "CLEAN_FILES = ${CLEAN_FILES}"
${ECHO} "INTERMEDIATES = ${INTERMEDIATES}"
