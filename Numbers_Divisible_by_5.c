#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    int *nums = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &nums[i]);
    }

    //===== Write Your Logic Here =====
    printf("[");
    int first = 1;
    for(int i = 0; i < n; i++){
        if(nums[i] % 5 == 0){
           if(!first){
            printf(", ");
           }
           printf("%d",nums[i]);
           first = 0;
        }
    }
    printf("]");

}