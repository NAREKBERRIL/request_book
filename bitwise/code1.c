#include <stdio.h>

int main(){
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    if(a & 1){
        printf("Your number is Odd\n");
    }else{
        printf("Your number is Even\n");
    }
    

}