// 25.Write a program to input three-digit numbers and reverse that input
// number
#include <stdio.h>
int main() {
  int number, d1, d2, d3, rev;
  printf("Enter three-digit numbers : ");
  scanf("%d", &number);
  d3 = number % 10;
  number = number / 10;
  d2 = number % 10;
  d1 = number / 10;
  rev = d3 * 100 + d2 * 10 + d1;
  printf("Reversed number is %d\n", rev);
  return 0;
}