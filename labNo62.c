// 62. Write C Program to Sort N Numbers in Ascending and Descending order
#include <stdio.h>
int main() {
  int n, temp;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int num[n];
  for (int i = 0; i < n; i++) {
    printf("Enter the number %d: ", i + 1);
    scanf("%d", &num[i]);
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (num[j] > num[j + 1]) {
        temp = num[j];
        num[j] = num[j + 1];
        num[j + 1] = temp;
      }
    }
  }
  printf("The Array in  Ascending order is : ");
  for (int i = 0; i < n; i++) {
    printf("%d ", num[i]);
  }

  printf("\nThe Array in  Descending order is : ");
  for (int i = n - 1; i >= 0; i--) {
    printf("%d ", num[i]);
  }
  printf("\n");
  return 0;
}