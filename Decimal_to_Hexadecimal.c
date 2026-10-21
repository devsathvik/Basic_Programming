#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    if(n == 0){
        printf("0");
    }
    else{
        char hex[16];
        int count = 0;

        while(n > 0){
            int rem = n % 16;
            if(rem < 10){
                hex[count] = '0' + rem;
                count++;
            }
            else{
                hex[count] = 'A' + (rem - 10);
                count++;
            }

            n /= 16;
        }

        for(int i = count - 1; i >= 0; i--){
        printf("%c",hex[i]);
    }
    }

   

    //===== Write Your Logic Here =====


}