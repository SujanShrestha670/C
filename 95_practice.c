#include <stdio.h>

int main(void) {

  int number, reverse = 0;
  printf("Enter a number : ");
  scanf("%d", &number);

  if(number % 10 == number) {
    printf("Single digit number is always palindrome\n");
    return 0;
  }else {
    
    int temp = number;
    while(temp > 0) {

      reverse = reverse * 10 + temp % 10;
      temp /= 10;

    }

  }

  if(number == reverse) {
    printf("%d is palindrome\n", number);
  }else {
    printf("%d is not palindrome\n", number);
  }

  return 0;
}
