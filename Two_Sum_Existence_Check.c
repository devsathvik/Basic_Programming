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
    int found = 0;
    
    for(int i = 0 ; i < n && !found ; i++){
        for(int j = i + 1 ; j < n ; j++){
            int sum = arr[i] + arr[j];
            if(sum == T){
                found = 1;
                break;
            }
        }
    }

    if(found){
        printf("YES");
    }
    else{
        printf("NO");
    }

}