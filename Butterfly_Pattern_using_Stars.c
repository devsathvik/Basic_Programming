#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    int r,i,j;

    //===== Write Your Logic Here =====
    for(r = 1; r <= 2 * n - 1 ; r++){
        i = (r <= n) ? r : 2 * n - r;

        for(j = 0 ; j < i ; j++ ){
            printf("* ");
        }

        for(j = 0 ; j < 4 * (n - i) ; j++ ){
            printf(" ");
        }

        for(j = 0 ; j < i ; j++ ){
            printf("* ");
        }

        printf("\n");
    }

    return 0;

}