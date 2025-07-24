/*
 *Make a function that asks the user to enter one of the sides of the triangle, that validates that the side of the triangle is greater than 0,
 *(if the user enters 0 or less, it asks the user to enter it again), and returns the value.
 */

#include<stdio.h>


int main(int argc, char *argv[])
{
  int num_user;
  int magic_num = 6;

  do {
    printf("\nGuess the magic number between 1 and 10: ");
    scanf("%d", &num_user);

    if (num_user != magic_num ){
        printf("You're out of luck. Try again.\n");
    }
  }
  while (num_user != magic_num );

  printf("That's good. You guessed it.\n");
  printf("The numer is %d\n", magic_num);
return 0;
}
