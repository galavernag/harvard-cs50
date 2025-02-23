#include <stdio.h>
#include <cs50.h>

void meow(int times) {
  for (int i = 0; i < times; i++) { // using for loop
    printf("meow\n");
  }
}

int main(void) {
  int n = get_int("Number of meow: ");
  meow(n);
}