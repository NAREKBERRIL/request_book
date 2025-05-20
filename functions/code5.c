#include <stdio.h>

int prime(int n){
    if(n <= 1) return 0;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int res = prime(n);
    if(prime(n)){
        printf("Your number is prime\n");
    }else{
        printf("Your number isn't prime\n");
    }
}