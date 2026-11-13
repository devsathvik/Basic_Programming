#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    int first;
    if (n > 0) {
        scanf("%d", &first);
        for (int i = 1; i < n; ++i) {
            int temp;
            scanf("%d", &temp);
        }

        //===== Write Your Logic Here =====
        printf("%d",first);

    }

    return 0;
}