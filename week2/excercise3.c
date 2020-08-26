#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int current_row = 1;
  int max_height = atoi(argv[1]);
  int width =  (max_height * 2) - 1;

  for (int i = 1; i <= max_height; ++i) {
    
    for (int k = 0; k < (width - current_row) / 2; ++k) {
      printf(" ");
    }

    for (int j = 0; j < current_row; ++j) {
      printf("*");
    }
    current_row += 2;
    printf("\n");
    }

    return 0;
}
