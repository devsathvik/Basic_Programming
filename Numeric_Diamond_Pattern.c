#include <stdio.h>

//===== Declare Imports here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Write Your Logic Here =====
    for(int k = 1 ; k <= n ; k++ ){
        for(int s = 0  ; s < n - k ; s++ ){
            printf(" ");
        }
        for(int j = 1 ; j <= k ; j++ ){
            printf("%d",j);
            if(j < k){
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int k = n - 1 ; k >= 1 ; k-- ){
        for(int s = 0 ;  s < n - k ; s++ ){
            printf(" ");
        }
        for(int j = 1 ; j <= k ; j++ ){
            printf("%d",j);
            if(j < k){
                printf(" ");
            }
        }
        printf("\n");
    }

}