#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


void temperatureStreak(int* temps, int n, int* streak) {

    //===== Declare Local Variables / Functions here if required =====
    for(int i = 0 ; i < n ; i++ ){
        int count = 1;
        for(int j = i - 1 ; j >= 0 && temps[j] <= temps[i]; j-- ){
            count++;
        }
        streak[i] = count;
    }

    //===== Write Your Logic Here =====


}

int main() {
    int n;
    scanf("%d", &n);
    int* temps = (int*)malloc(n * sizeof(int));
    int* streak = (int*)malloc(n * sizeof(int));

    //===== Declare Local Variables / Functions here if required =====


    for (int i = 0; i < n; i++) scanf("%d", &temps[i]);

    temperatureStreak(temps, n, streak);

    //===== Write Your Logic Here =====
    for(int i = 0 ; i < n ; i++ ){
        printf("%d",streak[i]);
        if(i < n - 1){
            printf(" ");
        }
    }

}