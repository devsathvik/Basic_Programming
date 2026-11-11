#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====
#include <string.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    read = getline(&line, &len, stdin);

    //===== Declare Local Variables / Functions here if required =====
    int nums[200];
    int count = 0;

    //===== Write Your Logic Here =====
    char *token = strtok(line," ");
    while(token != NULL){
        nums[count++] = atoi(token);
        token = strtok(NULL," ");
    }

    int min = nums[0];

    for(int i = 0 ; i < count  ; i++ ){
        if(nums[i] < min){
            min = nums[i];
        }
    }

    printf("%d",min);


}