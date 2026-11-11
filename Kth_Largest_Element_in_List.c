#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char nums_str[100];
    int k;
    fgets(nums_str, sizeof(nums_str), stdin);
    scanf("%d", &k);

    //===== Declare Local Variables / Functions here if required =====
    int nums[100];
    int count = 0;
    int i,j,temp;

    //===== Write Your Logic Here =====
    char *token = strtok(nums_str,",");
    while(token != NULL){
        nums[count++] = atoi(token);
        token = strtok(NULL,",");
    }

    for(int i = 0; i < count - 1; i++ ){
        for(int j = 0 ; j < count - 1 - i; j++ ){
            if(nums[j] < nums[j + 1]){
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    printf("%d",nums[k - 1]);

}