#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void columnMinimums(int r, int c, int** matrix) {
    //===== Write Your Logic Here =====
    for(int j = 0; j < c; j++){
        int min = matrix[0][j];
        for(int i = 1; i < r; i++){
            if(matrix[i][j] < min){
                min = matrix[i][j];
            }
        }
        if(j > 0) printf(" ");
        printf("%d",min);
    }
    printf("\n");


}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int** matrix = (int**)malloc(r * sizeof(int*));
    for (int i = 0; i < r; i++) {
        matrix[i] = (int*)malloc(c * sizeof(int));
        for (int j = 0; j < c; j++) scanf("%d", &matrix[i][j]);
    }

    columnMinimums(r, c, matrix);

    for (int i = 0; i < r; i++) free(matrix[i]);
    free(matrix);
    return 0;
}