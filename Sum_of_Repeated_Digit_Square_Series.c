#include <stdio.h>
#include <math.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int x, n;
    scanf("%d %d", &x, &n);

    //===== Declare Local Variables / Functions here if required =====


    long long sum = 0;

    //===== Write Your Logic Here =====
    long long rep = 0;
    for(int i = 1 ; i <= n ; i++ ){
        rep = rep*10 + x;
        sum += rep*rep;
    }

    printf("%lld",sum);

}