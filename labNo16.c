// 16.Write a Program to calculate the area and circumference of a circle.
#include <math.h>
#include <stdio.h>
int main() {
  float radius, area, circumference;
  printf("Enter radius of circle : ");
  scanf("%f", &radius);
  area = M_PI * radius * radius;
  circumference = 2 * M_PI * radius;
  printf("Area of circle: %.2f\n", area);
  printf("Circumference of circle: %.2f\n", circumference);
  return 0;
}