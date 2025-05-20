#include <stdio.h>

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[100], i, j;

    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            for (j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
            i--;
        }
    }

    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
