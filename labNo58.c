// 58. Write a program to read marks of n students and print out the top five
#include <stdio.h>

int main() {
  int marks[100];
  int n, i, j, temp;

  printf("Enter the number of students: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter the marks of student_%d : ", i + 1);
    scanf("%d", &marks[i]);
  }

  // Sort the marks in descending order
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (marks[j] < marks[j + 1]) {
        temp = marks[j];
        marks[j] = marks[j + 1];
        marks[j + 1] = temp;
      }
    }
  }

  printf("Top five marks:\n");
  for (i = 0; i < 5; i++) {
    printf("%d\n", marks[i]);
  }

  return 0;
}
