class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if (rotateArray.size() == 0)
            return 0;
        int left = 0, right = rotateArray.size() - 1;
        int mid = left;
        while(rotateArray[left] >= rotateArray[right]){
            if (right - left == 1){
                mid = right;
                break;
            }
            mid = (left + right) >> 1;
            if (rotateArray[mid] >= rotateArray[left])
                left = mid;
            else if (rotateArray[mid] <= rotateArray[right])
                right = mid;
        }
        return rotateArray[mid];
    }
};