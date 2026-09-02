#include <stdio.h>
#include "prime.h"

int main(void) {

  int number1, number2;
  printf("Enter any two numbers : ");
  scanf("%d %d", &number1, &number2);

  printf("Prime numbers from %d to %d are :\n", number1, number2);

  for(int i = number1; i <= number2; i++) {
    int result = prime(i);
    if(result != 0) {
      printf("%d\n", result);
    }
  }

  return 0;
}
