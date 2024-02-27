#include <stdio.h>

template <typename T>
void printArray(T* arr, int arrLength, const char* format) {
  for(int i = 0; i < arrLength; i++) {
    printf(format, *(arr + i));
  }

  printf("\n");
}

template <typename T>
void initArray(T* arr, int arrLength, T initialValue) {
  for(int i = 0; i < arrLength; i++) {
    *(arr + i) = initialValue;
  }
}
