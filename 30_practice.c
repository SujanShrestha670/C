#include <math.h>
#include <stdio.h>

int main(void) {

  int binary_number, decimal_number = 0, temp, power = 0;
  printf("Enter any binary number : ");
  scanf("%d", &binary_number);

  temp = binary_number;

  while(temp > 0) {

    decimal_number += (temp % 10 ) * pow(2, power);
    power++;
    temp /= 10;

  }

  printf("The decimal equivalent of %d is %d\n", binary_number, decimal_number);

  return 0;
}
