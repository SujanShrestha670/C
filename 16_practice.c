#include <stdio.h>

int main(void) {

  int number1, number2;
  printf("Enter any two numbers : ");
  scanf("%d %d", &number1, &number2);

  int result = (number1 > number2) ? number1 - number2 : number1 + number2;

  printf("Result = %d\n", result);

  return 0;
}
