#include <stdio.h>

int main(void) {

  int number1, number2, flag1 = 0;
  printf("Enter any two numbers : ");
  scanf("%d %d", &number1, &number2);


  for(int i = 1; flag1 != 1; i++) {

    int multiple1 = i * number1;

      for(int j = 1; flag1 != 1; j++) {

        int multiple2 = j * number2;

        if(multiple1 == multiple2) {
          printf("The LCM is %d\n", multiple1);
          flag1 = 1;
          break;
        }else if(multiple1 < multiple2) {
          break;
        }

      }

  }


  for(int i = 1; i <= number1; i++) {

      int hcf;

      if(number1 % i != 0) {
        continue;
      }else {

        for(int j = 1; j <= number2; j++) {

          if(number2 % j != 0) {
            continue;
          }else {
            if(i == j) {
              hcf = i;
              break;
            }else if(i < j) {
              break;
            }
          }

        }

      }
      if(i == number1) {
        printf("The HCF is %d\n", hcf);
      }
  }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              

  return 0;
}
