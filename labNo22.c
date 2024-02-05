// 22.Write a program to perform addition, subtraction, multiplication and
// division of any two input numbers.
#include <stdio.h>
int main() {
  float num1, num2;
  printf("Enter two numbers: ");
  scanf("%f %f", &num1, &num2);
  printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
  printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
  printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
  if (num2 != 0) {
    printf("Division: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
  } else {
    printf("Error! Division by zero is not allowed.\n");
  }
  return 0;
}
