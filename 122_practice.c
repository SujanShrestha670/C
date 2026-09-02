#include <stdio.h>
#include "reverse_number.h"

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  int result = reverse(number);

  if(number == result) {
    printf("%d is palindrome\n", number);
  }else {
    printf("%d is not palindrome\n", number);
  }
  
}
