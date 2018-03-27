class Solution {
public:
    int jumpFloorII(int number) {
    	if (number < 3)
    		return number;
    	int *jumpArray = new int[number + 1];
    	jumpArray[0] = 0;
    	jumpArray[1] = 1;
    	jumpArray[2] = 2;
    	for(int i = 3; i <= number; i++){
    		jumpArray[i] = 1;
    		for(int j = 1; j < i; j++){
    			jumpArray[i] += jumpArray[j];
    		}
    	}
    	return jumpArray[number];
    }
};