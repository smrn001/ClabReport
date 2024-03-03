// 35. Write a program in C to input any character and display the equivalent
// ASCII value of that character
#include <stdio.h>

int main() {
  char ch;

  printf("Enter a character: ");
  scanf("%c", &ch);

  printf("The ASCII value of %c is %d\n", ch, ch);

  return 0;
}
