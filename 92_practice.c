#include <stdio.h>

int main(void) {

  int number, large = 0;

  for(int i = 1; i <= 10; i++) {
    printf("Enter number %d : ", i);
    scanf("%d", &number);

    if(number > large)
      large = number;
  }

  printf("The largest number among these 10 numbers is %d\n", large);

  return 0;
}
