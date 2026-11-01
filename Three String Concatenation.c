# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main(){
    char a[301] = "";
    char b[301] = "";
    char c[301] = "";
    char result[903];
    int x = 0,y = 0,z = 0;

    scanf("%300s",a);
    scanf("%300s",b);
    scanf("%300s",c);

    for(int i = 0 ;i < strlen(a) ; i++){
        if(!isalpha(a[i])){
            x = 1;
        }
    }
    for(int i = 0 ;i < strlen(b) ; i++){
        if(!isalpha(b[i])){
            y = 1;
        }
    }
    for(int i = 0 ;i < strlen(c) ; i++){
        if(!isalpha(c[i])){
            z = 1;
        }
    }

    if(x == 0 && y == 0 && z == 0){

    strcpy(result,a);
    strcat(result,b);
    strcat(result,c);
    }

    else if(x == 0 && y == 1 && z == 0){
        strcpy(result,a);
        strcat(result,c);
    }

    printf("Concatenated string: %s",result);


}