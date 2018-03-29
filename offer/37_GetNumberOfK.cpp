class Solution {
public:
    int getFirstK(vector<int> data, int k, int left, int right){
        if (left > right)
            return -1;
        int mid = (left + right) >> 1;
        if (data[mid] == k){
            if (mid == 0 || data[mid - 1] != k)
                return mid;
            right = mid - 1;
        }else if (data[mid] < k){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
        return getFirstK(data, k, left, right);
    }
    int getLastK(vector<int> data, int k, int left, int right){
        if (left > right)
            return -1;
        int mid = (left + right) >> 1;
        if (data[mid] == k){
            if (mid == data.size() - 1 || data[mid + 1] != k)
                return mid;
            left = mid + 1;
        }else if (data[mid] < k){
            left = mid + 1;
        }else {
            right = mid - 1;
        }
        return getLastK(data, k, left, right);
    }
    int GetNumberOfK(vector<int> data ,int k) {
        int size = static_cast<int>(data.size());
        if (size == 0)
            return 0;
        int firstK = getFirstK(data, k, 0, size - 1);
        int lastK = getLastK(data, k, 0, size - 1);
        if (firstK == -1 || lastK == -1)
            return 0;
        return lastK - firstK + 1;
    }
};