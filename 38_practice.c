/* In this series each number is a sum of the previous two numbers 

  1, 1, 2, 3, 5, 8, 13, 34, 55, 89, .......
 
*/

#include <stdio.h>

int main(void) {

  int i = 0, j = 1, z, nth_term;

  printf("Enter the nth term : ");
  scanf("%d", &nth_term);

  printf("%d ", j);

  for(int k = 1; k <= nth_term; k++) {

    z = i + j;
    printf("%d ", z);
    i = j;
    j = z;

  }

  printf("\n");

  return 0;    
}
