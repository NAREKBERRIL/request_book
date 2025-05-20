#include <stdio.h>

int main(){
    char a; 
    printf("Enter letter: ");
    scanf("%c", &a);
    if(a >= 'a' && a <= 'z'){
        a = a & ~32;
        printf("%c\n", a); 
    }else if(a >= 'A' && a <= 'Z'){
        a = a | 32;
        printf("%c\n", a);
    }

}