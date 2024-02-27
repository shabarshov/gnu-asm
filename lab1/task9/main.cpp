#include <stdio.h>

int main() {
  const int N = 128;

  char s1[N];
  char s2[N];
  char s3[N];

  scanf("%s", s1);
  scanf("%127s", s2);
  scanf(" %[^\n]", s3);

  printf("***%s***\n", s1);
  printf("***%s***\n", s2);
  printf("***%s***\n", s3);

  return 0;
}