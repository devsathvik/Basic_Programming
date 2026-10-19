#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====
#include <ctype.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[100001];
    scanf("%s", s);
    //===== Declare Local Variables / Functions here if required =====
    int len = strlen(s);
    int count = 0;

    //===== Write Your Logic Here =====
    for(int i = 0; i < len ; i++ ){
        if(isupper(s[i])){
            count++;
        }
    }

    printf("%d",count);

}