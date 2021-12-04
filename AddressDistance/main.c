#include <stdio.h>

int main() {
  int C1, C2;
  printf("&C1: %x\n", &C1);
  printf("&C2: %x\n", &C2);

  int distance = (&C1 - &C2);
  printf("distance : %d\n", distance);

  int *ptrC1 = &C1;
  for (int i = 0; i < distance; i++) {
    ptrC1--;
  }

  *ptrC1 = 100;

  printf("C2: %d\n", C2);

  int a[2];
  printf("&a0: %x\n", &a[0]);
  printf("&a1: %x\n", &a[1]);

  return 0;
}
