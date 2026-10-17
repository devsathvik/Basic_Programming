#include <stdio.h>
#include <string.h>
#include <ctype.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[100];
    scanf("%s", s);

    //===== Declare Local Variables / Functions here if required =====


    int i = 0;


    //===== Write Your Logic Here =====
    while(isdigit(s[i])){
        i++;
    }
    s[i] = '\0';
    printf("%s",s);

}