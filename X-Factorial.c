#include "stdio.h"

int factorial(int n) { return n == 0 ? 1 : n * factorial(n - 1); }

int main() {
  int n, f;
  printf("Enter the number: ");
  scanf("%d", &n);

  f = factorial(n);
  printf("Factorial of %d is %d", n, f);

  return 0;
}