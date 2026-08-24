#include <stdio.h>
#include <math.h>

int main(void) {

  int lower_limit, upper_limit;

  printf("Enter the lower and upper limit respectively : ");
  scanf("%d %d", &lower_limit, &upper_limit);

  printf("The armstrong numbers from %d to %d are :\n", lower_limit, upper_limit);

  for(int i = lower_limit; i <= upper_limit; i++) {

    int temp = i;
    int count = 0;
    int sum = 0;

    while(temp > 0) {

      temp /= 10;
      count++;

    }

    temp = i;

    while(temp > 0) {
      int digit = temp % 10;
      sum += (int)pow(digit, count);
      temp /= 10;
    }

    if(sum == i) {
      printf("%d\n", i);
    }

  } 

  return 0;
}
