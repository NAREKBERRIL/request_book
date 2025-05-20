#include <stdio.h>

int main(){
    int a = 10, b = 165, count = 0;
    for(int i = a; i <= b; i++){
        if(i % 5 == 0){
            printf("%d \n", i);
            count++;
        }
    }
    printf("%d\n", count);
}    