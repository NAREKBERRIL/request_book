#include <stdio.h>

int main(){
    for(int i = 0; i <= 100; i++){
        if(i == 3 || i == 5 || i == 15){
           continue;
        }else{
            printf("%d\n", i);
        }   
    }
}    