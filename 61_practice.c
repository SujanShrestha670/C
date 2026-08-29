/*

2
3 4
4 5 6
5 6 7 8
6 7 8 9 10
 
 
*/

#include <stdio.h>

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  printf("\n");
  for(int i = 1; i <= number; i++) {
    for(int j = 1; j <= i; j++) {
      printf("%d ", i+j);
    }
    printf("\n");
  }

  return 0;
}
