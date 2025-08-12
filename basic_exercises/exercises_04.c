/*
 *Enter numbers until the number is negative. Calculate and display:
 *a) Number of numbers greater than 4 and less than 25.
 *b) Average of numbers that are multiples of 6.
 *c) The smallest number read.
  */

#include<stdio.h>

int main(int argc, char *argv[]){

  int num;
  int countRange = 0;
  int sumMul6 = 0;
  int countMul6 = 0;
  int minor;
  int first = 1;

  printf("Ingrese numeros (o numeros negativos para terminar)");
  scanf("%d", &num);

  while(num >= 0) {
    if (first == 1) {
      minor = num;
      first = 0;
    }
    else {
      if (num < minor) {
        minor = num;
      }
    }
    if (num > 4 && num < 25) {
        countRange ++;
    }
    if (num % 6 == 0) {
        sumMul6 += num;
        countMul6++;
    }

    scanf("%d", &num);
  }

  printf("\nRESULT\n");
  printf("a)Number of values greater than 4 and less than 25: %d\n", countRange);

  if(countMul6> 0) {
      float average = (float)sumMul6 / countMul6;
      printf("b)The average of numbers that are multiples of 6 is %.2f\n", average);
  }
  else {
      printf("No numbers multiples of 6 were entered.\n");
  }
  if(first == 0) {
      printf("c)Lowest number read: %d\n", minor);
  }
  else {
      printf("c)No number was entered.\n");
  }

  return 0;
}
