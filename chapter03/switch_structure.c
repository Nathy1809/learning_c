/* switch*/

#include <stdio.h>

int main() {
    int option;

    printf("\n1 \tYaya Beach\n");
    printf("2 \tEl fuerte\n");
    printf("3 \tHayhu\n");

    printf("\nChoose a dinner option: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("\nYou booked for Yaya Beach\n");
            break;
        case 2:
            printf("\nYou booked for El fuerte\n");
            break;
        case 3:
            printf("\nYou booked for Hayhu\n");
            break;

        default:
            printf("\nInvalid option. Please choose 1, 2, or 3.\n");
    }

    return 0;
}

