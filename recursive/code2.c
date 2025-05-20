#include <stdio.h>

void O_to_n(int n) {
    if(n < 0){
        return;
    }
    O_to_n(n - 1);

    printf("%d\n", n);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    O_to_n(n);
}
