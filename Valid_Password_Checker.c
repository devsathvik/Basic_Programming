#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//===== Declare Imports here if required =====
#include <ctype.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    char password[1000];
    scanf("%s", password);

    //===== Declare Local Variables / Functions here if required =====


    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    int len = strlen(password);

    //===== Write Your Logic Here =====
    for(int i = 0; i < len ; i++){
        if(isupper(password[i])){
            hasUpper = true;
        }
        if(islower(password[i])){
            hasLower = true;
        }
        if(isdigit(password[i])){
            hasDigit = true;
        }
    }

    if(hasUpper && hasLower && hasDigit){
        printf("Valid Password");
    }
    else if(strcmp(password,"qwerty0")){
        printf("Invalid Password");
    }
    else{
        printf("Invalid Password");
    }

}