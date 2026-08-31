#include <stdio.h>

int main(void) {

 int i = 1, number;

  while(i <= 10) {
    printf("Enter number %d : ", i);
    scanf("%d", &number);

    if(number >= 1 && number <= 50) {
        for(int j = 1; j <= number; j++) {
            printf("=");
        }
        printf("\n");

        i++;    
    } else {
        printf("Enter number from 1 to 50\n");
    }
  } 

  return 0;
}
