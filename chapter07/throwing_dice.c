/*
 *Create a dice-rolling game. The game should allow the user to roll up to six dice at a time. Each roll of a
 *die will be stored in a six-element integer array. The array is created in the main() function but is passed
 *to a new function called TossDie(). The TossDie() function will generate random numbers from one to six
 *and assign them to the appropriate array element number.
 */

 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>

 void tossDie (int dice[], int amount);

 int main(int argc, char *argv[])
 {
   int dice [6];
   int amount = 0;

   srand (time(NULL)); //so that the dice are random

   printf("How many dice do you want to roll between 1 and 6? \n");
   scanf("%d", &amount);

   if (amount < 1 || amount > 6) {
      printf("Invalid quantity. Must be between 1 and 6.\n");

    return 1;
   }

   tossDie(dice, amount);

   printf("Launch results: .\n");

   for (int i = 0; i < amount; i++) {
      printf("Dice %d: %d.\n", i + 1, dice[i]);
   }
   return 0;

 }

 void tossDie(int dice[], int amount) {
   for (int i = 0; i < amount; i++) {
   dice[i] = (rand() % 6) + 1; // generates random numbers between 1 and 6
   }
 }
