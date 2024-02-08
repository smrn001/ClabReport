// 26.Write a program to input four-digit numbers and find the sum of
// individual digit
#include <stdio.h>
int main() {
  int number, d1, d2, d3, d4, sum;
  printf("Enter a four-digit number: ");
  scanf("%d", &number);
  d4 = number % 10;
  number = number / 10;
  d3 = number % 10;
  number = number / 10;
  d2 = number % 10;
  number = number / 10;
  d1 = number;
  sum = d4 + d3 + d2 + d1;
  printf("Sum of four-digit numbers is %d\n", sum);
  return 0;
}
