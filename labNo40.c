// 40. Write a Program to input an age of a person and determine he/she is in
// teenager group or not. If his/her age is 16 then display teenager as well as
// middle age of teenager
#include <stdio.h>

int main() {
  int age;

  printf("Enter the age: ");
  scanf("%d", &age);

  if (age >= 13 && age <= 19) {
    printf("Teenager\n");

    if (age == 16) {
      printf("Middle age of teenager\n");
    }
  } else {
    printf("Not a teenager\n");
  }

  return 0;
}
