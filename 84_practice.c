/*
 
567898765
 4567654
  34543
   232
    1
 
*/

#include <stdio.h>

int main(void) {

  int l = 5;

  printf("\n");
  for(int i = 9; i > 0; i -= 2) {
    for(int j = 1; j <= (9 - i) / 2; j++) {
      printf(" ");
    }

    int direction = 1;

    for(int k = 1; k <= i; k++) {
      printf("%d", l);
      if(l >= i) {
        direction = -1;
      }
      l += direction;
    }
    printf("\n");
  }

  return 0;
}
