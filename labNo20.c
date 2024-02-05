// 20.Write a program to calculate the area and circumference of a circle using
// the concept of pre-processor directive
#include <stdio.h>
#define PI 3.14159
int main() {
  float radius, area, circumference;
  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);
  area = PI * radius * radius;
  circumference = 2 * PI * radius;
  printf("Area of the circle: %.2f\n", area);
  printf("Circumference of the circle: %.2f\n", circumference);
  return 0;
}