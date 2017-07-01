#include"stdio.h"
int arrayPairSum(int *nums, int numsSize);
void main(void){
    int nums[6] = {4, 2, 5 ,5, 6, 0};
    int result = arrayPairSum(nums, 6);
    printf("%d", result);
    return;
}

int arrayPairSum(int *nums, int numsSize){
    int i, j;
    int result = 0;
    quick_sort(nums, 0, numsSize);
    for(i = 0; i < numsSize; i++){
        printf("%d ", nums[i]);
    }
    for(i = 0; i < numsSize; i = i+2){
        result += nums[i];
    }
    return result;
}

void quick_sort(int *nums, int start, int end){
    int pos;
    if (start < end){
        pos = partition(nums, start, end);
        quick_sort(nums, start, pos-1);
        quick_sort(nums, pos+1, end);
    }
    return;
}

int partition(int *nums, int low, int high){
    int key = nums[low];
    while(low < high){
        while(low < high && nums[high] >= key){
            high--;
        }
        if(low < high){
            nums[low++] = nums[high];
        }
        while(low < high && nums[high] <= key){
            low++;
        }
        if(low < high){
            nums[high--] = nums[low];
        }
    }
    nums[low] = key;
    return low;
}

