/*
 
1
12
123
1234
12345

*/

#include <stdio.h>

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  printf("\n");
  for(int i = 1; i <= number; i++) {
    for(int j = 1; j <= i; j++) {
      printf("%d", j);
    }
    printf("\n");
  }
   return 0;
}
