#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);

    //===== Write Your Logic Here =====
    printf("%d",arr[k]);

    //===== Declare Local Variables / Functions here if required =====


    free(arr);
    return 0;
}