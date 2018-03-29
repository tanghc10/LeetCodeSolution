class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
    	int col = matrix.size();
    	int row = matrix[0].size();
    	int start = 0;
    	vector<int> result;
    	while(start*2 < row && start*2 < col){
    		int endX = row - start - 1;
    		int endY = col - start - 1;
    		for(int i = start; i <= endX; i++)
    			result.push_back(matrix[start][i]);
    		for(int i = start + 1; i <= endY; i++)
    			result.push_back(matrix[i][endX]);
    		if (start < endX && start < endY){
    			for(int i = endX - 1; i >= start; i--)
    				result.push_back(matrix[endY][i]);
    		}
    		if (start < endX && start < endY - 1){
    			for(int i = endY - 1; i > start; i--)
    				result.push_back(matrix[i][start]);
    		}
    		start++;
    	}
    	return result;
    }
};