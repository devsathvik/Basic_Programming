# include <stdio.h>
# include <math.h>

void hanoi(int disks , char source , char destination , char helper){
    if(disks == 1){
        printf("Move disk 1 from %c to %c\n",source,destination);
    }
    else{
        hanoi(disks - 1 , source , helper , destination);
        printf("Move disk %d from %c to %c\n",disks,source,destination);
        hanoi(disks - 1 , helper , destination , source);
    }
}

int main(){
    int disks;
    scanf("%d",&disks);
    hanoi(disks,'A' , 'C' , 'B' );

    int total_moves = pow(2,disks) - 1;
    printf("Total moves: %d\n",total_moves);
}