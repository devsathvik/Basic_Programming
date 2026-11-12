#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    if ((read = getline(&line, &len, stdin)) != -1) {

        //===== Declare Local Variables / Functions here if required =====


        char *token = strtok(line, " ");
        int numbers[1000];
        int count = 0;

        while (token != NULL) {
            numbers[count++] = atoi(token);
            token = strtok(NULL, " ");
        }

        //===== Write Your Logic Here =====
        for(int i = 0 ; i < count - 1 ; i++){
            for(int j = 0 ; j < count - 1 - i ; j++ ){
                if(numbers[j] > numbers[j + 1]){
                    int temp = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = temp;
                }
            }
        }

        int printed = 0;
        for(int i = count -1 ; i > 0 ; i-- ){
            if(numbers[i] != numbers[i - 1]){
                printf("%d",numbers[i - 1]);
                printed = 1;
                break;
            }
        }

        if(!printed){
            printf("-1");
        }

    }
    free(line);
    return 0;
}