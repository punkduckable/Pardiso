#include <omp.h>
#include <stdio.h>

int main() {
  printf("Number of threads:            %d\n", omp_get_num_threads());
  printf("Maximum number of threads:    %d\n", omp_get_max_threads());
  omp_set_num_threads(omp_get_max_threads());
  printf("Set number of threads to max threads\n");
  printf("number of processors:         %d\n", omp_get_num_procs());

  return 0;
}
