#include <stdio.h>

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  if(number % 2 == 0)
    goto even;
  else
    goto odd;

  even:
    printf("The number %d is even\n", number);
    goto end;

  odd:
    printf("The number %d is odd\n", number);

  end:

  return 0;
}
