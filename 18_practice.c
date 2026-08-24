#include <stdio.h>

int main(void) {

  int number1, number2, bigger;
  printf("Enter any two numbers : ");
  scanf("%d %d", &number1, &number2);

  if(number1 > number2)
    printf("%d is bigger than %d\n", number1, number2);
  else
    printf("%d is bigger than %d\n", number2, number1);

  return 0;    
}
