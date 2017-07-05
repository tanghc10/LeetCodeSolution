#include"stdio.h"
int arrayPairSum(int *nums, int numsSize);
void main(void){
    int nums[6] = {4, 2, 5 ,5, 6, 0};
    int result = arrayPairSum(nums, 6);
    printf("%d", result);
    return;
}

int arrayPairSum(int *nums, int numsSize){
    int i, j;
    int result = 0;
    quick_sort(nums, 0, numsSize-1);
    for(i = 0; i < numsSize; i = i+2){
        result += nums[i];
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

