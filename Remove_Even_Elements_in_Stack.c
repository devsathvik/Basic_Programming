#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    //===== Declare Local Variables / Functions here if required =====

    /*
    int stack[100];
    int top = -1;

    //===== Write Your Logic Here =====
    */
    int count = 0;
    for(int i = 0 ; i < n ; i++ ){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    if(count > 0){
    int t = 0;
    int *temp = (int *)malloc(count * sizeof(int));
    for(int i = 0 ; i < n ; i++ ){
        if(arr[i] % 2 != 0){
            temp[t++] = arr[i];
        }
    }

    for(int i = count - 1 ; i >= 0 ; i-- ){
        printf("%d",temp[i]);
        if(i > 0){
            printf(" ");
        }
    }
    }
    else{
        printf("Empty Stack");
    }

}