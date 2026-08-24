#include <stdio.h>

int main(void) {

  int number, temp, fact = 1;
  printf("Enter a number : ");
  scanf("%d", &number);

  temp = number;

  while(temp > 0) {
    fact *= temp;
    temp--;
  }

  printf("The factorial of %d is %d\n", number, fact);

  return 0;
}
