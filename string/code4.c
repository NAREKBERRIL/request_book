#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    fgets(str, sizeof(str), stdin);
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
    printf("%s\n", str);
}