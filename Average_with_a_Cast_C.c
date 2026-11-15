# include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int total = a + b + c;
    printf("%.2f",(float)total/3);
}