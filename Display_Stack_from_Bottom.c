#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayFromBottom(int n, int* arr) {
    //===== Write Your Logic Here =====
    for(int i = 0 ; i < n ; i++ ){
        printf("%d",arr[i]);
        if(i < n - 1){
            printf(" ");
        }
    }

}

int main() {
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    displayFromBottom(n, arr);

    free(arr);
    return 0;
}