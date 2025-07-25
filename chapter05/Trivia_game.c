/* Trivia game */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
int sportsQuestion(void);
int geographyQuestion(void);
void pause(int);

// Global variable
int giResponse = 0;

int main(int argc, char *argv[]) {
  do {
    system("cls");  // In Linux/macOS use "clear"
    printf("\nTHE TRIVIA GAME\n\n");
    printf("1\tSports\n");
    printf("2\tGeography\n");
    printf("3\tQuit\n");
    printf("\nEnter your selection: ");
    scanf("%d", &giResponse);

    switch (giResponse) {
      case 1:
        if (sportsQuestion() == 4)
          printf("¡Correct!\n");
        else
          printf("¡Incorrect!\n");
        pause(2);
        break;

      case 2:
        if (geographyQuestion() == 2)
          printf("¡Correct!\n");
        else
          printf("¡Incorrect!\n");
        pause(2);
        break;

      case 3:
        printf("\nThanks for playing\n");
        break;

      default:
        printf("\nInvalid option\n");
        pause(2);
    }
  } while (giResponse != 3);

  return 0;
}

// Function for the sports question
int sportsQuestion(void) {
  int iAnswer = 0;
  system("cls");
  printf("\tSports Question\n");
  printf("\nWhere did NFL star Deion Sanders attend college?\n");
  printf("\n1\tUniversity of Miami");
  printf("\n2\tCalifornia State University");
  printf("\n3\tIndiana State University");
  printf("\n4\tFlorida State University");
  printf("\n\nEnter your selection: ");
  scanf("%d", &iAnswer);
  return iAnswer;
}

// Function for the geography question
int geographyQuestion(void) {
  int iAnswer = 0;
  system("cls");
  printf("\tGeography Question\n");
  printf("\nWhat is the capital of the state of Florida?\n");
  printf("\n1\tPensacola");
  printf("\n2\tTallahassee");
  printf("\n3\tJacksonville");
  printf("\n4\tMiami");
  printf("\n\nEnter your selection: ");
  scanf("%d", &iAnswer);
  return iAnswer;
}

// Function to pause for a certain number of seconds
void pause(int inNum) {
  int iCurrentTime = time(NULL);
  int iElapsedTime = 0;

  do {
    iElapsedTime = time(NULL);
  } while ((iElapsedTime - iCurrentTime) < inNum);
}
