#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int n;
    scanf("%d", &n);

    //===== Declare Local Variables / Functions here if required =====
    int current_num;

    int max_so_far = -1;


    //===== Write Your Logic Here =====
    for(int i = 0 ; i < n ; i++ ){
        scanf("%d",&current_num);

        if(i == 0 || current_num > max_so_far){
            max_so_far = current_num;
        }

        printf("%d\n",max_so_far);
    }

    return 0;

}