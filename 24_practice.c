/* Conditions:
 
 percentage >= 85     grade = 'A'
 percentage >= 75     grade = 'B'
 percentage >= 55     grade = 'C'
 percentage >= 45     grade = 'D'
 percentage < 40      grade = 'E'

 
*/


#include <stdio.h>

int main(void) {

  float mark1, mark2, mark3, mark4, total, percentage;
  char grade;

  printf("Enter the marks obtained in 4 subjects : ");
  scanf("%f %f %f %f", &mark1, &mark2, &mark3, &mark4);

  total = mark1 + mark2 + mark3 + mark4;
  percentage = total / 4;

  if(percentage >= 85)
    grade = 'A';
  else if(percentage >= 70)
    grade = 'B';
  else if(percentage >= 55) 
    grade = 'C';
  else if(percentage >= 40) 
    grade = 'D';
  else 
    grade = 'E';

  printf("Total marks = %.2f\n", total);
  printf("Percentage = %.2f %%\n", percentage);
  printf("Grade obtained = %c\n", grade);

  return 0;
}
