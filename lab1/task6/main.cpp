#include <stdio.h>
#include "../lib/arraytools/arraytools.h"

int main() {
  const int N = 5;

  short int Ms[N];
  short int MsValue = 0xFADE; 

  printf("Before scanf\n\n");

  initArray(Ms, N, MsValue);
  printArray(Ms, N, "%d\n");
  printArray(Ms, N, "0x%04hX\n");

  int Ml[N];
  int MlValue = 0xADE1A1DA;

  initArray(Ml, N, MlValue);
  printArray(Ml, N, "%d\n");
  printArray(Ml, N, "0x%08X\n");

  long long Mq[N];
  long long MqValue = 0xC1A551F1AB1E;

  initArray(Mq, N, MqValue);
  printArray(Mq, N, "%d\n");
  printArray(Mq, N, "0x%016llX\n");

  float Mfs[N];
  float MfsValue = float(5)/3;

  initArray(Mfs, N, MfsValue);
  printArray(Mfs, N, "%.2f\n");
  printArray(Mfs, N, "%e\n");

  double Mfl[N];
  double MflValue = double(5)/3;

  initArray(Mfl, N, MflValue);
  printArray(Mfl, N, "%.2lf\n");
  printArray(Mfl, N, "%le\n");

  printf("After scanf\n\n");

  scanf("%hd", &Ms[2]);
  scanf("%d", &Ml[2]);
  scanf("%lld", &Mq[2]);
  scanf("%f", &Mfs[2]);
  scanf("%lf", &Mfl[2]);

  printArray(Ms, N, "%d\n");
  printArray(Ms, N, "0x%04hX\n");

  printArray(Ml, N, "%d\n");
  printArray(Ml, N, "0x%08X\n");

  printArray(Mq, N, "%d\n");
  printArray(Mq, N, "0x%016llX\n");

  printArray(Mfs, N, "%.2f\n");
  printArray(Mfs, N, "%e\n");

  printArray(Mfl, N, "%.2lf\n");
  printArray(Mfl, N, "%le\n");

  return 0;
}
