#include <stdio.h>
    
int main(){
    float a;
    printf("Enter celsius: ");
    scanf("%f", &a);
    float fahrenheit = (a * 9/5) + 32;
    printf("Your celsius in fahrenheit is: %g\n", fahrenheit);
}
