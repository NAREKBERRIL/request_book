#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello1 World";
    int index = -1;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){
           index = i;
           break; 
        }
    }
    printf("%d\n", index);
}