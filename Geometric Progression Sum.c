# include <stdio.h>
# include <math.h>

int main(){
    int a,r,n;
    scanf("%d %d %d",&a,&r,&n);
    
    if(r > 1){
    long long x = pow(r,n);
    long long sum = (a * (x - 1))/(r - 1);
    printf("GP Sum = %lld",sum);
    }
    else{
        long long sum = a * n;
        printf("GP Sum = %lld",sum);
    } 
}