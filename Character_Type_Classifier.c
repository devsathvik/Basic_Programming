#include <stdio.h>
#include <ctype.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char c;
    scanf("%c", &c);

    //===== Declare Local Variables / Functions here if required =====
    if(isdigit(c)){
        printf("Digit");
    }
    else if(islower(c)){
        printf("Lowercase Letter");
    }
    else if(isupper(c)){
        printf("Uppercase Letter");
    }
    else{
        printf("Special Character");
    }

    //===== Write Your Logic Here =====


}