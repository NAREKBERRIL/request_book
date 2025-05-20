#include <stdio.h>

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int product = 1;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    printf("Sum of all is: %d\n", sum);
    printf("Product of all is: %d\n", product);
}
