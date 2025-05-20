#include <stdio.h>
#include <stdlib.h>

int Prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int filter_primes(int *a, int size_a, int *b, int size_b, int *result) {
    int index = 0;

    for (int i = 0; i < size_a; i++) {
        if (Prime(a[i])) {
            result[index++] = a[i];
        }
    }

    for (int i = 0; i < size_b; i++) {
        if (Prime(b[i])) {
            result[index++] = b[i];
        }
    }

    return index; 
}

int main() {
    int size1, size2;

    printf("Enter size of first array: ");
    scanf("%d", &size1);
    int *arr1 = (int *)malloc(size1 * sizeof(int));

    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);
    int *arr2 = (int *)malloc(size2 * sizeof(int));

    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int *result = (int *)malloc((size1 + size2) * sizeof(int));
    int result_size = filter_primes(arr1, size1, arr2, size2, result);

    for (int i = 0; i < result_size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(arr1);
    free(arr2);
    free(result);
}
