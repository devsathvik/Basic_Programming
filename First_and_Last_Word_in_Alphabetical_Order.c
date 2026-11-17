#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int compare_words(const void *a, const void *b) {
    const char *word1 = *(const char **)a;
    const char *word2 = *(const char **)b;

    int i = 0;
    while (word1[i] != '\0' && word2[i] != '\0') {
        char c1 = tolower(word1[i]);
        char c2 = tolower(word2[i]);
        if (c1 < c2) return -1;
        if (c1 > c2) return 1;
        i++;
    }

    if (word1[i] == '\0' && word2[i] == '\0') return 0;
    if (word1[i] == '\0') return -1;
    return 1;
}

int main() {
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);
    if (sentence[strlen(sentence) - 1] == '\n') {
        sentence[strlen(sentence) - 1] = '\0';
    }

    //===== Declare Local Variables / Functions here if required =====


    char *words[100];
    int word_count = 0;
    char *token = strtok(sentence, " ");

    while (token != NULL) {
        words[word_count] = token;
        word_count++;
        token = strtok(NULL, " ");
    }

    //===== Write Your Logic Here =====
    if(word_count == 0){
        return 0;
    }

    char *first = words[0];
    char *last = words[0];

    for(int i = 0 ; i < word_count ; i++ ){
        if(compare_words(&words[i],&first) < 0){
            first = words[i];
        }
        if(compare_words(&words[i],&last) >= 0){
            last = words[i];
        }
    }

    printf("%s %s",first,last);

}