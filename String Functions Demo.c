# include <stdio.h>
# include <string.h>

int main(){
    char a[100];
    char b[100];

    scanf("%99s",a);
    scanf("%99s",b);

    printf("Length of str1: %d\nLength of str2: %d\n",strlen(a),strlen(b));

    char result[201];

    strcpy(result,a);
    strcat(result,b);

    printf("Concatenated: %s\n",result);
    printf("Comparison result: %d",strcmp(a,b));
}