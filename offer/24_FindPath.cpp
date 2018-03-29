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
    void dfs(TreeNode* root, vector<vector<int> >& result, vector<int>& path, int currentVal, int expectNumber){
        if (root == NULL)
            return;
        bool is_leaf = (root->left == NULL) && (root->right == NULL);
        if (currentVal == expectNumber && is_leaf){
        	result.push_back(path);
        	return;
        }
        if (root->left){
        	if (currentVal + root->left->val <= expectNumber){
        		path.push_back(root->left->val);
        		dfs(root->left, result, path, currentVal + root->left->val, expectNumber);
        		path.pop_back();
        	}
        }
        if (root->right){
        	if (currentVal + root->right->val <= expectNumber){
        		path.push_back(root->right->val);
        		dfs(root->right, result, path, currentVal + root->right->val, expectNumber);
        		path.pop_back();
        	}
        }
        return;
    }
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int> > result;
        vector<int> path;
        if (root != NULL){
        	path.push_back(root->val);
			dfs(root, result, path, root->val, expectNumber);
			path.pop_back();
        }
        return result;
    }
};