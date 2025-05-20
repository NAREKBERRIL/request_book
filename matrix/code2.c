#include <stdio.h>

int main_diagonal(int n, int matrix[10][10]){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += matrix[i][i];
    }
    return sum;
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
        int res  = main_diagonal(n, matrix);
        printf("%d\n", res);
}