#include"stdio.h"
int *nextGreaterElement(int *findNums, int findNumsSize, int *nums, int numsSize, int *returnSize);
int main(void){
    int findnums[3] = {4, 1, 2};
    int nums[4] = {1, 3, 4, 2};
    int returnSize ;
    nextGreaterElement(findnums, 3, nums, 4, &returnSize);
    return;
}

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *nextGreaterElement(int *findNums, int findNumsSize, int *nums, int numsSize, int *returnSize) {
    *returnSize = findNumsSize;
    int *results = malloc(sizeof(int) * findNumsSize);
    int find, compare;
    int counter_find, counter_compare;
    int flag = 0;
    int getnum = 0;
    for (counter_find = 0; counter_find < findNumsSize; counter_find++){
        flag = 0;
        getnum = 0;
        counter_compare = 0;
        while (counter_compare < numsSize && !flag){
            if (findNums[counter_find] < nums[counter_compare] && getnum > 0){
                results[counter_find] = nums[counter_compare];
                flag = 1;
                break;
            }else if (findNums[counter_find] == nums[counter_compare]){
                getnum = 1;
            }
            counter_compare++;
        }
        if (!flag){
            results[counter_find] = -1;
        }
        printf("%d ", results[counter_find]);
    }
    return results;
}
