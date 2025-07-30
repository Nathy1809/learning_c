/*
 *Create a program that uses malloc() to allocate a chunk of memory to hold a string no
 *larger than 80 characters. Prompt the user to enter his favorite movie. Read his response
 *with scanf(), and assign the data to your newly allocated memory. Display the user’s
 *favorite movie back to standard output
 */

 #include<stdio.h>
 #include<stdlib.h>

 int main(int argc, char *argv[])
 {
   char *name = (char *) malloc(81 * sizeof(char));

   if (name == NULL) {
      printf("Could not allocate memory\n");
      return 1;
   }

   printf("Enter your favorite name (maximum 80 characters): ");
   scanf("%[^\n]", name); //Read the entire line, including spaces [^\n]

   printf("\nYour name is: %s\n", name);

   free(name);

   return 0;
 }
