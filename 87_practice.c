/*
    1
   222
  33333
 4444444
555555555
 4444444
  33333
   222
    1
 
*/

#include <stdio.h>

int main(void) {

  int l = 1;

  printf("\n");
  for(int i = 1; i <= 9; i += 2) {
    for(int j = 1; j <= (9 - i) / 2; j++) {
      printf(" ");
    }

    for(int k = 1; k <= i; k++) {
      printf("%d", l);
    }

    l++;
    printf("\n");
  }

  l -= 2;

  for(int i = 7; i > 0; i -= 2) {
    for(int j = 1; j <= (9 - i) / 2; j++) {
      printf(" ");
    }

    for(int k = 1; k <= i; k++) {
      printf("%d", l);
    }

    l--;
    printf("\n");
  }

  return 0;
}
