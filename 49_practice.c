#include <stdio.h>

int main(void) {
  
  int number1, number2;
  char operator;

  printf("Enter number, operator and another number : ");
  scanf("%d %c %d", &number1, &operator, &number2);

  switch(operator) {

    case '+':
      printf("Result = %d\n", number1 + number2);
      break;
    case '-':
      printf("Result = %d\n", number1 - number2);
      break;
    case '*':
      printf("Result = %d\n", number1 * number2);
      break;
    case '/':
      printf("Result = %.2f\n", (float)number1 / (float)number2);
      break;
    case '%':
      printf("Result = %d\n", number1 % number2);
      break;
    default:
      printf("Invalid operator\n");

  }

  return 0;
}
