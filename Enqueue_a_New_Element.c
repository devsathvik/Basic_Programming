#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    int *arr = (int *)malloc((n + 1) * sizeof(int));

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    //===== Write Your Logic Here =====
    arr[n] = x;
    for(int i = 0 ; i < n + 1 ; i++ ){
        printf("%d",arr[i]);
        if(i < n){
            printf(" ");
        }
    }

}