#include <stdio.h>
#include <string.h>
#include <ctype.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[1000];
    scanf("%s", s);

    //===== Declare Local Variables / Functions here if required =====
    if(strlen(s) == 1){
        toupper(s);
        printf("%s",s);
    }
    else{
        int first = 1;
        for(int i = 0; i < strlen(s); i++ ){
            if(!first){
                printf("-");
            }
            printf("%c",toupper(s[i]));
            first = 0;
        }
    }

    //===== Write Your Logic Here =====


}