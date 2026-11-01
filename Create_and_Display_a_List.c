#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    int *nums = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; ++i) {
        scanf("%d", &nums[i]);
    }

    //===== Write Your Logic Here =====
    int first = 1;
    printf("[");
    for(int i = 0 ; i < N ; i++ ){
        if(!first){
            printf(", ");
        }
        first = 0;
        printf("%d",nums[i]);
    }
    printf("]");

}