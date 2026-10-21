#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int sumOfSeries(int x, int n) {

    //===== Declare Local Variables / Functions here if required =====
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return x;
    }

    return x + sumOfSeries(x - 2,n - 1);

    //===== Write Your Logic Here =====


}

int main() {
    int x, n;

    scanf("%d", &x);
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    printf("%d",sumOfSeries(x,n));

    //===== Write Your Logic Here =====


    return 0;
}