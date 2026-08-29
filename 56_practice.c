#include <stdio.h> 

int main(void) {

  printf("The triad numbers are:\n");

  for(int i = 100; i <= 333; i++) {

    int temp = i;
    int temp2 = i * 2;
    int temp3 = i * 3;
    int all_in_1 = 0;
    int flag = 0;

    all_in_1 += (temp * 1000);
    all_in_1 += temp2;
    all_in_1 *= 1000;
    all_in_1 += temp3;

    while(all_in_1 > 0) {

      int digit = all_in_1 % 10;
      int to_check = all_in_1 / 10;

      for(to_check; to_check > 0; to_check /= 10) {
        if(to_check % 10 == digit) {
          flag = 1;
          break;
        }
      }

      all_in_1 /= 10;

    }

    if(!flag) {
      printf("%d\n", i);
    }

  }

  return 0;
}
