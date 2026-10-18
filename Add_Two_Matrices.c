#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    //===== Declare Local Variables / Functions here if required =====


    int **matrix1 = (int **)malloc(M * sizeof(int *));
    for (int i = 0; i < M; i++) {
        matrix1[i] = (int *)malloc(N * sizeof(int));
    }

    int **matrix2 = (int **)malloc(M * sizeof(int *));
    for (int i = 0; i < M; i++) {
        matrix2[i] = (int *)malloc(N * sizeof(int));
    }

    int **result = (int **)malloc(M * sizeof(int *));
    for (int i = 0; i < M; i++) {
        result[i] = (int *)malloc(N * sizeof(int));
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    //===== Write Your Logic Here =====
    for(int i = 0; i < M; i++){
        printf("[");
        for(int j = 0; j < N; j++){
            printf("%d",matrix1[i][j] + matrix2[i][j]);
            if(j < N - 1){
                printf(",");
            }
            if(j < N - 1){
                printf(" ");
            }
        }   
        printf("]");
        printf("\n");
    }

}