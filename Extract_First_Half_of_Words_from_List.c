#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char line[1000];

    //===== Declare Local Variables / Functions here if required =====


    fgets(line, sizeof(line), stdin);



    //===== Write Your Logic Here =====
    char s[100][100];
    int count = 0;

    char *token = strtok(line," ");
    while(token != NULL){
        strcpy(s[count++],token);
        token = strtok(NULL," ");
    }

    int half = (count + 1)/2;
    
    printf("[");
    for(int i = 0 ; i < half ; i++ ){
        printf("'%s'",s[i]);
        if(i < half - 1){
            printf(", ");
        }
    }
    printf("]");

}