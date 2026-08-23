#define PI 3.141592653589793
#include <stdio.h>

int main(void) {

  double radius;

  printf("Enter radius of a circle : ");
  scanf("%lf", &radius);

  double area = PI * radius * radius;
  double perimeter = 2 * PI * radius;

  printf("Area : %.2lf\n", area);
  printf("Perimeter : %.2lf\n", perimeter);

  return 0;
}
