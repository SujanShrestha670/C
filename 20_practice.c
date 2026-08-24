#include <stdio.h>

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  if(number < 0) 
    printf("You've entered negative number\n");
  else
    printf("You've entered %d\n", number);

  return 0;
}
