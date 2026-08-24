#include <stdio.h>

int main(void) {

  int number1, number2, result;

  printf("Enter any two positive numbers : ");
  scanf("%d %d", &number1, &number2);

  for(int i = 1; i <= number2; i++) {
    result += number1;
  }

  printf("%d * %d = %d without using '*' operator\n", number1, number2, result);
  return 0;
}
