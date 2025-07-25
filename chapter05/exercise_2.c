#include <stdio.h>

float ask_for_aside();

int main(int argc, char *argv[])
{
    float side = ask_for_aside();
    printf("The value entered is: %.2f\n", side);
    return 0;
}

float ask_for_aside()
{
    float side;

    do {
        printf("Enter the side of the triangle greater than 0: ");
        scanf("%f", &side);

        if (side <= 0) {
            printf("Invalid value. Must be greater than 0.\n");
        }
    } while (side <= 0);

    return side;
}
