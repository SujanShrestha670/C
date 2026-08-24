#include <stdio.h>

int main(void) {

  int year;
  printf("Enter a year : ");
  scanf("%d", &year);

  if(year % 100 != 0) {
    if(year % 4 == 0) {
      printf("The year is leap\n");
    }else {
      printf("The year is not leap\n");
    }
  }else {
    if(year % 400 == 0) {
      printf("The year is leap\n");
    }else {
      printf("The year is not leap\n");
    }
  }


  return 0;
}
