// 49. Write a program in C to input a three-digit number and find the sum of
// individual digit using while loop.
#include <stdio.h>

int main() {
  int num, sum = 0, digit;

  printf("Enter a three-digit number: ");
  scanf("%d", &num);

  while (num > 0) {
    digit = num % 10;
    sum += digit;
    num /= 10;
  }

  printf("Sum of individual digits: %d\n", sum);

  return 0;
}
