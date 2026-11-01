# include <stdio.h>
# include <math.h>

int main(){
    int n,p;
    scanf("%d %d",&n,&p);

    long long power = pow(n,p);
    printf("%d^%d = %lld",n,p,power);
}