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
    int sorted = 1;
    for(int i = 0 ; i < n ; i++ ){
        for(int j = i ; j < n  ; j++){
            if(arr[i] > arr[j]){
                sorted = 0;
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