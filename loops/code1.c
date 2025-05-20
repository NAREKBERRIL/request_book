#include <stdio.h>

int main(){
    for(int i = 0; i <= 10; i++){
        printf("%d ", i);
    }
    printf("\n");
    int i = 0;
    while(i <= 10){
        printf("%d ", i);
        i++;
    }
    printf("\n");
    for(int i = 10; i >= 0; i--){
        printf("%d ", i);
    }
}