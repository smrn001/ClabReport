// 64. Write a program that Calculate and print the sum of individual rows and
// columns of a matrix:
#include <stdio.h>
int main() {
  int i, j, rows, cols;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);
  int matrix[rows][cols];
  printf("Enter the elements of the matrix:\n");
  for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
  printf("Original Matrix:\n");
  for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  printf("Sum of individual rows:\n");
  for (i = 0; i < rows; i++) {
    int sum = 0;
    for (j = 0; j < cols; j++) {
      sum += matrix[i][j];
    }
    printf("Sum of row %d: %d\n", i + 1, sum);
  }
  printf("Sum of individual columns:\n");
  for (i = 0; i < cols; i++) {
    int sum = 0;
    for (j = 0; j < rows; j++) {
      sum += matrix[j][i];
    }
    printf("Sum of column %d: %d\n", i + 1, sum);
  }
  return 0;
}