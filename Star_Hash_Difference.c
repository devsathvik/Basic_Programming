#include <stdio.h>

long long starHashDifference(const char* s) {
    //===== Write Your Logic Here =====
    int H = 0,S = 0;
    for(int i = 0 ; i < strlen(s) ; i++ ){
        if(s[i] == '#'){
            H++;
        }
        if(s[i] == '*'){
            S++;
        }
    }

    return S - H;

}

int main() {
    char s[100005];
    if (scanf("%s", s) != 1) return 0;
    printf("%lld", starHashDifference(s));
    return 0;
}