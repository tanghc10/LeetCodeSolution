int minMoves(int* nums, int numsSize) {
    int min = nums[0];
    long sum = 0;
    int counter = 0;
    for (counter; counter < numsSize; counter++){
        if (min > nums[counter]){
            min = nums[counter];
        }
        sum += nums[counter];
    }
    return sum-min*numsSize;
}
