#include <stdio.h>
#include <math.h>

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  double result = sqrt(number);

  printf("The square root of %d is %.2lf\n", number, result);

  return 0;
}
