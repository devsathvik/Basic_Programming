#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    //===== Declare Local Variables / Functions here if required =====
    
    //===== Write Your Logic Here =====
    long long result = 1;

    int m = (a < b) ? a : b;

    for(int i = 1; i <= m ; i++ ){
        result *= i;
    }

    printf("%lld",result);

}