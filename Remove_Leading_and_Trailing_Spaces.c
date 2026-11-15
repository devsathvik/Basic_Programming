#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    //===== Declare Local Variables / Functions here if required =====
    int start = 0;
    int end = strlen(str) - 1;

    //===== Write Your Logic Here =====
    while (end >= 0 && (str[end] == ' ' || str[end] == '\n' || str[end] == '\r')){
        end--;
    }

    while(start <= end && str[start] == ' '){
        start++;
    }

    for(int i = start ; i <= end ; i++ ){
        putchar(str[i]);
    }
    printf("\n");

}