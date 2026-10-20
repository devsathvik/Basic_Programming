#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void subtractMatrices(int r, int c, int** a, int** b) {
    //===== Write Your Logic Here =====
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d",a[i][j] - b[i][j]);
            if(j < c - 1){
                printf(" ");
            }
        }
        printf("\n");
    }



}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int** a = (int**)malloc(r * sizeof(int*));
    int** b = (int**)malloc(r * sizeof(int*));
    for (int i = 0; i < r; i++) {
        a[i] = (int*)malloc(c * sizeof(int));
        for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    }
    for (int i = 0; i < r; i++) {
        b[i] = (int*)malloc(c * sizeof(int));
        for (int j = 0; j < c; j++) scanf("%d", &b[i][j]);
    }

    subtractMatrices(r, c, a, b);

    for (int i = 0; i < r; i++) { free(a[i]); free(b[i]); }
    free(a); free(b);
    return 0;
}