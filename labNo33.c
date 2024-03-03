// 33. Write a program in C to perform string input and output operation using
// gets () and puts () function.
#include <stdio.h>

int main() {
  char str[100];

  printf("Enter a string: ");
  gets(str);

  printf("Entered string: ");
  puts(str);

  return 0;
}
