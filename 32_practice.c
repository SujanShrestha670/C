#include <stdio.h>

int main(void) {

  int number, count = 0, temp;
  printf("Enter number with any number of digits : ");
  scanf("%d", &number);

  temp = number;

  do {
    temp /= 10;
    count++;
  }while(temp > 0);

  printf("The total number of digits in %d is %d\n", number, count);

  return 0;
}
