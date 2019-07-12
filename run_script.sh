#!/bin/bash

export LD_LIBRARY_PATH="/Users/robertstephany/Documents/c++/Research (FEM, SPH)/Pardiso":/usr/local/Cellar/lapack/3.8.0_2/lib:/usr/local/Cellar/lapack/3.8.0_2/lib:/opt/intel/compilers_and_libraries_2019.4.233/mac/compiler/lib/
export OMP_NUM_THREADS=1
./Test
