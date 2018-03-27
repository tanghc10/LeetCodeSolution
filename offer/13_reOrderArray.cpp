class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int> result;
        int size = array.size();
        for(int i = 0; i < size; i++)
        	if (array[i] & 0x1)
        		result.push_back(array[i]);
        for(int i = 0; i < size; i++)
        	if (!(array[i] & 0x1))
        		result.push_back(array[i]);
        array = result;
    }
};