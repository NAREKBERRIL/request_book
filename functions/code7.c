#include <stdio.h>

int power(int num, int exp) {
    int result = 1;

    for (int i = 0; i < exp; i++) {
        result *= num;
    }

    return result;
}

int main() {
    int num, exp;

    printf("Enter num: ");
    scanf("%d", &num);

    printf("Enter exp: ");
    scanf("%d", &exp);

    int result = power(num, exp);
    printf("%d\n", result);

}
