// 56. Write a program to read n numbers from keyboard, store them in array and
// find their average
#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter %d numbers:\n", n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  float average = (float)sum / n;
  printf("Average: %.2f\n", average);

  return 0;
}
