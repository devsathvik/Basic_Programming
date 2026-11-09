#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int M, N;
    scanf("%d", &M);
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    int found = 0;

    for(int num = M ; num <= N ; num++ ){
        int digits = 0;
        int t = num;
        while(t > 0){
            digits++;
            t /= 10;
        }

        long long sum = 0;
        t = num;

        while(t > 0){
            int d = t % 10;
            long long p = 1;
            for(int k = 0 ; k < digits ; k++ ){
                p *= d;
            }
            sum += p;
            t /= 10;
        }

        if(sum == num){
            if(found){
                printf(" ");
            }
            printf("%d",num);
            found = 1;
        }
    }

    if(!found){
        printf("-1");
    }

}