#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char B[33];
    scanf("%s", B);

    //===== Declare Local Variables / Functions here if required =====
    int len = strlen(B);
    long long decimal = 0;
    long long power = 1;

    for(int i = len - 1; i >= 0; i--){
        if(B[i] == '1'){
            decimal += power;
        }
        power *= 2;
    }

    printf("%lld",decimal);
    

    //===== Write Your Logic Here =====


}