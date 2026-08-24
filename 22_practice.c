#include <stdio.h>

int main(void) {

  int number1, number2, number3, biggest;

  printf("Enter any three numbers : ");
  scanf("%d %d %d", &number1, &number2, &number3);

  if(number1 > number2) {

    if(number1 > number3) {
      biggest = number1;
    }else {
      biggest = number3;
    }

  }else {
    
    if(number2 > number1) {
      if(number2 > number3) {
        biggest = number2;
      }else {
        biggest = number3;
      }
    }

  }

  printf("The biggest number out of %d, %d & %d is %d\n", number1, number2, number3, biggest);

  return 0;
}
