// 38. Write a Program to input any number and determine whether the input
// number is odd or even.
#include <stdio.h>

int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number % 2 == 0) {
    printf("%d is even.\n", number);
  } else {
    printf("%d is odd.\n", number);
  }

  return 0;
}
