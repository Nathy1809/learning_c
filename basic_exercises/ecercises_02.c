/* Enter the day and the dollar exchange rate for a month.
 *Calculate and display the day with the highest exchange rate.
 */

 #include<stdio.h>

 int main(int argc, char argv[]) {

   float price[30];
   int i, day;
   float higher = 0;

   for (i = 0; i < 30; i++) {
    printf("Enter the dollar exchange rate for the day %d: ", i + 1);
    scanf("%f", &price[i]);
   }

   higher = price[i];
   day = 1;

   for (i = 1; i < 30; i++) {
      if (price[i] > higher) {
        higher = price[i];
        day = i + 1;
    }
   }

   printf("\nThe highest quote was %.2f and it was the day %d", higher, day);

   return 0;
 }
