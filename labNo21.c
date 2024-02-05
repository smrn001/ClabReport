// 21.Write a program to calculate the square root of a given number using
// library function
#include <math.h>
#include <stdio.h>
int main() {
  float number, squareRoot;
  printf("Enter a number: ");
  scanf("%f", &number);
  squareRoot = sqrt(number);
  printf("Square root of %.2f = %.2f\n", number, squareRoot);
  return 0;
}
/// use gcc labNo21.c -lm