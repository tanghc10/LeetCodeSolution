class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
    	int size = data.size();
    	if (size == 0)
    		return ;
    	int result = data[0];
    	for(int i = 1; i < size; i++)
    		result ^= data[i];
    	if (result == 0)
    		return;
    	result = result - (result & (result - 1));
    	vector<int> has1;
    	vector<int> nothas1;
    	for(int i = 0; i < size; i++){
    		if ((data[i] & result) == 0)
    			nothas1.push_back(data[i]);
    		else
    			has1.push_back(data[i]);
    	}
    	size = has1.size();
    	*num1 = 0;
    	for(int i = 0; i < size; i++)
    		*num1 ^= has1[i];

    	size = nothas1.size();
    	*num2 = 0;
    	for(int i = 0; i < size; i++)
    		*num2 ^= nothas1[i];
    	return;
    }
};