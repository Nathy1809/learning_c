/*rand function and srand*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int numero;

    srand(time(NULL));

    printf("\nYour five lucky numbers are: ");

    numero = (rand() % 100) + 1;
    printf("%d ", numero);

    numero = (rand() % 100) + 1;
    printf("%d ", numero);

    numero = (rand() % 100) + 1;
    printf("%d ", numero);

    numero = (rand() % 100) + 1;
    printf("%d ", numero);

    numero = (rand() % 100) + 1;
    printf("%d \n", numero);

    return 0;
}
