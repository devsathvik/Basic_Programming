#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[1001];
    scanf("%s", s);

    //===== Declare Local Variables / Functions here if required =====


    int len = strlen(s);
    int isPalindrome = 1;

    //===== Write Your Logic Here =====
    for(int i = 0; i < len / 2; i++){
        if(s[i] != s[len - 1 - i]){
            isPalindrome = 0;
        }
    }

    if(isPalindrome){
        printf("True");
    }
    else{
        printf("False");
    }

}