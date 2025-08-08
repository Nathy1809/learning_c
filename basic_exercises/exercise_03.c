/*Enter the number of cars sold in the last 9 years. Calculate and display:
 *a) The year in which the greatest number of cars were sold.
 *b) The total number of cars sold
 */
 #include<stdio.h>

 int main(int argc, char argv[]) {

   int cars[9];
   int total_amount = 0;
   int max_sales;
   int year_max;
   int i;

   for (i = 0; i < 9; i++) {
      printf("Enter the number of cars sold in the year %d: ", i + 1);
      scanf("%d", &cars[i]);
      total_amount += cars[i];
   }
   max_sales = cars[0];
   year_max = 1;

   for (i = 0; i < 9; i++) {
      if (cars[i] > max_sales) {
          max_sales = cars[i];
          year_max = i;
      }
   }
   printf("\nThe total sale of the 9 years is %d\n", total_amount);
   printf("\nThe year with the highest sales is %d\n", year_max + 1);

   return 0;
 }
