// 44. Write a program in C to check whether the entered character is vowel or
// consonant or other characters using switch case#include <stdio.h>
#include <stdio.h>
int main() {
  char ch;

  printf("Enter a character: ");
  scanf("%c", &ch);

  switch (ch) {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
    printf("%c is a vowel.\n", ch);
    break;
  default:
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
      printf("%c is a consonant.\n", ch);
    else
      printf("%c is not a letter.\n", ch);
  }

  return 0;
}
