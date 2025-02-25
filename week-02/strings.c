#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
  // stings are just ARRAYS of characters
  string word = "hello!";

  for (int i = 0, k = strlen(word); i < k + 1; i++) {
    printf("%c ", word[i]);
  }
}