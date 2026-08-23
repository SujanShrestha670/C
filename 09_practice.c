#include <stdio.h>

int main(void) {

  printf("Size of int = %zu\n", sizeof(int));
  printf("Size of float = %zu\n", sizeof(float));
  printf("Size of char = %zu\n", sizeof(char));
  printf("Size of an integer constant = %zu\n", sizeof(45));

  return 0;
}
