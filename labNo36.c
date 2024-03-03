// 36. Write a program in C to input ID, Name and Salary of employee and display
// them
#include <stdio.h>

int main() {
  int id;
  char name[50];
  float salary;

  printf("Enter employee ID: ");
  scanf("%d", &id);

  printf("Enter employee name: ");
  scanf("%s", name);

  printf("Enter employee salary: ");
  scanf("%f", &salary);

  printf("\nEmployee Details:\n");
  printf("ID: %d\n", id);
  printf("Name: %s\n", name);
  printf("Salary: %.2f\n", salary);

  return 0;
}
