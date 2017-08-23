/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *temp = malloc(sizeof(int) * (numsSize));
    int counter = 0;
    while(counter < numsSize){
        temp[counter] = nums[counter];
        counter++;
    }
    quick_sort(temp, 0, numsSize-1);
    int left = 0;
    int right = numsSize - 1;
    int sum = temp[left] + temp[right];
    while(sum != target){
        if (sum > target){
            right--;
        }else{
            left++;
        }
        sum = temp[left] + temp[right];
    }
    int *result = malloc(sizeof(int) * 2);
    int is_left = 1;
    counter = 0;
    while(counter<numsSize){
        if (nums[counter] == temp[left] && is_left){
            is_left = 0;
            result[0] = counter++;
            continue;
        }else if (nums[counter] == temp[right]){
            result[1] = counter;
        }
        counter++;
    }
    return result;
}

void quick_sort(int s[], int l, int r)
{
    if (l < r)
    {
        int i = l, j = r, x = s[l];
        while (i < j)
        {
            while(i < j && s[j] >= x)
                j--;
            if(i < j)
                s[i++] = s[j];

            while(i < j && s[i] < x)
                i++;
            if(i < j)
                s[j--] = s[i];
        }
        s[i] = x;
        quick_sort(s, l, i - 1);
        quick_sort(s, i + 1, r);
    }
}
