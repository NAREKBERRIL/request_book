#include <stdio.h>
    
int main(){
    float a, b;
    printf("Enter numbers: ");
    scanf("%f %f", &a, &b);
    float total = a * b;
    printf("Your numbers multiplicated is: %g\n", total);
}
