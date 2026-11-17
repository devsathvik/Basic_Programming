#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


long long maxWindowScore(int* arr, int n, int k) {

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    int max = 0;
    for(int i = 0 ; i < k ; i++ ){
        max += arr[i];
    }

    int best = max;

    for(int i = k ; i < n ; i++ ){
        max += arr[i];
        max -= arr[i - k];
        if(max > best){
            best = max;
        }
    }

    return best;



}

int main() {
    int n, k;
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    printf("%lld\n", maxWindowScore(arr, n, k));
    free(arr);
    return 0;
}