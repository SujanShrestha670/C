#include <stdio.h>

int main(void) {

  int number, temp, sum = 0;
  printf("Please enter positive integer number with more than 1 digit : ");
  scanf("%d", &number);

  temp = number;

  for(temp; temp > 0; temp /= 10) {
    sum += temp % 10;
  }

  printf("The sum of digits of %d is %d\n", number, sum);

  return 0;
}
