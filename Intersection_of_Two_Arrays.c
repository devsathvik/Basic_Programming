#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    //===== Declare Local Variables / Functions here if required =====


    int *A = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }

    int *B = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < m; ++i) {
        scanf("%d", &B[i]);
    }

    //===== Write Your Logic Here =====
    int nums[100];
    int count = 0;

    for(int j = 0 ; j < m ; j++ ){
        int found = 0;
        for(int i = 0 ; i < n ; i++ ){
            if(B[j] == A[i]){
                found = 1;
                break;
            }
        }
        if(!found){
            continue;
        }
        
        int seen = 0;
        for(int k = 0 ; k < count ; k++ ){
            if(nums[k] == B[j]){
                seen = 1;
                break;
            }
        }

        if(!seen){
            nums[count++] = B[j];
        }
    }

    for(int i = 0 ; i < count ; i++ ){
        printf("%d",nums[i]);
        if(i < count - 1){
            printf(" ");
        }
    }

}