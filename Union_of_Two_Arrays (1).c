#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n, m, i;
    scanf("%d %d", &n, &m);

    //===== Declare Local Variables / Functions here if required =====


    int *A = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    int *B = (int*)malloc(m * sizeof(int));
    for (i = 0; i < m; i++) {
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

    int *C = (int*)malloc((n + m) * sizeof(int));
    int k = 0;
    for(int i = 0 ; i < n ; i++ ){
        C[k++] = A[i];
    }
    for(int i = 0 ; i < m ; i++ ){
        C[k++] = B[i];
    }

    for(int i = 0 ; i < n + m - 1 ; i++ ){
        for(int j = 0 ; j < n + m - 1 - i ; j++ ){
            if(C[j] > C[j + 1]){
                int temp = C[j];
                C[j] = C[j + 1];
                C[j + 1] = temp;
            }
        }
    }

    int first = 1;
    for(int i = 0 ; i < n + m ; i++ ){
        if(i == 0 || C[i] != C[i - 1]){
            if(!first){
                printf(" ");
            }
            printf("%d",C[i]);
            first = 0;
        }
    }

    return 0;

}