#include <stdio.h>

int main(){
    float a, b;
    printf("Enter your height and weight: ");
    scanf("%f %f", &a, &b);
    printf("Your BMI is: %g\n", b/(a*a));
}
