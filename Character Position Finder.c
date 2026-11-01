# include <stdio.h>
# include <string.h>

int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    char b;
    scanf("%c",&b);
    int pos = -1;

    int len = strlen(a);
    int i;

    for(i = 0; i < len ; i++){
        if(a[i] == b){
            pos = i;
            break;
        }
    }

    if(pos != -1){
        printf("Character '%c' found at position %d",b,i);
    }
    else{
        printf("Character '%c' not found (position -1)",b);
    }
}