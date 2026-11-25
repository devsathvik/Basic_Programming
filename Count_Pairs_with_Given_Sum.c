#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n, T;
    scanf("%d %d", &n, &T);

    //===== Declare Local Variables / Functions here if required =====


    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    //===== Write Your Logic Here =====
    int pairs = 0;
    for(int i = 0 ; i < n - 1 ; i++ ){
        for(int j = i + 1 ; j < n ; j++ ){
            if(arr[i] + arr[j] == T){
                pairs++;
            }
        }
    }

    printf("%d",pairs);

}