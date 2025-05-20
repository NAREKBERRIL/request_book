#include <stdio.h>

void evenIndex_to_0(int matrix[10][10], int n){
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j < n; j++){
                matrix[i][j] = 0;
            }
        }
    }
}

void printMatrix(int matrix[10][10], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter sizeof matrix: ");
    scanf("%d", &n);
    int matrix[10][10];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    evenIndex_to_0(matrix, n);
    printMatrix(matrix, n);
}