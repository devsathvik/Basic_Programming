#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====
#include <ctype.h>

int Pal(char *s, int l , int r){
    if(l >= r) return 1;
    if(!isalpha(s[l])) return Pal(s,l+1,r);
    if(!isalpha(s[r])) return Pal(s,l,r-1);
    if(tolower(s[l]) != tolower(s[r])) return 0;
    return Pal(s,l+1,r-1);
}

//===== Declare Global Variables / Functions here if required =====


int main() {
    char S[1001];
    scanf("%s", S);
    //===== Declare Local Variables / Functions here if required =====
    int len = (int)strlen(S);
    int c;
    while(((c = getchar()) != EOF && c != '\n')){
        if(len < 1000) {
            S[len++] = (char)c;
        }
    }

    S[len] = '\0';
    
    if(Pal(S,0,(int)strlen(S) - 1)){
        printf("True");
    }
    else{
        printf("False");
    }

    //===== Write Your Logic Here =====


}