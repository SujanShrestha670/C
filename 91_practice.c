#include <stdio.h>

int main(void) {

  int k = 1;

  printf("\n");
  for(int i = 1; i <= 10; i++) {
    for(int j = 1; j <= 8; j++) {
      printf("%d\t", k);
      k++;
    }
    printf("\n");
  }

  return 0;
}
