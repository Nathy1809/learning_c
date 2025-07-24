/*ejercicio 2.*/
//2.Ingresar un número entero y decir si es par o impar.


#include<stdio.h>

int main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if( numero % 2 == 0)printf("%d es un numero par.",numero);

    else printf("%d es un numero impar.",numero);

    return 0;
}
