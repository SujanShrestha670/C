#include <stdio.h>
#include <math.h>

int main(void) {

  int number, power;
  printf("Enter a number and power : ");
  scanf("%d %d", &number, &power);

  int result = pow(number, power);

  printf("%d raised to %d is %d\n", number, power, result);

  return 0;
}
