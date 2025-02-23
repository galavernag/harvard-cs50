#include <stdio.h>
#include <cs50.h>

void meow(int times) {
  for (int i = 0; i < times; i++) { // using for loop
    printf("meow\n");
  }
}

int main(void) {  
  int n;
  do
  {
    n = get_int("Number of meow: ");
  } while (n < 1);
  meow(n);
}