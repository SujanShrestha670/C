#include <stdio.h>

int main(void) {

  float mark1, mark2, mark3, mark4, mark5;
  printf("Enter the obtained marks in 5 subjects : ");
  scanf("%f %f %f %f %f", &mark1, &mark2, &mark3, &mark4, &mark5);

  float total = mark1 + mark2 + mark3 + mark4 + mark5;
  float percentage = total / 5;

  printf("Total marks = %.2f\n", total);
  printf("Percentage = %.2f %%\n", percentage);

  return 0;
}
