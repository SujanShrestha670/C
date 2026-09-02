#include <stdio.h>
#include "decimal_to_binary.h"

int main(void) {

  int decimal_number;
  printf("Enter a decimal number : ");
  scanf("%d", &decimal_number);

  int result = decimal_to_binary(decimal_number);

  printf("%d in binary is %d\n", decimal_number, result);

  return 0;
}
