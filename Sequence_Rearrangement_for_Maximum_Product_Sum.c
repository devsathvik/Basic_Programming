#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x1, y1, z1;
        scanf("%d %d %d", &x1, &y1, &z1);
        int x2, y2, z2;
        scanf("%d %d %d", &x2, &y2, &z2);

        //===== Declare Local Variables / Functions here if required =====


        //===== Write Your Logic Here =====
        long long m = z1 < y2 ? z1 : y2;
        long long ans = 2 * m;

        z1 -= m;
        y2 -= m;

        long long neg = z2 - x1 - z1;
        if(neg < 0){
            neg = 0;
        }
        if(neg > y1){
            neg = y1;
        }

        ans -= 2 * neg;
        printf("%lld\n",ans);

    }
    return 0;
}