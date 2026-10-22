#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);

    //===== Write Your Logic Here =====
    int present = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            present = 1;
        }
    }

    if(present == 0){
        printf("NO");
    }
    else{
        printf("YES");
    }

}