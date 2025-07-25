/*
 *Modify exercise 5 so that you do not use the continue,
 *and you go from 1 to 10 but in the for you are going to increase by two units instead of 1 unit
 */

#include<stdio.h>

int main(int argc, char *argv[])
{
   for (int i = 1; i <= 10; i += 2) {
    printf("%d \n", i);
   }

  return 0;
}
