// 67. Write a C program that takes a user-input string and copies it to another
// string using the strcpy function. Display the copied string.
#include <stdio.h>
#include <string.h>

int main() {
  char source[100];
  char destination[100];

  printf("Enter a string: ");
  scanf("%s", source);

  strcpy(destination, source);

  printf("Copied string: %s", destination);

  return 0;
}
