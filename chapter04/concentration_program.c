#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[])
{
  char YorN = '\0';
  int iResp1, iResp2, iResp3;
  int iElaspedTime, iCurrentTime;
  int iRandomNum;
  int i1, i2, i3;
  int iCounter = 0;

  srand(time(NULL));

  printf("\nPlay a game of Concentration? (y or n): ");
  scanf("%c", &YorN);

  if (YorN == 'y' || YorN == 'Y') {
    i1 = rand() % 100;
    i2 = rand() % 100;
    i3 = rand() % 100;

    printf("\nConcentrate on the next three numbers\n");
    printf("\n%d\t%d\t%d\n", i1, i2, i3);
    iCurrentTime = time(NULL);

    do {
        iElaspedTime = time(NULL);
    } while ((iElaspedTime - iCurrentTime) < 3);

    system("cls");

    printf("\nEnter each # separated with one space: ");
    scanf("%d%d%d", &iResp1, &iResp2, &iResp3);

    if (i1 == iResp1 && i2 == iResp2 && i3 == iResp3) {
        printf("\nCongratulations!\n");

    } else {
    printf("\nSorry, correct numbers were %d %d %d\n", i1, i2, i3);
    }


  }

  return 0;
}
