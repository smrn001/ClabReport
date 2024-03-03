// 61. Write a program to read n numbers from keyboard and store in an array.
// Add even numbers and odd numbers separately and display the result
#include <stdio.h>

int main() {
  int n, sumEven = 0, sumOdd = 0;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    if (arr[i] % 2 == 0)
      sumEven += arr[i];
    else
      sumOdd += arr[i];
  }
  printf("Sum of even numbers: %d\n", sumEven);
  printf("Sum of odd numbers: %d\n", sumOdd);

  return 0;
}
