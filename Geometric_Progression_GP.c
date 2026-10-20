#include <stdio.h>

//===== Declare Imports here if required =====
#include <math.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    int a, r, n;
    scanf("%d %d %d", &a, &r, &n);

    //===== Declare Local Variables / Functions here if required =====
    int nth_term = a*(pow(r,n - 1));
    printf("%d",nth_term);

    //===== Write Your Logic Here =====


}