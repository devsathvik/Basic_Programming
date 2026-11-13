#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));

    //===== Declare Local Variables / Functions here if required =====


    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    //===== Write Your Logic Here =====
    for(int i = 0 ; i < n ; i++ ){
        printf("%d",arr[i]);
        if(i < n - 1){
            printf(" ");
        }
    }

}