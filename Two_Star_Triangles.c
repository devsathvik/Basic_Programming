#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
            if(j <= i - 1){
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i = N; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("*");
            if(j <= i - 1){
                printf(" ");
            }
        }
        printf("\n");
    }

    //===== Write Your Logic Here =====


}