#include <stdio.h>

void foo(int n){
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    foo(n);
}