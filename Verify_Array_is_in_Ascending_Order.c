#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====
#include <string.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    //===== Declare Local Variables / Functions here if required =====
    int nums[100];
    int count = 0;
    int valid = 1;

    if ((read = getline(&line, &len, stdin)) != -1) {

        //===== Write Your Logic Here =====
        char *token = strtok(line," ");
        while(token != NULL){
            nums[count++] = atoi(token);
            token = strtok(NULL," ");
        }
        for(int i = 0 ; i < count - 1 ; i++ ){
            if(nums[i] > nums[i + 1]){
                valid = 0;
                break;
            }
        }
        
        if(valid){
            printf("true");
        }
        else{
            printf("false");
        }

    }

    free(line);
    return 0;
}