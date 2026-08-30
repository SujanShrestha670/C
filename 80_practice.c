/*
 
    5
   545
  54345
 5432345
543212345
 
*/


#include <stdio.h>

int main(void) {

  int l = 6;

  printf("\n");
  for(int i = 1; i <= 5; i++) {
    for(int j = 5 - i; j > 0; j--) {
      printf(" ");
    }

    for(int k = 1; k <= i; k++) {
      printf("%d", l - k);
    }

    for(int m = 1; m < i; m++) {
      printf("%d", l - i + m);
    }
 
    printf("\n");
  }

  return 0;
}
