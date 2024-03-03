// 37. Write a Program to determine whether the input number is divisible by 5
// or not.
#include <stdio.h>

int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number % 5 == 0) {
    printf("The number is divisible by 5.\n");
  } else {
    printf("The number is not divisible by 5.\n");
  }

  return 0;
}
