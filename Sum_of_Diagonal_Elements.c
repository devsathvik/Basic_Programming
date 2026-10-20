#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long diagonalSum(int n, int** matrix) {
    //===== Write Your Logic Here =====
    long long sum = 0;
    for(int i = 0; i < n ; i++){
        sum += matrix[i][i];
        if(i != n - 1 - i){
            sum += matrix[i][n - 1 - i];
        }
    }

    return sum;


}

int main() {
    int n;
    scanf("%d", &n);
    int** matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) scanf("%d", &matrix[i][j]);
    }

    printf("%lld\n", diagonalSum(n, matrix));

    for (int i = 0; i < n; i++) free(matrix[i]);
    free(matrix);
    return 0;
}