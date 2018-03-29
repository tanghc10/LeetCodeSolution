class Solution {
public:
    int Add(int num1, int num2)
    {
    	int temp1 = num1 ^ num2;
    	int temp2 = num1 & num2;
    	while(temp2 != 0){
    		temp2 = temp2 << 1;
    		num1 = temp1; 
    		num2 = temp2;
    		temp1 = num1 ^ num2;
    		temp2 = num1 & num2;
    	}
    	return temp1;
    }
};