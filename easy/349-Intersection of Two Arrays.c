/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int temp = 0;
    int counter = 0;
    while(temp < nums1Size){
        if(isExist(nums1[temp], nums2, nums2Size) == 1){
            nums1[counter++] = nums1[temp];
        }
        temp++;
    }
    temp = 0;
    int i;
    int num = 0;
    int *result = malloc(sizeof(int) * counter);
    while(temp < counter){
        for (i = temp + 1; i < counter; i++){
            if(nums1[temp] == nums1[i]){
                break;
            }
        }
        if(i == counter){
            result[num++] = nums1[temp];
        }
        temp++;
    }
    *returnSize = num;
    return result;
}

int isExist(int target, int *nums, int numsSize){
    int i = 0;
    for(; i < numsSize; i++){
        if (nums[i] == target){
            return 1;
        }
    }
    return 0;
}
