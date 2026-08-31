#include <stdio.h>
#include <math.h>

int main(void) {

  int nth_term, sum = 0;
  printf("Enter the nth term : ");
  scanf("%d", &nth_term);

  printf("\nThe series is :\n");
  for(int i = 1; i <= nth_term; i++) {
    int term = pow(i, i);
    sum += term;

    if(i < nth_term) {
      printf("%d^%d + ", i, i);
    }else {
      printf("%d^%d", i, i);
    }
  }

  printf("\n\nThe sum of the above series is %d\n", sum);

  return 0;
}
