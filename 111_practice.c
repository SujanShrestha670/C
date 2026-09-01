#include <stdio.h>

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  printf("\n");
  for(int i = 1; i <= number; i++) {
    for(int j = 1; j <= number; j++) {
      if(j == i) {
        printf("\\");
      }else if(j == number - i + 1) {
        printf("/");
      }else {
        printf("*");
      }
    }
    printf("\n");
  }

  return 0;
}
