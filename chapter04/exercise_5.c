/*
 *Loop through 1 to 10 in a for loop, print the odd numbers on the screen, skip the even numbers using continue.
 */

#include<stdio.h>

int main(int argc, char *argv[])
{
  for (int i = 1; i <= 10; i++){
    if (i % 2 == 0){
      continue;
      }
      printf("%d \n", i);
  }

  return 0;
}
