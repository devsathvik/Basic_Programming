#include <stdio.h>

unsigned long long power(unsigned long long b, int e) {
    //===== Write Your Logic Here =====
    long long res = 1;
    while(e > 0){
        res *= b;
        e--;
    }
    return res;

}

int main() {
    unsigned long long b;
    int e;
    scanf("%llu %d", &b, &e);
    printf("%llu\n", power(b, e));
    return 0;
}