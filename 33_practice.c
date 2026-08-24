#include <stdio.h>

int main(void) {

  int number, sum = 0;

  do {

    printf("Enter a number (enter 0 to stop) : ");
    scanf("%d", &number);

    sum += number;

  }while(number != 0);

  printf("Sum is %d\n", sum);

  return 0;
}
