#include <stdio.h>
#include <math.h>

/*
 * https://stackoverflow.com/questions/8587764/remove-runtime-checks-compiler-flag-per-project-in-cmake
 * https://over-stack.tistory.com/18
 */
int main() {
  int C1, C2;
  printf("&C1: %x\n", &C1);
  printf("&C2: %x\n", &C2);

  int distance = &C1 - &C2;
  int absDistance = abs(distance);
  printf("distance : %d, absDistance: %d\n", distance, absDistance);

  int *ptrC1 = &C1;
  for (int i = 0; i < absDistance; i++) {
    if (distance > 0) {
      ptrC1--;
      printf("-ptrC1: %x\n",ptrC1);
    } else if(distance < 0) {
      ptrC1++;
      printf("+ptrC1: %x\n",ptrC1);
    }
  }

  (*ptrC1) = 150;  // TODO: RELEASE 모드로 빌드시 주소가 정확하게 C2를 가리키는대도 할당이 안되는 이유를 모르겠음 ㅠㅠ

  printf("C2: %d\n", C2);

  return 0;
}
