#include <stdio.h>

int sum(int x, int y) {
  int sum = x + y;
  return sum;
}

int main(void) {

  int number1, number2, result;
  printf("Enter any two number : ");
  scanf("%d %d", &number1, &number2);
  
  result = sum(number1, number2);

  printf("%d + %d = %d\n", number1, number2, result);

  return 0;
}
