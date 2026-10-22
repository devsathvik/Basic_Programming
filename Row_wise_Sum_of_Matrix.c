#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rowWiseSum(int r, int c, int matrix[][100]) {
    //===== Write Your Logic Here =====
    for(int i = 0; i < r; i++){
        int sum = 0;
        for(int j = 0; j < c; j++){
            sum += matrix[i][j];
        }
        printf("%d\n",sum);
    }


}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    static int matrix[100][100];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) scanf("%d", &matrix[i][j]);

    rowWiseSum(r, c, matrix);

    return 0;
}