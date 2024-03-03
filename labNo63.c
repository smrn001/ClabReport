// 63. Write a program to read order of matrix and its elements. Find transpose
// of the matrix
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

  printf("Transpose of the Matrix:\n");
  for (i = 0; i < cols; i++) {
    for (j = 0; j < rows; j++) {
      printf("%d ", matrix[j][i]);
    }
    printf("\n");
  }

  return 0;
}
