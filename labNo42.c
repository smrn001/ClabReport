// 42. Write a program in C to input any integer type number and check whether
// the entered number is positive even number or positive odd number or negative
// even number or negative odd number
#include <stdio.h>

int main() {
  int num;

  printf("Enter an integer: ");
  scanf("%d", &num);

  if (num > 0) {
    if (num % 2 == 0) {
      printf("Positive even number\n");
    } else {
      printf("Positive odd number\n");
    }
  } else if (num < 0) {
    if (num % 2 == 0) {
      printf("Negative even number\n");
    } else {
      printf("Negative odd number\n");
    }
  } else {
    printf("Zero\n");
  }

  return 0;
}
