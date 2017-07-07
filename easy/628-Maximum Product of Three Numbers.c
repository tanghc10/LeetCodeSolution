int maximumProduct(int* nums, int numsSize) {
    quick_sort(nums, 0, numsSize-1);
    int result = 0;
    if (nums[numsSize-1] < 0 || nums[numsSize-3] > 0){
        if (nums[0]*nums[1] < nums[numsSize-2]*nums[numsSize-3]){
            result = nums[numsSize-1] * nums[numsSize-2] * nums[numsSize-3];
        }else{
            result = nums[numsSize-1] * nums[0] * nums[1];
        }
    }else{
        result = nums[numsSize-1] * nums[0] * nums[1];
    }
    return result;
}

void quick_sort(int s[], int l, int r)
{
    if (l < r)
    {
        //Swap(s[l], s[(l + r) / 2]); //将中间的这个数和第一个数交换 参见注1
        int i = l, j = r, x = s[l];
        while (i < j)
        {
            while(i < j && s[j] >= x) // 从右向左找第一个小于x的数
                j--;
            if(i < j)
                s[i++] = s[j];

            while(i < j && s[i] < x) // 从左向右找第一个大于等于x的数
                i++;
            if(i < j)
                s[j--] = s[i];
        }
        s[i] = x;
        quick_sort(s, l, i - 1); // 递归调用
        quick_sort(s, i + 1, r);
    }
}
