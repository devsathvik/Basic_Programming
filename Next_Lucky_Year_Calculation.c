#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);
    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    long long p = 1;
    while(p * 10 <= n){
        p *= 10;
    }

    long long d = n / p ;
    long long x = (d + 1) * p;

    printf("%lld",x - n);



}