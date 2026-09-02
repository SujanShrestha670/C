#include <stdio.h>

void reverse(int number);

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  reverse(number);

  return 0;
}

void reverse(int number) {

  int temp = number, reverse = 0;

  while(temp > 0) {

    if(temp % 10 == temp) {
      reverse += temp % 10;
      temp /= 10;
    }else {
      reverse += temp % 10;
      reverse *= 10;
      temp /= 10;
    }

  }

  printf("The reverse of %d is %d\n", number, reverse);

}
