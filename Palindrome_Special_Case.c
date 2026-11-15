#include <stdio.h>
#include <string.h>
#include <ctype.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    //===== Declare Local Variables / Functions here if required =====


    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    char clean_s[1000];
    int clean_len = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] != ' ' && s[i] != '\'' && s[i] != '"') {
            clean_s[clean_len++] = tolower(s[i]);
        }
    }
    clean_s[clean_len] = '\0';

    //===== Write Your Logic Here =====
    int valid = 1;

    for(int i = 0 ; i < clean_len ; i++ ){
        if(clean_s[i] != clean_s[clean_len - 1 - i]){
            valid = 0;
            break;
        }
    }

    if(valid){
        printf("True");
    }
    else{
        printf("False");
    }

}