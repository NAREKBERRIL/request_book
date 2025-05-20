#include <stdio.h>
#include <stdlib.h>

int merge_alternate(int *a, int size_a, int *b, int size_b, int *result) {
    int i = 0, j = 0, k = 0;

    while (i < size_a && j < size_b) {
        result[k++] = a[i++];
        result[k++] = b[j++];
    }

    while (i < size_a) {
        result[k++] = a[i++];
    }

    while (j < size_b) {
        result[k++] = b[j++];
    }

    return k; 
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
    int result_size = merge_alternate(arr1, size1, arr2, size2, result);

    for (int i = 0; i < result_size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(arr1);
    free(arr2);
    free(result);
}
