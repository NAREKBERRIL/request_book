#include <stdio.h>

int main(){
    int n = 5;
    int n1 = 10;
    int* p = &n;
    int* p1 = &n1;
    printf("%d %d %d %d\n", *p + *p1, *p1 - *p, *p * *p1,*p1 / *p);
}