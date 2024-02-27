#include <stdio.h>
#include "../lib/arraytools/arraytools.h"

int main() {
  const int N = 5;

  float Mfs[N];
  float MfsValue = float(5)/3;

  initArray(Mfs, N, MfsValue);

  printf("%p\n", Mfs);
  printf("%p\n", &Mfs[0]);
  printf("%p\n", &Mfs[1]);

  return 0;
}
