# include <stdio.h>

int main(){

    int n;

    do{
        scanf("%d",&n);

        if(n == 1234){
            printf("Correct password\n");
        }
        else{
            printf("Incorrect password\n");
        }
    }while(n != 1234);
}