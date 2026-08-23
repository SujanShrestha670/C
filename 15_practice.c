#include <stdio.h>

int main(void) {

  int number;
  printf("Enter any decimal number : ");
  scanf("%d", &number);

  int remainder = number % 3;

  printf("Remainder after division by 3 = %d\n", remainder);

  return 0;
}
