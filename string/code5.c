#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    fgets(str, sizeof(str), stdin);
     if(str[0]  >= 'a' && str[0] <= 'z'){
            str[0] -= 32;
        }
    for(int i = 1; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    printf("%s\n", str);
}