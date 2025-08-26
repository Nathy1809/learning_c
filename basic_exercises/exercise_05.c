 /*
 * Create a function that loads data until 10 products are loaded. Then, complete the following steps:
 *1) Find the cheapest product name and its type.
 *2) Given a product name, display its price and type.
 *3) Sort the products from highest to lowest price.
  */

 #include<stdio.h>
 #include<string.h>

 void loadData(char name[10][20], float price[10], char type[10]){
   for (int i = 0; i < 10; i++) {

      printf("Product %d.\n", i + 1);
      do{
          printf("Enter the product name: ");
          scanf(" %s", name[i]);
          if (strcmp(name[i], "") == 0) {
              printf("Error-the name cannot be empty.\n");
          }
      } while (strcmp(name[i], "") == 0);

      do{
          printf("Enter the price of the product: ");
          scanf("%f", &price[i]);
          if (price[i] < 0) {
              printf("Error - Price cannot be a negative value.\n");
          }
      } while (price[i] < 0);

      do{
          printf("Enter the product type(a, b, c): ");
          scanf(" %c", &type[i]);
          if (type[i] != 'a' && type[i] != 'b' && type[i] != 'c') {
              printf("Error - type must be a, b o c.\n");
          }
      } while (type[i] != 'a' && type[i] != 'b' && type[i] != 'c');

      printf("\n");
  }
}

void order(char name[10][20], float price[10], char type[10], int n) {
  char auxName[20];
  char auxType;
  float auxPrice;

  for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - 1 - i; j++) {
          if (price[j] < price[j+1]) {
              auxPrice = price[j];
              price[j] = price[j+1];
              price[j+1] = auxPrice;

              auxType = type[j];
              type[j] = type[j+1];
              type[j+1] = auxType;

              strcpy(auxName, name[j]);
              strcpy(name[j], name[j+1]);
              strcpy(name[j+1], auxName);
          }
      }
  }
}


int main() {
   char name[10][20];
   float price[10];
   char type[10];

   loadData(name, price, type);

   printf("\nLoaded products\n");
   printf("\n%-4s %-15s %-10s %-5s\n", "No", "Product", "Price", "Type");
   printf("---------------------------------------------\n");
   for (int i = 0; i < 10; i++) {
      printf("%-4d %-15s $%-9.2f %-5c\n", i + 1, name[i], price[i], type[i]);
   }

   int minPos = 0;
   for (int i = 1; i < 10; i++) {
      if (price[i] < price[minPos]) {
        minPos = i;
      }
   }
   printf("\n");
   printf("The cheapest product is: %s\n", name[minPos]);
   printf("It belongs to the category %c, with the price %.2f\n", type[minPos], price[minPos]);

   printf("\n");
   printf("Product search\n");
   char searched[20];
   int found = 0;
   int pos = -1;
   int i = 0;

   printf("Enter the name of the product you want to search: ");
   scanf("%s", searched);

   while (i < 10 && !found) {
      if (strcmp(name[i], searched) == 0) {
          found = 1;
          pos = i;
      } else {
          i++;
      }
   }
   if (found) {
      printf("Product found\n");
      printf("Product name: %s\n", name[pos]);
      printf("Price: %.2f\n", price[pos]);
      printf("Product type: %c\n", type[pos]);
   } else {
     printf("\nThe product '%s' is not on the list.\n", searched);
   }

   order(name, price, type, 10);
   printf("\nProducts sorted by price (highest to lowest):\n");
   for (int i = 0; i < 10; i++) {
      printf("%-4d %-15s $%-9.2f %-5c\n", i+1, name[i], price[i], type[i]);
   }

   return 0;
}
