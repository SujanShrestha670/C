/* Series : 1 + 2 + 4 + 7 + 11 + 16 + ....... */

#include <stdio.h>

int main(void) {

  int nth_term, item = 1, sum = 0;

  printf("Enter the nth term : ");
  scanf("%d", &nth_term);

  printf("The series :\t");

  for(int i = 1; i <= nth_term; i++) {
    printf("%d\t", item);
    sum += item;
    item += i;
  }

  printf("\nThe sum of the given series is %d\n", sum);

  return 0;

}

