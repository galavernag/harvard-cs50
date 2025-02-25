#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
  string name;
  string number;
}
person;

int main(void)
{
  person people[3];

  people[0].name = "Guilherme";
  people[0].number = "(11) 9-5628-4507";

  people[1].name = "David";
  people[1].number = "(11) 9-5628-4508";

  people[2].name = "John";
  people[2].number = "(11) 9-5628-4509";

  string name = get_string("Name: ");

  for (int i = 0; i < 3; i++) {
    if (strcmp(people[i].name, name) == 0) {
      printf("Found %s\n", people[i].number);
      return 0;
    }
  }

  printf("Not found\n");
  return 1;
}