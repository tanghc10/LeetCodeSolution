int searchInsert(int* nums, int numsSize, int target) {
    int index = 0;
    while(index < numsSize){
        if (nums[index] >= target){
            break;
        }
        index++;
    }
    return index;
}