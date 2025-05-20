#include <stdio.h>

int n_to_0(int n) {
    if(n < 0){
        return 0;
    }
    printf("%d\n", n);
    return n_to_0(n - 1);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int result = n_to_0(n);
}
