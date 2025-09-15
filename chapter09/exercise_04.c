/*Create and display a list with the following data:
 *the file number,first name,last name, and number of subjects taken for different students.
 *Calculate and display:
 *a) Generate a new list with students who took more than 15 subjects.
 *b) Generate another list with only the files of students who did not take any subjects.
 *d) Enter a file and display the student's first name, last name, and number of subjects taken.
 *If the file is not present, display a legend.
 */

#include <stdio.h>
#include <stdlib.h>


typedef struct student{
  int file;
  char name[20];
  char lastname[20];
  int subjects;
  struct student *next;

}nodo;

void createnodo(nodo *p){
  printf("Enter file:");
  scanf("%d",&p->file);

  while (p->file != 0){
      printf("Enter the name:");
      scanf("%s",p->name);
      printf("Enter tne last name:");
      scanf("%s",p->lastname);
      printf("Enter number of subjects");
      scanf("%d",&p->subjects);
      p->next=(nodo*)malloc(sizeof(nodo));
      p=p->next;
      printf("Enter file:");
      scanf("%d",&p->file);

  }
  p->next=NULL;
}

void show(nodo *p){
  printf("\n");
  printf("List of students");
  while (p->next != NULL){
    printf("File:%d\tName:%s\tLast name:%s\tSubjects:%d\n",p->file, p->name, p->lastname, p->subjects);
    p=p->next;
  }
}

void showmoretham15(nodo *p){
  printf("\n");
  printf("Students with more than 15 subjects");
  while (p->next != NULL){
    if(p->subjects > 15){
      printf("File:%d\tName:%s\tLast name:%s\tSubjects:%d\n", p->file, p->name, p->lastname, p->subjects);
    }
    p= p->next;
  }
}

void showsubjects0(nodo *p){
  printf("\n");
  printf("List of students with 0 subjects taken");
  while (p->next != NULL){
    if(p->subjects == 0){
        printf("File:%d\tName:%s\tLast name:%s\tSubjects:%d\n", p->file, p->name, p->lastname, p->subjects);
    }
    p= p->next;
  }
}

void searchfile(nodo *p, int search){
  int found = 0;
  while(p->next != NULL){
      if(p->file == search){
          printf("\n--- Student Found ---\n");
          printf("Name: %s\n", p->name);
          printf("Last name: %s\n", p->lastname);
          printf("Subjects: %d\n", p->subjects);
          found= 1;
      }
      p= p->next;
  }
  if(found == 0){
      printf("\nNo student found with file number %d\n", search);
  }
}


int main() {

  nodo *p=NULL;
  p=(nodo*)malloc(sizeof(nodo));
  int search;

  createnodo(p);
  show(p);
  showmoretham15(p);
  showsubjects0(p);

  printf("\nEnter file number to search: ");
  scanf("%d", &search);
  searchfile(p, search);


  return 0;
}
