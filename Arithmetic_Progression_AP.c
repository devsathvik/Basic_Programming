#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int a, d, n;
    scanf("%d %d %d", &a, &d, &n);

    //===== Declare Local Variables / Functions here if required =====
    int nth_term = a + (n - 1)*d;
    printf("%d",nth_term);

    //===== Write Your Logic Here =====


}