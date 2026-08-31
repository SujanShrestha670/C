#include <stdio.h>

int main(void) {

  int number, reverse = 0;
  printf("Enter a number : ");
  scanf("%d", &number);

  if(number % 10 == number) {
    printf("The reverse of %d is %d\n", number, number);
    printf("The double of the reverse number %d is %d\n", number, 2 * number);
  }else {

    int temp = number;

    while(temp > 0) {

      reverse = reverse * 10 + temp % 10;
      temp /= 10;

    }
    
    printf("The reverse of %d is %d\n", number, reverse);
    printf("The double of the reverse number %d is %d\n", reverse, 2 * reverse);

  }

  return 0;
}
