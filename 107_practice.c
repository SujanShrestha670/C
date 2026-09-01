#include <stdio.h>

int main(void) {

  int mark1, mark2, mark3, total = 0, roll_number, i = 1, highest_total = 0, student_with_highest_total = 0, count = 0;

  while(i <= 10) {

    printf("Enter roll.no and marks in 3 subjects of student %d : ", i);
    if(scanf("%d %d %d %d", &roll_number, &mark1, &mark2, &mark3) != 4) {
      printf("Invalid Input\n");
      return 1;
    }else {

      if(roll_number >= 1000 && roll_number <= 9999) {
        if(mark1 >= 40 && mark2 >= 40 && mark3 >= 40) {
          total = mark1 + mark2 + mark3;
          if(total > 200) {
            count++;
          }
          if(total > highest_total) {
            highest_total = total;
            student_with_highest_total = roll_number;
          }
        }
        i++;
      }
    }
  }

  printf("%d is the number of student whose total is more than 200\n", count);
  printf("%d is the roll number of student who got the highest total\n", student_with_highest_total);

  return 0;
}
