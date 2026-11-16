#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====


    int count = 0;


    //===== Write Your Logic Here =====
    int triples = 0;
    for(int i = 1 ; i <= n ; i++ ){
        for(int j = i + 1 ; j <= n ; j++ ){
            for(int k = j + 1 ; k <= n ; k++ ){
                if(i*i + j*j == k*k){
                    triples++;
                } 
            }
        }
    }

    printf("%d",triples);

}