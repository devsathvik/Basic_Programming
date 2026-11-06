#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


void stoneCollector(int n, char* winner) {

    //===== Declare Local Variables / Functions here if required =====
    if(n % 2 == 0){
        strcpy(winner,"Bob");
    }
    else{
        strcpy(winner,"Alice");
    }

    //===== Write Your Logic Here =====


}

int main() {
    int n;
    scanf("%d", &n);
    char winner[10];
    stoneCollector(n, winner);
    printf("%s\n", winner);
    return 0;
}