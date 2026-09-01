#include <stdio.h>

int main(void) {

  int number, i = 1;
  printf("Enter a number : ");
  scanf("%d", &number);

  for(int i = 1; i <= number; i++) {
    for(int j = 1; j <= number; j++) {
      if(i % 2 == 0) {
        printf(" *");
      }else {
        printf("* ");
      }
    }
    printf("\n");
  }

  return 0;
}
