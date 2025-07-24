/*ejercicio 1. practica de condiciones*/
//1. Ingresar tres lados y determinar si el triángulo es equilátero, isósceles o escaleno.

#include<stdio.h>

int main()
{
    int ladoA, ladoB, ladoC;

    printf("Ingrese la medida del lado A: ");
    scanf("%d", &ladoA);
    printf("Ingrese la medida del lado B: ");
    scanf("%d", &ladoB);
    printf("Ingrese la medida del lado C: ");
    scanf("%d", &ladoC);

    if( ladoA == ladoB && ladoB == ladoC ){
        printf("Es un triangulo equilatero.\n");
    }
    else if( ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
        printf("Es un triangulo isosceles.\n");
    }
    else {
        printf("Es un triangulo escaleno.\n");
    }

    return 0;

}
