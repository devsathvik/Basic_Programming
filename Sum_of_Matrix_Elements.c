#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long sumMatrix(int r, int c, int** matrix) {
    //===== Write Your Logic Here =====
    long long sum = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum += matrix[i][j];
        }
    }

    return sum;


}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int** matrix = (int**)malloc(r * sizeof(int*));
    for (int i = 0; i < r; i++) {
        matrix[i] = (int*)malloc(c * sizeof(int));
        for (int j = 0; j < c; j++) scanf("%d", &matrix[i][j]);
    }

    printf("%lld\n", sumMatrix(r, c, matrix));

    for (int i = 0; i < r; i++) free(matrix[i]);
    free(matrix);
    return 0;
}