#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    int count = 0;

    //===== Write Your Logic Here =====
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }

    printf("%d",count);

}