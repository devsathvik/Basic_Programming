#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[1001], result[1001];
    scanf("%s", s);

    //===== Declare Local Variables / Functions here if required =====


    int j = 0;

    //===== Write Your Logic Here =====
    for(int i = 0; i < strlen(s) ; i++){
        if(i % 2 != 0){
            printf("%c",s[i]);
        }
    }

}