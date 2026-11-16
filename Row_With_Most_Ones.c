#include <stdio.h>
#include <stdlib.h>

int rowWithMostOnes(int n, int m, int** grid) {
    //===== Write Your Logic Here =====
    int best = -1;
    int maxones = 0;

    for(int i = 0 ; i < n ; i++ ){
        int count = 0;
        for(int j = 0 ; j < m ; j++ ){
            if(grid[i][j] == 1){
                count++;
            }
        }

        if(count > maxones){
            maxones = count;
            best = i;
        }
    }

    return best;

}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        int** grid = (int**)malloc(n * sizeof(int*));
        for (int i = 0; i < n; i++) {
            grid[i] = (int*)malloc(m * sizeof(int));
            for (int j = 0; j < m; j++) scanf("%d", &grid[i][j]);
        }
        printf("%d\n", rowWithMostOnes(n, m, grid));
        for (int i = 0; i < n; i++) free(grid[i]);
        free(grid);
    }
    return 0;
}