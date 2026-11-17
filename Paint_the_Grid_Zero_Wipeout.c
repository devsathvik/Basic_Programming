#include <stdio.h>
#include <stdlib.h>
//===== Declare Imports here if required =====


void paintGrid(int** matrix, int m, int n) {
    //===== Write Your Logic Here =====
    int *RowZero = (int*)calloc(m , sizeof(int));
    int *ColumnZero = (int*)calloc(n , sizeof(int));

    for(int i = 0 ; i < m ; i++ ){
        for(int j = 0 ; j < n ; j++ ){
            if(matrix[i][j] == 0){
                RowZero[i] = 1;
                ColumnZero[j] = 1;
            }
        }
    }

    for(int i = 0 ; i < m ; i++ ){
        for(int j = 0 ; j < n ; j++ ){
            if(RowZero[i] || ColumnZero[j]){
                matrix[i][j] = 0;
            }
        }
    }

    free(RowZero);
    free(ColumnZero);

}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int** matrix = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    }

    paintGrid(matrix, m, n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", matrix[i][j]);
            if (j < n - 1) printf(" ");
        }
        printf("\n");
    }

    for(int i=0; i<m; i++){
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}