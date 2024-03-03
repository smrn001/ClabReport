// 68. Create a C program that compares two strings entered by the user using
// the strcmp function. Display whether the strings are equal, greater, or less
// than each other.
#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100];

  printf("Enter the first string: ");
  scanf("%s", str1);

  printf("Enter the second string: ");
  scanf("%s", str2);

  int result = strcmp(str1, str2);

  if (result == 0) {
    printf("The strings are equal\n");
  } else if (result > 0) {
    printf("The first string is greater than the second string\n");
  } else {
    printf("The first string is less than the second string\n");
  }

  return 0;
}
