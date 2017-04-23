#include"stdio.h"
int *findDisappearedNumbers(int *nums, int numsSize, int *returnSize);
int main(void){
    int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int *result = NULL;
    int num_result = 0;
    result = findDisappearedNumbers(nums, 8, &num_result);
    int counter = 0;
    while(counter < num_result){
        printf("%d ", result[counter]);
        counter++;
    }
    return 0;
}

int *findDisappearedNumbers(int *nums, int numsSize, int *returnSize){
    int counter;
    int *result = malloc(sizeof(int)*numsSize);
    int num_result = 0;
    for (counter = 0; counter < numsSize; counter++){
        nums[(nums[counter]-1)%numsSize] += numsSize;
    }
    for (counter = 0; counter < numsSize; counter++){
        if(nums[counter] <= numsSize){
            result[num_result++] = counter+1;
        }
    }
    *returnSize = num_result;
    return result;
}
