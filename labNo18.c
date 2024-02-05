// 18.Write a Program to input any three numbers and find their sum and average
#include <stdio.h>
int main() {
  float a, b, c, sum, av;
  printf("Enter any three numbers : ");
  scanf("%f %f %f", &a, &b, &c);
  sum = a + b + c;
  av = sum / 3;
  printf("sum = %.2f \nAverage = %.2f \n", sum, av);
  return 0;
}