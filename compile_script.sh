#!/bin/bash

g++-9 -Wall ./pardiso_sym.cpp -o ./Test \
    -L. -lpardiso600-MACOS-X86-64 \
    -L/usr/local/Cellar/lapack/3.8.0_2/lib -llapack.3.8.0 \
    -L/usr/local/Cellar/lapack/3.8.0_2/lib -lblas.3.8.0 \
    -L/opt/intel/compilers_and_libraries_2019.4.233/mac/compiler/lib/ -liomp5
