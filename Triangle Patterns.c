# include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    printf("Increasing Triangle:\n");
    for(int i = 1; i <= n ; i++ ){
        for(int j = 1; j <= i ; j++ ){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    printf("Decreasing Triangle:\n");
    for(int i = n ; i >= 1 ; i-- ){
        for(int j = i ; j >= 1 ; j-- ){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    printf("Number Triangle:\n");
    for(int i = 1; i <= n ; i++ ){
        for(int j = 1; j <= i ; j++ ){
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n");
    printf("Right-Aligned Triangle:\n");
    for(int i = n; i > 1; i-- ){
        for(int j = i - 1 ; j >= 1 ; j-- ){
            printf("  ");
        }
        for(int k = 1; k <= n + 1 - i ; k++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i = 1; i <= n ; i++ ){
        printf("*");
        if(i < n){
            printf(" ");
        }
    }
    printf("\n");
}