/*ingresar valores a las variables*/

#include<stdio.h>

int main()
{
    char nombre[10];
    int edad, anio_nacimiento;
    float altura;

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);

    printf("Ingrese edad: ");
    scanf("%d", &edad);

    printf("Ingrese anio de nacimiento: ");
    scanf("%d", &anio_nacimiento);

    printf("Ingrese altura: ");
    scanf("%f", &altura);

    printf("\n=== Datos ingresados ===\n");
    printf("Nombre es: %s\n", nombre);
    printf("Nacio en el anio %d. Su edad es: %d.\n", anio_nacimiento, edad);
    printf("Su altura es de: %.2f\n", altura);

    return 0;
}
