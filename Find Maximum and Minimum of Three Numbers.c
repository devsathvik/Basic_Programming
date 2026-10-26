# include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int max = 0;
    int min = 0;

    if(x > y && x > z){
        max = x;
    }
    else if(y > x && y > z){
        max = y;
    }
    else{
        max = z;
    }

     if(x < y && x < z){
        min = x;
    }
    else if(y < x && y < z){
        min = y;
    }
    else{
        min = z;
    }

    
    
    printf("Maximum: %d\nMinimum: %d",max,min);
}