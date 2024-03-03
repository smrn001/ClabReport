// 32. Write a program in C to perform single character input and output using
// getchar () and putchar () function.
#include <stdio.h>

int main() {
  char ch;

  printf("Enter a character: ");
  ch = getchar();

  printf("You entered: ");
  putchar(ch);

  return 0;
}
