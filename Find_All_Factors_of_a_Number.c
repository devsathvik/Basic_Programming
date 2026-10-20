#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    int first = 1;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            if(!first){
                printf(" ");
            }
            printf("%d",i);
            first = 0;
        }
        
    }

    //===== Write Your Logic Here =====


}