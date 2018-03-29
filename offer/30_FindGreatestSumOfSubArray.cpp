class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
    	int curentSum = 0;
    	int maxResult = -(1<<30);
    	int length = array.size();
    	for(int i = 0; i < length; i++){
    		if (curentSum < 0)
    			curentSum = 0;
    		curentSum += array[i];
    		if (curentSum > maxResult)
    			maxResult = curentSum;
    	}
    	return maxResult;
    }
};