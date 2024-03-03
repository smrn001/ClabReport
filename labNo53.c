// 53. Write a program in C to find the sum of given number of squares using
// while loop.
#include <stdio.h>

int main() {
  int n, i = 1, sum = 0;

  printf("Enter the number of squares: ");
  scanf("%d", &n);

  while (i <= n) {
    sum += i * i;
    i++;
  }

  printf("The sum of the squares is: %d\n", sum);

  return 0;
}
