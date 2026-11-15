#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);

    //===== Declare Local Variables / Functions here if required =====
    int nums[100];
    int count = 0;

    //===== Write Your Logic Here =====
    char *token = strtok(input,",");
    while(token != NULL){
        nums[count++] = atoi(token);
        token = strtok(NULL,",");
    }

    int min = nums[0] , max = nums[0];

    for(int i = 0 ; i < count ; i++ ){
        if(nums[i] > max){
            max = nums[i];
        }
        if(nums[i] < min){
            min = nums[i];
        }
    }

    printf("%d",max - min);

}