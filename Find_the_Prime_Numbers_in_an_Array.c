#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====
#include <math.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    //===== Declare Local Variables / Functions here if required =====
    int first = 1;
    for(int i = 0; i < n ; i++ ){
        if(arr[i] > 1){
            int prime = 1;
            for(int j = 2 ; j <= sqrt(arr[i]) ; j++){
                if(arr[i] % j == 0){
                    prime = 0;
                    break;
                    }
                }
                if(prime){
                    if(!first){
                        printf(" ");
                    }
                    printf("%d",arr[i]);
                    first = 0;
                }
            }
        }
    
    

    //===== Write Your Logic Here =====

}