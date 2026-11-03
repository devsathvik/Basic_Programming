# include <stdio.h>

int main(){
    int a,b;
    int mat1[10][10],mat2[10][10],mat3[10][10];

    scanf("%d %d",&a,&b);

    for(int i = 0; i < a ; i++){
        for(int j = 0; j < b;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    for(int i = 0; i < a ; i++){
        for(int j = 0; j < b;j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("Sum Matrix:\n");
    for(int i = 0 ; i < a; i++){
        for(int j = 0; j < b; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];

            printf("%d",mat3[i][j]);
            if(j < b - 1){
                printf(" ");
            }
        }
        printf("\n");
    }
}