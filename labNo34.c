// 34. Write a program in C that make use of different conversion specification
//     available in C.
#include <stdio.h>

int main() {
  int integer = 10;
  float floatingPoint = 3.14;
  char character = 'A';
  char string[] = "Hello, World!";

  printf("Integer: %d\n", integer);
  printf("Floating Point: %.2f\n", floatingPoint);
  printf("Character: %c\n", character);
  printf("String: %s\n", string);

  return 0;
}
