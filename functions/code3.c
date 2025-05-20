#include <stdio.h>

int fact(int n){
    int res = 1;
    for(int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int res = fact(n);
    printf("%d\n", res);
}