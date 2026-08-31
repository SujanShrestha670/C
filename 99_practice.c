#include <stdio.h>
#include <math.h>

int main(void) {

  int number, sum = 0;
  printf("Enter a number : ");
  scanf("%d", &number);

  for(int i = 1; i <= number; i++) {
    sum += pow(i, 2);
  }

  printf("The sum of squares of all numbers from 1 to %d is %d\n", number, sum);

  return 0;
}
