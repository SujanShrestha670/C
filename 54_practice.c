#include <stdio.h>

int main(void) {

   int number1, number2, sum = 0;

  printf("Enter any two numbers : ");
  scanf("%d %d", &number1, &number2);

  int temp1 = number1;
  int temp2 = number2;

  while(temp1 > 0) {
    
    if(temp1 % 2 != 0) {
      sum += temp2;
    }

    temp1 /= 2;
    temp2 *= 2;

  }

  printf("%d * %d = %d by russian peasant method\n", number1, number2, sum);

  return 0;
}
