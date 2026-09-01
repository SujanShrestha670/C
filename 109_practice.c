/*

*******
*******
*******
*******
*******
*******
*******
 
*/

#include <stdio.h>

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  for(int i = 1; i <= number; i++) {
    for(int j = 1; j <= number; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
