/*

543212345
 5432345
  54345
   545
    5
 
*/


#include <stdio.h>

int main(void) {

  printf("\n");
  for(int i = 9; i > 0; i -= 2) {
    for(int j = 1; j <= (9 - i) / 2; j++) {
      printf(" ");
    }

    int l = 5;
    int direction = -1;
    int spaces = (9 - i) / 2;

    for(int k = 1; k <= i; k++) {
      printf("%d", l);
      if(l == spaces + 1) {
        direction = 1;
      }

      l += direction;
    }

    printf("\n");
  }

  return 0;
}
