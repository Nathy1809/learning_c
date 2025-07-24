/*while*/
//Mostrar los números del 1 al 10 usando while

#include<stdio.h>

int main()
{
    int x = 1;

    while (x < 11) //o while (x <= 10 )
        printf("The value of x is %d\n", x++);

    return 0;
}
