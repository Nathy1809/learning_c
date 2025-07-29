/*WORD FIND*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

void checkAnswer(char *, char []);

int main(int argc, char *argv[])
{
  char *strGame[5] = {
    "ADELANGUAGEFERVZOPIBMOU",
    "ZBPOINTERSKLMLOOPMNOCOT",
    "PODSTRINGGDIWHIEEICERLS",
    "YVCPROGRAMMERWQKNULTHMD",
    "UKUNIXFIMWXIZEQZINPUTEX"
  };
  char answer[80] = {0};
  int displayed = 0;
  int x;
  int startTime = 0;

  system("cls");

  printf("\n\n\tWord Find\n\n");
  startTime = time(NULL);

  for (x = 0; x < 5; x++) { // DISPLAY TEXT FOR A FEW SECONDS
    while (startTime + 3 > time(NULL)) {
      if (displayed == 0) {
        printf("\nFind a word in: \n\n");
        printf("%s\n\n", strGame[x]);
        displayed = 1;
      } // end if
    } // end while loop

    system("cls");
    printf("\nEnter word found: ");
    gets(answer);
    checkAnswer(strGame[x], answer);
    displayed = 0;
    startTime = time(NULL);
  } // end for loop

  return 0;
} // end main

void checkAnswer(char *string1, char string2[])
{
  int x;

  for (x = 0; x <= strlen(string2); x++)
    string2[x] = toupper(string2[x]);

  if (strstr(string1, string2) != 0 && string2[0] != 0)
    printf("\nGreat job!\n");
  else
    printf("\nSorry, word not found!\n");
}
