#include <stdio.h>
#include <string.h>
     
int main() {
  int n=200;
  char arr[n];
  printf("Please enter a string\n");
  fgets(arr, n, stdin);
  for (int i = strlen(arr); i >= 0; --i) {
    printf("%c", arr[i]);
  }
  printf("\n");
  return 0;
}
