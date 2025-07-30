/*
 *Using the calloc() function, write a program that reads a user’s name from standard
 *input. Use a loop to iterate through the memory allocated, counting the number of
 *characters in the user’s name. The loop should stop when a memory segment is reached thatwas not used
 *for reading and storing the user’s name. (Remember, calloc() initializes
 *all memory allocated.) Print the number of characters in the user’s name to standard output
 */

 #include<stdio.h>
 #include<stdlib.h>

 int main(int argc, char *argv[])
 {
   int size = 20;
   char *name = (char*) calloc(size, sizeof(char));

   if(name == NULL) {
      printf("Memory could not be allocated");
      return 1;
   }
   printf("Enter your name (maximum 20 characters): ");
   scanf("%[^\n]", name);

   int count = 0;

   while (name[count] != '\0') {
    count++;
   }

   printf("The name has %d caracters.\n", count);

   free(name);
   return 0;
 }
