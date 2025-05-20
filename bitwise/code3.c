#include <stdio.h>

int main(){
    int a, count = 0; 
    printf("Enter number: ");
    scanf("%d", &a);
    while(a){
        if(a & 1) count++;
        a >>= 1;
    }
    printf("%d\n", count);

}
