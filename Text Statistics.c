# include <stdio.h>
# include <ctype.h>

int main(){
    int c;
    int last = 0;
    int inWord = 0;
    long lines = 0,words = 0,chars = 0;

    while((c = getchar()) != EOF){
        chars++;

        if(c == '\n'){
            lines++;
        }

        if(isspace(c)){
            inWord = 0;
        }
        else if(!inWord){
            inWord = 1;
            words++;
        }

        last = c;
    }

    if(chars > 0 && last != '\n'){
        lines++;
    }

    printf("Lines: %d\nWords: %d\nCharacters: %d",lines,words,chars);

}