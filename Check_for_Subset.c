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
    int found = 0;
    for(int j = 0 ; j < m ; j++ ){
        for(int i = 0 ; i < n ; i++ ){
            if(B[j] == A[i]){
                found++;
                break;
            }
        }
    }
    if(found == m){
        printf("YES");
    }
    else{
        printf("NO");
    }

}