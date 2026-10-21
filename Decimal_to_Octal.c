#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    int octal[32];
    int count = 0;
    if(n == 0){
        printf("0");
    }
    else{
        while(n > 0){
            octal[count] = n % 8;
            count++;
            n /= 8;
        }
    }

    for(int i = count - 1; i >= 0; i--){
        printf("%d",octal[i]);
    }


    //===== Write Your Logic Here =====


}