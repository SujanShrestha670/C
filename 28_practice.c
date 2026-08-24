#include <stdio.h>

int main(void) {

  int number, product = 1, temp;
  printf("Enter any number with more than 1 digit : ");
  scanf("%d", &number);

  temp = number;

  while(temp > 0) {
    product *= temp % 10;
    temp /= 10;
  }

  printf("The product of digits of %d is %d\n", number, product);

  return 0;
}
