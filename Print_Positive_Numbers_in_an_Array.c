#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    

    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //===== Write Your Logic Here =====
    int first = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            if(!first){
                printf(" ");
            }
            printf("%d",arr[i]);
            first = 0;
        }
    }

    //===== Declare Local Variables / Functions here if required =====


    free(arr);
    return 0;
}