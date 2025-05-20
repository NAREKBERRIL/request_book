#include <stdio.h>

int main(){
    char c;
    printf("enter letter: ");
    scanf("%c", &c);

    switch(c){
        case 'a' : case 'i' : case 'u' : case 'e' : case 'o' : case 'A' : case 'I' : case 'U' : case 'E' : case 'O':
        printf("The letter is Vowel");
        break;

        default:
        printf("The letter is consonant");
    }
}    