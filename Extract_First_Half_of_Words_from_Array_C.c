# include <stdio.h>

int main(){
    char words[100][100];
    int count = 0;
    while(scanf("%s",words[count]) == 1){
        count++;
    }

    int half_count;
    if(count % 2 == 0){
        half_count = count/2;
    }
    else{
        half_count = (count + 1)/2;
    }

    for(int i = 0; i < half_count; i++){
        printf("%s",words[i]);
        if( i < half_count - 1){
            printf(" ");
        }
    }

}