#include"stdio.h"

int singleNum(int *nums, int numsSize);
int main(void){
    int nums[] = {1,2,3,4,5,6,1,3,2,4,6};
    int result = singleNum(nums, 11);
    printf("%d", result);
}

int singleNum(int *nums, int numsSize){
    int result = 0;
    int counter = 0;
    while(counter < numsSize){
        result = result ^ nums[counter];
        counter++;
    }
    return result;
}
