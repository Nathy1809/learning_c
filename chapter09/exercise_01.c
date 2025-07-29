/*
 * Create an instance of the car structure named myCar, and assign data to each of the
  members. Print the contents of each member to standard output using the printf()function.
 */

#include<stdio.h>
#include<string.h>

struct myCard {char model [15]; float cost; int id};

int main (int argc, char *argv[])
{
  struct myCard model1;

  strcpy(model1.model, "Toyota");
  model1.cost = 2000000;
  model1.id = 52528585;

  printf("Model name: %s.\n", model1.model);
  printf("The ID number is: %d\n", model1.id );
  printf("Its cost is: %f.\n", model1.cost);

  return 0;
}
