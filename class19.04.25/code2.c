#include <stdio.h>
#include <stdlib.h>

int filter_odds(int *a, int size_a, int *b, int size_b, int *result) {
    int index = 0;

    for (int i = 0; i < size_a; i++) {
        if (a[i] % 2 != 0) {
            result[index++] = a[i];
        }
    }

    for (int i = 0; i < size_b; i++) {
        if (b[i] % 2 != 0) {
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
    int result_size = filter_odds(arr1, size1, arr2, size2, result);

    for (int i = 0; i < result_size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(arr1);
    free(arr2);
    free(result);
}
