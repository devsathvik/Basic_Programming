#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int minLargestLoad(int n, int* weights, int k) {
    //===== Write Your Logic Here =====
    long long low = 0,high = 0;
    for(int i = 0 ; i < n ; i++ ){
        if(weights[i] > low){
            low = weights[i];
        }
        high += weights[i];
    }

    while(low < high){
        long long mid = low + (high - low)/2;

        int porters = 1;
        long long current = 0;

        for(int i = 0 ; i < n ; i++ ){
            if(current + weights[i] > mid){
                porters++;
                current = weights[i];
            }
            else{
                current += weights[i];
            }
        }

        if(porters <= k ){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }

    return (int)low;

}

int main() {
    int n;
    scanf("%d", &n);
    int* weights = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &weights[i]);
    int k;
    scanf("%d", &k);

    printf("%d\n", minLargestLoad(n, weights, k));

    free(weights);
    return 0;
}