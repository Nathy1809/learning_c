/*ejercicio 3.*/
//3. Leer tres notas y mostrar el promedio. Si es mayor o igual a 6, mostrar "Aprobado", si no, "Desaprobado".


#include<stdio.h>

int main()
{
    int nota_1,nota_2,nota_3,suma_total;
    float promedio;

    printf("Ingrese nota 1: ");
    scanf("%d", &nota_1);
    printf("Ingrese nota 2: ");
    scanf("%d", &nota_2);
    printf("Ingrese nota 3: ");
    scanf("%d", &nota_3);

    suma_total= nota_1 + nota_2 + nota_3;

    if (suma_total > 0){
        promedio = suma_total / 3;
        printf("El promedio es de %.2f.\n", promedio);
    }

    if (promedio >= 6)
        printf("Esta Aprobado.\n");

    else printf("Esta desaprobado");



    return 0;
}
