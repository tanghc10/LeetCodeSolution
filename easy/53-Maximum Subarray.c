int maxSubArray(int* nums, int numsSize) {
    int max = nums[0], sum = 0;
    int cnt = 0;
    while(cnt < numsSize){
        sum += nums[cnt];
        if (sum > max) max = sum;
        if (sum < 0) sum = 0;
        cnt++;
    }
    return max;
}