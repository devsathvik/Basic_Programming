#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= 2*i - 1; j++){
            printf("*");
            if(j < 2*i -1 || i < N){
                printf(" ");
            }
        }
        printf("\n");
    }

    //===== Write Your Logic Here =====


}