#include <stdio.h>

//===== Declare Imports here if required =====
int firstwinner(char g[3][3]){
    for(int i = 0 ; i < 3 ; i++ ){
        if(g[i][0] == g[i][1] && g[i][1] == g[i][2] ) return g[i][0];
    }

    for(int j = 0 ; j < 3 ; j++ ){
        if(g[0][j] == g[1][j] && g[1][j] == g[2][j]) return g[0][j];
    }

    if(g[0][0] == g[1][1] && g[1][1] == g[2][2]) return g[0][0];
    if(g[0][2] == g[1][1] && g[1][1] == g[2][0]) return g[0][2];
    return 0;
}

//===== Declare Global Variables / Functions here if required =====


int main() {
    char grid[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf(" %c", &grid[i][j]);
        }
    }

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    char w = firstwinner(grid);
    if(w == 'O'){
        printf("Abhinav Wins");
    }
    else if(w == 'X'){
        printf("Anjali Wins");
    }
    else{
        printf("Tie");
    }

}