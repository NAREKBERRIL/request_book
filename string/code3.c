#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            printf("%c\n", str[i]);
        }
    }


}