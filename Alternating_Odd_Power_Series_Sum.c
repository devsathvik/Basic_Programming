#include <stdio.h>

//===== Declare Imports here if required =====
#include <math.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    int x, n;
    scanf("%d", &x);
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    int sign = 1;
    int sum = 0;
    for(int i = 1;  i <= n ; i++ ){
        int power = 2*i - 1 ;
        sum += (pow(x,power)) * sign;
        sign *= -1;
    }

    printf("%d",sum);

    //===== Write Your Logic Here =====


}