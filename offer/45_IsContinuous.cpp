class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
    	int size = numbers.size();
    	if (size != 5)
    		return false;
        sort(numbers.begin(), numbers.end());
        int num_block = 0;
        int num_zero = 0;
        int i = 0;
        while(numbers[i] == 0){
        	num_zero++;
        	i++;
        }
        if (i > 4)
        	return false;
        else if (i == 4)
        	return true;
        int target = numbers[i++] + 1;
        while(i < 5){
        	while(numbers[i] != target){
        		num_block++;
        		target++;
        		if (target > 13)
        			target = 1;
        	}
        	target++;
    		if (target > 13)
    			target = 1;
        	i++;
        }
        if (num_zero >= num_block)
        	return true;
        return false;
    }
};