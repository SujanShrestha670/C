#include <stdio.h>

int larger(int x, int y);

int main(void) {

  int number1, number2, result;
  printf("Enter any two numbers : ");
  scanf("%d %d", &number1, &number2);

  result = larger(number1, number2);

  printf("The larger among %d and %d is %d\n", number1, number2, result);

  return 0;
}

int larger(int x, int y) {
  int larger = x > y ? x : y;
  return larger;
}
