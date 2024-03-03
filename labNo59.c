// 59. Write a program to read an array of length N. Display the total count for
// positive numbers, negative numbers and zeros separately
#include <stdio.h>

int main() {
  int N;
  printf("Enter the length of the array: ");
  scanf("%d", &N);

  int arr[N];
  printf("Enter the elements of the array:\n");
  for (int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }

  int positiveCount = 0;
  int negativeCount = 0;
  int zeroCount = 0;

  for (int i = 0; i < N; i++) {
    if (arr[i] > 0) {
      positiveCount++;
    } else if (arr[i] < 0) {
      negativeCount++;
    } else {
      zeroCount++;
    }
  }

  printf("Positive numbers count: %d\n", positiveCount);
  printf("Negative numbers count: %d\n", negativeCount);
  printf("Zero count: %d\n", zeroCount);

  return 0;
}
