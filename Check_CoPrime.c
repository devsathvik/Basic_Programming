#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    int result = gcd(a,b);
    if(result == 1){
        printf("Yes");
    }
    else{
        printf("No");
    }

}