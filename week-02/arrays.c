#include <stdio.h>

int const size = 5;

int main(void)
{
  /**
   * arrays need to know how much items will store before create it self.
   * arrays can store only values of the same type, like integers, floats, char
   */

   // Declare an array
   int grades[size];
   grades[0] = 1;

   // Populate an array
   for (int i = 1; i < size; i++) {
    grades[i] = grades[i - 1] * 2;
   }

  // Print the array
  for (int i = 0; i < size; i++) {
    printf("%i\n", grades[i]);
  }
}