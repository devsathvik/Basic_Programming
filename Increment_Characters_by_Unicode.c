#include <stdio.h>

//===== Declare Imports here if required =====
#include <string.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[100001];
    scanf("%s", s);

    //===== Declare Local Variables / Functions here if required =====
  

    //===== Write Your Logic Here =====
    for(int i = 0 ; i < strlen(s) ; i++ ){
        printf("%c\n",s[i] + 1);
    }
}