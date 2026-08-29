/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
 
*/

#include <stdio.h>

int main(void) {

  int number, i, j, k;
  printf("Enter a number : ");
  scanf("%d", &number);

  printf("\n");
  for(i = 1, k = 0; i <= number; i++, k += (j - 1)) {
    for(j = 1; j <= i; j++) {
      printf("%d ", j + k);
    }
    printf("\n");
  }

  return 0;
}
