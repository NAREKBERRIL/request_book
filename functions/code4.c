#include <stdio.h>

int foo(int n){
    int tmp = 0;
    while (n > 0)
    {
        tmp += n % 10;
        n /= 10;
    }
    return tmp;
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int res = foo(n);
    printf("%d\n", res);
}