#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    int sum = 0;


    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);

        //===== Write Your Logic Here =====
        sum += num;
        printf("%d\n",sum);

    }

    return 0;
}