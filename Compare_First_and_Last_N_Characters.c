#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char string_input[100];
    int integer_input;

    //===== Declare Local Variables / Functions here if required =====


    fgets(string_input, sizeof(string_input), stdin);
    string_input[strcspn(string_input, "\n")] = 0;
    scanf("%d", &integer_input);

    //===== Write Your Logic Here =====
    int num = strlen(string_input) - integer_input;
    char str[integer_input + 1];
    strncpy(str,string_input,integer_input);
    str[integer_input + 1] = '\0';
    if (strcmp(str,string_input + num) == 0){
        printf("False");
    }
    else{
        printf("True");
    }

}