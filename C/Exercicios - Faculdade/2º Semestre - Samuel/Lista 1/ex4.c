#include <stdio.h>

void main() {
  int *ptr, value;

  value = 100;
  ptr = &value;

  printf("%d", *ptr);
}