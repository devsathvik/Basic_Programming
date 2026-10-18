#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int X, N;
    scanf("%d %d", &X, &N);

    //===== Declare Local Variables / Functions here if required =====
    long long sum = 0;
    long long term = X*X;
    int sign = 1;
    for(int i = 1; i <= N ; i++ ){
        sum += sign*term;
        term *= X*X;
        sign = -sign;
    }
    printf("%lld",sum);

    //===== Write Your Logic Here =====


}