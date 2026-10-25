# include <stdio.h>

int main(){
    int m,x,c;
    scanf("%d %d %d",&m,&x,&c);
    int y = m * x + c;
    printf("For m=%d, x=%d, c=%d: y = %d",m,x,c,y);
}