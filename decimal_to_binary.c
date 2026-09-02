#include "decimal_to_binary.h"

int decimal_to_binary(int number) {

  int binary_number = 0;
  int place = 1;

  while(number > 0) {

    binary_number = binary_number + (number % 2) * place;

    number /= 2;
    place *= 10;
  }

  return binary_number;
}
