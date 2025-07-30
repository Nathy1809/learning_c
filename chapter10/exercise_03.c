/*Math and Geography Quiz Game*/

#include<stdio.h>  //for function printf(), scanf().
#include<stdlib.h> //for function calloc(), free(), rand(), srand().
#include<string.h> //for function strcmp(), strcpy().
#include<time.h>   //for function srand(time(NULL)).

struct questionGeo {
  char question[100];
  char answer_correct[100];
  char answer_user[100];
};

int main (int argc, char *argv[])
{
  int option, answer, x;

  //choose category
  printf("Select a category: \n");
  printf("1- Math.\n");
  printf("2- Geography.\n");
  printf("Option: ");
  scanf("%d", &option);

  getchar();

  printf("How many questions do you want to answer?");
  scanf("%d", &answer);

  if (option == 1) {
    int *op1 = (int *) calloc(answer, sizeof(int));
    int *op2 = (int *) calloc(answer, sizeof(int));
    int *Ans = (int *) calloc(answer, sizeof(int));
    char *result = (char *) calloc(answer, sizeof(char));

    if (op1 == NULL || op2 == NULL || Ans == NULL || result == NULL) {
        printf("Error allocating memory");
        return 1;
    }

    srand(time(NULL));

    for (x = 0; x < answer; x++ ) {
      op1[x] = rand() % 100;
      op2[x] = rand() % 100;
      printf("\n%d + %d = ", op1[x], op2[x]);
      scanf("%d", &Ans[x]);

      if (Ans[x] == op1[x] + op2[x])
        result[x] = 'c';
      else
        result[x] = 'i';
    }

    printf("Math results");
    printf("\n Question\tYour Answer\tCorrect\n");

    for (x = 0; x < answer; x++) {
        if (result[x] == 'c')
           printf("%d + %d\t\t%d\t\tYes\n", op1[x], op2[x], Ans[x]);
        else
          printf("%d + %d\t\t%d\t\tNo\n", op1[x], op2[x], Ans[x]);
    }
    //Free memory
    free(op1);
    free(op2);
    free(Ans);
    free(result);

    //category geography
  } else if (option == 2) {
    struct questionGeo geo[3];

    strcpy(geo[0].question, "What is the capital of Mexico?");
    strcpy(geo[0].answer_correct, "Mexico City");

    strcpy(geo[1].question, "What is the capital of Argentina");
    strcpy(geo[1].answer_correct, "Buenos Aires");

    strcpy(geo[2].question, "What is the capital of Francia?");
    strcpy(geo[2].answer_correct,"Paris");


    if (answer > 3) {
      printf("There are only 3 questions available in this category.\n");
      answer = 3;
    }
    printf("Answer the following geography questions: \n");


    for (x = 0; x < answer; x++) {
      printf("\nQuestion %d: %s\n", x + 1, geo[x].question);
      printf("Your answer: ");
      scanf(" %[^\n]", geo[x].answer_user);

    }

    printf("Geography results\n");

    for (x = 0; x < answer; x++) {
      printf("\nQuestion: %s\n", geo[x].question);
      printf("Your answer: %s\n", geo[x].answer_user);

      if (strcmp(geo[x].answer_user, geo[x].answer_correct) == 0)
          printf("Correct");
      else
          printf("Incorrect");
    }
  }
  else {
    printf("invalid option");
  }
  return 0;
}
