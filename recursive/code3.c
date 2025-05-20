#include <stdio.h>

void print_array(int arr[], int index, int size) {
    if(index == size){
        return;
    }
    printf("%d\n", arr[index]);
    print_array(arr, index + 1, size);
}

int main() {
    int n = 5;
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    print_array(arr, 0 , n);
}