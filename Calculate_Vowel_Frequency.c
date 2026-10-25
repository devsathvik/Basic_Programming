#include <stdio.h>
#include <string.h>
#include <ctype.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int calculateVowelFrequency(char* text) {

    //===== Declare Local Variables / Functions here if required =====
    int vowels = 0;
    for(int i = 0 ; i < strlen(text) ; i++){
        char c = tolower(text[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vowels += 1;
        }
    }

    return vowels;

    //===== Write Your Logic Here =====


}

int main() {
    char text[1001];
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';
    printf("%d\n", calculateVowelFrequency(text));
    return 0;
}