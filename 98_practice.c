#include <stdio.h>

int main(void) {

  int number, digit, count = 0;
  printf("Enter a number and a digit : ");
  scanf("%d %d", &number, &digit);

  int temp = number;
  while(temp > 0) {
    if(temp % 10 == digit) {
      count++;
    }

    temp /= 10;
  }

  printf("%d appeared %d times in %d\n", digit, count, number);

  return 0;
}
