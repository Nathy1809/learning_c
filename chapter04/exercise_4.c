/*
 *Read numbers from the user until a negative number is entered.
 *Display how many positive numbers were entered. (Use break to exit the loop.)
 */

#include<stdio.h>

int main(int argc, char *argv[])
{
  int numero;
  int contador = 0;

  while (1) {
    printf("Enter a positive number (or a negative number to finish): ");
    scanf("%d", &numero);

    if (numero < 0) {
      break;
    }
    contador++;
  }
  printf("\nYou entered %d positive numbers.\n", contador);

  return 0;
}

