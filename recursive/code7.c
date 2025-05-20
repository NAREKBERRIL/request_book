#include <stdio.h>

int fibonaci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonaci(n - 1) + fibonaci(n - 2);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int result = fibonaci(n);
    printf("%d\n", result);
}
