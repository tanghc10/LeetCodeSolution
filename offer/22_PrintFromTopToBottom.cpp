/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
    	queue<TreeNode*> nodeQueue;
    	vector<int> result;
    	if (root != NULL){
    		nodeQueue.push(root);
	    	while(!nodeQueue.empty()){
	    		TreeNode* tempNode = nodeQueue.front();
	    		nodeQueue.pop();
	    		result.push_back(tempNode->val);
	    		if (tempNode->left != NULL)
	    			nodeQueue.push(tempNode->left);
	    		if (tempNode->right != NULL)
	    			nodeQueue.push(tempNode->right);
	    	}
    	}
    	return result;
    }
};