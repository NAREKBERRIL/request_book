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

int sum_of_prime(int n){
    for(int i = 2; i <= n/2; i++){
        if(prime(i) && prime(n-i)) {
            return 1;
        }  
    }
    return 0;
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int res = sum_of_prime(n);
    if(sum_of_prime(n)){
        printf("Your number can be sum of two primes\n");
    }else{
        printf("Your number can't be sum of two primes\n");
    }
}