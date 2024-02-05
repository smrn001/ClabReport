// 15.Write a Program to convert centigrade temperature to Fahrenheit
// temperature.
#include <stdio.h>
int main() {
  float centigrade, Fahrenheit;
  printf("Enter temperature in centigrade : ");
  scanf("%f", &centigrade);
  Fahrenheit = (centigrade * 9 / 5) + 32;
  printf("%.2f centigrade is %.2f Fahrenheit\n", centigrade, Fahrenheit);
  return 0;
}