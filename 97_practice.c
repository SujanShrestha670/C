#include <stdio.h>

int main(void) {

  int number, count = 0;
  printf("Enter a number : ");
  scanf("%d", &number);

  if(number == 0) {
    count++;
    printf("The digit count is %d\n", count);
    return 0;
  }

  int temp = number;

  while(temp > 0) {
    temp /= 10;
    count++;
  }

  printf("The digit count is %d\n", count);

  return 0;
}
