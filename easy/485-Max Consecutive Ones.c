#include"stdio.h"
int findMaxConsecutiveOnes(int *nums, int numsSize);
int main(void){
    int nums[] = {1, 1, 0, 1, 1, 1};
    int result = findMaxConsecutiveOnes(nums, 6);
    printf("%d", result);
}

int findMaxConsecutiveOnes(int *nums, int numsSize){
    int max = 0;
    int counter = 0;
    int temp = 0;
    int flag = 0;
    for (; temp < numsSize; temp++){
        if (nums[temp] == 1){
            if (flag == 0){
                flag = 1;
            }
            counter++;
        }
        if (nums[temp] == 0 && flag){
            max = max > counter? max: counter;
            flag = 0;
            counter = 0;
        }
    }
    if (flag){
        max = max > counter? max: counter;
    }
    return max;
}
