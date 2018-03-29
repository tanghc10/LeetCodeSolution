class Solution {
public:
    int GetUglyNumber_Solution(int index) {
    	if (index <= 0)
    		return 0;
    	else if (index == 1)
    		return 1;
    	int *intArray = new int[index + 1];
    	intArray[1] = 1;
    	int current2Index = 1;
    	int current3Index = 1;
    	int current5Index = 1;
    	for(int i = 2; i <= index; i++){
    		if ((intArray[current2Index] * 2 <= intArray[current3Index] * 3) && (intArray[current2Index] * 2 <= intArray[current5Index] * 5)){
    			intArray[i] = intArray[current2Index] * 2;
    			if (intArray[current2Index] * 2 == intArray[current3Index] * 3)
    				current3Index++;
    			if (intArray[current2Index] * 2 == intArray[current5Index] * 5)
    				current5Index++;
    			current2Index++;
    		}else if ((intArray[current3Index] * 3 <= intArray[current2Index] * 2) && (intArray[current3Index] * 3 <= intArray[current5Index] * 5)){
    			intArray[i] = intArray[current3Index] * 3;
    			if (intArray[current3Index] * 3 == intArray[current2Index] * 2)
    				current2Index++;
    			if (intArray[current3Index] * 3 == intArray[current5Index] * 5)
    				current5Index++;
    			current3Index++;
    		}else if ((intArray[current5Index] * 5 <= intArray[current2Index] * 2) && (intArray[current5Index] * 5 <= intArray[current3Index] * 3)){
    			intArray[i] = intArray[current5Index] * 5;
    			if (intArray[current5Index] * 5 == intArray[current2Index] * 2)
    				current2Index++;
    			if (intArray[current5Index] * 5 == intArray[current3Index] * 3)
    				current3Index++;
    			current5Index++;
    		}
    	}
    	return intArray[index];
    }
};