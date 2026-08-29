/* 
 
*
* *
* * *
* * * *
* * * * *

*/

#include <stdio.h> 

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  printf("\n");
  for(int i = 1; i <= number; i++) {
    for(int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;

}
