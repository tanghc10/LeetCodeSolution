class Solution {
public:
    int rectCover(int number) {
   		if (number < 3)
   			return number;
   		int *rectArray = new int[number + 1];
   		rectArray[1] = 1;
   		rectArray[2] = 2;
   		for(int i = 3; i <= number; i++)
   			rectArray[i] = rectArray[i - 1] + rectArray[i - 2];
   		int retVal = rectArray[number];
   		delete[] rectArray;
   		return retVal;
    }
};