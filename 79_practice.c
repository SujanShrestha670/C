/*

    1
   232
  34543
 4567654
567898765
 
*/

#include <stdio.h>

int main(void) {

  int l = 0;
  int n = 0;

  printf("\n");
  for(int i = 1; i <= 5; i++) {
    for(int j = 5 - i; j > 0; j--) {
      printf(" ");
    }

    for(int k = 1; k <= i; k++) {
      printf("%d", l + k);
    }
    
    for(int m = 1, o = l + n; m < i; m++, o--) {
      printf("%d", o);
    }

    l++;
    n++;
    printf("\n");
  }

  return 0;
}
