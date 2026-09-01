#include <stdio.h>

void even_odd(int x);

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  even_odd(number);

  return 0;
}

void even_odd(int x) {

  (x % 2 == 0) ? printf("%d is even", x) : printf("%d is odd", x);

}
