/*

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/

#include <stdio.h>

int main(void) {

  int i, j, k;
  printf("\n");

  for(i = 5, k = 6; i > 0 ; i--) {
    for(j = 1; j <= i; j++) {
      printf("%d ", k - j);
    }
    printf("\n");
  }

  return 0;
}
