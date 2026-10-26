#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====
    long long power_of_2 = 1;
    while(power_of_2 * 2 <= N){
        power_of_2 *= 2;
    }

    printf("%lld",power_of_2);

    //===== Write Your Logic Here =====


}