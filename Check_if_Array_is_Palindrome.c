#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //===== Write Your Logic Here =====
    int check = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[n - 1 - i]){
            check = 1;
        }
    }

    if(check == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }

}