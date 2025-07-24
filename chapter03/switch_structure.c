/*switch*/


#include<stdio.h>

int main()
{
    int option;

    printf("\n1 \tYaya Beach\n");
    printf("\n2 \tEl fuerte\n");
    printf("\n3 \tHayhu\n");

    printf("\nchoose a dinner option: ");
    scanf("%d",&option);

    switch (option){
    case 1:
    printf("\nYou booked for Yaya Beach\n");
    break;
    case 2:
    printf("\nYou booked for El fuerte\n");
    break;
    case 3:
    printf("\nYou booked for Hayhu\n");
    break;

    }
    return 0;
}
