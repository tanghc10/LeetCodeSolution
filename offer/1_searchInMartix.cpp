class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if (array.size() == 0 || array[0].size() == 0)
            return false;
        int row = array.size();
        int col = array[0].size();
        for (int i = 0, j = col - 1; i < row && j >= 0;){
            if (array[i][j] == target)
                return true;
            else if (array[i][j] < target)
                i++;
            else 
                j--;
        }
        return false;
    }
};