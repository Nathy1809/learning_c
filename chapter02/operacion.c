/* operaciones */

#include <stdio.h>

int main()
{
    char nombre_evento[15];
    int invi_total, invi_confirmados;
    float precio_menu;
    float costo_total;

    printf("Nombre del evento: ");
    scanf("%s", nombre_evento);

    printf("Cantidad de invitados: ");
    scanf("%d", &invi_total);  

    printf("Cantidad de invitados confirmados: ");
    scanf("%d", &invi_confirmados);  

    printf("Precio del menú por persona: ");
    scanf("%f", &precio_menu);  


    costo_total = invi_confirmados * precio_menu;

    printf("\n=== Datos del evento ===\n");
    printf("Evento: %s\n", nombre_evento);
    printf("Invitados confirmados: %d\n", invi_confirmados);
    printf("Precio por persona: %.2f\n", precio_menu);
    printf("Costo total estimado: %.2f\n", costo_total);

    return 0;
}
