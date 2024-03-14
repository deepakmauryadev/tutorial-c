#include "stdio.h"

union abc {
  char a;
  int b;
  double c;
};

int main() {
  union abc abc1;
  abc1.a = 'A';
  abc1.b = 42;
  abc1.c = 3.14;
  printf("ABC1: %c, %d, %f\n", abc1.a, abc1.b, abc1.c);

  union abc abc2 = {'A', 42, 3.14};
  printf("ABC2: %c, %d, %f\n", abc2.a, abc2.b, abc2.c);

  return 0;
}