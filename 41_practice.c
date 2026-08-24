#include <stdio.h>

int main(void) {

  int number, flag = 0, temp, sum = 0, count = 0;
  printf("Enter a number with any number of digit : ");
  scanf("%d", &number);
  
  temp = number;

  printf("Reduced sum to 1 digit : ");

  while(flag == 0) {

    for(temp; temp > 0; temp /= 10) {
      sum += temp % 10;
    }

    temp = sum;

    while(temp > 0) {
      temp /= 10;
      count++;
    }

    if(count != 1) {
       temp = sum;
       printf("%d --> ", sum);
       sum = 0;
       count = 0;
    }else {
      printf("%d\n", sum);
      flag = 1;
    }

  }


  return 0;
}
