// 12.Write a Program to find the addition of two input numbers.
#include <stdio.h>
int main() {
  int num1, num2;
  printf("Enter two numbers : ");
  scanf("%d %d", &num1, &num2);
  printf("%d+%d=%d\n", num1, num2, num1 + num2);
  return 0;
}