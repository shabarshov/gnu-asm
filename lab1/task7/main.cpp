#include <stdio.h>
#include "../lib/arraytools/arraytools.h"

int main() {
  const int N = 5;

  unsigned char Mb[N];
  unsigned char a = 10;
  
  unsigned char MbValue = 0xED;

  printf("Before scanf\n\n");

  initArray(Mb, N, MbValue);
  printArray(Mb, N, "%hhu\n");
  printArray(Mb, N, "0x%01X\n");

  scanf("%hhu", &Mb[2]);

  printf("After scanf\n\n");

  printArray(Mb, N, "%hhu\n");
  printArray(Mb, N, "0x%01X\n");

  return 0;
}
