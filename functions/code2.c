#include <stdio.h>

void foo(){
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            printf("%d * %d = %d\n", i, j, j*i);
        }
    }
}

int main(){
    foo();
}