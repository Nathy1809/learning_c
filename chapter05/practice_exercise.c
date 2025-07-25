/* Practice exercise */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Prototypes
float ask_for_side(char side_name);
int is_valid_triangle(float a, float b, float c);
float calculate_perimeter(float a, float b, float c);
float calculate_area(float a, float b, float c);
void show_results(float a, float b, float c);

int main(int argc, char *argv[]) {
  float side_a, side_b, side_c;

  side_a = ask_for_side('A');
  side_b = ask_for_side('B');
  side_c = ask_for_side('C');

  show_results(side_a, side_b, side_c);

  return 0;
}

float ask_for_side(char side_name) {
  float side;

  do {
    printf("Enter the length of side %c (must be > 0): ", side_name);
    scanf("%f", &side);

    if (side <= 0)
      printf("Invalid. Side must be greater than 0.\n");

  } while (side <= 0);

  return side;
}

int is_valid_triangle(float a, float b, float c) {
  return (a + b > c) && (a + c > b) && (b + c > a);
}

float calculate_perimeter(float a, float b, float c) {
  return a + b + c;
}

float calculate_area(float a, float b, float c) {
  float s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

void show_results(float a, float b, float c) {
  if (!is_valid_triangle(a, b, c)) {
    printf("\nERROR: The sides do not form a valid triangle.\n");
    return;
  }

  float perimeter = calculate_perimeter(a, b, c);
  float area = calculate_area(a, b, c);

  printf("\nTRIANGLE RESULTS:\n");
  printf("Perimeter: %.2f\n", perimeter);
  printf("Area: %.2f\n", area);
}
