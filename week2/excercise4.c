#include <stdio.h>

void swap(int* left, int* right) {
  int temp;
  temp = *left;
  *left = *right;
  *right = temp;
}

int main() {
  int a;
  int b;
  scanf("%d %d", &a, &b);
  swap(&a, &b);
  printf("%d %d", a, b);
  return 0;
}
