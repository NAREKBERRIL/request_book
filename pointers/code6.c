#include <stdio.h>

void swap(int* p, int* p1){
    int tmp = *p;
    *p = *p1;
    *p1 = tmp;
}

int main(){
    int n = 5, n1 = 10;
    swap(&n, &n1);
    printf("%d %d\n", n, n1);
}