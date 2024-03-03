/*
45. Write a program to display the numbers from 1 to 100 using
c) do...while loop
*/

#include <stdio.h>

int main() {
  int i = 1;

  do {
    printf("%d ", i);
    i++;
  } while (i <= 100);

  return 0;
}
