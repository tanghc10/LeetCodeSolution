class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        int size = array.size();
        vector<int> result;
        if (size != 0){
        	int left = 0, right = size - 1;
        	while(array[left] + array[right] != sum && left < right){
        		if (array[left] + array[right] < sum)
        			left++;
        		else
        			right--;
        	}
        	if (array[left] + array[right] == sum){
        		result.push_back(array[left]);
        		result.push_back(array[right]);
        	}
        }
        return result;
    }
};