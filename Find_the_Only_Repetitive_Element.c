#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    //===== Write Your Logic Here =====
    int repetitive ;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1; j < n ; j++ ){
            if(arr[i] == arr[j]){
                repetitive = arr[j];
            }
        }
    }

    printf("%d",repetitive);


}