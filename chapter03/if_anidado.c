/*practica if anidado*/


#include<stdio.h>

int main()
{
    int cant_alumnos = 20, opcion = 0;

    printf("\n===Curso de pasteleria===\n");
    printf("\n1\tInscribirse\n");
    printf("\n2\tDar de baja\n");

    printf("Ingrese su seleccion: ");
    scanf("%d", opcion);

    if(opcion == 1){
            int nuevos_alum;
    printf("Ingrese cantidad de alumnos ingresantes: ");
    scanf("%d", &nuevos_alum);
    printf("El total de alumnos es %d.", cant_alumnos + nuevos_alum);
    }
    if(opcion == 2){
        int baja;
        printf("Ingrese cantidad de alumnos que se dan de baja: ");
        scanf("%d", baja);
        printf("El total de alumnos es: %d.", cant_alumnos - baja);
    }
    else printf("no es una opcion valida");

    return 0;
}
