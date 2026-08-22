#include <stdio.h>

int main(void) {

  int x = 8;

  printf("x = %d\n", x);
  printf("x = %d\n", x++);
  printf("x = %d\n", x);
  printf("x = %d\n", x--);
  printf("x = %d\n", x);

  return 0;
}
