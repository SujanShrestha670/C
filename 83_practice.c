/*
 
123456789
 1234567
  12345
   123
    1
 
*/

#include <stdio.h>

int main(void) {
  
  printf("\n");
  for(int i = 9; i > 0; i -= 2) {
    for(int j = 1; j <= (9 - i) / 2; j++) {
      printf(" ");
    }

    for(int k = 1; k <= i; k++) {
      printf("%d", k);
    }
    printf("\n");
   }

  return 0;
}
