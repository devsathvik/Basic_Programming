#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


void spinGrid(int** matrix, int n) {

    //===== Declare Local Variables / Functions here if required =====
    int temp;

    for(int i = 0 ; i < n ; i++ ){
        for(int j = i + 1 ; j < n ; j++ ){
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < n / 2 ; j++){
            temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - 1 - j];
            matrix[i][n - 1 - j] =  temp;
        }
    }

    

    //===== Write Your Logic Here =====


}

int main() {
    int n;
    scanf("%d", &n);
    int** matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    }
    spinGrid(matrix, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", matrix[i][j]);
            if (j < n - 1) printf(" ");
        }
        printf("\n");
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}