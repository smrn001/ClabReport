// 47. Write a program to display odd numbers from 1 to n using
// c) do...while loop
#include <stdio.h>

int main() {
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  int i = 1;
  do {
    if (i % 2 != 0) {
      printf("%d ", i);
    }
    i++;
  } while (i <= n);

  return 0;
}
