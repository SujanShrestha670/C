/*
 
    1
   232
  34543
 4567654
567898765
 4567654
  34543
   232
    1

*/

#include <stdio.h>

int main(void) {

  printf("\n");
  for(int i = 1; i <= 9; i += 2) {
    for(int j = 1; j <= (9 - i) / 2; j++) {
      printf(" ");
    }

    int l = (i + 1) / 2;
    int direction = 1;

    for(int k = 1; k <= i; k++) {
      printf("%d", l);
      if(l == i) {
        direction = -1;
      }
      l += direction;
    }
    printf("\n");
  }

  for(int i = 7; i > 0; i -= 2) {
    for(int j = 1; j <= (9 - i) / 2; j++) {
      printf(" ");
    }

    int l = (i + 1) / 2;
    int direction = 1;

    for(int k = 1; k <= i; k++) {
      printf("%d", l);
      if(l == i) {
        direction = -1;
      }
      l += direction;
    }
    printf("\n");
  }

  return 0;
}
