/*You are asked to load a list of random numbers until you enter -1, which indicates the end of the load.
 *Then, based on the entered numbers, two additional lists must be generated:
 *One containing only even numbers
 *Another containing only odd numbers
 *Once the three lists have been loaded, they must all be clearly displayed.
 *Next, perform the following operations on the list of odd numbers:
 *Remove nodes that are multiples of 5
 *Insert, before each pair of nodes (FRONT), the sum of the current node and the next node, only if that sum is greater than 10
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct list {
  int num;
  struct list *next;
} nodo;


void create(nodo *lista) {
  int n;

  printf("Enter a number or -1 to end:");
  scanf("%d",&n);
  lista->num = n;

  if (n == -1) {
    lista->next = NULL;
  } else{
    lista->next = (nodo*)malloc(sizeof(nodo));
    create(lista->next);
  }
}

void show(nodo *lista) {
    if (lista->next != NULL) {
        printf("%d\n", lista->num);
        show(lista->next);
    } else {
        printf("-1\n");
    }
}

nodo* separatespairs (nodo *original) {
  nodo *even= NULL;
  nodo *aux= original;

  while (aux != NULL) {
    if (aux->num != -1 && aux->num %2 == 0) {
      nodo *mint = (nodo*)malloc(sizeof(nodo));
      mint->num = aux->num;
      mint->next = even;
      even = mint;
    }
    aux = aux->next;
  }
  return even;
}


nodo* separatespairsodd (nodo *original) {
  nodo *odd= NULL;
  nodo *aux= original;

  while (aux != NULL) {
    if (aux->num != -1 && aux->num %2 != 0) {
      nodo *mint = (nodo*)malloc(sizeof(nodo));
      mint->num = aux->num;
      mint->next = odd;
      odd = mint;
    }
    aux = aux->next;
  }
  return odd;
}


nodo* deleteMultiplesOf5(nodo *lista) {
    nodo *aux = lista;
    nodo *prev = NULL;
    while (aux != NULL) {
        if (aux->num % 5 == 0) {
            if (prev == NULL) {
                lista = aux->next;
                free(aux);
                aux = lista;
            } else {
                prev->next = aux->next;
                free(aux);
                aux = prev->next;
            }
        } else {
            prev = aux;
            aux = aux->next;
        }
    }
    return lista;
}


void insertSums(nodo *lista) {
    nodo *aux = lista;
    while (aux != NULL && aux->next != NULL) {
        int suma = aux->num + aux->next->num;
        if (suma > 10) {
            nodo *nuevo = (nodo*)malloc(sizeof(nodo));
            nuevo->num = suma;
            nuevo->next = aux->next;
            aux->next = nuevo;
            aux = nuevo->next; // saltamos al siguiente par
        } else {
            aux = aux->next;
        }
    }
}


nodo* insert80(nodo *pares) {
    nodo *nuevo = (nodo*)malloc(sizeof(nodo));
    nuevo->num = 80;
    nuevo->next = pares;
    return nuevo;
}

int main(){
  nodo *first;
  first= (nodo*)malloc(sizeof(nodo));

  create(first);

  printf("\nLista original:\n");
  show(first);

  nodo *even = separatespairs(first);
  printf("\nLista de pares:\n");
  show(even);

  nodo *odd = separatespairsodd(first);
  printf("\nLista de impares:\n");
  show(odd);


  odd = deleteMultiplesOf5(odd);
  insertSums(odd);
  even = insert80(even);

  printf("\n--- Listas modificadas ---\n");

  printf("Lista de pares:\n");
  show(even);

  printf("Lista de impares:\n");
  show(odd);

  return 0;
}
