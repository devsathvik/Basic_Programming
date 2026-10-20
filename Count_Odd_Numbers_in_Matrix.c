#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countOdd(int r, int c, int** matrix) {
    //===== Write Your Logic Here =====
    int count = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(matrix[i][j] % 2 != 0){
                count++;
            }
        }
    }
    return count;


}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int** matrix = (int**)malloc(r * sizeof(int*));
    for (int i = 0; i < r; i++) {
        matrix[i] = (int*)malloc(c * sizeof(int));
        for (int j = 0; j < c; j++) scanf("%d", &matrix[i][j]);
    }

    printf("%d\n", countOdd(r, c, matrix));

    for (int i = 0; i < r; i++) free(matrix[i]);
    free(matrix);
    return 0;
}