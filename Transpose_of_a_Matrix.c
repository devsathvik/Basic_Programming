#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    //===== Declare Local Variables / Functions here if required =====


    int **matrix = (int **)malloc(M * sizeof(int *));
    for (int i = 0; i < M; i++) {
        matrix[i] = (int *)malloc(N * sizeof(int));
    }

    int **transpose = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        transpose[i] = (int *)malloc(M * sizeof(int));
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    //===== Write Your Logic Here =====
    for(int j = 0; j < N; j++){
        printf("[");
        for(int i = 0; i < M; i++){
            printf("%d",matrix[i][j]);
            if(i < M - 1){
                printf(",");
            }
            if(i < M - 1){
                printf(" ");
            }
        }
        printf("]");
        printf("\n");
    }

}