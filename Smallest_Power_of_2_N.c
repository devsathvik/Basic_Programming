#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    long long power_of_2 = 1;
    while(power_of_2 < n){
        power_of_2 *= 2;
    }

    if(power_of_2 >= n){
        printf("%lld",power_of_2);
    }

    //===== Write Your Logic Here =====


}