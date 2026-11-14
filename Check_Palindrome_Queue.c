#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);
    getchar();

    //===== Declare Local Variables / Functions here if required =====


    char *s = (char *)malloc((n + 1) * sizeof(char));
    int i = 0;
    char c;
    while ((c = getchar()) != '\n' && i < n) {
        if (c != ' ') {
            s[i++] = c;
        }
    }
    s[i] = '\0';

    //===== Write Your Logic Here =====
    int valid = 1;
    for(int i = 0 ; i  < strlen(s) ; i++ ){
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