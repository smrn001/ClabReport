// 57. Write a program that asks for n numbers from users, store them in an
// array and find the maximum and minimum numbers of them
#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int numbers[n];
  printf("Enter %d numbers:\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
  }

  int max = numbers[0];
  int min = numbers[0];

  for (int i = 1; i < n; i++) {
    if (numbers[i] > max) {
      max = numbers[i];
    }
    if (numbers[i] < min) {
      min = numbers[i];
    }
  }

  printf("Maximum number: %d\n", max);
  printf("Minimum number: %d\n", min);

  return 0;
}
