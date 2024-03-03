// 51. Write a program to calculate LCM of any two number entered by the user
#include <stdio.h>
int main() {
  int a, b;
  int lcm = 1;
  printf("Enter two numbers\n");
  scanf("%d%d", &a, &b);
  for (lcm = 1; lcm <= a * b; lcm++) {
    if (lcm % a == 0 && lcm % b == 0) {
      printf("The LCM of %d and %d is %d", a, b, lcm);
      break;
    }
  }
  return 0;
}