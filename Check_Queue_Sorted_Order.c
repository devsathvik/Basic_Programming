#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    int *arr = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }
    int sorted = 1;

    //===== Write Your Logic Here =====
    for(int i = 0 ; i < N ; i++ ){
        for(int j = i + 1 ; j < N ; j++ ){
            if(arr[i] > arr[j]){
                sorted = 0;
                break;
            }
        }
    }

    if(sorted){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }

}