// 23.Write a program to input three-digit numbers and find the sum of
// individual digit.
#include <stdio.h>
int main() {
  int number, d1, d2, d3;
  printf("Enter three-digit numbers : ");
  scanf("%d", &number);
  d3 = number % 10;
  number = number / 10;
  d2 = number % 10;
  d1 = number / 10;
  printf("sum is %d \n", d1 + d2 + d3);
  return 0;
}