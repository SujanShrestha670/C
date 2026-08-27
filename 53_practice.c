#include <stdio.h>

int main(void) {

  int year1, month1, day1;
  int year2, month2, day2;
  int is_year1_leap = 0;
  int is_year2_leap = 0;
  int max_days1 = 0;
  int max_days2 = 0;
  int year, month, day;
  int is_leap;

  printf("Enter 1st date in YYYY-MM-DD format : ");
  if(scanf("%d-%d-%d", &year1, &month1, &day1) != 3) {
    printf("Invalid Date\n");
    return 1;
  }

  printf("Enter 2nd date in YYYY-MM-DD format : ");
  if(scanf("%d-%d-%d", &year2, &month2, &day2) != 3) {
    printf("Invalid Date\n");
    return 1;
  }

  if(year1 < 1 || month1 < 1 || month1 > 12 || day1 < 1 || day1 > 31) {
    printf("Invalid Date\n");
    return 0;
  }

  if(year2 < 1 || month2 < 1 || month2 > 12 || day2 < 1 || day2 > 31) {
    printf("Invalid Date\n");
    return 0;
  }

  if((year1 % 400 == 0) || (year1 % 4 == 0 && year1 % 100 != 0)) {
    is_year1_leap = 1;
  }

  if((year2 % 400 == 0) || (year2 % 4 == 0 && year2 % 100 != 0)) {
    is_year2_leap = 1;
  }

  switch(month1) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      max_days1 = 31;
      break;
    case 4: case 6: case 9: case 11:
      max_days1 = 30;
      break;
    case 2:
      max_days1 = (is_year1_leap) ? 29 : 28;
      break;
  }

  switch(month2) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      max_days2 = 31;
      break;
    case 4: case 6: case 9: case 11:
      max_days2 = 30;
      break;
    case 2:
      max_days2 = (is_year2_leap) ? 29 : 28;
      break;
  }

  if((day1 <= max_days1) && (day2 <= max_days2)) {

    if((year2 > year1) || (year2 == year1 && month2 > month1) || (year2 == year1 && month2 == month1 && day2 > day1)) {
      int temp1 = year1;
      int temp2 = month1;
      int temp3 = day1;

      year1 = year2;
      month1 = month2;
      day1 = day2;

      year2 = temp1;
      month2 = temp2;
      day2 = temp3;

      is_leap = is_year2_leap;
    }else {
      is_leap = is_year1_leap;
    }

    if(day1 < day2) {
      month1--;

      int previousMonth = (month1 == 0) ? 12 : month1;
      int daysInPrevMonth;

      switch(previousMonth) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
          daysInPrevMonth = 31;
          break;
        case 4: case 6: case 9: case 11:
          daysInPrevMonth = 30;
          break;
        case 2:
          daysInPrevMonth = is_leap ? 29 : 28;
          break;
      }

      day1 += daysInPrevMonth;

    }

    if(month1 < month2) {
      year1--;
      month1 += 12;
    }

    day = day1 - day2;
    month = month1 - month2;
    year = year1 - year2;

  }

  printf("Year = %d, Month = %d, Day = %d\n", year, month, day);


  return 0;
}

