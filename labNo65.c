// 65. Write a program that reads a string from keyboard until user press an
// enter key and count the vowels, consonants, semicolons, commas separately in
// the string
#include <stdio.h>

int main() {
  char str[100];
  int vowels = 0, consonants = 0, semicolons = 0, commas = 0;
  int i = 0;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  while (str[i] != '\0') {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
        str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
        str[i] == 'O' || str[i] == 'U') {
      vowels++;
    } else if ((str[i] >= 'a' && str[i] <= 'z') ||
               (str[i] >= 'A' && str[i] <= 'Z')) {
      consonants++;
    } else if (str[i] == ';') {
      semicolons++;
    } else if (str[i] == ',') {
      commas++;
    }
    i++;
  }

  printf("Vowels: %d\n", vowels);
  printf("Consonants: %d\n", consonants);
  printf("Semicolons: %d\n", semicolons);
  printf("Commas: %d\n", commas);

  return 0;
}
