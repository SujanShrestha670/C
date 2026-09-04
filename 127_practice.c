#include <stdio.h>
#include <stdlib.h>

void binary_to_decimal(int binary_number);
void octal_to_decimal(int octal);

int main(void) {

  int binary_number, octal_number, choice;
  printf("Choose 1 or 2 to enter binary or octal number respectively : ");
  scanf("%d", &choice);

  switch(choice) {

    case 1:
      printf("Enter binary number : ");
      scanf("%d", &binary_number);
      binary_to_decimal(binary_number);
      break;
    case 2:
      printf("Enter octal number : ");
      scanf("%d", &octal_number);
      octal_to_decimal(octal_number);
      break;
    default:
      printf("Invalid choice\n");
  }

  return 0;
}

void binary_to_decimal(int binary_number) {

  int multiplier = 1, decimal_number = 0;
  int temp = binary_number;

  if(temp < 0) {
    printf("Binary number should not be negative\n");
    exit(EXIT_FAILURE);
  }

  while(temp > 0) {

    if(temp % 10 != 0 && temp % 10 != 1) {
      printf("Invalid binary number\n");
      exit(EXIT_FAILURE);
    }

    decimal_number += (temp % 10) * multiplier;
    temp /= 10;
    multiplier *= 2;

  }

  printf("Decimal equivalent of %d is %d\n", binary_number, decimal_number);

}

void octal_to_decimal(int octal_number) {

  int multiplier = 1, decimal_number = 0;
  int temp = octal_number;

  if(temp < 0) {
    printf("Octal number should not be negative\n");
    exit(EXIT_FAILURE);
  }

  while(temp > 0) {

    if(temp % 10 > 7) {
      printf("Invalid octal number\n");
      exit(EXIT_FAILURE);
    }

    decimal_number += (temp % 10) * multiplier;
    temp /= 10;
    multiplier *= 8;

  }

  printf("Decimal equivalent of %d is %d\n", octal_number, decimal_number);

}
