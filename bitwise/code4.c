#include <stdio.h>

int main(){
    int a, count = 0; 
    printf("Enter number: ");
    scanf("%d", &a);
    while(a){
        if(a & 1) count++;
        a >>= 1;
    }
    if(count & 1){
        printf("Count of 1's is Odd\n");
    }else{
        printf("Count of 1's is Even\n");
    }

}