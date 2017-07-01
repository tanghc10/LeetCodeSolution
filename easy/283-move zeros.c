void moveZeros(int* nums,int numsSize){
    int current = 0;
    int next = 0;
    int temp;
    while(nums[next] == 0){
        next++;
    }
    while(next < numsSize){
        temp = nums[current];
        nums[current] = nums[next];
        nums[next] = temp;
        current++;
        next++;
        while(nums[next] == 0 && next < numsSize){
            next++;
        }
    }
}
