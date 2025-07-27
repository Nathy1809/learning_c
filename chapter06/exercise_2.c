/*Practice array*/

#include<stdio.h>

int main(int argc, char *argv[])
{
  int numbers [10];
  int option;

  for (int i; i < 10; i++){
    printf("Enter the number: ");
    scanf("%d", &numbers[i]);

  }

  printf("\nHow do you want to order the numbers?\n");
  printf("1- Upward\n");
  printf("2- Falling\n");
  printf("Enter your option: ");
  scanf("%d", &option);

  //sort numbers using the bubble method

   for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if ((option == 1 && numbers[j] > numbers[j + 1]) ||
                (option == 2 && numbers[j] < numbers[j + 1])) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
   printf("\nordered numbers: \n");
   for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
