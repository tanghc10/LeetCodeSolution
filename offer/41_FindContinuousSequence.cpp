class Solution {
public:
	int cal(int left, int right){
		return (left + right) * (right - left + 1) / 2;
	}
    vector<vector<int> > FindContinuousSequence(int sum) {
    	vector<vector<int> > result;
    	if (sum <= 2)
    		return result;
        int left = 1;
        int right = 2;
        while(left <= right){
        	int currentVal = cal(left, right);
        	if (currentVal == sum){
        		if (left == right)
        			break;
        		vector<int> temp;
        		for(int i = left; i <= right; i++)
        			temp.push_back(i);
        		result.push_back(temp);
        		if (left + 1 == right)
        			break;
        		left++;
        	}else if (currentVal < sum)
        		right++;
        	else 
        		left++;
        }
        return result;
    }
};