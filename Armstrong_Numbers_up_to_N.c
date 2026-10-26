#include <stdio.h>

//===== Declare Imports here if required =====
#include <math.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    int N;
    scanf("%d", &N);
    //===== Declare Local Variables / Functions here if required =====
    for(int i = 1 ; i <= N ; i++ ){
        int temp = i;
        int count = 0;
        while(temp > 0){
            count++;
            temp /= 10;
        }
        temp = i;
        int sum = 0;
        while(temp > 0){
            int last_digit = temp % 10;
            int p = 1;
            for(int k = 0; k < count ; k++){
                p *= last_digit;
            }
            sum += p;
            temp /= 10;
        }
        if(sum == i){
            printf("%d\n",i);
        }
    }

    //===== Write Your Logic Here =====


}