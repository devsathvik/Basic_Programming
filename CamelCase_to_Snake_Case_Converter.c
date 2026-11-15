#include <stdio.h>
#include <string.h>
#include <ctype.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[1000];
    scanf("%s", s);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    for(int i = 0 ; i < strlen(s) ; i++ ){
        if(isupper(s[i])){
            if(i != 0){
                printf("_");
            }
            printf("%c",tolower(s[i]));
        }
        else{
            printf("%c",s[i]);
        }
    }

}