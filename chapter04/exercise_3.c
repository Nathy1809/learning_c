/*
*Display the 5 times table (from 5x1 to 5x10) using for
*/

#include<stdio.h>

int main(int argc, char *argv[])
{
  int x;
  printf("===multiplication table of 5===\n");

  for(x = 1; x <= 10; x++){
    printf("5 x %d = %d\n", x, 5 * x);
  }

  return 0;
}
