#include <cs50.h>
#include <stdio.h>

int main(void) {
  int x = get_int("x: ");
  int y = get_int("y: ");

  int sum = x + y;
  int mul = x * y;
  int div = x / y;
  int pow = x^y;

  printf("sum: %i\n", sum);
  printf("mul: %i\n", mul);
  printf("div: %i\n", div);
  printf("pow: %i\n", pow);
}