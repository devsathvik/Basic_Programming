#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int checkSubstring(char *text, char *pattern) {

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    return strstr(text,pattern) != NULL;

}

int main() {
    char text[10001], pattern[10001];
    scanf("%s", text);
    scanf("%s", pattern);
    printf("%s\n", checkSubstring(text, pattern) ? "true" : "false");
    return 0;
}