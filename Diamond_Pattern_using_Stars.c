#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    if(n == 1){
        printf("* ");
    }
    else{
        for(int i = 1; i <= n; i++){
            for(int s = 0; s < n - i; s++){
                printf(" ");
            }
            for(int j = 0; j < i; j++){
                printf("* ");
            }
            printf("\n");
        }

        for(int i = n - 1; i >= 1; i--){
            for(int s = 0; s < (n - i); s++){
                printf(" ");
            }
            for(int j = 0; j < i; j++){
                printf("* ");
            }
            printf("\n");
        }
    }

    //===== Write Your Logic Here =====


}