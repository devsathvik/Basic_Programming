#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


char indexing(char arg_1[], int arg_2) {

    //===== Declare Local Variables / Functions here if required =====
    return arg_1[arg_2];

    //===== Write Your Logic Here =====


}

int main() {
    char W[100];
    int N;

    scanf("%s", W);
    scanf("%d", &N);

    //===== Declare Local Variables / Functions here if required =====


    char result = indexing(W, N);

    //===== Write Your Logic Here =====


    printf("%c\n", result);

    return 0;
}