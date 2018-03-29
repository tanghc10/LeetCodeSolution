class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
    	int length  = sequence.size();
    	if (length == 0)
    		return false;
    	else if (length == 1)
    		return true;
    	int rootVal = sequence[length - 1];
    	// search for left tree
    	vector<int> leftTree;
    	int i = 0;
    	for(; i < length; i++){
    		if (sequence[i] < rootVal)
    			leftTree.push_back(sequence[i]);
    		else
    			break;
    	}
    	bool left = true;
    	if (i > 0)
    		left = VerifySquenceOfBST(leftTree);

    	vector<int> rightTree;
    	for(; i < length; i++){
    		if (sequence[i] < rootVal)
    			return false;
    		else
    			rightTree.push_back(sequence[i]);
    	}
    	bool right = true;
    	if (i < length - 1)
    		right = VerifySquenceOfBST(rightTree);
    	return left && right;
    }
};