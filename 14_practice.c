#include <stdio.h>

int main(void) {

  int decimal_number;
  printf("Enter any decimal number : ");
  scanf("%d", &decimal_number);

  printf("Octal equivalent = %o\n", decimal_number);
  printf("Hexadecimal equivalent = %0x\n", decimal_number);

  return 0;
}
