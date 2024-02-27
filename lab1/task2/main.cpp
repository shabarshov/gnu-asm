#include <stdio.h>
#include <cstddef> // for ptrdiff_t
#include <iostream> // for system

int main() {
  system("lscpu | grep -i -E '(model name|architecture)'");
  system("grep -i -E '^name=' /etc/os-release");

  printf("\nchar - %d\n", sizeof(char));
  printf("signed char - %d\n", sizeof(signed char));
  printf("unsigned char - %d\n", sizeof(unsigned char));
  printf("char* - %d\n", sizeof(char*));
  printf("bool - %d\n", sizeof(bool));
  printf("wchar_t - %d\n", sizeof(wchar_t));
  printf("short - %d\n", sizeof(short));
  printf("int - %d\n", sizeof(int));
  printf("long - %d\n", sizeof(long));
  printf("long long - %d\n", sizeof(long long));
  printf("float - %d\n", sizeof(float));
  printf("double - %d\n", sizeof(double));
  printf("long double - %d\n", sizeof(long double));
  printf("size_t - %d\n", sizeof(size_t));
  printf("ptrdiff_t - %d\n", sizeof(ptrdiff_t));
  printf("void* - %d\n", sizeof(void*));

  return 0;
}