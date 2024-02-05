// 19.Write a program to input any number and find the square of that input
// number.
#include <stdio.h>
int main() {
  float n, sq;
  printf("Enter a number :");
  scanf("%f", &n);
  sq = n * n;
  printf("Square of %.2f is %.2f \n", n, sq);
  return 0;
}