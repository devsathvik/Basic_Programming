#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void searchMatrix(int r, int c, int** matrix, int key) {
    //===== Write Your Logic Here =====
    int check = 0;
    for(int i = 0 ; i < r; i++){
        for(int j = 0; j < c; j++){
            if(matrix[i][j] == key){
                check = 1;
            }
        }
    }

    if(check == 0){
        printf("NO");
    }
    else{
        printf("YES");
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
    int key;
    scanf("%d", &key);

    searchMatrix(r, c, matrix, key);

    for (int i = 0; i < r; i++) free(matrix[i]);
    free(matrix);
    return 0;
}