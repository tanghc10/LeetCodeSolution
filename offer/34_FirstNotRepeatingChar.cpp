class Solution {
public:
    int FirstNotRepeatingChar(string str) {
    	int length = str.length();
    	if (length == 0)
    		return -1;
        int *hashMap = new int[256];
        for(int i = 0; i < length; i++)
        	hashMap[str[i]]++;
        for(int i = 0; i < length; i++)
        	if (hashMap[str[i]] == 1)
        		return i;
        return 0;
    }
};