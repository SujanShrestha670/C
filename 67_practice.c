/*

1 1 1 1 1
2 2 2 2
3 3 3
2 2
1

*/

#include <stdio.h>

int main(void) {

  int i, j, k;

  printf("\n");
  for(i = 1, k = 5; i <= 5; i++, k--) {
    for(j = 1; j <= k; j++) {
      if(k == 4) {
        printf("2 ");
      }else if(k == 5) {
        printf("1 ");
      }else {
        printf("%d ", k);
      }
    }
    printf("\n");
  }

  return 0;
}
