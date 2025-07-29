/*
 *Create a program that uses a structure array to hold contact information for your friends.
 *The program should allow the user to enter up to five friends and print the phone
 *book’s current entries. Create functions to add entries in the phone book and to print
 *valid phone book entries. Do not display phone book entries that are invalid or NULL
 *(0)
  */

  #include<stdio.h>
  #include<string.h>

  struct contacts {char name[15]; char phone[15];};

  void entercontacts(struct contacts agenda[], int *amount);
  void printcontacts(struct contacts agenda[], int amount);

  int main(int argc, char *argv[])
  {
    struct contacts agenda[5];
    int amount = 0;
    int option;

    do {
      printf("\nCONTACTS LIST\n");
      printf("1- Add Contact\n");
      printf("2- Show Contact\n");
      printf("3- Exit\n");
      printf("Choose an option: ");
      scanf("%d", &option);


      if (option == 1) {
        if (amount < 5) {
          entercontacts(agenda, &amount);
        } else {
          printf("Address book full. Can't add more contacts.\n");
        }
      } else if (option == 2) {
        printcontacts(agenda, amount);
      }

  } while (option != 3 );

  return 0;

}

void entercontacts(struct contacts agenda[], int *amount) {
  printf("enter the friend's name: ");
  scanf("%s", agenda[*amount].name);

  printf("Enter the phone number: ");
  scanf("%s", agenda[*amount].phone);

  (*amount)++;
  printf("Contact added successfully.");

}

void printcontacts(struct contacts agenda[], int amount){
  if (amount == 0) {
      printf("There are no contacts saved");
      return;
  }

  printf("\n Phone Boock\n");
  for (int i = 0; i < amount; i++) {
    printf("Contacts %d- ", i + 1);
    printf("Name: %s\n", agenda[i].name);
    printf("Phone: %s\n.", agenda[i].phone);

  }

}
