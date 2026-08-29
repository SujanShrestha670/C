/*

5
4 4
3 3 3
2 2 2 2
1 1 1 1 1

*/

#include <stdio.h>

int main(void) {

  printf("\n");
  for(int i = 1; i <= 5; i++) {
    for(int j = 1; j <= i; j++) {
      printf("%d ", 6 - i);
    }
    printf("\n");
  }
  
  return 0;
}
