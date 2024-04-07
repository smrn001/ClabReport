#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1, *arr2;
    int n;

    // Using malloc()
    printf("Enter the size of the array for malloc(): ");
    scanf("%d", &n);
    arr1 = (int *)malloc(n * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed for malloc()!\n");
        return 1;
    }
    printf("Memory allocated successfully using malloc().\n");

    // Using calloc()
    printf("\nEnter the size of the array for calloc(): ");
    scanf("%d", &n);
    arr2 = (int *)calloc(n, sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed for calloc()!\n");
        free(arr1); // Free memory allocated by malloc() before exiting
        return 1;
    }
    printf("Memory allocated successfully using calloc().\n");

    // Freeing memory
    free(arr1);
    free(arr2);
    printf("\nMemory freed successfully.\n");

    return 0;
}
