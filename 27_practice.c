#include <stdio.h>

int main(void) {

  int number, temp, sum = 0;
  printf("Enter any number more than 1 digit : ");
  scanf("%d", &number);

  temp = number;

  while(temp > 0) {

    sum += temp % 10;
    temp /= 10;

  }

  printf("The sum of digits of given number %d is %d\n", number, sum);

  return 0;
}
