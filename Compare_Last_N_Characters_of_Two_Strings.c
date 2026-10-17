#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char A[1000];
    char B[1000];
    int N;

    //===== Declare Local Variables / Functions here if required =====


    scanf("%s", A);
    scanf("%s", B);
    scanf("%d", &N);

    //===== Write Your Logic Here =====
    int num1 = strlen(A) - N;
    int num2 = strlen(B) - N;
    if (strcmp(A + num1, B + num2) == 0){
        printf("True");
    }
    else{
        printf("False");
    }

}