#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    //===== Declare Local Variables / Functions here if required =====


    int *A = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }

    int *B = (int*)malloc(m * sizeof(int));
    for (int i = 0; i < m; ++i) {
        scanf("%d", &B[i]);
    }

    //===== Write Your Logic Here =====
    for(int i = 0 ; i < n - 1 ; i++ ){
        for(int j = 0 ; j < n - 1 - i ; j++ ){
            if(A[j] > A[j + 1]){
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    for(int i = 0 ; i < m - 1 ; i++ ){
        for(int j = 0 ; j < m - 1 - i ; j++ ){
            if(B[j] > B[j + 1]){
                int temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }

    int removals = 0;
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(A[i] < B[j]){
            i++;
        }
        else if(A[i] > B[j]){
            j++;
        }
        else{
            int v = A[i], ca = 0 , cb = 0 ;
            while(i < n && A[i] == v){
                ca++;
                i++;
            }
            while(j < m && B[j] == v){
                cb++;
                j++;
            }
            removals += (ca < cb) ? ca : cb;
        }
    }

    printf("%d",removals);
    free(A);
    free(B);

}