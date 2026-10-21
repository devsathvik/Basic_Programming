#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


float harmonicSum(int n) {
    //===== Declare Local Variables / Functions here if required =====


    if (n == 1) {
        return 1.0;
    } else {

        //===== Write Your Logic Here =====
        return (float)1/n + harmonicSum(n - 1);

    }
}

int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    float sum;

    //===== Write Your Logic Here =====
    sum = harmonicSum(n);
    sum = (int)(sum * 100 + 0.5) / 100.0;
    if(n == 1){
        printf("1.0");
    }
    else{
        printf("%g",sum);
    }

}