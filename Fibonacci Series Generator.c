# include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int b = 0, c = 1, d = 1;

    printf("0");
    while(n > 1){
        printf(" %d",d);
        d = b + c;
        b = c;
        c = d;
        n--;
    }
}