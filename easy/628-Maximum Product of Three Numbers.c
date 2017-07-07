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
        //Swap(s[l], s[(l + r) / 2]); //���м��������͵�һ�������� �μ�ע1
        int i = l, j = r, x = s[l];
        while (i < j)
        {
            while(i < j && s[j] >= x) // ���������ҵ�һ��С��x����
                j--;
            if(i < j)
                s[i++] = s[j];

            while(i < j && s[i] < x) // ���������ҵ�һ�����ڵ���x����
                i++;
            if(i < j)
                s[j--] = s[i];
        }
        s[i] = x;
        quick_sort(s, l, i - 1); // �ݹ����
        quick_sort(s, i + 1, r);
    }
}
