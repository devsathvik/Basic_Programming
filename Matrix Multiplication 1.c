# include <stdio.h>

int main(){
    int a,b,c;
    int mat1[200][200],mat2[200][200],mat3[200][200] = {0};
    scanf("%d %d %d",&a,&b,&c);

    for(int i = 0; i < a;i++){
        for(int j = 0; j < b; j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    for(int i = 0; i < b;i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    for(int i = 0 ; i < a; i++){
        for(int j = 0 ; j < c ; j++){
            for(int k = 0 ; k < b ; k++){
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d",mat3[i][j]);
            if(j < c - 1){
                printf(" ");
            }
        }
        printf("\n");
    }

}


