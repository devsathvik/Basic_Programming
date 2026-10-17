#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====
    for(int i = N; i >= 1; i--){
        for(int j = N; j >= 1; j--){
            printf("%d",N);
            if(j > 1){
                printf(" ");
            }
        }
        N--;
        printf("\n");
    }

    //===== Write Your Logic Here =====


}