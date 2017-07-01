/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0, right = numbersSize - 1;
    while(numbers[left] + numbers[right] != target){
        if (numbers[left] + numbers[right] < target){
            left++;
        }else{
            right--;
        }
    }
    int *result = malloc(sizeof(int)*2);
    result[0] = left+1;
    result[1] = right+1;
    *returnSize = 2;
    return result;
}
