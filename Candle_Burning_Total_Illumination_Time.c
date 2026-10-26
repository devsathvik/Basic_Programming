#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    //===== Declare Local Variables / Functions here if required =====


    int a, b;

    scanf("%d %d", &a, &b);

    //===== Write Your Logic Here =====
    int total_hours = a;
    int spent = a;

    while(spent >= b){
        int new_candles = spent / b ;
        total_hours += new_candles;
        spent = spent % b + new_candles; 
    }

    printf("%d",total_hours);

}