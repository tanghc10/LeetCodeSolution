int removeElement(int* nums, int numsSize, int val) {
    if (numsSize == 0){
        return 0;
    }
    int i = 0, j = 0;
    while(i < numsSize){
        if (nums[i] != val){
            nums[j++] = nums[i];
        }
        i++;
    }
    return j;
}