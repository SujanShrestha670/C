#include <stdio.h>
#include <math.h>

int main(void) {

  int number;
  printf("Enter a number : ");
  scanf("%d", &number);

  printf("Cube of all numbers from 1 to %d which are divisible by 3\n", number);
  for(int i = 1; i <= number; i++) {
    int cube = pow(i, 3);

    if(cube % 3 == 0) {
      printf("%d -> %d\n", i,cube);
    }else {
      continue;
    }
  }


  return 0;
}
