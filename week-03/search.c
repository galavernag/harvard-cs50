#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int numbers[] = {20, 100, 500, 5, 50, 1, 100, 200, 70};

  int n = get_int("Number: ");

  // Linear search - O(n)
  for (int i = 0; i < 9; i++) {
    if (numbers[i] == n) {
      printf("Found: %i\n", i);
      return 0;
    } else {
    }
  }
  printf("Not found\n");
  return 1;
}