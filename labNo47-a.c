// 47. Write a program to display odd numbers from 1 to n using
// a) for loop

int main() {
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  printf("Odd numbers from 1 to %d:\n", n);
  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      printf("%d ", i);
    }
  }

  return 0;
}
