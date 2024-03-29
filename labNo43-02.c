/*

43.02
a. Minimum Rs.80/- for up to 20 units
b. Rs. 7.30 per unit for next 100 units
c. Rs 9.00 per unit for any units beyond 120 units
Write a program to compute monthly bill for given number of units consumed by a
customer

*/
#include <stdio.h>

int main() {
  int units;
  float bill;

  printf("Enter the number of units consumed: ");
  scanf("%d", &units);

  if (units <= 20) {
    bill = 80;
  } else if (units <= 120) {
    bill = 80 + (units - 20) * 7.30;
  } else {
    bill = 80 + 100 * 7.30 + (units - 120) * 9.00;
  }

  printf("Monthly bill: Rs. %.2f\n", bill);

  return 0;
}
