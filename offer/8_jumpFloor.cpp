class Solution {
public:
    int jumpFloor(int number) {
        if (number == 0)
        	return 0;
        else if (number == 1)
        	return 1;
        else if (number == 2)
        	return 2;
        int *jumpArray = new int[number + 1];
        jumpArray[1] = 1;
        jumpArray[2] = 2;
        for(int i = 3; i <= number; i++)
        	jumpArray[i] = jumpArray[i - 1] + jumpArray[i - 2];
        return jumpArray[number];
    }
};