#include <stdio.h>

int main(void) {

  int year, month, day;
  int is_leap = 0;
  int max_days = 0;

  printf("Enter date in YYYY-MM-DD format : ");
  if(scanf("%d-%d-%d", &year, &month, &day) != 3) {
    printf("Invalid format!\n");
    return 1;
  }

  if(year < 1 || month < 1 || month > 12 || day < 1 || day > 31) {
    printf("Invalid Date\n");
    return 0;
  }

  if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
    is_leap = 1;
  }

  switch(month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      max_days = 31;
      break;
    case 4: case 6: case 9: case 11:
      max_days = 30;
      break;
    case 2:
      max_days = is_leap ? 29 : 28;
      break;
  }

  if(day <= max_days) {
    printf("The date %04d-%02d-%02d is valid date\n", year, month, day);
  }else {
    printf("Invalid Date\n");
  }

  return 0;
}
