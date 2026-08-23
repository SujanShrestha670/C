#include <stdio.h>

int main(void) {

  float temp_in_celsius, temp_in_fahrenheit;
  printf("Enter the temperature in celsius : ");
  scanf("%f", &temp_in_celsius);

  temp_in_fahrenheit = (temp_in_celsius  * (float)9/5 + 32);

  printf("%.2f °C = %.2f °F\n", temp_in_celsius, temp_in_fahrenheit);

  return 0;
}
