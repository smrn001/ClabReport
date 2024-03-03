// 52. Write a program to calculate HCF of any two number entered by the user
#include <stdio.h>

int main() {
  int a, b, lcm, smallest, i;
  printf("Enter two numbers\n");
  scanf("%d%d", &a, &b);
  smallest = (a < b) ? a : b;
  for (i = smallest; i >= 1; i--) {
    if (a % i == 0 && b % i == 0) {
      printf("The HCF of %d and %d is %d", a, b, i);
      break;
    }
  }
  return 0;
}
