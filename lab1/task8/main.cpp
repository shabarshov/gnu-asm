#include <stdio.h>
#include "../lib/arraytools/arraytools.h"

int main() {
  const int N = 5;

  float Mfs[N];
  float MfsValue = float(5)/3;

  printf("Before scanf\n\n");

  initArray(Mfs, N, MfsValue);
  printArray(Mfs, N, "%.2f\n");
  printArray(Mfs, N, "%e\n");

  int scanfOutput = scanf("%f\n%f\n%f\n%f\n%f\n", &Mfs[0], &Mfs[1], &Mfs[2], &Mfs[3], &Mfs[4]);

  printf("After scanf\n\n");

  if(scanfOutput == N) {
    printf("All elements were successfully read.\n\n");
  } else {
    printf("Input error: Only %d elements were successfully read.\n\n", scanfOutput);
  }

  printArray(Mfs, N, "%.2f\n");
  printArray(Mfs, N, "%e\n");

  return 0;
}
