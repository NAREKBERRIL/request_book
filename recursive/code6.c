#include <stdio.h>

int foo(int a, int b) {
    if (b == 0)
        return a;
    return foo(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = foo(num1, num2);
    printf("%d\n", result);
}
