#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    int count = 0;

    for(int num = m ; num <= n ; num++ ){
        if(num < 4){
            continue;
        }

        for(int d = 2 ; d * d <= num ; d++ ){
            if(num % d == 0){
                count++;
                break;
            }
        }
    }

    printf("%d",count);

}