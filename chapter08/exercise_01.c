/*
 *Create a program that performs the following functions:
 • Uses character arrays to read a user’s name from standard input
 • Tells the user how many characters are in her name
 • Displays the user’s name in uppercase
 */

 #include<stdio.h>
 #include <string.h>
 #include <ctype.h>

 void convert(char *str);

 int main(int argc, char *argv[])
 {
   char name[20] = {0};
   char *pointer = name;
   int x = 0;

   printf ("Enter your name: ");
   scanf ("%s", pointer);

   while (pointer[x] != '\0') {
    x++;
   }

   printf("\nYour name has %d characters.\n", x);

   convert(pointer);

   printf("his name in capital letters is: %s\n", pointer);

   return 0;
 }

 void convert(char *str) {
   int i = 0;
      for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

 }
