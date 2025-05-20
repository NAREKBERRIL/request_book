#include <stdio.h>

int main(){
    int a, n; 
    printf("Enter number: ");
    scanf("%d %d", &a, &n);
    a = a | (1 << n);
     printf("%d\n", a);
}