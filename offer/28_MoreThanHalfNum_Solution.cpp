class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
    	int length = numbers.size();
    	if (length == 0)
    		return 0;
    	int currentNum = numbers[0];
    	int counter = 1;
    	for(int i = 1; i < length; i++){
    		if (numbers[i] == currentNum)
    			counter++;
    		else{
    			counter--;
    			if (counter == 0){
    				currentNum = numbers[i];
    				counter = 1;
    			}
    		}
    	}
    	counter = 0;
    	for(int i = 0; i < length; i++)
    		if (numbers[i] == currentNum)
    			counter++;
    	if (counter * 2 <= length)
    		return 0;
    	else 
    		return currentNum;
    }
};