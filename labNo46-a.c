/*

46. Write a program to display even numbers from 1 to n using
a) for loop
 b) while loop
and c) do...while loop
*/
#include <stdio.h>

int main() {
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  printf("Even numbers from 1 to %d:\n", n);
  for (int i = 2; i <= n; i += 2) {
    printf("%d ", i);
  }

  return 0;
}
