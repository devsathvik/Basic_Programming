#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[1001];
    scanf("%s", s);
    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    int valid = 1;
    for(int i = 0 ; i < strlen(s) ; i++ ){
        if(s[i] != s[strlen(s) - 1 - i]){
            valid = 0;
            break;
        }
    }

    if(valid){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }

}