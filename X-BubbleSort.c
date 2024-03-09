// Bubble Sort

#include "stdio.h"

int main() {
  int n;
  printf("Enter the size (n): ");
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++) {
    printf("%d: ", i);
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i] < a[j]) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      };
    }
  }

  printf("Sorted array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}