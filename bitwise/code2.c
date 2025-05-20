#include <stdio.h>

int main(){
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    a |= 1;
    printf("%d\n", a);

}