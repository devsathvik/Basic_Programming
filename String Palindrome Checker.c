# include <stdio.h>
# include <string.h>

int main(){
    char a[100];
    scanf("%99s",a);
    int x = 0;

    for(int i = 0; i < strlen(a) ; i++ ){
        if(a[i] == a[strlen(a) - i]){
            x++;
        }
    }

    if(x <= 0){
        printf("%s is a palindrome",a);
    }
    else {
        printf("%s is not a palindrome",a);
    }
}