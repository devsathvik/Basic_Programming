#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printLastRow(int r, int c, int** matrix) {
    //===== Write Your Logic Here =====
    for(int j = 0; j < c; j++){
        printf("%d",matrix[r - 1][j]);
        if(j < c - 1){
            printf(" ");
        }
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

    printLastRow(r, c, matrix);

    for (int i = 0; i < r; i++) free(matrix[i]);
    free(matrix);
    return 0;
}