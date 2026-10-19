#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[1000];

    //===== Declare Local Variables / Functions here if required =====


    fgets(s, sizeof(s), stdin);

    if (s[strlen(s) - 1] == '\n') {
        s[strlen(s) - 1] = '\0';
    }

    //===== Write Your Logic Here =====
    for(int i = strlen(s) - 1; i >= 0; i-- ){
        putchar(s[i]);
    }

}