/*Calculate the body mass index by entering a person's weight in kilograms and their height in meters.
 *This index is obtained by calculating the quotient of weight and the square of height.
 */

 #include<stdio.h>

 int main(int argc, char argv[])
 {
   float weight;
   float stature;
   float body_mass;

   printf("Enter the person's weight: ");
   scanf("%f", &weight);
   printf("\nEnter the person's height: ");
   scanf("%f", &stature);

   body_mass = weight / (stature * stature);

   printf("\nThe body mass of the person is: %.2f\n", body_mass);

   return 0;
 }
