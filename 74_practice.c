#include <stdio.h>

int main(void) {

  printf("\n");
  for(int i = 1; i <= 5; i++) {
    for(int j = 5 - i; j > 0; j--) {
      printf(" ");
    }

    for(int k = 1; k <= i; k++) {
      printf("%d", k);
    }
    printf("\n");
  }

  return 0;
}
