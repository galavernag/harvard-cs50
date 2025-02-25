#include <stdio.h>

void print_row(int n) {
  for (int row = 0; row < n; row++) {
    printf("#");
  }
  printf("\n");
}

int main(void) {
  for (int i = 0; i < 3; i++) {
    print_row(3);
  }
}