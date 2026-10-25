#include <stdio.h>
#include <string.h>
#include <ctype.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


void validate_atm_pin_code(char pin[]) {

    //===== Declare Local Variables / Functions here if required =====


    int len = strlen(pin);
    int i;
    int valid = 1;

    //===== Write Your Logic Here =====
    if(len == 4 || len == 6){
        for(i = 0;  i < len ; i++){
            if(isdigit(pin[i])){
                valid += 0;
            }
            else{
                valid += 1;
            }
        }
    }
    else{
        valid += 1;
    }

    if(valid > 1){
        printf("Invalid PIN Code");
    }
    else{
        printf("Valid PIN Code");
    }

}

int main() {

    //===== Declare Local Variables / Functions here if required =====


    char pin[10];
    scanf("%s", pin);

    //===== Write Your Logic Here =====
    validate_atm_pin_code(pin);

}