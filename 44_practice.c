#include <stdio.h>

int main(void) {

  int sum = 0, number;
  float avg;

  for(int i = 1; i <= 10; i++) {
    printf("Enter number : ");
    scanf("%d", &number);

    if(number < 0) {
      printf("Enter only positive numbers\n");
      i--;
      continue;
    }

    sum += number;
  }

  avg = sum / 10.0;
  printf("Sum = %d, Average = %.2f\n", sum, avg);

  return 0;
}
