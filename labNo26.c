// 26.Write a program to input four-digit numbers and find the sum of
// individual digit
#include <stdio.h>
int main() {
  int number, d1, d2, d3, d4, rev;
  printf("Enter a four-digit number: ");
  scanf("%d", &number);
  d4 = number % 10;
  number = number / 10;
  d3 = number % 10;
  number = number / 10;
  d2 = number % 10;
  number = number / 10;
  d1 = number;
  rev = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
  printf("Reversed number is %d\n", rev);
  return 0;
}
