// 55. Write a program in C that make use of break, continue and goto statement
#include <stdio.h>

int main() {
  int i;

  // Example of break statement
  for (i = 1; i <= 10; i++) {
    if (i == 5) {
      break;
    }
    printf("%d ", i);
  }
  printf("\n");

  // Example of continue statement
  for (i = 1; i <= 10; i++) {
    if (i == 5) {
      continue;
    }
    printf("%d ", i);
  }
  printf("\n");

  // Example of goto statement
  i = 1;
loop:
  if (i <= 10) {
    printf("%d ", i);
    i++;
    goto loop;
  }
  printf("\n");

  return 0;
}
