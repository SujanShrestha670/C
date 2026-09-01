/*
 
*******
*     *
*     *
*     *
*     *
*     *
*******
 
*/

#include <stdio.h>

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  for(int i = 1; i <= number; i++) {

    if(i == 1 || i == number) {
      for(int j = 1; j <= number; j++) {
        printf("*");
      }
    }


    if(i > 1 && i < number) {
      for(int k = 1; k <= number; k++) {
        if(k == 1 || k == number) {
          printf("*");
        }else {
          printf(" ");
        }
      }
    }

    printf("\n");
  }

  return 0;
}
