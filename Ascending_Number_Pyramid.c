#include <stdio.h>

void ascendingPyramid(int rows) {
    //===== Write Your Logic Here =====
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            printf("%d",j);
            if(j < i){
                printf(" ");
            }
        }
        printf("\n");
    }

}

int main() {
    int rows;
    scanf("%d", &rows);
    ascendingPyramid(rows);
    return 0;
}