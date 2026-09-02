#include <stdio.h>
#include "prime.h"

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  int result = prime(number);

  printf("%d\n", result);

  return 0;
}
