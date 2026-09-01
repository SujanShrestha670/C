#include <stdio.h> 

 void factorial(int x);

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  factorial(number);

  return 0;
}

void factorial(int x) {

  int fact = 1;

  for(int i = 1; i <= x; i++) {
    fact *= i;
  }

  printf("The factorial of %d is %d\n", x, fact);

}
