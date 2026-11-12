#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====
#include <string.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    char line[1000];
    fgets(line, sizeof(line), stdin);

    //===== Declare Local Variables / Functions here if required =====

    /*
    int sum = 0;
    int num;
    char *token;

    //===== Write Your Logic Here =====
    */
    int sum = 0;
    int nums[100];
    int count = 0;

    char *token = strtok(line," ");
    while(token != NULL){
        nums[count++] = atoi(token);
        token = strtok(NULL," ");
    }

    for(int i = 0 ; i < count ; i++ ){
        sum += nums[i];
    }

    printf("%d",sum);

}