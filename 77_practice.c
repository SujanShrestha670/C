/*
 
    1
   123
  12345
 1234567
123456789
 
*/

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

    if(i >= 2) {
      for(int l = 1; l < i; l++) {
        printf("%d", i + l);
      }
    }

    printf("\n");
  }

  return 0;
}
