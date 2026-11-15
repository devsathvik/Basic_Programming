#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    int num1[n],num2[n];

    //===== Write Your Logic Here =====
    for(int i = 0 ; i < n ; i++ ){
        scanf("%d ",&num1[i]);
    }

    for(int i = 0 ; i < n ; i++ ){
        scanf("%d ",&num2[i]);
    }

    for(int i = 0 ; i < n - 1 ; i++ ){
        for(int j = 0 ; j < n - 1 - i ; j++ ){
            if(num1[j] > num1[j + 1]){
                int temp = num1[j];
                num1[j] = num1[j + 1];
                num1[j + 1] = temp;
            }
        }
    }

    for(int i = 0 ; i < n - 1 ; i++ ){
        for(int j = 0 ; j < n - 1 - i ; j++ ){
            if(num2[j] > num2[j + 1]){
                int temp = num2[j];
                num2[j] = num2[j + 1];
                num2[j + 1] = temp;
            }
        }
    }

    int valid = 1;
    for(int i = 0 ; i < n ; i++ ){
        if(num1[i] != num2[i]){
            valid = 0;
            break;
        }
    }

    if(valid){
        printf("YES");
    }
    else{
        printf("NO");
    }

}