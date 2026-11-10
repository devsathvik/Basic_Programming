#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[101];
    scanf("%s", s);

    //===== Declare Local Variables / Functions here if required =====
    int len = strlen(s);

    for(int i = len - 1 ; i >= 0 ; i-- ){
        printf("%c",s[i]);
    }

    //===== Write Your Logic Here =====


}