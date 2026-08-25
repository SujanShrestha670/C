#include <stdio.h>
#include <math.h>

int main(void) {

  int i, number;
  printf("Enter a number : ");
  scanf("%d", &number);

  for(i = 2; i <= sqrt(number); i++) {
    
    if(number % i == 0)
      break;

  }

  if(i > sqrt(number)) {
    printf("%d is prime.\n");
  }else {
    printf("%d is not prime.\n");
  }

  return 0;
}
