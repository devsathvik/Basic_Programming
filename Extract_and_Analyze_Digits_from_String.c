#include <stdio.h>
#include <limits.h>

//===== Declare Imports here if required =====
#include <ctype.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[1000];
    scanf("%s", s);

    //===== Declare Local Variables / Functions here if required =====


    int sum = 0;
    int min_digit = INT_MAX;
    int max_digit = INT_MIN;
    int i = 0;

    //===== Write Your Logic Here =====
     for(i = 0; s[i] != '\0' ; i++ ){
        if(isdigit(s[i])){
            int d = s[i] - '0';
            sum += d;
            if(d > max_digit) max_digit = d;
            if(d < min_digit) min_digit = d;
        }
    }

    printf("%d\n%d\n%d\n",sum,min_digit,max_digit);


}