# include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int temp = n;
    int remainder;

    if(n == 1){
        printf("1 is a power of 2");
    }
    else{
    while(n > 1){
        remainder = n % 2;
        n /= 2;
    }

    if(remainder == 0){
        printf("%d is a power of 2",temp);
    }
    else{
        printf("%d is not a power of 2",temp);
    }
}
}