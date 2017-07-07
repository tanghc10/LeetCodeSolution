bool containsDuplicate(int* nums, int numsSize) {
    if (numsSize <= 1){
        return false;
    }
    quick_sort(nums, 0, numsSize-1);
    int index = 1;
    for (; index < numsSize; index++){
        if (nums[index] == nums[index-1]){
            return true;
        }
    }
    return false;
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
