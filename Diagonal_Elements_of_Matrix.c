#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printDiagonal(int n, int** matrix) {
    //===== Write Your Logic Here =====
    for(int i = 0; i < n; i++){
        printf("%d",matrix[i][i]);
        if(i < n - 1){
            printf(" ");
        }
    }


}

int main() {
    int n;
    scanf("%d", &n);
    int** matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) scanf("%d", &matrix[i][j]);
    }

    printDiagonal(n, matrix);

    for (int i = 0; i < n; i++) free(matrix[i]);
    free(matrix);
    return 0;
}