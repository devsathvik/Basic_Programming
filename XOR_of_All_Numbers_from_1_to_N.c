#include <stdio.h>

long long xorUpTo(long long n) {
    //===== Write Your Logic Here =====
    switch(n % 4){
        case 0:
        return n;
        case 1:
        return 1;
        case 2:
        return n + 1;
        default:
        return 0;
    }

}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", xorUpTo(n));
    return 0;
}