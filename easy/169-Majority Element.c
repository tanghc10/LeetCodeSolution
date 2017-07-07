int majorityElement(int* nums, int numsSize) {
    int index = 0;
    int major = nums[index];
    int counter = 0;
    while(index < numsSize){
        if (major == nums[index]){
            counter++;
        }else if (counter == 0){
            major = nums[index];
        }else{
            counter--;
        }
        index++;
    }
    return major;
}
