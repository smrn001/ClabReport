// 54. Write a C program to find the sum of following Series: 1/1! + 2/2! + 3/3!
// + 4/4! + ... N/N! Where N is any number entered by the user
#include <stdio.h>

int main() {
  int N;
  double sum = 0.0;
  int factorial = 1;

  printf("Enter a number: ");
  scanf("%d", &N);

  for (int i = 1; i <= N; i++) {
    factorial *= i;
    sum += (double)i / factorial;
  }

  printf("Sum of the series: %.2lf\n", sum);

  return 0;
}
