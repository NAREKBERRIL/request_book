#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int* a = arr;
   for(int i = 0; i < n; i++){
    printf("%d\n", *(a + i));
   }
}