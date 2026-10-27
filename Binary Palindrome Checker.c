# include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    int binary = 0, rem = 0, place = 1, f = n;
    while(n > 0){
        rem = n % 2;
        binary += rem*place;
        place *= 10;
        n /= 2;
    }

    printf("Binary of %d is %d\n",f,binary);

    int lastdigit, rev = 0, z = binary;

    while(binary > 0){
        lastdigit = binary % 10;
        rev = rev * 10 +  lastdigit;
        binary /= 10;
    }

    if(z == rev){
        printf("It is a palindrome");
    }
    else{
        printf("It is not a palindrome");
    }
}