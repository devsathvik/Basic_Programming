#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    long long sum_of_squares = 0;


    //===== Write Your Logic Here =====
    sum_of_squares = ((n)*(n + 1)*(2*n + 1))/6;
    printf("%lld",sum_of_squares);

}