// 41. Write a Program to input a three-digit number and determine whether the
// input number is palindrome or not
#include <stdio.h>

int main() {
  int num, originalNum, reverseNum = 0, remainder;

  printf("Enter a three-digit number: ");
  scanf("%d", &num);

  originalNum = num;

  while (num != 0) {
    remainder = num % 10;
    reverseNum = reverseNum * 10 + remainder;
    num /= 10;
  }

  if (originalNum == reverseNum) {
    printf("%d is a palindrome number.\n", originalNum);
  } else {
    printf("%d is not a palindrome number.\n", originalNum);
  }

  return 0;
}
