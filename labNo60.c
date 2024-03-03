// 60. Write a Program to enter salary of N employee and find total Number of
// employees getting salary between 5000-1000 using an array
#include <stdio.h>

int main() {
  int N;
  printf("Enter the number of employees: ");
  scanf("%d", &N);

  int salaries[N];
  int count = 0;

  printf("Enter the salaries of the employees:\n");
  for (int i = 0; i < N; i++) {
    printf("Employee %d: ", i + 1);
    scanf("%d", &salaries[i]);
    if (salaries[i] >= 1000 && salaries[i] <= 5000)
      count++;
  }

  printf("Total number of employees getting salary between 1000-5000: %d\n",
         count);

  return 0;
}
