#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    //===== Declare Local Variables / Functions here if required =====


    int *matrix = (int *)malloc(R * C * sizeof(int));
    if (matrix == NULL) {
        return 1;
    }

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            scanf("%d", &matrix[i * C + j]);
        }
    }

    //===== Write Your Logic Here =====
    int mid = R/2;
    for(int j = 0; j < C; ++j ){
        printf("%d",matrix[mid * C + j]);
        if(j < C - 1){
            printf(" ");
        }
    }

}