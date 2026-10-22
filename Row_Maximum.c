#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rowMaximums(int r, int c, int** matrix) {
    //===== Write Your Logic Here =====
    for(int i = 0; i < r; i++){
        int max = matrix[i][0];
        for(int j = 1 ; j < c; j++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
            }
        }
        if(i > 0){
            printf(" ");
        }
        printf("%d",max);
    }


}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int** matrix = (int**)malloc(r * sizeof(int*));
    for (int i = 0; i < r; i++) {
        matrix[i] = (int*)malloc(c * sizeof(int));
        for (int j = 0; j < c; j++) scanf("%d", &matrix[i][j]);
    }

    rowMaximums(r, c, matrix);

    for (int i = 0; i < r; i++) free(matrix[i]);
    free(matrix);
    return 0;
}