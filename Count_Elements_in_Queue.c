#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc((n > 0 ? n : 1) * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    printf("%d",n);

}