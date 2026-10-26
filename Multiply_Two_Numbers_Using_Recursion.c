#include <stdio.h>

long long multiply(long long a, long long b) {
    //===== Write Your Logic Here =====
    return a*b;

}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a < b) { long long t = a; a = b; b = t; }
    printf("%lld\n", multiply(a, b));
    return 0;
}