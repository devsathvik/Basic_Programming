#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);
    int *inputs = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &inputs[i]);
    }

    //===== Declare Local Variables / Functions here if required =====
    if(n >= 4){
        printf("[%d, %d, %d, %d]",inputs[0],inputs[1],inputs[n - 2],inputs[n - 1]);
    }
    if(n < 4){
        printf("[");
        for(int i = 0 ; i < n ; i++ ){
            printf("%d",inputs[i]);
            if(i < n - 1){
                printf(", ");
            }
        }
        printf("]");
    }

    //===== Write Your Logic Here =====


}