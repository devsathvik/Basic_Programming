#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int matrix[M][N];
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    //===== Declare Local Variables / Functions here if required =====
    int max = 0;
    int min = matrix[0][0];
    int sum = 0;

    //===== Write Your Logic Here =====
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
            }
        }
    }

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(matrix[i][j] < min){
                min = matrix[i][j];
            }
        }
    }

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            sum += matrix[i][j];
        }
    }

    printf("%d\n%d\n%d\n",max,min,sum);

}