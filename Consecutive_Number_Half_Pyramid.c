#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int current_number = 1;


    //===== Write Your Logic Here =====
    for(int i = 1 ; i <= n ; i++ ){
        for(int j = 1 ; j <= i ; j++ ){
            printf("%d",current_number);
            current_number++;
            if(j < i){
                printf(" ");
            }
        }
        printf("\n");
    }

}