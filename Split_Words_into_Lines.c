#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    //===== Declare Local Variables / Functions here if required =====
    
    if ((read = getline(&line, &len, stdin)) != -1) {
        char *token = strtok(line, " ");

        //===== Write Your Logic Here =====
        while(token != NULL){
            token[strcspn(token,"\r\n")] = '\0';
            if(token[0] != '\0'){
                printf("%s\n",token);
            }
            token = strtok(NULL," \r\n");
        }

    }

    if (line) {
        free(line);
    }

    return 0;
}