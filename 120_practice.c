#include <stdio.h>

void digits_sum(int number);


int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  digits_sum(number);

  return 0;
}

void digits_sum(int number) {

  int sum = 0;
  int temp = number;

  while(temp > 0) {

    sum += temp % 10;
    temp /= 10;
  }

  printf("The sum of digits of %d is %d\n", number, sum);

}
