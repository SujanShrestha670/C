#include <stdio.h>

int main(void) {

  int reverse = 0;

  printf("All four digits palindromes numbers are :\n");
  for(int i = 1000; i <= 9999; i++) {

    int temp = i;

    while(temp > 0) {

      reverse = reverse * 10 + temp % 10;
      temp /= 10;

    }

    if(reverse == i) {
      printf("%d\n", i);
    }

    reverse = 0;

  }

  return 0;
}
