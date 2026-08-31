#include <stdio.h>

int main(void) {

  int nth_term, sum = 0;
  printf("Enter the nth term of the series : ");
  scanf("%d", &nth_term);

  int term = 0;

  printf("\nThe series is :\n");
  for(int i = 1; i <= nth_term; i++) {
    term = (term * 10) + 1;
    sum += term;
    if(i < nth_term) {
      printf("%d + ", term);
    }else {
      printf("%d", term);
    }
  }

  printf("\n\nThe sum of the above series is %d\n", sum);

  return 0;
}
