#include <stdio.h>
#include <stdlib.h>

int findInsertIndex(int n, int target, int* nums) {
    //===== Write Your Logic Here =====
    int low = 0 , high = n - 1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return low;
    

}

int main() {
    int n, target;
    scanf("%d %d", &n, &target);
    int* nums = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    printf("%d\n", findInsertIndex(n, target, nums));

    free(nums);
    return 0;
}