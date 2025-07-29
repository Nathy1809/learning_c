/*Using the car structure from Challenge 1, create a structure array with three elements named myCars.
 *Populate each structure in the array with your favorite car model information.
 *Use a for loop to print each structure detail in the array
 */
 
#include<stdio.h>
#include<string.h>

struct myCar {char model [15]; char brand [15]; int year};

int main (int argc, char *argv[])
{
  struct myCar car [3];

  strcpy (car[0].brand, "Toyota");
  strcpy (car[0].model, "Crolla");
  car[0].year = 2020;

  strcpy (car[1].brand, "Ford");
  strcpy (car[1].model, "Mustang");
  car[1].year = 2022;

  strcpy (car[2].brand, "Tesla");
  strcpy (car[2].model, "Model 3");
  car[2].year = 2024;

  printf("Car details\n\n");
  for (int i = 0; i < 3; i++)
  {
    printf("Car %d \n", i+1);
    printf("Brand: %s.\n", car[i].brand);
    printf("Model: %s.\n", car[i].model);
    printf("Year: %d.\n", car[i].year);
    printf("\n");
  }

  return 0;
}
