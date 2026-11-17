#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s1[1000], s2[1000];
    scanf("%s", s1);
    scanf("%s", s2);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    int n = strlen(s1);
    char result[1001];

    for(int i = 0 ; i < n ; i++ ){
        if(i % 2 == 0){
            result[i] = s1[i];
        }
        else{
            result[i] = s2[i];
        }
    }

    result[n] = '\0';

    printf("%s",result);

}