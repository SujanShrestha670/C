#include <stdio.h>

int main(void) {

  int number1, number2, quotient, remainder;
  printf("Enter any two integer numbers : ");
  scanf("%d %d", &number1, &number2);

  if(!number2) { 
    printf("Divide by zero error.\n");
  }else {
    quotient = number1 / number2;
    remainder = number1 % number2;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
  }

  return 0;
}
