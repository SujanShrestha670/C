#include <stdio.h>

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  if(number % 2 == 0)
    printf("%d is even number.\n");
  else
    printf("%d is odd number.\n");

  return 0;
}
