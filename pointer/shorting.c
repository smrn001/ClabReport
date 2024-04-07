#include <stdio.h>

int main() {
    int n, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int num[n];

    // Input numbers
    for (int i = 0; i < n; i++) {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    // Bubble sort algorithm using pointers
    for (int i = 0; i < n - 1; i++) {
        int *ptr = num;
        for (int j = 0; j < n - 1 - i; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                // Swap using pointers
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    // Output sorted array
    printf("The sorted array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}
