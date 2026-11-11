#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


char* shuffle_string(char* string, int* indexes_list, int string_length) {
    char* shuffled_string = (char*)malloc(string_length + 1);
    if (shuffled_string == NULL) {
        return NULL;
    }

    for (int i = 0; i < string_length; i++) {
        shuffled_string[indexes_list[i]] = string[i];
    }
    shuffled_string[string_length] = '\0';
    return shuffled_string;
}

//===== Declare Local Variables / Functions here if required =====


int main() {
    char s[100];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;

    int string_length = strlen(s);
    int indices[string_length];
    char line[500];
    fgets(line, sizeof(line), stdin);

    char *token = strtok(line, " ");
    int i = 0;
    while (token != NULL && i < string_length) {
        indices[i] = atoi(token);
        token = strtok(NULL, " ");
        i++;
    }

    //===== Write Your Logic Here =====
    for(int i = 0 ; i < string_length ; i++ ){
        printf("%c",s[indices[i]]);
    }
}