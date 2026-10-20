#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void checkIdentity(int n, int** matrix) {
    //===== Write Your Logic Here =====
    int sum = 0; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            sum += matrix[i][j];
        }
    }

    if(sum == n){
        printf("YES");
    }
    else{
        printf("NO");
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

    checkIdentity(n, matrix);

    for (int i = 0; i < n; i++) free(matrix[i]);
    free(matrix);
    return 0;
}