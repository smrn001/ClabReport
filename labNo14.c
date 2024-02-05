// 14.Write a Program to input the length and breadth of a rectangle and find
// the area and perimeter of rectangle
#include <stdio.h>
int main() {
  float length, breadth, area, perimeter;
  printf("Enter Length, Breadth of Rectangle :");
  scanf("%f %f", &length, &breadth);
  area = length * breadth;
  perimeter = 2 * (length + breadth);
  printf("Area = %.2f sq unit\nPerimeter = %.2f unit\n", area, perimeter);
  return 0;
}